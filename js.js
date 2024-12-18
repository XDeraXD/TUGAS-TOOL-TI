function toggleMenu() {
    const toggleMenu = document.querySelector('.toggleMenu');
    const navigation = document.querySelector('.navigation');
    
    toggleMenu.classList.toggle('active');
    navigation.classList.toggle('active');
  }
  //End Navigation
  
  //Swiper Slider 1
  var swiper = new Swiper(".hero", {
    navigation: {
      nextEl: ".hero .swiper-button-next",
      prevEl: ".hero .swiper-button-prev",
    },
    autoplay: {
        delay: 3000, 
        disableOnInteraction: false, 
      },
      
  });