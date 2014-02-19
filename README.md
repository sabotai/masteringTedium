xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
   ███╗   ███╗ █████╗ ███████╗████████╗███████╗██████╗ ██╗███╗   ██╗ ██████╗   
   ████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║████╗  ██║██╔════╝   
   ██╔████╔██║███████║███████╗   ██║   █████╗  ██████╔╝██║██╔██╗ ██║██║  ███╗  
   ██║╚██╔╝██║██╔══██║╚════██║   ██║   ██╔══╝  ██╔══██╗██║██║╚██╗██║██║   ██║  
   ██║ ╚═╝ ██║██║  ██║███████║   ██║   ███████╗██║  ██║██║██║ ╚████║╚██████╔╝  
   ╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝     
                                                                               
            ████████╗███████╗██████╗ ██╗██╗   ██╗███╗   ███╗
			╚══██╔══╝██╔════╝██╔══██╗██║██║   ██║████╗ ████║
			   ██║   █████╗  ██║  ██║██║██║   ██║██╔████╔██║
			   ██║   ██╔══╝  ██║  ██║██║██║   ██║██║╚██╔╝██║
xxxx           ██║   ███████╗██████╔╝██║╚██████╔╝██║ ╚═╝ ██║               xxxx
xxxxxxxx       ╚═╝   ╚══════╝╚═════╝ ╚═╝ ╚═════╝ ╚═╝     ╚═╝           xxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

	SYNOPSIS::

Mastering Tedium is a text-based allegorical game that uses the regular chore of laundry to juxtapose life’s necessity of action with the futility and impermanence of acting for the rational mind.

This mindset is the product of a life deprived of simple everyday pleasures. Games and media often entertain users through engaging these simple pleasures, despite being often being considered “a waste of time” or “pointless.”


	BACKGROUND::

This project was born out my original brainstorming for a first project for this class (Major Studio 2 at Parsons' MFA Design and Technology program).  No idea seemed good enough or worth executing, so I decided to make a representation of the perceived futility of actions from this perspective.  The concept of tedium draws upon Pessoa's writings on his own mundane experience of life.

	--Excerpt from Fernando Pessoa's The Book of Disquiet--

>"It is said that tedium is a disease of the idle or that it attacks only those who have nothing to do. But 
>this ailment of the soul is in fact more subtle: it attacks people who are predisposed to it and those who 
>work or who pretend they work (which in this case comes down to the same thing) are less apt to be spared 
>than the truly idle.

>Nothing is worse than the contrast between the natural splendour of the inner life, with its natural Indias 
>and its unexplored lands and the squalor (even when it’s not really squalid) of life’s daily routine. And 
>tedium is more oppressive when there’s not the excuse of idleness. The tedium of those who strive hard is 
>the worst of all.

>Tedium is not the disease of being bored because there’s nothing to do, but the more serious disease of 
>feeling that there’s nothing worth doing. This means that the more there is to do, the more tedium one will 
>feel. "

3 Precedents for this project

-	The text-based adventure game is an older genre of games with a closed-caption system in place of graphics and user-input text for completing actions.

-	Francis Alys is a Belgian conceptual artist.  One of his pieces, titled "Sometimes making something leads to nothing" is a video of him pushing a massive block of ice around Mexico City until the ice shrinks to the size of a golf ball and eventually vanishes.  Alys uses this as a theme for many of his pieces. http://www.youtube.com/watch?v=ZedESyQEnMA

-	"Everyday the same dream" is a browser-based game that explores the monotony of daily routine for a common office drone. http://www.molleindustria.org/everydaythesamedream/everydaythesamedream.html


	EXECUTION::

Mastering Tedium was created in C++ and is intended for use in Unix-style terminal emulators.  This decision was driven by a desire for a somewhat tired, uninspiring and underwhelming visual medium of familiarity (text on screen).

The user is presented with a description of their surroundings and/or suggestions for potential actions to enter into the space below. Although the user is initially presented with some illusion of choice in commands, the programming pushes the user along a single path regardless of their wishes.

The game is broken up into the following stages:

-	Home / Laundry Preparation

-	Street / Path to Laundromat

-	The Laundromat

Once the game is completed, the player starts again from the beginning, their actions nullified by time and the social demands of personal hygiene. 
