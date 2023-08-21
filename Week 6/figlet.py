import pyfiglet


def create_font(text, font):
    """
    You can add the following font types:
    standard, block, banner, digital, isometric1, script, starwars
    """
    figlet_text = pyfiglet.figlet_format(text, font)
    print(figlet_text)

create_font("It was you who ate my cheesecake!", "starwars")
