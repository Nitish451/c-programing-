const express= require("express");
const app = express();
const path= require("path");

app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "/views"));

app.get("/", (re,res) =>{
    res.send("working");
});

app.get("/ig/:username", (req,res) =>{
    let{username}=req.params;
    const instaData= require ("./data.json");
    
    res.render("instagram.ejs", {data: instadata[username]});
});

app.listen(8080, (req,res) =>{
    console.log("server is listening on port on 8080");
});