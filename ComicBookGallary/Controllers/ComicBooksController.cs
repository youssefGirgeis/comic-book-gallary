﻿using System;
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

            /* if(DateTime.Today.DayOfWeek == DayOfWeek.Monday)
             {
                 return new RedirectResult("/");
             }

             return Content("Hello Youssef");*/

            return View();
        }
    }
}