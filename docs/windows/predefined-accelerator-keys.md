---
title: Tasti di scelta rapida (C++)
ms.date: 02/14/2019
helpviewer_keywords:
- accelerator keys
- keyboard shortcuts
- keyboard shortcuts [C++], predefined
- menus [C++], shortcut keys
- keyboard shortcuts [C++], menu association
ms.assetid: f234c5f2-4ec3-4c9e-834a-b5dd297625b9
ms.openlocfilehash: 4f838caa8ca9e4a996fa4cb8018d663c6c7aecea
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504300"
---
# <a name="accelerator-keys-c"></a>Tasti di scelta rapida (C++)

## <a name="predefined-accelerator-keys"></a>Tasti di scelta rapida predefiniti

Esistono numerosi tasti di scelta rapida predefiniti che possono far parte di un progetto di applicazione Windows. Alcune di queste chiavi sono virtuali per l'ambiente Windows. Altri supportano browser o applicazioni Unicode. È possibile usare qualsiasi di questi tipi qualsiasi tasto di scelta rapida.

|Chiave|Descrizione|
|---------|-----------------|
|VK_ACCEPT|(IME) accetta|
|VK_BROWSER_BACK|Windows Browser, tasto **indietro**|
|VK_BROWSER_FAVORITES|Windows Browser, tasto **Preferiti**|
|VK_BROWSER_FORWARD|Windows Browser, chiave di **avanzamento**|
|VK_BROWSER_HOME|Windows Browser, tasto di **avvio** e **Home**|
|VK_BROWSER_REFRESH|Windows Browser, tasto di **aggiornamento**|
|VK_BROWSER_SEARCH|Windows Browser, chiave di **ricerca**|
|VK_BROWSER_STOP|Windows Browser, tasto **Stop**|
|VK_CONVERT|(IME) Convert|
|VK_FINAL|(IME) modalità finale|
|VK_HANGUEL|IME Modalità Hangul (mantenuta per compatibilità, utilizzare VK_HANGUL)|
|VK_HANGUL|IME Modalità Hangul|
|VK_HANJA|IME Modalità Hanja|
|VK_JUNJA|IME Modalità Junja|
|VK_KANA|IME Modalità Kana|
|VK_KANJI|IME Modalità Kanji|
|VK_LAUNCH_APP1|Windows Chiave di **avvio dell'applicazione 1**|
|VK_LAUNCH_APP2|Windows Chiave di **avvio dell'applicazione 2**|
|VK_LAUNCH_MAIL|Windows **Avvia chiave di posta elettronica**|
|VK_LAUNCH_MEDIA_SELECT|Windows **Selezionare** il tasto supporto|
|VK_LCONTROL|Tasto **CTRL sinistro**|
|VK_LMENU|Tasto **menu a sinistra**|
|VK_LSHIFT|Tasto **MAIUSC sinistro**|
|VK_MEDIA_NEXT_TRACK|Windows Tasto **Track successivo**|
|VK_MEDIA_PLAY_PAUSE|Windows Tasto di **riproduzione/sospensione del supporto**|
|VK_MEDIA_PREV_TRACK|Windows Tasto **Track precedente**|
|VK_MEDIA_STOP|Windows **Arresta** il tasto supporto|
|VK_MODECHANGE|(IME) richiesta di modifica della modalità|
|VK_NONCONVERT|(IME) non conversione|
|VK_OEM_1|Windows Per la tastiera standard degli Stati Uniti, il tasto **;:**|
|VK_OEM_102|Windows Il tasto parentesi angolare o il tasto barra rovesciata sulla tastiera RT 102-Key|
|VK_OEM_2|Windows Per la tastiera standard degli Stati Uniti, il **/?** Key|
|VK_OEM_3|Windows Per la tastiera standard degli Stati Uniti, la **`~** chiave|
|VK_OEM_4|Windows Per la tastiera standard degli Stati Uniti, **[{** Key|
|VK_OEM_5|Windows Per la tastiera standard degli Stati Uniti, la chiave di ** \\&#124;**|
|VK_OEM_6|Windows Per la tastiera standard degli Stati Uniti, il tasto **]}**|
|VK_OEM_7|Windows Per la tastiera standard degli Stati Uniti, il tasto ' virgolette singole/virgolette doppie '|
|VK_OEM_COMMA|Windows Per ogni paese/area geografica **, la chiave**|
|VK_OEM_MINUS|Windows Per ogni paese/area geografica, la **-** chiave|
|VK_OEM_PERIOD|Windows Per ogni paese/area geografica, il **.** Key|
|VK_OEM_PLUS|Windows Per ogni paese/area geografica, la **+** chiave|
|VK_PACKET|Windows Utilizzato per passare i caratteri Unicode come se fossero sequenze di tasti.|
|VK_RCONTROL|Tasto **CTRL destro**|
|VK_RMENU|Tasto **menu a destra**|
|VK_RSHIFT|Tasto **MAIUSC destro**|
|VK_SLEEP|Tasto **sospensione computer**|
|VK_VOLUME_DOWN|Windows Chiave di **riduzione del volume**|
|VK_VOLUME_MUTE|Windows Chiave di **silenziamento del volume**|
|VK_VOLUME_UP|Windows Tasto **volume su**|
|VK_XBUTTON1|Windows Pulsante del mouse **X1**|
|VK_XBUTTON2|Windows Pulsante del mouse **X2**|

## <a name="accelerator-key-association"></a>Associazione tasto di scelta rapida

Molte volte si vuole che una voce di menu e una combinazione di tasti esegua lo stesso comando del programma. Questa azione viene eseguita assegnando lo stesso identificatore di risorsa (ID) alla voce di menu e a una voce nella tabella dei tasti di scelta rapida dell'applicazione. È quindi modificare la didascalia della voce di menu per visualizzare il nome del tasto di scelta rapida. Per ulteriori informazioni sulle voci di menu e sui tasti di scelta rapida, vedere [comandi di menu](./menu-command-properties.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor tasti di scelta rapida](../windows/accelerator-editor.md)<br/>
