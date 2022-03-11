#define RES_WIFI_HTML "<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'><title>Configuration Wizard</title><meta name='viewport' content='width=device-width,user-scalable=no'><link rel='stylesheet' type='text/css' href='css/main.css'><script type='text/javascript' charset='utf-8' src='js/env.js'></script><script type='text/javascript' charset='utf-8' src='js/ajax.js'></script><script type='text/javascript' charset='utf-8' src='js/app.js'></script></head><body onload='WifiConfig.init()'><div style='width:100%;margin-left:-10px'><div class='layout-outter'><div class='layout-contents'><div><div class='step curr'><a href='wifi'>Wifi</a></div><div class='step-arrow'>▷</div><div class='step'>Time</div><div class='step-arrow'>▷</div><div class='step'>Mqtt</div><div class='step-arrow'>▷</div><div class='step'>Options</div><div class='step-arrow'>▷</div><div class='step'>Finish</div></div><h2>Wifi Access</h2><div id='wifi-list'></div><br><div class='form'><div class='form'><span class='label'>SSID:</span><input type='text' id='wifi-ssid'></div><div class='form'><span class='label'>Password:</span><input type='text' id='wifi-passwd'></div><div class='result'></div><div class='layout-outter' style='margin-top:50px'><button id='btn-commit' style='width:49%'>Submit</button> <button id='btn-next' style='width:49%'>Next</button></div><br><br><br><div class='layout-loading' id='wifi-loading'><div id='text-loading'>Loading...</div></div></div></div></div></div></body></html>"
#define RES_TIME_HTML "<!DOCTYPE html><html lang='en'><meta name='viewport' content='width=device-width,user-scalable=no'><link rel='stylesheet' type='text/css' href='css/main.css'><script type='text/javascript' charset='utf-8' src='js/ajax.js'></script><script type='text/javascript' charset='utf-8' src='js/env.js'></script><script type='text/javascript' charset='utf-8' src='js/app.js'></script><head><meta charset='UTF-8'><title>Configuration Wizard</title></head><body onload='TimeConfig.init()'><div class='layout-outter'><div class='layout-contents'><div style='width:100%;margin-left:-10px'><div class='step comp'><a href='wifi'>Wifi</a></div><div class='step-arrow comp'>▶</div><div class='step curr'><a href='time'>Time</a></div><div class='step-arrow'>▷</div><div class='step'>Mqtt</div><div class='step-arrow'>▷</div><div class='step'>Options</div><div class='step-arrow'>▷</div><div class='step'>Finish</div></div><h2>Time setting</h2><div class='form'><span class='label'>NTP Server:</span><input type='text' id='input-ntp' maxlength='64'></div><div class='form'><span class='label'>Interval:</span><input type='number' id='input-interval'><sub>min</sub></div><div class='form'><span class='label'>Time zone:</span><select id='select-utc'></select></div><div class='form' id='block-timeoffset' style='display:none'><span class='label'>Time offset:</span><input type='number' id='input-manually-utc'><sub>sec</sub></div><div id='settime-result' class='result'></div><div class='layout-outter' style='margin-top:50px'><button id='btn-commit' style='width:49%'>Submit</button> <button id='btn-next' style='width:49%'>Next</button></div></div></div><div class='layout-loading' id='wifi-loading'><div id='text-loading'>Loading...</div></div></body></html>"
#define RES_MQTT_HTML "<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'><meta name='viewport' content='width=device-width,user-scalable=no'><link rel='stylesheet' type='text/css' href='css/main.css'><script type='text/javascript' charset='utf-8' src='js/env.js'></script><script type='text/javascript' charset='utf-8' src='js/ajax.js'></script><script type='text/javascript' charset='utf-8' src='js/app.js'></script><title>Configuration Wizard</title></head><body onload='MqttConfig.init()'><div class='layout-outter'><div class='layout-contents'><div style='width:100%;margin-left:-10px'><div class='step comp'><a href='wifi'>Wifi</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='time'>Time</a></div><div class='step-arrow comp'>▶</div><div class='step curr'>Mqtt</div><div class='step-arrow'>▷</div><div class='step'>Options</div><div class='step-arrow'>▷</div><div class='step'>Finish</div></div><h2>MQTT Connection</h2><div class='form'><span class='label'>Address: </span><input type='text' id='input-mqtt-addr'></div><div class='form'><span class='label'>Port: </span><input type='number' id='input-mqtt-port'></div><div class='form'><span class='label'>ClientID: </span><input type='text' id='input-mqtt-clientid'></div><div class='form'><span class='label'>User: </span><input type='text' id='input-mqtt-user'></div><div class='form'><span class='label'>Password: </span><input type='password' id='input-mqtt-pass'></div><div id='setmqtt-result' class='result'></div><div class='layout-outter' style='margin-top:50px'><button id='btn-commit' style='width:49%'>Submit</button> <button id='btn-next' style='width:49%'>Next</button></div><br><br><br><div class='layout-loading' id='wifi-loading'><div id='text-loading'>Loading...</div></div></div></div></body></html>"
#define RES_OPTION_HTML "<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'><meta name='viewport' content='width=device-width,user-scalable=no'><link rel='stylesheet' type='text/css' href='css/main.css'><script type='text/javascript' charset='utf-8' src='js/env.js'></script><script type='text/javascript' charset='utf-8' src='js/ajax.js'></script><script type='text/javascript' charset='utf-8' src='js/app.js'></script><title>Configuration Wizard</title></head><body onload='OptionConfig.init()'><div class='layout-outter'><div class='layout-contents'><div style='width:100%;margin-left:-10px'><div class='step comp'><a href='wifi'>Wifi</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='time'>Time</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='mqtt'>Mqtt</a></div><div class='step-arrow comp'>▶</div><div class='step curr'>Options</div><div class='step-arrow'>▷</div><div class='step'>Finish</div></div><h2>Options</h2><div id='options'></div><div class='result'></div><div class='layout-outter' style='margin-top:50px'><button id='btn-commit' style='width:49%'>Submit</button> <button id='btn-next' style='width:49%'>Next</button></div><br><br><br><div class='layout-loading' id='wifi-loading'><div id='text-loading'>Loading...</div></div></div></div></body></html>"
#define RES_FINISH_HTML "<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'><meta name='viewport' content='width=device-width,user-scalable=no'><link rel='stylesheet' type='text/css' href='css/main.css'><title>Configuration Wizard</title></head><body onload='FinishView.init()'><div class='layout-outter'><div class='layout-contents'><div style='width:100%;margin-left:-10px'><div class='step comp'><a href='wifi'>Wifi</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='time'>Time</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='mqtt'>Mqtt</a></div><div class='step-arrow comp'>▶</div><div class='step comp'><a href='option'>Options</a></div><div class='step-arrow comp'>▶</div><div class='step curr'>Finish</div></div><h2>Configuration Complete</h2><div><div id='config-info'><div class='info-line'><div class='config-name'>.<span class='config-value'>.</span></div></div></div><div id='setmqtt-result' class='result'></div><div class='layout-outter' style='margin-top:50px'><button id='btn-commit' style='width:49%'>OK</button> <button id='btn-next' style='width:49%;display:none'>Next</button></div><div class='layout-loading' id='wifi-loading'><div id='text-loading'>Loading...</div></div></div></div></div></body><script type='text/javascript' charset='utf-8' src='js/env.js'></script><script type='text/javascript' charset='utf-8' src='js/ajax.js'></script><script type='text/javascript' charset='utf-8' src='js/app.js'></script></html>"
#define RES_MAIN_CSS "html, body { font-family: Dotum, 'droid sans fallback', 'AppleGothic', sans-serif; font-size: 12pt; width: 100%; height: 100%; margin: 0; color: #333; } h2 { margin-left: -10px; font-weight: 900; color: #555; margin-top: 10px; font-size: 30pt; } a { text-decoration: none; color: #fff;} a:visited { text-decoration: none; } a:hover { text-decoration: none; } a:focus { text-decoration: none; } a:hover, a:active { text-decoration: none; } input { border-radius: 5px; border: 1px solid #aaa; height: 24px; width: 143px; padding: 0 8px 0 8px; } select { height: 28px; border-radius: 5px; border: 1px solid #aaa; padding: 0 3px 0 3px; min-width: 160px; } button { border-radius: 5px; border: 1px solid #aaa; background-color: #eee; width: 150px; height: 30px; cursor: pointer; } button:disabled,:hover:disabled { background-color: #f3f3f3; color: #ccc; border: 1px solid #ccc; } button:hover { background-color: #bbb; } .layout-outter { width: 100%; text-align: center; } .layout-contents { width: 100%; max-width: 320px; text-align: left; display: inline-block; margin-top: 10px; } .form { margin: 10px 0 0 0; clear: both; } .label { width: 90px; text-align: right; margin: 5px 5px 0 0; display: inline-block; } .label-option-name { font-size: 10pt; font-weight: bold; display: inline-block; text-align: right; margin: 0px 5px 0 0; } .sig-1 { background: red; } .sig-2 { background: #ffb700; } .sig-3 { background: #1dd900; } .sig-4 { background: #00a2ff; } .sig-0 { background: #cfcfcf; } .layout-loading { position: fixed; left: 0; top: 0; width: 100%; height: 100%; opacity: .5; background: #222 } #text-loading { position: fixed; width: 100%; text-align: center; top: 45%; font-size: 32pt; color: white } .result { margin: 30px 10px 10px 10px; font-weight: bold; } .result.success { color: #33aa00; } .error-msg { color: #ff4411; font-size: 10pt; word-break:break-all; } .result.fail { color: #ff4411; } .wifi-item { height: 35px; width: 100%; border-bottom: 1px #ccc solid; border-right: 1px #ccc solid; border-left: 1px #ccc solid; padding-top: 10px; position: relative; } .wifi-item.top { border-radius: 5px 5px 0 0; border-top: 1px #ccc solid; } .wifi-item.bottom { border-radius: 0 0 5px 5px; } .wifi-item.select { background: #ddd } .wifi-rssi { width: 50px; font-size: 7pt; font-weight: bold; position: relative; display: inline; } .wifi-ssid { font-size: 10pt; display: inline-block; font-weight: bold } .wifi-type { margin-left: 8px; display: inline-block; font-size: 8pt; color: gray } .item-text { position: absolute; left: 45px; } .signal-strength { height: 20px; width: 50px; position: absolute; left: -30px; top: -10px; overflow: hidden; } .signal-strength li { display: inline-block; width: 5px; float: left; height: 100%; margin-right: 1px; } .signal-strength li.pretty-strong { padding-top: 0px; } .signal-strength li.strong { padding-top: 5px; } .signal-strength li.weak { padding-top: 10px; } .signal-strength li.very-weak { padding-top: 15px; } .signal-strength li div { height: 100%; } .step { float: left; padding: 5px 8px 5px 8px; height: 15px; margin: 2px 2px 10px 2px; font-size: 10pt; text-align: center; border-radius: 3px; color: #777; font-weight: bold; background-color: #f0f0f0; cursor: pointer; } .step.comp { text-decoration: underline; color: #fff; /*background-color: #62AEB2;*/ background-color: #4aa8d8; } .step.curr { color: #fff; /*background-color: teal;*/ background-color: #0067a3; } .step-arrow { float: left; font-size: 8pt; margin-top: 10px; color: #aaa; } .step-arrow.comp { color: #72b6d8; font-weight: bold; } .info-line { margin: 0 0 5px 0; } .config-name{ font-weight: bold; font-size: 10pt; display: inline-block; color: #666; } .config-value { display: inline-block; margin: 0 0 0 5px; font-size: 10pt; font-weight: bold; }"
#define RES_ENV_JS "let DEV_URL = ''"
#define RES_APP_JS "class p{constructor(){this.eleResult,this.eleBtnNext,this.eleBtnCommit}initCommonEles=()=>{this.eleResult=document.getElementsByClassName(\"result\")[0],this.eleBtnNext=document.getElementById(\"btn-next\"),this.eleBtnCommit=document.getElementById(\"btn-commit\"),this.eleBtnNext.disabled=!0};setCommitButtonClickEvent(t){this.eleBtnCommit.addEventListener(\"click\",e=>{t(e)})}setNextButtonClickEvent(t){this.eleBtnNext.addEventListener(\"click\",e=>{t(e)})}showResult=(e,t)=>{this.eleResult.innerHTML=t,this.eleResult.className=(this.eleResult.className+\"\").replace(/(fail)|(success)/gi,\"\"),this.eleResult.className+=e?\" success\":\" fail\",this.eleBtnNext.disabled=!e};hideLoading(){document.getElementsByClassName(\"layout-loading\")[0].style.display=\"none\"}showLoading(){console.log(document.getElementsByClassName(\"layout-loading\")[0]),this.changeLoadingMessage(\"Loading...\",!1),document.getElementById(\"wifi-loading\"),document.getElementById(\"wifi-loading\").style.display=\"block\"}changeLoadingMessage(e,t){var n=document.getElementById(\"text-loading\");n.style.color=t?\"red\":\"white\",n.innerHTML=`<div>${e}</div>`}showConnectionError(){var e=\"Unable to connect to the selected wifi or check your wifi connection.\";alert(e),this.showResult(!1,e)}}class g{static _retry=0;static MAX_RETRY=3;static scanWifi(t){this._retry=0;let n=[],i;ajax({url:DEV_URL+\"/api/wifi/scan/count\",complete:function(e){i=e.data.count,g._readWifiItem(i,0,n,t)},error:function(e){console.log(e),this._retry>=MAX_RETRY?t(!1,void 0,e):(++this._retry,g.scanWifi(t))}})}static _readWifiItem(i,s,o,a){ajax({url:DEV_URL+\"/api/wifi/scan/item?count=\"+s,complete:function(t){if(i<=++s)a(!0,o);else{let e=!1;for(var n of o)n.ssid==t.data.ssid&&(e=!0);e||o.push(t.data),g._readWifiItem(i,s,o,a)}},error:function(e){console.log(e),this._retry>MAX_RETRY?a(!1,void 0,e):(++this._retry,g.scanWifi(a))}})}static connectWifi(e,t,n){ajax({type:\"POST\",url:DEV_URL+\"/api/wifi/connect\",data:{ssid:e||\"\",password:t||\"\"},complete:function(e){n(e.data.success,e.data,void 0)},error:function(e){console.error(e),n(!1,void 0,e)}})}static getTimeConfig(t){ajax({url:DEV_URL+\"/api/ntp/info\",complete:function(e){t(e.data.success,e.data,void 0)},error:function(e){console.error(e),t(!1,void 0,e)}})}static setTimeConfig(e,t,n,i){ajax({url:DEV_URL+\"/api/ntp/set\",type:\"POST\",data:{ntp:e,interval:t,offset:n},complete:function(e){e=e.data;i(e.success,e)},error:function(e){console.error(e),i(!1,void 0,e)}})}static getMqttConfig(t){ajax({type:\"GET\",url:DEV_URL+\"/api/mqtt/info\",complete:function(e){t(!0,e.data,void 0)},error:function(e){t(!1,void 0,e)}})}static setMqttConfig(e,t,n,i,s,o){ajax({type:\"POST\",data:{url:e,port:t,mid:n,muser:i,mpass:s},url:DEV_URL+\"/api/mqtt/connect\",complete:function(e){o(e.data.success,e.data,void 0)},error:function(e){o(!1,void 0,e)}})}static getOptionList(t){let n=[];ajax({type:\"GET\",url:DEV_URL+\"/api/option/count\",complete:function(e){e=e.data.cnt;0!=e?g._loadOption(e,e,n,t):t(!0,n,void 0)},error:function(e){console.error(e),t(!1,void 0,e)}})}static _loadOption(t,n,i,s){ajax({type:\"GET\",url:DEV_URL+\"/api/option/get\",complete:function(e){i.push(e.data),0<--n?g._loadOption(t,n,i,s):s(!0,i,void 0)},error:function(e){console.error(e),loadOptionCount(s)}})}static updateOption(e,t,n){ajax({type:\"POST\",data:{name:e,value:t},url:DEV_URL+\"/api/option/set\",complete:function(e){e.data.success?n(!0,\"\"):(console.log(e.data.msg),n(!1,e.data.msg))},error:function(e){console.error(e),n(!0,void 0,e)}})}static getDeviceInfo(t){ajax({type:\"GET\",url:DEV_URL+\"/api/info\",complete:function(e){console.log(e.data),t(!0,e.data,void 0)},error:function(e){t(!1,void 0,e)}})}static commit(t){ajax({type:\"GET\",url:DEV_URL+\"/api/commit\",complete:function(e){t(e.data.success,e.data,void 0)},error:function(e){t(!1,void 0,e)}})}}let WifiConfig=new function(){let o=[],a={},s=new p,t=-1,i=60;function l(e){let n=document.getElementsByClassName(\"wifi-item\");for(let e=0,t=n.length-1;e<=t;++e)n.item(e).className=\"wifi-item \"+(e==t?\"bottom\":0==e?\"top\":\"\");let t=e.target;for(;!t.className.includes(\"wifi-item\");)if((t=t.parentNode).className.includes(\"wifi-list\"))return;a=o[t.id.replace(\"wifi-item\",\"\")];let i=document.getElementById(\"wifi-passwd\"),s=document.getElementById(\"wifi-ssid\");s.value=a.ssid,i.value=\"\",\"None\"==a.type||\"Auto\"==a.type?i.disabled=!0:i.disabled=!1,t.className+=\" select\"}function c(){-1<t&&(clearInterval(t),t=-1),s.changeLoadingMessage(\"Loading...\")}this.init=()=>{s.initCommonEles(),s.setCommitButtonClickEvent(()=>{{s.showLoading(),-1<t&&clearInterval(t),i=60,t=setInterval(()=>{s.changeLoadingMessage(`Connecting...  <span style=\"font-size: 15pt\">( ${--i} )</span>`),i<1&&(s.changeLoadingMessage('Connecting...<span style=\"font-size: 15pt\">( pending )</span>'),c())},1090);let n=document.getElementById(\"wifi-ssid\"),e=document.getElementById(\"wifi-passwd\");return void g.connectWifi(n.value,e.value,(e,t)=>{t?(c(),s.hideLoading(),1==e?s.showResult(!0,`Ok. Connected. (${t.ip})`):s.showResult(!1,\"Unable to connect to the selected wifi.\")):setTimeout(()=>{g.getDeviceInfo((e,t)=>{c(),s.hideLoading(),e&&t.ssid==n.value?s.showResult(!0,`Ok. Connected. (${t.ip})`):s.showResult(!1,\"Unable to connect to the selected wifi or check your wifi connection.\")})},3e3)})}}),s.setNextButtonClickEvent(()=>{location.href=\"time\"}),s.showLoading(),o=[],g.scanWifi((e,t)=>{if(e){s.hideLoading(),o=t;{var i=o;let e=document.getElementById(\"wifi-list\"),n=\"\";for(let e=0,t=i.length-1;e<=t;++e)n+=`<div id=\"wifi-item${e}\" class=\"wifi-item ${e==t?\"bottom\":0==e?\"top\":\"\"}\"><div class=\"wifi-rssi\" >`+function(e){e=function(e,t,n,i,s){return Math.round((e-t)*(s-i)/(n-t)+i)}(e=-65<e?-65:e<-95?-95:e,-95,-65,0,4);return`<ul class=\"signal-strength\"><li class=\"very-weak\"><div class=\"${0<e?\"sig-\"+e:\"sig-0\"}\" ></div></li><li class=\"weak\"><div class=\"${1<e?\"sig-\"+e:\"sig-0\"}\" ></div></li><li class=\"strong\"><div class=\"${2<e?\"sig-\"+e:\"sig-0\"}\"></div></li><li class=\"pretty-strong\"><div class=\"${3<e?\"sig-\"+e:\"sig-0\"}\"></div></li></ul>`}(i[e].rssi)+'</div><div class=\"item-text\"><div class=\"wifi-ssid\">'+i[e].ssid+'</div><div class=\"wifi-type\">('+i[e].type+\")</div></div></div>\";e.innerHTML=n;let t=document.getElementsByClassName(\"wifi-item\");for(let e=0;e<t.length;++e)t.item(e).addEventListener(\"click\",l,!1)}}else s.changeLoadingMessage(\"Check your device wifi connection.\",!1)})}},TimeConfig=new function(){let s={},o,a,l,c,t,i,d=new p,u;function n(e){e=e.target.value;t.style=\"manually\"==e?\"display: \":\"display: none\"}function r(){g.getTimeConfig((t,n,i)=>{n?(d.hideLoading(),s=n,console.log(\"--\"),console.log(s.ntp),o.value=s.ntp,a.value=s.interval,(n=s.offset)%3600!=0?(l.value=\"manually\",c.value=n):(l.value=n,c.value=0)):(404==e.status&&d.showConnectionError(),r())})}function m(){u.setSeconds(u.getSeconds()+1);var e=u.getHours(),t=u.getMinutes(),n=u.getSeconds();d.eleResult.innerHTML=`Success - ${e<10?\"0\":\"\"}${e}:${t<10?\"0\":\"\"}${t}:`+(n<10?\"0\":\"\")+n}this.init=()=>{o=document.getElementById(\"input-ntp\"),a=document.getElementById(\"input-interval\"),l=document.getElementById(\"select-utc\"),c=document.getElementById(\"input-manually-utc\"),t=document.getElementById(\"block-timeoffset\"),d.initCommonEles();{let t=\"\";for(let e=-12;e<13;++e)t+=`<option value=\"${60*e*60}\">UTC${0<e?\"+\":0==e?\" \":\"\"}${e}:00</option>`;t+='<option value=\"manually\">manually</option>';let e=l;e.innerHTML=t}l.addEventListener(\"change\",n),d.setCommitButtonClickEvent(()=>{{d.showLoading(),d.eleResult.innerHTML=\"\",i&&clearInterval(i);let e=l.value;return console.log(e),\"manually\"==e&&(e=c.value),\"\"==o.value.trim()&&(o.value=s.ntp),a.value<1&&(a.value=s.interval),(e<-86400||86400<e)&&(e=0,l.value=0,c.value=0,n({target:c})),void g.setTimeConfig(o.value,a.value,e,(e,t,n)=>{console.log(t),1==e&&t?(d.hideLoading(),(u=new Date).setHours(t.h,t.m,t.s),d.showResult(!0,\"\"),m(),i=setInterval(()=>{m()},1e3)):(d.hideLoading(),n&&404==n.status?d.showConnectionError():(d.showResult(!1,\"Fail...<br/>All values ​​are initialized.<br/>please try again.\"),r()))})}}),d.setNextButtonClickEvent(()=>{location.href=\"mqtt\"}),r()}},MqttConfig=new function(){let o,a,l,c,d,u=new p;this.init=()=>{o=document.getElementById(\"input-mqtt-addr\"),a=document.getElementById(\"input-mqtt-port\"),l=document.getElementById(\"input-mqtt-clientid\"),c=document.getElementById(\"input-mqtt-user\"),d=document.getElementById(\"input-mqtt-pass\"),u.initCommonEles(),function s(){u.showLoading();g.getMqttConfig((t,n,i)=>{t?(o.value=n.url,a.value=n.port+\"\",l.value=n.mid,c.value=n.muser+\"\",d.value=n.mpass+\"\",u.hideLoading()):(i&&404==e.status&&u.showConnectionError(),s())})}(),u.setCommitButtonClickEvent(()=>{null!==o.value&&\"\"!==o.value?null===a.value||65353<a.value||a.value<1?u.showResult(!1,\"Invalid port number.\"):null!==l.value&&\"\"!=l.value?(u.showLoading(),g.setMqttConfig(o.value,a.value,l.value,c.value,d.value,(e,t,n)=>{!0===e?u.showResult(!0,\"Ok. Connected.\"):n?(u.showConnectionError(),u.hideLoading()):u.showResult(!1,\"Can not connect to MQTT server.\"),u.hideLoading()})):u.showResult(!1,\"ClientID is empty\"):u.showResult(!1,\"Address is empty\")}),u.setNextButtonClickEvent(()=>{location.href=\"option\"})}},OptionConfig=new function(){let c,d=[],o=-1,a=!0,u=new p;function r(t){for(let e=0;e<d.length;++e)if(d[e].name==t&&d[e].isNull)return 1}this.init=()=>{c=document.getElementById(\"options\"),u.initCommonEles(),u.showLoading(),g.getOptionList((e,t,n)=>{if(1==e){if(0!=(d=t).length){let t=\"\";for(let e=0;e<d.length;++e){var a=d[e];t=t+`<div class='form'><span class='label-option-name'>${a.name}${r(a.name)?\"\":\"*\"}: </span><input type='text' class='input-option-value' maxlength='32' name='${a.name}' value='${a.value}' /></div>`+\"<div class='error-msg'  ></div>\"}c.innerHTML=t;let n=0,i=document.getElementsByClassName(\"label-option-name\"),s=document.getElementsByClassName(\"input-option-value\"),o=document.getElementsByClassName(\"error-msg\");for(let e=0;e<i.length;++e){var l=i[e];n=Math.max(l.offsetWidth,n)}if(0!=n){210<n&&(n=210);for(let e=0;e<i.length;++e)i[e].style.width=n+\"px\",o[e].style.margin=`2px 0 -3px ${n+5}px`,s[e].style.width=280-n+\"px\",o[e].style.width=300-n+\"px\"}}else u.showResult(!0,\"No options.\"),u.eleResult.style.setProperty(\"color\",\"#ccc\"),u.eleResult.style.setProperty(\"font-size\",\"28pt\"),u.eleResult.style.setProperty(\"margin\",\"100px 10px 100px 10px\",\"important\"),u.eleResult.style.setProperty(\"text-align\",\"center\"),u.eleBtnCommit.disabled=!0;u.hideLoading()}else u.showConnectionError()}),u.setCommitButtonClickEvent(()=>{{u.showLoading(),a=!0,o=d.length;let t=document.getElementsByClassName(\"label-option-name\"),n=document.getElementsByClassName(\"input-option-value\"),i=document.getElementsByClassName(\"error-msg\");for(let e=0;e<n.length;++e)i[e].textContent=\"\",t[e].style.color=\"black\",r(n[e].name)||\"\"!=n[e].value?function(e,t,i,s){g.updateOption(e,t,(e,t,n)=>{try{console.log(t),t&&\"\"!=t?(s.textContent=t||\"Invalid value.\",i.style.color=\"red\",a=!1):e||(console.log(\"쉴패!!\"),console.log(t),console.log(n),n&&404==n.status&&u.showConnectionError(),a=!1),0==--o&&(u.hideLoading(),a?u.showResult(!0,\"Options applied.\"):u.showResult(!1,\"Invalid option value.\"))}catch(e){console.error(e)}})}(n[e].name,n[e].value,t[e],i[e]):(i[e].textContent=\"Empty values ​​are not allowed.\",t[e].style.color=\"red\",--o,a=!1);return}}),u.setNextButtonClickEvent(()=>{location.href=\"finish\"})}},FinishView=new function(){let e,n=\"\",i=new p;function s(e){return e<10?\"0\"+e:e}function o(){console.log(e),e.innerHTML=n}this.init=()=>{n=\"\",e=document.getElementById(\"config-info\"),i.initCommonEles(),i.showLoading(),i.setCommitButtonClickEvent(()=>{i.showLoading(),g.commit(e=>{i.hideLoading(),e?(alert(\"Configuration complete. Restart your device.\"),location.href=\"about:blank\"):alert(\"Error. Failed to save configuration values.\")})}),g.getDeviceInfo((e,t)=>{console.log(t),n=(n=(n=(n+=`<div class='info-line'><span class=\"config-name\">Device name :</span><span class=\"config-value\">${t.device}</span></div>`)+`<div class='info-line'><span class=\"config-name\">Version :</span><span class=\"config-value\">${t.version}</span></div>`+\"<br/>\")+`<div class='info-line'><span class=\"config-name\">SSID :</span><span class=\"config-value\">${t.ssid}</span></div>`)+`<div class='info-line'><span class=\"config-name\">IP :</span><span class=\"config-value\">${t.ip}</span></div>`+\"<br/>\",o(),g.getTimeConfig((e,t)=>{console.log(t),n=(n=(n+=`<div class='info-line'><span class=\"config-name\">Device name :</span><span class=\"config-value\">${t.ntp}</span></div>`)+`<div class='info-line'><span class=\"config-name\">Version :</span><span class=\"config-value\">${t.interval} min</span></div>`)+`<div class='info-line'><span class=\"config-name\">Time zone :</span><span class=\"config-value\">UTC${0<t.offset?\"+\":t.offset<0?\"-\":\" \"}${s(Math.abs(t.offset)/3600)}:${s(Math.abs(t.offset)%3600)}</span></div>`+\"<br/>\",g.getMqttConfig((e,t)=>{console.log(t),n=(n=(n+=`<div class='info-line'><span class=\"config-name\">Address :</span><span class=\"config-value\">${t.url}</span></div>`)+`<div class='info-line'><span class=\"config-name\">Port :</span><span class=\"config-value\">${t.port}</span></div>`)+`<div class='info-line'><span class=\"config-name\">Client ID :</span><span class=\"config-value\">${t.port}</span></div>`,\"\"!=t.muser&&(n+=`<div class='info-line'><span class=\"config-name\">User :</span><span class=\"config-value\">${t.muser}</span></div>`),\"\"!=t.mpass&&(n+=`<div class='info-line'><span class=\"config-name\">Password :</span><span class=\"config-value\">${t.mpass}</span></div>`),n+=\"<br/>\",g.getOptionList((e,t)=>{console.log(t);for(let e=0;e<t.length;++e)console.log(t[e]),n+=`<div class='info-line'><span class=\"config-name\">${t[e].name} :</span><span class=\"config-value\">${t[e].value}</span></div>`;o(),i.hideLoading()})})})})}};"
#define RES_AJAX_JS "function createXHR(){var a;if(window.ActiveXObject){a=new ActiveXObject(\"Microsoft.XMLHTTP\")}else{a=new XMLHttpRequest()}return a}function serialize(b){var c=[];for(var a in b){if(b.hasOwnProperty(a)){c.push(encodeURIComponent(a)+\"=\"+encodeURIComponent(b[a]))}}return c.join(\"&\")}function ajax(d){try{var a=createXHR();d.type=d.type===\"POST\"?\"POST\":d.type===\"PUT\"?\"PUT\":d.type===\"DELETE\"?\"DELETE\":\"GET\";var b=null;if(d.data!==undefined&&d.data!==null){b=serialize(d.data);if(d.type!==\"POST\"&&d.type!==\"PUT\"){d.url+=\"?\"+b}}a.onreadystatechange=function(){if(this.readyState===4){if(this.status/100===2&&d.complete!==undefined&&d.complete!==null){try{d.complete({status:a.status,data:JSON.parse(a.responseText)})}catch(f){d.complete({status:a.status,data:a.responseText})}}else{if(d.error!==undefined&&d.error!==null){try{d.error({status:a.status,data:JSON.parse(a.responseText)})}catch(f){d.error({status:a.status,data:a.responseText})}}}}};a.open(d.type,d.url,true);a.setRequestHeader(\"Content-type\",\"application/x-www-form-urlencoded\");if(d.type!==\"POST\"){a.send()}else{console.log(b);if(b!==null){a.send(b)}else{a.send()}}}catch(c){if(d.error!==undefined&&d.error!==null){d.error({status:-1,data:c})}}};"
