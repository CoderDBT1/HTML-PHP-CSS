<!DOCTYPE html>  
<html>  
<head>  

<meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>MIT ADT IT</title>

    <!-- Font Awesome Icons -->
    <link rel="stylesheet" href="./css/all.css">


    <!-- --------- Owl-Carousel ------------------->
    <link rel="stylesheet" href="./css/owl.carousel.min.css">
    <link rel="stylesheet" href="./css/owl.theme.default.min.css">

    <!-- ------------ AOS Library ------------------------- -->
    <link rel="stylesheet" href="./css/aos.css">

    <!-- Custom Style   -->
    <link rel="stylesheet" href="./css/Style.css">

<meta name="viewport" content="width=device-width, initial-scale=1">  
<style>  
body{  
  font-family: Calibri, Helvetica, sans-serif;  
  background-color: pink;  
}  
.container {  
    padding: 50px;  
  background-color: lightblue;  
}  
  
input[type=text], input[type=password], textarea {  
  width: 100%;  
  padding: 15px;  
  margin: 5px 0 22px 0;  
  display: inline-block;  
  border: none;  
  background: #f1f1f1;  
}  
input[type=text]:focus, input[type=password]:focus {  
  background-color: orange;  
  outline: none;  
}  
/* div {  
            padding: 10px 0;  
         }  */
hr {  
  border: 1px solid #f1f1f1;  
  margin-bottom: 25px;  
}  
.registerbtn {  
  background-color: #4CAF50;  
  color: white;  
  padding: 16px 20px;  
  margin: 8px 0;  
  border: none;  
  cursor: pointer;  
  width: 100%;  
  opacity: 0.9;  
}  
.registerbtn:hover {  
  opacity: 1;  
}  
</style>  
</head>  
<body>  

<!-- NAVIGATION  -->
 <nav class="nav">
        <div class="nav-menu flex-row">
            <img src="./assets/mit-logo.png" style="width: 150px; height: 80px;" href="index.html">
            <div class="toggle-collapse">
                <div class="toggle-icons">
                    <i class="fas fa-bars"></i>
                </div>
            </div>
            <div>
                <ul class="nav-items">
                    <li class="nav-link">
                        <a href="index.html" style="font-family: sans-serif;text-align: left;">HOME</a>
                    </li>
                    <!-- <li class="nav-link">
                        <a href="#">Category</a>
                    </li>
                    <li class="nav-link">
                        <a href="#">Archive</a>
                    </li>
                    <li class="nav-link">
                        <a href="#">Pages</a>
                    </li>
                    <li class="nav-link">
                        <a href="#">Contact Us</a>
                    </li> -->
                </ul>
            </div>
            <div class="social text-gray">
                <a href="#"><i></i></a>
                <a href="#"><i></i></a>
                <a href="#"><i></i></a>
                <a href="#"><i></i></a>
            </div>
        </div>
    </nav>





<form>  
  <div class="container">  
  <center>  <h1> Event Registeration Form</h1> </center>  
  <hr>  
  <label><b> NAME </b></label>   
<input type="text" name="firstname" placeholder= "Enter Name" size="15" required />   
<div>  
<label>   
<b>Select :  
</b></label>   
  
<select>  
<option value="Course"selected disabled>Choose Event</option>  
<option value="Dance">DANCE</option>  
<option value="Persona Fest">PERSONA FEST</option>  
<option value="Sports">SPORTS</option>  
<option value="Music">MUSIC</option>    
</select>  
</div>  
 
<label><b>
<br>   
Phone :  
</b></label>    
<input type="text" name="phone" placeholder="Phone No." size="10"/ required>   

 <label for="email"><b>Email</b></label>  
 <input type="text" placeholder="Enter Email" name="email" required>  
    
    <button type="submit" class="registerbtn">Register</button>    
</form>  
</body>  
</html>  