// Fungsi untuk Toggle Hamburger Menu
const hamburgerMenu = document.getElementById("hamburger-menu");
const navLinks = document.querySelector(".nav-links");

// Event Listener untuk klik pada Hamburger Icon
hamburgerMenu.addEventListener("click", () => {
    navLinks.classList.toggle("active");
});

// Sticky Navbar saat di-scroll
window.addEventListener("scroll", () => {
    const navbar = document.querySelector(".navbar");

    if (window.scrollY > 50) {
        navbar.classList.add("sticky");
    } else {
        navbar.classList.remove("sticky");
    }
});

// Interaksi Hover untuk Footer Icons
const footerIcons = document.querySelectorAll(".footer-icons a");

footerIcons.forEach((icon) => {
    icon.addEventListener("mouseenter", () => {
        icon.style.transform = "scale(1.2)";
        icon.style.transition = "transform 0.3s ease";
    });

    icon.addEventListener("mouseleave", () => {
        icon.style.transform = "scale(1)";
    });
});