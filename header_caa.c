@import url('https://fonts.googleapis.com/css2?family=Bona+Nova+SC:ital,wght@0,400;0,700;1,400&family=Noto+Sans+JP:wght@100..900&family=Playwrite+DK+Loopet:wght@100..400&family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&family=Work+Sans:ital,wght@0,100..900;1,100..900&display=swap');

body{
    --cl--1--: #ffffff;
    --cl--2--: #14171f;
    --cl--3--: #151564;
    --cl--4--: #F7A900;
    --cl--5--: #007BFF;
    --cl--6--: #ECBB4E;

    background: var(--cl--1--);
    font-family: popp;
}

body {
    font-family: 'Poppins', sans-serif;
    margin: 0;
    padding: 0;
}

h1 {
    font-size: 74px;
}

h2{
    font-size: 64px
}

h3{
    font-size: 54px;
}

h4{
    font-size: 44px;
}

h5 {
    font-size: 34px;
}

h6 {
    font-size: 24px;
}

a{
    font-size: 24px;
    font-weight: bold;
}

/* HEADER */

header{
    max-width: 2000px;
    margin: 0 auto;
    padding: 0 15px;


    display: flex;
    width: 100%;
    height: 114px;
    align-items: center;
    justify-content: space-between;
    padding: 0 5%;
    box-sizing: border-box;
}

header ul{
    list-style: none;
    display: flex;
    flex-wrap: wrap ;
}

header ul li{
    padding: 10px 30px;
    position: relative;
}

header ul li a{
    text-decoration: none;
    transition: all 0.3s;
    color: var(--cl--3--);
}

header ul li a:hover{
    color: var(--cl--4--);
}

.dropdown-menu{
    display: none;
}

header ul li:hover .dropdown-menu{

    display: block;
    position: absolute;
    left: 0;
    top: 100%;
    background-color: var(--cl--1--);
}

header ul li:hover .dropdown-menu ul{
    display: block;
    margin: 10px;
}

.dropdown-menu ul li{
    width: 150px;
    padding: 10px;
}

/* END HEADER */