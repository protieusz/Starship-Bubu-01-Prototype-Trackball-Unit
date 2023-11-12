# Starship-Bubu-01-Prototype-Trackball-Unit
Solo trackball unit powered by my Omega Supreme all in one PMW3660 sensor trackball, PER56, RP2040 integrated module.

Trackball ball support, encoder support and encoder knob support are all printed from Ariamelon's Kiwano VIK module in her GitHub.  

Nov 11,2023
Upgraded with a janky case. 
https://www.instagram.com/p/CzhdMmdv5LE/?igshid=YzE4YTliZjNlMA==

Uploaded both STEP and STLs for the case.  I already lost a lot of brain cells designing the case.  Currently the case needs to be sandwiched hot glue together or whatever glue you use.  I hot glue just in case shit happens and I have to take apart and fix stuff.  You can modified the STEP files to your likely to make the case more secure.  I am not going to do any more tinkering with this prototype trackball anymore. Do so at your own risk.

As for the trackball support low profile holder, base PER56 encoder part and the ribbed knob please refer to AriaMelon's Kiwano GitHub for her 3DP STL files. https://github.com/Ariamelon/Kiwano/tree/main/3DP 

The trackball/RP2040 module aka the Omega Supreme I use for building the Starship Bubu-01 Prototype is from my OmegaSupreme Rev 1 https://github.com/protieusz/OmegaSupreme 
As always print at your own risk and for some reason when I install my PER56 encoder the footprint doesn't quite fit so I had to snip off the 2 black plastic anchors and bent one of the anchors a bit in order to fit in. Tight fit but it works.  The PER56 encoder was somehow flipped as per Sadek of Fingerpunch.  I don't feel like going back to flip the footprint and re-route again.  
Here is a picture from Sadek's Fingerpunch discord channel show which plastic anchors to snip off. [Fingerpunch](https://discord.com/channels/939959680611020840/1104738004574158968/1171529178949103666)

![Screenshot 2023-11-12 at 12 56 26 AM](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/c0f417d2-73b7-4d1a-9268-1d38a24060ce)



I will upload a build guide soon.

![IMG_0343](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/bb0bad28-7a3d-4b2a-a375-dcb4d4cfe448)
![IMG_0344](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/73e75975-6a15-4f94-925a-a06b8632c00f)
![IMG_0345](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/92c49a82-6ae0-4a49-9a74-3ce011eace38)

Nov 3, 2023
Final product is still being testing and still waiting for PER56 encoder to arrive. Firmware working flawlessly. Once the PER56 final piece arrives, then Starship Bubu-01 Prototype will be fully assembled and ready.
Design gerbers will be made public and since this solo trackball is designed using EasyEDA, Kicad pcb file conversion will be a headache so the pcb file will not be released. However, schematic pdf and BOM will be release. The parts are manually hand solder so if you want to print this pcb, be prepared to advanced soldering skills to solder 0402 size components and lots of wiring soldering. Print and use as your own risk! No support will be provided. Please follow the below licensing if you want to modify, use, etc.  Omega Supreme module BOM and gerber files will be release if its own repository which will be updated later on.
Here is a pic of which plastic anchors to snip off. Picture is courtesy of Sadek's Fingerpunch Discord channel, https://discord.com/channels/939959680611020840/1104738004574158968/1171529178949103666 

![Screenshot 2023-11-12 at 12 56 26 AM](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/4b4bfe99-9f09-4a78-b24d-0c7e0fd82208)

Prototype Test Fit Look:

![IMG_0244](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/e45f69f3-6914-4ab5-884d-85d2a90fbc7c)

Fusion360 Design

![Screenshot 2023-10-26 at 3 34 44 PM](https://github.com/protieusz/Starship-Bubu-01-Prototype-Trackball-Unit/assets/118025702/307f44d4-6c9e-4680-beb1-ba55135bb610)



# License

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/nc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/sa.svg?ref=chooser-v1"></a></p>

You are free to:

Share — copy and redistribute the material in any medium or format

Adapt — remix, transform, and build upon the material

The licensor cannot revoke these freedoms as long as you follow the license terms.
Under the following terms:

Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.

NonCommercial — You may not use the material for commercial purposes.

ShareAlike — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

No additional restrictions — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

Starship Bubu-01 Prototype by ProtieusKeebs is licensed under [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/?ref=chooser-v1)
