---
title: Tasti di scelta rapida (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.accelerator
helpviewer_keywords:
- accelerator keys
- keyboard shortcuts
- keyboard shortcuts [C++], predefined
- menus [C++], shortcut keys
- keyboard shortcuts [C++], menu association
ms.assetid: f234c5f2-4ec3-4c9e-834a-b5dd297625b9
ms.openlocfilehash: 1e87d80b8995760eecda34334dab702480bd9669
ms.sourcegitcommit: 5beace7dcc6bf0e8b8cc96a930e7424f9daa05cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2019
ms.locfileid: "55232123"
---
# <a name="accelerator-keys-c"></a>Tasti di scelta rapida (C++)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="predefined-accelerator-keys"></a>Tasti di scelta rapida predefiniti

Esistono numerosi tasti di scelta rapida predefiniti che possono far parte di un progetto di applicazione Windows. Alcune di queste chiavi sono virtuali per l'ambiente Windows. Altri supportano browser o applicazioni Unicode. È possibile usare qualsiasi di questi tipi qualsiasi tasto di scelta rapida.

|Chiave|Descrizione|
|---------|-----------------|
|VK_ACCEPT|Accettazione IME|
|VK_BROWSER_BACK|Windows: Tasto Indietro del browser|
|VK_BROWSER_FAVORITES|Windows: Tasto Preferiti del browser|
|VK_BROWSER_FORWARD|Windows: Tasto Avanti del browser|
|VK_BROWSER_HOME|Windows: Chiave di avvio del browser e Home|
|VK_BROWSER_REFRESH|Windows: Tasto Aggiorna del browser|
|VK_BROWSER_SEARCH|Windows: Tasto Cerca del browser|
|VK_BROWSER_STOP|Windows: Tasto Stop del browser|
|VK_CONVERT|Conversione IME|
|VK_FINAL|Modalità finale IME|
|VK_HANGUEL|Modalità Hanguel IMEE, mantenuta per garantire compatibilità. Usare VK_HANGUL|
|VK_HANGUL|Modalità Hangul IME|
|VK_HANJA|Modalità Hanja IME|
|VK_JUNJA|Modalità Junja IME|
|VK_KANA|Modalità Kana IME|
|VK_KANJI|Modalità Kanji IME|
|VK_LAUNCH_APP1|Windows: Chiave iniziale al passaggio 1 dell'applicazione|
|VK_LAUNCH_APP2|Windows: Chiave iniziale dell'applicazione 2|
|VK_LAUNCH_MAIL|Windows: Chiave iniziale della posta|
|VK_LAUNCH_MEDIA_SELECT|Windows: Selezionare la chiave Media|
|VK_LCONTROL|Tasto CTRL a sinistra|
|VK_LMENU|Tasto MENU a sinistra|
|VK_LSHIFT|Tasto MAIUSC a sinistra|
|VK_MEDIA_NEXT_TRACK|Windows: Tasto del brano successivo|
|VK_MEDIA_PLAY_PAUSE|Windows: Tasto del supporto multimediale Riproduci/Pausa|
|VK_MEDIA_PREV_TRACK|Windows: Tasto del brano precedente|
|VK_MEDIA_STOP|Windows: Tasto del supporto multimediale Stop|
|VK_MODECHANGE|Richiesta di modifica della modalità IME|
|VK_NONCONVERT|Annullamento della conversione IME|
|VK_OEM_1|Windows: Per la tastiera standard degli Stati Uniti, il ';:' chiave|
|VK_OEM_102|Windows: Il tasto parentesi angolare o il tasto barra rovesciata della tastiera RT 102-key|
|VK_OEM_2|Windows: Per la tastiera standard degli Stati Uniti, il '/'? key|
|VK_OEM_3|Windows: Per la tastiera standard degli Stati Uniti, il ' ~' chiave|
|VK_OEM_4|Windows: Per la tastiera standard degli Stati Uniti, il ' [{' chiave|
|VK_OEM_5|Windows: Per la tastiera standard degli Stati Uniti, il '\\&#124;' chiave|
|VK_OEM_6|Windows: Per la tastiera standard degli Stati Uniti, il ']}' chiave|
|VK_OEM_7|Windows: Per la tastiera standard degli Stati Uniti, la chiave 'single-quote/virgolette'|
|VK_OEM_COMMA|Windows: Per qualsiasi paese/area geografica, la chiave ''|
|VK_OEM_MINUS|Windows: Per qualsiasi paese/area geografica, il '-' chiave|
|VK_OEM_PERIOD|Windows: Per qualsiasi paese/area geografica, il '.' chiave|
|VK_OEM_PLUS|Windows: Per qualsiasi paese/area geografica, il tasto '+'|
|VK_PACKET|Windows: Utilizzato per passare caratteri Unicode come se fossero sequenze di tasti.|
|VK_RCONTROL|Tasto CTRL a destra|
|VK_RMENU|Tasto MENU a destra|
|VK_RSHIFT|Tasto MAIUSC a destra|
|VK_SLEEP|Tasto di sospensione del computer|
|VK_VOLUME_DOWN|Windows: Tasto di riduzione volume|
|VK_VOLUME_MUTE|Windows: Tasto di disattivazione del volume|
|VK_VOLUME_UP|Windows: Tasto di aumento del volume|
|VK_XBUTTON1|Windows: Pulsante del mouse X1|
|VK_XBUTTON2|Windows: Pulsante del mouse X2|

## <a name="associating-an-accelerator-key-with-a-menu-item"></a>Associazione di un tasto di scelta rapida a una voce di menu

Molte volte si vuole che una voce di menu e una combinazione di tasti esegua lo stesso comando del programma. Ciò è possibile assegnando lo stesso identificatore di risorsa (ID) alla voce di menu e a una voce nella tabella dei tasti di scelta rapida dell'applicazione. È quindi modificare la didascalia della voce di menu per visualizzare il nome del tasto di scelta rapida. Per altre informazioni sulle voci di menu e tasti di scelta rapida, vedere [associazione di una voce di Menu con un tasto di scelta rapida](../windows/associating-a-menu-command-with-an-accelerator-key.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor tasti di scelta rapida](../windows/accelerator-editor.md)<br/>
[Editor di risorse](../windows/resource-editors.md)
