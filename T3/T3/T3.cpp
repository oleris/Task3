// T3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
void Navbar(std::ofstream& file)
{
    std::string title, button1, button2;
    std::cout << "Please enter title name\n";
    std::cin >> title;
    std::cout << "Please enter button1 name\n";
    std::cin >> button1;
    std::cout << "Please enter button2 name\n";
    std::cin >> button2;
    file << "<!DOCTYPE html>\n";
    file << "<html lang=\"en\" xmlns=\"http://www.w3.org/1999/xhtml\">\n";
    file << "<head>\n";
    file << "<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3\" crossorigin=\"anonymous\">\n";
    file << "<meta charset=\"utf-8\" />\n";
    file << "<title>" << title << "</title>\n";
    file << "</head>\n";
    file << "<body>\n";
    file << "<nav class=\"navbar navbar-expand-md navbar-dark fixed-top bg-dark\">\n";
    file << "<button class=\"navbar-toggler\" type=\"button\" data-toggle=\"collapse\" data-target=\"#navbarCollapse\" aria-controls=\"navbarCollapse\" aria-expanded=\"false\" aria-label=\"Toggle navigation\">\n";
    file << "<span class=\"navbar-toggler-icon\">\n</span>\n";
    file << "</button>\n";
    file << "<div class=\"collapse navbar-collapse\" id=\"navbarCollapse\">\n <ul class=\"navbar-nav mr-auto\">\n <li class=\"nav-item active\">\n <a class=\"nav-link\" href=\"#\">\n" << button1 << "<span class=\"sr-only\">\n</span>\n</a>\n </li>\n <li class=\"nav-item\">\n<a class=\"nav-link\" href=\"#\">\n" << button2 << "</a>\n</li>\n</ul>\n</div>\n</nav>\n";
  
}
void Caroseul(std::ofstream& file)
{
    file << "<div id=\"carouselExampleIndicators\" class=\"carousel slide\" data-bs-ride=\"carousel\">\n<div class=\"carousel-indicators\">\n<button type=\"button\" data-bs-target=\"#carouselExampleIndicators\" data-bs-slide-to=\"0\" class=\"active\" aria-current=\"true\" aria-label=\"Slide 1\">\n</button>\n<button type=\"button\" data-bs-target=\"#carouselExampleIndicators\" data-bs-slide-to=\"1\" aria-label=\"Slide 2\">\n</button>\n<button type=\"button\" data-bs-target=\"#carouselExampleIndicators\" data-bs-slide-to=\"2\" aria-label=\"Slide 3\">\n</button>\n</div>\n<div class=\"carousel-inner\">\n<div class=\"carousel-item active\">\n<img src=\"karusel1.jpg\" class=\"d-block w-100\" alt=\"...\">\n</div>\n<div class=\"carousel-item\">\n<img src=\"karusel2.jpg\" class=\"d-block w-100\" alt=\"...\">\n</div>\n<div class=\"carousel-item\">\n<img src=\"karusel3.jpg\" class=\"d-block w-100\" alt=\"...\">\n</div>\n</div>\n<button class=\"carousel-control-prev\" type=\"button\" data-bs-target=\"#carouselExampleIndicators\" data-bs-slide=\"prev\">\n<span class=\"carousel-control-prev-icon\" aria-hidden=\"true\">\n</span>\n<span class=\"visually-hidden\">\nPrevious</span>\n</button>\n<button class=\"carousel-control-next\" type=\"button\" data-bs-target=\"#carouselExampleIndicators\" data-bs-slide=\"next\">\n<span class=\"carousel-control-next-icon\" aria-hidden=\"true\">\n</span>\n<span class=\"visually-hidden\">\nNext</span>\n</button>\n</div>\n";
}
void Gallery(std::ofstream& file)
{
    std::string name;
    std::cout << "Please enter gallery name\n";
    std::cin >> name;
    file << "<div class=\"container marketing\">\n<h2>\n" << name << "</h2>\n<h2>\nFIND YOUR COLOR</h2>\n<div class=\"row\">\n<div class=\"col-lg-4\">\n<img class=\"rounded-circle\" src=\"1.png\" alt=\"Generic placeholder image\" width=\"140\" height=\"140\">\n<h2>\n <span class=\"text-muted\">\n JBL TUNE 120TWS Wireless - Yellow </span>\n </h2>\n<p>\n<a class=\"btn btn-secondary\" href=\"#\" role=\"button\">\n Buy &raquo;</a>\n</p>\n</div>\n<!-- /.col-lg-4 -->\n<div class=\"col-lg-4\">\n<img class=\"rounded-circle\" src=\"2.png\" alt=\"Generic placeholder image\" width=\"140\" height=\"140\">\n<h2>\n <span class=\"text-muted\">\n JBL TUNE 120TWS Wireless - Blue </span>\n </h2>\n<p>\n<a class=\"btn btn-secondary\" href=\"#\" role=\"button\">\n Buy &raquo;</a>\n</p>\n</div>\n<!-- /.col-lg-4 -->\n<div class=\"col-lg-4\">\n<img class=\"rounded-circle\" src=\"3.png\" alt=\"Generic placeholder image\" width=\"140\" height=\"140\">\n<h2>\n<span class=\"text-muted\">\n JBL TUNE 120TWS Wireless - Pink </span>\n </h2>\n<p>\n<a class=\"btn btn-secondary\" href=\"#\" role=\"button\">\n Buy &raquo;</a>\n</p>\n</div>\n</div>\n";
}
void Overview(std::ofstream& file)
{
    file << "<hr class=\"featurette-divider\">\n<div class=\"row featurette\">\n<div class=\"col-md-7\">\n<h2 class=\"featurette-heading\">\nOverview </h2>\n<p class=\"lead\">\nEnjoy complete wireless freedom with the TUNE 120TWS Wireless In-Ear Headphones from JBL. JBL engineered the TUNE 120TWS headphones to playback your favorite audio with 5.8mm drivers and JBL Pure Bass sound technology. Together they help to provide a powerful punch to your portable playlists. Even though the 120TWS earbuds are extremely compact, built-in controls let you manage playback and give you one-button access to Siri or Google Assistant.</p>\n</div>\n<div class=\"col-md-5\">\n<img class=\"featurette-image img-fluid mx-auto\" src=\"Last.jpg\" alt=\"Generic placeholder image\" width=\"1920\" height=\"1080\">\n</div>\n</div>\n<hr class=\"featurette-divider\">\n";
}
void Footer(std::ofstream& file)
{
    std::string footer;
    std::cout << "Please enter footer name\n";
    std::cin >> footer;
    file << " </div>\n<footer class=\"container\">\n<p class=\"float-right\">\n<a href=\"#\">\nBack to top</a>\n</p>\n<p>\n&copy; 2021" << footer << "&middot; contact: <a href=\"#\">\n Facebook </a>\n or email: sharapovaolha@gmail.com </p>\n</footer>\n<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p\" crossorigin=\"anonymous\">\n</script>\n</body>\n</html>\n";
}

void removeFile(bool isNeedToRemove, const std::string& filename)
{
    if (isNeedToRemove)
        remove(filename.c_str());
}

int main()
{
    removeFile(true, "testhtml.html");
	std::ofstream file;
	file.open("testhtml.html", std::ios::app);
	Navbar(file);
	Caroseul(file);
	Gallery(file);
	Overview(file);
	Footer(file);
	file.close();
}

