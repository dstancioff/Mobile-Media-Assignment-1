Throughout the programming practice assignments in this course we'll be working on various parts of a single application. As the course progresses, we'll code increasingly complex portions of this application with the goal of communicating various topics about Objective-C, tools (Xcode, Interface Builder, Git), application architecture, etc.

## Application Description

The application we create throughout class will be a basic city guide for all of our favorite restaurants in New York. Each student will contribute his or her favorite restaurant along with some various details we'd like to display in the app, and the app we create will list out those restaurants, display their details, and display them on the map.

## Assignment Goal  
    
Using the Interface Builder tool built into Xcode, create a basic view that will be used to display information about a restaurant. This will be the screen the user arrives at after choosing a restaurant.

<!-- more -->

## Prerequisites

* Xcode Installed. ([Setting up Xcode](http://mobilemedia2012.tumblr.com/post/15933637913))
* Pulled the "Assignment 1" assignment to your computer using GitHub for Mac. ([Setting up Git](http://mobilemedia2012.tumblr.com/post/15556165852), [Assignment 1](https://github.com/dstancioff/Mobile-Media-Assignment-1))

## Topics Covered

* Interface Builder
* Static Tables
* Designipling views

## Getting Started

We've set up "Assignment 1" on GitHub for you in order to make it easy for you to quickly get started with a project that is already attached to version control. However, the base code that you'll be downloading for this assignment can easily be made from scratch using the following settings:
![](http://f.cl.ly/items/1T2U2z1D0H1E3R0I2t44/Screen%20Shot%202012-01-12%20at%201.25.10%20AM.png)
![](http://f.cl.ly/items/3v3E3h3s1p0s0J3W0H31/Screen%20Shot%202012-01-12%20at%201.25.37%20AM.png)
![](http://f.cl.ly/items/3601312Q0Z2X1C1z4301/Screen%20Shot%202012-01-12%20at%201.26.16%20AM.png)



## Running the Application
Guess what? We've already got a runnable application, just from the template code in the "Master Detail Application" template we used to create or project. 

* <span class="assignment">Build and run the application<span>

To do this, tap the "Run" button. It should launch the iPhone Simulator and display your app.

<span class="aside">[Aside: What are all these crazy files? See here for more.](http://mobilemedia2012.tumblr.com/post/15933844596)</span>

## Changing a Storyboard
You've just run your first iPhone app! Well, technically Apple's app, but that's semantics. Pretty cool, but the app is kind of useless at this point. Let's add some tasty bits to it by adding our favorite restaurant to the app.

* <span class="assignment">Change the title where it says "Detail" to your favorite restaurant name. Do this for both the table and the detail view.<span>

(Hint: Take a look inside the .storyboard file)

For the rest of the assignment, let's <span class="assignment">set up a restaurant detail</span>. I'll leave the details up to you, but at minimum, add:

* Name
* Address
* Total number of reviews
* A button that says "Tips (12)"

You can find all the tools you need in the bottom right corner of your Xcode window, in the **object library**.
[Reference: Interface Builder Elements](http://mobilemedia2012.tumblr.com/post/15956243331)

![](http://mobilemedia2012.s3.amazonaws.com/Screen%20Shot%202012-01-20%20at%201.13.24%20AM%201-20-2012.png)

Finally, let's add an image to this view. Grab an image from the web that represents the restaurant, and drag the file into your sidebar where the files are located. (You should  tick the box to copy to the destination group's folder, so that the file gets tracked in Git and you can keep track of it).

Now, add an image view from the object library. In the Properties tab of the Utilities sidebar, set the image to the newly added image file. Also, set the content mode so that the image looks correct. (Aspect Fit is usually a good choice)![](http://mobilemedia2012.s3.amazonaws.com/2012-01-20%201:20:2012.png)

Run your application again to see the changes that you made.

Before we move on, it's probably a good idea at this point to commit your work back into Git. This way, if at any point in the future your code stops working, you'll always be able to jump back into it.

<span class="assignment">Commit and push to GitHub.</span>

Go to the GitHub for Mac app, and click to see the details on your repository. On the sidebar you should see history, changes, branches, and settings. Tap "changes" and you should see that your storyboard has changed, a file added for the image, and some changes to your xcodeproject (telling the project that you added the image). Add a short message about the work you did, and tap "commit". 

You'll now see that the changes you made are listed below, in the "Unsynced commits" section. In the upper right corner, tap "Sync Branch" to push your changes up to the GitHub server.

(Tip: next to the commit button is a ![](http://mobilemedia2012.s3.amazonaws.com/Screen%20Shot%202012-01-20%20at%2012.15.59%20AM.png) button. Select it to perform a sync every time you commit)

Now <span class="assignment">we'll add a new view to the app to show the tips.</span>

To make a new view, find the View Controller item in the Object Library, and drag it to the canvas grid. This will create a new view controller in your storyboard. 

<span class="assignment">Add a segue from the tips button to the new view.</span>

To do this, simply right-click on the tips button, then click and drag from the little circle next to "Push" to your new view.

![Linking up a seque](http://mobilemedia2012.s3.amazonaws.com/ScreenShot2012-01-20at1.38.13AM.png)

Great! We now have some of the basic views we'll need for the various class assignments. 

And one last thing, don't forget to <span class="assignment">Commit and Sync with GitHub</span>!

Now it's time to do some actual coding. On to [Part 2](<PLACEHOLDER>)! 
