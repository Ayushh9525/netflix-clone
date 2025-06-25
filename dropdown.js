// function toggleFAQ() {
//     const faq = document.querySelector(".faq");
//     faq.classList.toggle("active");
//   }

const faqItems = document.querySelectorAll('.faq');

    faqItems.forEach(item => {
      const header = item.querySelector('.faq-header');
      header.addEventListener('click', () => {
        item.classList.toggle('active');
      });
    });