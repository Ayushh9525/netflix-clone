// function toggleFAQ() {
//     const faq = document.querySelector(".faq");
//     faq.classList.toggle("active");
//   }

// const faqItems = document.querySelectorAll('.faq');

//     faqItems.forEach(item => {
//       const header = item.querySelector('.faq-header');
//       header.addEventListener('click', () => {
//         item.classList.toggle('active');
//       });
//     });



document.addEventListener("DOMContentLoaded", () => {
  const faqItems = document.querySelectorAll('.faq');

  faqItems.forEach(item => {
    const header = item.querySelector('.faq-header');

    header.addEventListener('click', () => {
      // Close other open FAQs
      faqItems.forEach(faq => {
        if (faq !== item) {
          faq.classList.remove('active');
        }
      });

      // Toggle clicked FAQ
      item.classList.toggle('active');
    });
  });
});
