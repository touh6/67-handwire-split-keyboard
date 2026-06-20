# 67
<img width="3546" height="2712" alt="full ds" src="https://github.com/user-attachments/assets/b2efd834-352d-49d8-989a-00887ed2a23c"/>
handwired split mechanical keyboard running on qmk firmware consisting of 12 keys 

## about the project:
this is an mp3 player with a 3d printed enclosure that is shaped like a cassette player. the heart of this device is the esp32-wroom microcontroller. other components include a waveshare 4.2'' e-Ink display, tactile buttons, pcm5102a, mt3608 booster, 3.5mm trs jack, microsd module with spi interface, tp4056 charging module, kcd11 spst switch and a 3.7v Li-Po battery. 

i wanted this to be in the shape of a cassette player as i've forever been enamored by retro tech. i absolutely love music; it is an integral part of me and i've always correlated them with my memories. so, this is special to me. 

i have a hard time visualizing certain things so i made a 2d version on canva to understand how i could actually pull this off and once i did, i made a dummy version of the same using cardboard. 

## 2d version:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/ea220eb0-dbf6-4d90-9a71-ae7ea30e55da"></td>
    <td><img src="https://github.com/user-attachments/assets/45cf7ebc-96a3-4762-8125-ba56a491bc2f"></td>
   <td><img src="https://github.com/user-attachments/assets/fb0c0bec-7162-4903-8ff3-7c8b4198e58b"></td>
    <td><img src="https://github.com/user-attachments/assets/8140dca5-5eab-4cba-b41a-06bb3e522a46"></td>
</tr></table>

## cardboard edition:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/08c97ef2-a888-46b2-87be-36573881fa1f"></td>
    <td><img src="https://github.com/user-attachments/assets/c0fa95f3-5423-4dce-ab04-39e5fb3560fb"></td>
   <td><img src="https://github.com/user-attachments/assets/1005ba38-4d8d-4f6c-9d8b-2b68756e2504"></td>
    <td><img src="https://github.com/user-attachments/assets/43cd7004-596a-40c1-bbfb-8f08f7e0644c"></td>
</tr></table>

<table><tr>
  <td><img src="https://github.com/user-attachments/assets/e09ae462-e4af-4d5e-bc98-fb5909f60c8c"></td>
    <td><img src="https://github.com/user-attachments/assets/4440cc71-7deb-49e5-86b9-182a8f0a1e28"></td>
   <td><img src="https://github.com/user-attachments/assets/dc88013b-8672-4dce-802c-d054d54dd53b"></td>
    <td><img src="https://github.com/user-attachments/assets/57dc5c67-5afa-451b-9743-500566573466"></td>
</tr></table>

i was quite happy with how the dummy version turned out. i ended up sticking with the same visuals and designed the whole thing on solidworks.

## to build your own breadplayer: 
firstly, buy all the components as mentioned in the [bill of materials](https://github.com/touh6/breadplayer/tree/main/bill%20of%20materials), use the perfboard and solder them using the wiring diagram/schematic. and then, you will need to 3d print the enclosure { files of which you can find in the [cad folder](https://github.com/touh6/breadplayer/tree/main/cad) }, flash the microcontroller with [firmware](https://github.com/touh6/breadplayer/tree/main/firmware) using VS Code with PlatoformIO and then, assemble it all in the case and you're good to go! :))

## schematic:
<img width="3508" height="2481" alt="v9" src="https://github.com/user-attachments/assets/d84f1860-3aba-4e00-9d75-39b1618e27f8" />
built using kicad

## construction:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/5133af00-e1a4-4d85-8d03-73664748cdc5"></td>
    <td><img src="https://github.com/user-attachments/assets/94fd8153-76ab-4256-9b28-9d3df2d3073e"></td>
</tr></table>

<table><tr>
      <h2 align="center">front & back: </h2>
  <td><img src="https://github.com/user-attachments/assets/94f74a7a-9233-4f35-bd5b-257f94cbc180"></td>
    <td><img src="https://github.com/user-attachments/assets/6900ae5d-6b3a-4307-9d03-2bd27cac8ba0"></td>
</tr></table>

<table><tr>
      <h2 align="center">top view & side view: </h2>
   <td><img src="https://github.com/user-attachments/assets/a825396f-ac19-403b-a847-b15efecff593"></td>
    <td><img src="https://github.com/user-attachments/assets/29b65d99-15a7-41ff-a37f-651889346109"></td>
</tr></table>

## assembled:
<img width="3050" height="2193" alt="full 3" src="https://github.com/user-attachments/assets/8d19b4f1-4afc-43d4-b26d-ab7dc4914096" />

## tools i used:
<ul style="list-style-type:none;">
    <li>schematics: <a href="https://www.kicad.org">kicad</a></li>
    <li>cad: <a href="https://www.solidworks.com">solidworks</a></li>
    <li>zine: <a href="https://www.canva.com">canva</a></li>
</ul>

## bill of materials: 
|name    |quantity  |cost|link|
|--------|----------|----------------|-----|
|1) Arduino Pro Micro| 2|  $9.21     |[link](https://robu.in/product/pro-micro-5v-16m-mini-leonardo-micro-controller-development-board-for-arduino/)|
|2) Diode 1N4148 | 12|  $0.08    |[link](https://www.ktron.in/product/diode-1n4148-th/)|
|3)  28 SWG copper wire | 1|  $0.21  |[link](https://www.electroncomponents.com/copper-wire-enamelled-28-awg-meters)|
|4) Cherry MX Switches| 35|  $15.89   |[link](https://keychron.in/product/cherry-mx-switch-set/)|
|5) Heat Inserts| 25|  $0.94    |[link](https://robu.in/product/m3-x-4-mm-brass-heat-set-knurl-threaded-round-insert-nut-25-pcs/)|
|6) M3 Screws | 10|  $2  |[link](https://rpishop.in/products/phillips-csk-m3)|
|7) TTRS Cable | 1|  $12.19    |[link](https://www.amazon.in/CableCreation-Auxiliary-4-Conductor-Microphone-Compatible/dp/B01K3WY93I)|
|shipping  |        |    $3.17 |    |
|          |      total  |$43.66 |  |  |

as of 21st june 2026


## zine:
<img width="1410" height="2000" alt="breadplayer" src="https://github.com/user-attachments/assets/84f26950-d291-44a7-b3c2-93a6f4361fd9"/>


