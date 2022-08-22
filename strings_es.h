/**
 * strings_es.h
 * spanish strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Carlos Isaza
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

const char WM_VERSION_STR[] PROGMEM = "v2.0.11-beta";

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='es'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configurar WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configurar WiFi (Sin escanear)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/powerbutton'  method='get'><button>Botón encendido</button></form><br/>\n", // MENU_POWER_BUTTON
"<form action='/info'    method='get'><button>Información</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Configuración</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Cerrar</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Reiniciar</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Salir</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Borrar</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Actualizar</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

//const char HTTP_PORTAL_ECOFROST[]   PROGMEM = "<div><script>setInterval(function(){var t=new XMLHttpRequest;t.onreadystatechange=function(){4==this.readyState&&200==this.status&&'1'==this.responseText&&(window.location.href='/wifi')},t.open('GET','/powerbutton',!0),t.send()},1e3)</script><style>svg{display:block;width:auto!important;height:auto!important;max-width:100%;max-height:90%;margin:20px auto}.spot{animation:changecolor_button 1.6s infinite;-webkit-animation:changecolor_button 1.6s infinite}@keyframes changecolor_button{0%{fill:#2368fbff!important}50%{fill:#fff}}.ledGreen{animation:changecolor_green .5s infinite;-webkit-animation:changecolor_green .5s infinite}@keyframes changecolor_green{0%{fill:#000!important}50%{fill:#00ff4c}}.ledRed{animation:changecolor_red 3s infinite;-webkit-animation:changecolor_red 3s infinite}@keyframes changecolor_red{0%{fill:#000!important}50%{fill:red}}</style><svg height=195.42914 id=svg828 inkscape:version='0.92.4 (5da689c313, 2019-01-14)'sodipodi:docname=toma_texto_2.svg version=1.1 viewBox='0 0 325.04373 195.42914'width=325.04373 xmlns=http://www.w3.org/2000/svg xmlns:cc=http://creativecommons.org/ns# xmlns:dc=http://purl.org/dc/elements/1.1/ xmlns:inkscape=http://www.inkscape.org/namespaces/inkscape xmlns:rdf=http://www.w3.org/1999/02/22-rdf-syntax-ns# xmlns:sodipodi=http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd xmlns:svg=http://www.w3.org/2000/svg><metadata id=metadata834><rdf:RDF><cc:Work rdf:about=''><dc:format>image/svg+xml</dc:format><dc:type rdf:resource=http://purl.org/dc/dcmitype/StillImage /><dc:title></dc:title></cc:Work></rdf:RDF></metadata><defs id=defs832><inkscape:perspective id=perspective1394 inkscape:persp3d-origin='207.67999 : 489.54666 : 1'inkscape:vp_x='218.48265 : 11.45019 : 0'inkscape:vp_y='999.99998 : 0 : 0'inkscape:vp_z='158.86464 : 0 : 0'sodipodi:type=inkscape:persp3d /></defs><sodipodi:namedview bordercolor=#666666 borderopacity=1 fit-margin-bottom=0 fit-margin-left=0 fit-margin-right=0 fit-margin-top=0 gridtolerance=10 guidetolerance=10 id=namedview830 inkscape:current-layer=layer1 inkscape:cx=157.15606 inkscape:cy=2.5172057 inkscape:pagecheckerboard=true inkscape:pageopacity=0 inkscape:pageshadow=2 inkscape:window-height=1027 inkscape:window-maximized=1 inkscape:window-width=1920 inkscape:window-x=-8 inkscape:window-y=-8 inkscape:zoom=0.90509668 objecttolerance=10 pagecolor=#ffffff showgrid=false /><g id=layer1 style=display:inline inkscape:groupmode=layer inkscape:label='Layer 1'transform=translate(-44.789992,-4.4358829)><g id=g1410 style=fill:none;fill-opacity:1;stroke:#000004;stroke-width:1.46000004;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 inkscape:corner0='nan : nan : 0.25 : 1'inkscape:corner7='nan : nan : nan : 1'inkscape:perspectiveID=#perspective1394 sodipodi:type=inkscape:box3d><path d=''id=path1412 style=fill:#353564;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=6 points=''/><path d=''id=path1422 style=fill:#e9e9ff;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=11 points=''/><path d=''id=path1418 style=fill:#d7d7ff;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=14 points=''/><path d=''id=path1420 style=fill:#afafde;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=13 points=''/><path d=''id=path1414 style=fill:#4d4d9f;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=5 points=''/><path d=''id=path1416 style=fill:#8686bf;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=3 points=''/></g><g id=g1424 style=fill:none;fill-opacity:1;stroke:#000004;stroke-width:1.46000004;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 inkscape:corner0='nan : nan : 0.25 : 1'inkscape:corner7='nan : nan : nan : 1'inkscape:perspectiveID=#perspective1394 sodipodi:type=inkscape:box3d><path d=''id=path1426 style=fill:#353564;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=6 points=''/><path d=''id=path1436 style=fill:#e9e9ff;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=11 points=''/><path d=''id=path1432 style=fill:#d7d7ff;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=14 points=''/><path d=''id=path1434 style=fill:#afafde;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=13 points=''/><path d=''id=path1428 style=fill:#4d4d9f;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=5 points=''/><path d=''id=path1430 style=fill:#8686bf;fill-rule:evenodd;stroke:none;stroke-linejoin:round sodipodi:type=inkscape:box3dside inkscape:box3dsidetype=3 points=''/></g><rect height=3.7288809 id=led_green width=9.3222017 x=123.19126 y=162.5773 class=ledGreen style=fill:#0a0000;fill-opacity:1;stroke:#050000;stroke-width:1.46000004;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><rect height=3.7288809 id=led_red width=9.3222017 x=123.191 y=177.8381 class=ledRed style=display:inline;fill:#0a0000;fill-opacity:1;stroke:#000;stroke-width:1.46000004;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><circle cx=127.89497 cy=157.62039 id=path1626 r=0.33787268 style=fill:#0a0000;fill-opacity:1;stroke:#000;stroke-width:1.12425458;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><path d='m 125.77529,154.21468 a 2.2442355,1.3206462 0 0 1 2.06799,-0.87309 2.2442355,1.3206462 0 0 1 2.12406,0.82515'id=path1631 style=display:inline;fill:#000;fill-opacity:1;stroke:#040000;stroke-width:.89999998;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 sodipodi:type=arc sodipodi:cx=127.88688 sodipodi:cy=154.66199 sodipodi:end=5.8987874 sodipodi:open=true sodipodi:rx=2.2442355 sodipodi:ry=1.3206462 sodipodi:start=3.4871308 /><path d='m 123.8608,151.12868 a 4.3128047,2.53792 0 0 1 3.9741,-1.67784 4.3128047,2.53792 0 0 1 4.08187,1.58572'id=path1631-8 style=display:inline;fill:#000;fill-opacity:1;stroke:#000;stroke-width:1.42999995;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 sodipodi:type=arc sodipodi:cx=127.91869 sodipodi:cy=151.98828 sodipodi:end=5.8987874 sodipodi:open=true sodipodi:rx=4.3128047 sodipodi:ry=2.53792 sodipodi:start=3.4871308 /><path d='M 233.99161,162.79001 A 26.263613,26.263613 0 0 1 207.728,189.05362 26.263613,26.263613 0 0 1 181.46438,162.79001 26.263613,26.263613 0 0 1 207.728,136.5264 26.263613,26.263613 0 0 1 233.99161,162.79001 Z M 208.9638,147.9377 h -2.9776 v 14.8888 h 2.9776 z m 7.19886,3.22354 -2.10686,2.1066 c 2.3376,1.9134 3.84134,4.8092 3.84134,8.06986 0,5.75468 -4.66746,10.42214 -10.42214,10.42214 -5.75468,0 -10.42214,-4.66746 -10.42214,-10.42214 0,-3.26066 1.50374,-6.15646 3.84134,-8.06986 l -2.10686,-2.1066 c -2.87368,2.45646 -4.71234,6.09698 -4.71234,10.17646 0,7.39974 6.00026,13.4 13.4,13.4 7.39974,0 13.4,-6.00026 13.4,-13.4 0,-4.07948 -1.83866,-7.72 -4.71234,-10.17646 z'id=power_button style=display:inline;fill:#2368fb;fill-opacity:1;stroke:#2368fb;stroke-width:1.47277594;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 class=spot inkscape:connector-curvature=0 inkscape:label=#path1664 /><ellipse cx=207.6391 cy=162.99005 id=path1676 rx=35.413651 ry=35.833473 style=display:inline;fill:none;fill-opacity:1;stroke:#2368fb;stroke-width:2.08299994;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><text id=text845 style='font-style:normal;font-variant:normal;font-weight:500;font-stretch:normal;font-size:26.67px;line-height:1.25;font-family:Montserrat;-inkscape-font-specification:'Montserrat Medium';text-align:center;letter-spacing:0;word-spacing:0;text-anchor:middle;fill:#000;fill-opacity:1;stroke:none'x=206.56082 xml:space=preserve y=24.622549><tspan id=tspan843 sodipodi:role=line x=206.56082 y=24.622549>Para comenzar presione</tspan><tspan id=tspan857 sodipodi:role=line x=206.56082 y=57.955883>el botón en el toma por</tspan><tspan id=tspan861 sodipodi:role=line x=206.56082 y=91.289215>3 segundos</tspan></text><flowRoot id=flowRoot847 style='font-style:normal;font-variant:normal;font-weight:500;font-stretch:normal;font-size:26.67px;line-height:1.25;font-family:Montserrat;-inkscape-font-specification:'Montserrat Medium';letter-spacing:0;word-spacing:0;fill:#000;fill-opacity:1;stroke:none'xml:space=preserve><flowRegion id=flowRegion849><rect height=33.698059 id=rect851 width=3.314563 x=311.56894 y=97.542938 /></flowRegion><flowPara id=flowPara853 /></flowRoot></g></svg></div>";
const char HTTP_PORTAL_ECOFROST[]   PROGMEM = "<div><script>setInterval(function(){var t=new XMLHttpRequest;t.onreadystatechange=function(){4==this.readyState&&200==this.status&&'1'==this.responseText&&(window.location.href='/wifi')},t.open('GET','/powerbutton',!0),t.send()},1e3)</script><style>body{font-family:arial}.center{text-align:center}.title{font-size:5vw}.eco-title{background-color:#0c2c64ff;color:#fff}.frost-title{font-family:Arial #000;background-color:#fff;color:#0c2c64ff}svg{display:block;width:auto!important;height:auto!important;max-width:100%;max-height:90%;margin:20px auto}.spot{animation:changecolor_button 1.6s infinite;-webkit-animation:changecolor_button 1.6s infinite}@keyframes changecolor_button{0%{fill:#2368fbff!important}50%{fill:#fff}}.ledGreen{animation:changecolor_green .5s infinite;-webkit-animation:changecolor_green .5s infinite}@keyframes changecolor_green{0%{fill:#000!important}50%{fill:#00ff4c}}.ledRed{animation:changecolor_red 3s infinite;-webkit-animation:changecolor_red 3s infinite}@keyframes changecolor_red{0%{fill:#000!important}50%{fill:red}}</style><div class=center><span class='eco-title title'>ECO<span class=frost-title>FROST</span></span><p>Para comenzar presiona el botón en el toma</div><svg height=73.749947 id=svg828 version=1.1 viewBox='0 0 121.63325 73.749947'width=121.63325 xmlns=http://www.w3.org/2000/svg xmlns:cc=http://creativecommons.org/ns# xmlns:dc=http://purl.org/dc/elements/1.1/ xmlns:rdf=http://www.w3.org/1999/02/22-rdf-syntax-ns# xmlns:svg=http://www.w3.org/2000/svg><metadata id=metadata834><rdf:RDF><cc:Work rdf:about=''><dc:format>image/svg+xml</dc:format><dc:type rdf:resource=http://purl.org/dc/dcmitype/StillImage /></cc:Work></rdf:RDF></metadata><defs id=defs832 /><g id=layer1 style=display:inline transform=translate(-122.461,-126.11508)><rect class=ledGreen height=3.7288809 id=led_green style=fill:#0a0000;fill-opacity:1;stroke:#050000;stroke-width:1.46;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 width=9.3222017 x=123.19126 y=162.5773 /><rect class=ledRed height=3.7288809 id=led_red style=display:inline;fill:#0a0000;fill-opacity:1;stroke:#000;stroke-width:1.46;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 width=9.3222017 x=123.191 y=177.8381 /><circle cx=127.89497 cy=157.62039 id=path1626 r=0.33787268 style=fill:#0a0000;fill-opacity:1;stroke:#000;stroke-width:1.12425;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><path d='m 125.77529,154.21468 a 2.2442355,1.3206462 0 0 1 2.06799,-0.87309 2.2442355,1.3206462 0 0 1 2.12406,0.82515'id=path1631 style=display:inline;fill:#000;fill-opacity:1;stroke:#040000;stroke-width:.9;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><path d='m 123.8608,151.12868 a 4.3128047,2.53792 0 0 1 3.9741,-1.67784 4.3128047,2.53792 0 0 1 4.08187,1.58572'id=path1631-8 style=display:inline;fill:#000;fill-opacity:1;stroke:#000;stroke-width:1.43;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /><path d='M 233.99161,162.79001 A 26.263613,26.263613 0 0 1 207.728,189.05362 26.263613,26.263613 0 0 1 181.46438,162.79001 26.263613,26.263613 0 0 1 207.728,136.5264 26.263613,26.263613 0 0 1 233.99161,162.79001 Z M 208.9638,147.9377 h -2.9776 v 14.8888 h 2.9776 z m 7.19886,3.22354 -2.10686,2.1066 c 2.3376,1.9134 3.84134,4.8092 3.84134,8.06986 0,5.75468 -4.66746,10.42214 -10.42214,10.42214 -5.75468,0 -10.42214,-4.66746 -10.42214,-10.42214 0,-3.26066 1.50374,-6.15646 3.84134,-8.06986 l -2.10686,-2.1066 c -2.87368,2.45646 -4.71234,6.09698 -4.71234,10.17646 0,7.39974 6.00026,13.4 13.4,13.4 7.39974,0 13.4,-6.00026 13.4,-13.4 0,-4.07948 -1.83866,-7.72 -4.71234,-10.17646 z'id=power_button style=display:inline;fill:#2368fb;fill-opacity:1;stroke:#2368fb;stroke-width:1.47278;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 class=spot /><ellipse cx=207.6391 cy=162.99005 id=path1676 rx=35.413651 ry=35.833473 style=display:inline;fill:none;fill-opacity:1;stroke:#2368fb;stroke-width:2.083;stroke-linecap:round;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1 /></g></svg></div>";
// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Contraseña</label><input id='p' name='p' maxlength='64' type='text' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Guardar</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refrescar</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Guardando Credenciales<br/>Conectando ESP a la red.<br />En caso de error intenta de nuevo.<br />Por favor revise el correo: -- para continuar con el registro.</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Guardado<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Borrar Configuración WiFi</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Actualizar</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Atrás</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Conectado</strong> a {v}<br/><em><small>con IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>No conectado</strong> a {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Error de autenticación"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>Red no encontrada";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>No se pudo conectar"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No se ha configurado una red</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Páginas disponibles</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload New Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, Open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update Failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update Successful.  </strong> <br/> Device Rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access Point Hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build Date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "EcoFrost";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Si";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Habilitado";
const char S_disable[]            PROGMEM = "Deshabilitado";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Desconocido";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credenciales guardadas";
const char S_titlewifisettings[]  PROGMEM = "Configuración guardada";
const char S_titlewifi[]          PROGMEM = "Config EcoFrost";
const char S_titleinfo[]          PROGMEM = "Información";
const char S_titleparam[]         PROGMEM = "Configuración";
const char S_titleparamsaved[]    PROGMEM = "Configuración guardada";
const char S_titleexit[]          PROGMEM = "Salir";
const char S_titlereset[]         PROGMEM = "Reeiniciar";
const char S_titleerase[]         PROGMEM = "Borrar";
const char S_titleclose[]         PROGMEM = "Cerrar";
const char S_options[]            PROGMEM = "Opciones";
const char S_nonetworks[]         PROGMEM = "No se encontraron redes. Refresca para escanear de nuevo.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Saliendo";
const char S_resetting[]          PROGMEM = "El dispositivo se reiniciará en unos segundos.";
const char S_closing[]            PROGMEM = "Puede cerrar la página, el portal seguirá funcionando";
const char S_error[]              PROGMEM = "Ha ocurrido un error";
const char S_notfound[]           PROGMEM = "Archivo no encontrado\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 11;
const char * const _menutokens[_nummenutokens] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "update",
    "sep",
    "custom"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase";
const char R_status[]             PROGMEM = "/status";
const char R_update[]             PROGMEM = "/update";
const char R_updatedone[]         PROGMEM = "/u";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_3[]                  PROGMEM = "{3}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_V[]                  PROGMEM = "{V}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",
    "WPA_PSK",
    "WPA2_PSK",
    "WPA_WPA2_PSK",
    "WPA2_ENTERPRISE",
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif


/*
* ESP32 WiFi Events

0  SYSTEM_EVENT_WIFI_READY               < ESP32 WiFi ready
1  SYSTEM_EVENT_SCAN_DONE                < ESP32 finish scanning AP
2  SYSTEM_EVENT_STA_START                < ESP32 station start
3  SYSTEM_EVENT_STA_STOP                 < ESP32 station stop
4  SYSTEM_EVENT_STA_CONNECTED            < ESP32 station connected to AP
5  SYSTEM_EVENT_STA_DISCONNECTED         < ESP32 station disconnected from AP
6  SYSTEM_EVENT_STA_AUTHMODE_CHANGE      < the auth mode of AP connected by ESP32 station changed
7  SYSTEM_EVENT_STA_GOT_IP               < ESP32 station got IP from connected AP
8  SYSTEM_EVENT_STA_LOST_IP              < ESP32 station lost IP and the IP is reset to 0
9  SYSTEM_EVENT_STA_WPS_ER_SUCCESS       < ESP32 station wps succeeds in enrollee mode
10 SYSTEM_EVENT_STA_WPS_ER_FAILED        < ESP32 station wps fails in enrollee mode
11 SYSTEM_EVENT_STA_WPS_ER_TIMEOUT       < ESP32 station wps timeout in enrollee mode
12 SYSTEM_EVENT_STA_WPS_ER_PIN           < ESP32 station wps pin code in enrollee mode
13 SYSTEM_EVENT_AP_START                 < ESP32 soft-AP start
14 SYSTEM_EVENT_AP_STOP                  < ESP32 soft-AP stop
15 SYSTEM_EVENT_AP_STACONNECTED          < a station connected to ESP32 soft-AP
16 SYSTEM_EVENT_AP_STADISCONNECTED       < a station disconnected from ESP32 soft-AP
17 SYSTEM_EVENT_AP_STAIPASSIGNED         < ESP32 soft-AP assign an IP to a connected station
18 SYSTEM_EVENT_AP_PROBEREQRECVED        < Receive probe request packet in soft-AP interface
19 SYSTEM_EVENT_GOT_IP6                  < ESP32 station or ap or ethernet interface v6IP addr is preferred
20 SYSTEM_EVENT_ETH_START                < ESP32 ethernet start
21 SYSTEM_EVENT_ETH_STOP                 < ESP32 ethernet stop
22 SYSTEM_EVENT_ETH_CONNECTED            < ESP32 ethernet phy link up
23 SYSTEM_EVENT_ETH_DISCONNECTED         < ESP32 ethernet phy link down
24 SYSTEM_EVENT_ETH_GOT_IP               < ESP32 ethernet got IP from connected AP
25 SYSTEM_EVENT_MAX


typedef enum {
    ARDUINO_EVENT_WIFI_READY = 0,
    ARDUINO_EVENT_WIFI_SCAN_DONE,
    ARDUINO_EVENT_WIFI_STA_START,
    ARDUINO_EVENT_WIFI_STA_STOP,
    ARDUINO_EVENT_WIFI_STA_CONNECTED,
    ARDUINO_EVENT_WIFI_STA_DISCONNECTED,
    ARDUINO_EVENT_WIFI_STA_AUTHMODE_CHANGE,
    ARDUINO_EVENT_WIFI_STA_GOT_IP,
    ARDUINO_EVENT_WIFI_STA_GOT_IP6,
    ARDUINO_EVENT_WIFI_STA_LOST_IP,
    ARDUINO_EVENT_WIFI_AP_START,
    ARDUINO_EVENT_WIFI_AP_STOP,
    ARDUINO_EVENT_WIFI_AP_STACONNECTED,
    ARDUINO_EVENT_WIFI_AP_STADISCONNECTED,
    ARDUINO_EVENT_WIFI_AP_STAIPASSIGNED,
    ARDUINO_EVENT_WIFI_AP_PROBEREQRECVED,
    ARDUINO_EVENT_WIFI_AP_GOT_IP6,
    ARDUINO_EVENT_WIFI_FTM_REPORT,
    ARDUINO_EVENT_ETH_START,
    ARDUINO_EVENT_ETH_STOP,
    ARDUINO_EVENT_ETH_CONNECTED,
    ARDUINO_EVENT_ETH_DISCONNECTED,
    ARDUINO_EVENT_ETH_GOT_IP,
    ARDUINO_EVENT_ETH_GOT_IP6,
    ARDUINO_EVENT_WPS_ER_SUCCESS,
    ARDUINO_EVENT_WPS_ER_FAILED,
    ARDUINO_EVENT_WPS_ER_TIMEOUT,
    ARDUINO_EVENT_WPS_ER_PIN,
    ARDUINO_EVENT_WPS_ER_PBC_OVERLAP,
    ARDUINO_EVENT_SC_SCAN_DONE,
    ARDUINO_EVENT_SC_FOUND_CHANNEL,
    ARDUINO_EVENT_SC_GOT_SSID_PSWD,
    ARDUINO_EVENT_SC_SEND_ACK_DONE,
    ARDUINO_EVENT_PROV_INIT,
    ARDUINO_EVENT_PROV_DEINIT,
    ARDUINO_EVENT_PROV_START,
    ARDUINO_EVENT_PROV_END,
    ARDUINO_EVENT_PROV_CRED_RECV,
    ARDUINO_EVENT_PROV_CRED_FAIL,
    ARDUINO_EVENT_PROV_CRED_SUCCESS,
    ARDUINO_EVENT_MAX
} arduino_event_id_t;

typedef union {
    wifi_event_sta_scan_done_t wifi_scan_done;
    wifi_event_sta_authmode_change_t wifi_sta_authmode_change;
    wifi_event_sta_connected_t wifi_sta_connected;
    wifi_event_sta_disconnected_t wifi_sta_disconnected;
    wifi_event_sta_wps_er_pin_t wps_er_pin;
    wifi_event_sta_wps_fail_reason_t wps_fail_reason;
    wifi_event_ap_probe_req_rx_t wifi_ap_probereqrecved;
    wifi_event_ap_staconnected_t wifi_ap_staconnected;
    wifi_event_ap_stadisconnected_t wifi_ap_stadisconnected;
    wifi_event_ftm_report_t wifi_ftm_report;
    ip_event_ap_staipassigned_t wifi_ap_staipassigned;
    ip_event_got_ip_t got_ip;
    ip_event_got_ip6_t got_ip6;
    smartconfig_event_got_ssid_pswd_t sc_got_ssid_pswd;
    esp_eth_handle_t eth_connected;
    wifi_sta_config_t prov_cred_recv;
    wifi_prov_sta_fail_reason_t prov_fail_reason;
} arduino_event_info_t;

*/
#endif
