/* user and group to drop privileges to */
static const char *user  = "najib";
static const char *group = "najib";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* lock screen opacity */
static const float alpha = 0.8;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "sans-serif:size:pixelsize=24:antialias=true:autohint=true";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
