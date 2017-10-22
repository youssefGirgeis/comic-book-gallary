using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace ComicBookGallary.Controllers
{
    public class ComicBooksController : Controller
    {

        public ActionResult Detail()
        {

            if(DateTime.Today.DayOfWeek == DayOfWeek.Sunday)
            {
                return new RedirectResult("/");
            }

            return new ContentResult()
            {
                Content = "Hello Youssef here!"
            };
        }
    }
}