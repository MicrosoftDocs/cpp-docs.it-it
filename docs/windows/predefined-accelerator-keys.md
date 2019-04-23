---
title: Tasti di scelta rapida (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.accelerator
helpviewer_keywords:
- accelerator keys
- keyboard shortcuts
- keyboard shortcuts [C++], predefined
- menus [C++], shortcut keys
- keyboard shortcuts [C++], menu association
ms.assetid: f234c5f2-4ec3-4c9e-834a-b5dd297625b9
ms.openlocfilehash: bb407538f254df5f187ff91b85a8eaa753a52287
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59027519"
---
# <a name="accelerator-keys-c"></a>Tasti di scelta rapida (C++)

## <a name="predefined-accelerator-keys"></a>Tasti di scelta rapida predefiniti

Esistono numerosi tasti di scelta rapida predefiniti che possono far parte di un progetto di applicazione Windows. Alcune di queste chiavi sono virtuali per l'ambiente Windows. Altri supportano browser o applicazioni Unicode. È possibile usare qualsiasi di questi tipi qualsiasi tasto di scelta rapida.

|Chiave|Descrizione|
|---------|-----------------|
|VK_ACCEPT|(IME) accettare|
|VK_BROWSER_BACK|(Windows) Browser **nuovamente** chiave|
|VK_BROWSER_FAVORITES|(Windows) Browser **Preferiti** chiave|
|VK_BROWSER_FORWARD|(Windows) Browser **inoltrare** chiave|
|VK_BROWSER_HOME|(Windows) Browser **avviare** e **Home** chiave|
|VK_BROWSER_REFRESH|(Windows) Browser **Aggiorna** chiave|
|VK_BROWSER_SEARCH|(Windows) Browser **ricerca** chiave|
|VK_BROWSER_STOP|(Windows) Browser **arrestare** chiave|
|VK_CONVERT|Convert (IME)|
|VK_FINAL|Modalità finale IME)|
|VK_HANGUEL|(IME) Modalità Hanguel (mantenuta per garantire la compatibilità, usare VK_HANGUL)|
|VK_HANGUL|(IME) Modalità Hangul|
|VK_HANJA|(IME) Modalità Hanja|
|VK_JUNJA|(IME) Modalità Junja|
|VK_KANA|(IME) Modalità Kana|
|VK_KANJI|(IME) Modalità Kanji|
|VK_LAUNCH_APP1|(Windows) **Avvio applicazione 1** chiave|
|VK_LAUNCH_APP2|(Windows) **Avvio dell'applicazione 2** chiave|
|VK_LAUNCH_MAIL|(Windows) **Avvio della posta elettronica** chiave|
|VK_LAUNCH_MEDIA_SELECT|(Windows) **Selezione del supporto** chiave|
|VK_LCONTROL|**Ctrl sinistro** chiave|
|VK_LMENU|**Menu a sinistra** chiave|
|VK_LSHIFT|**Left Shift** chiave|
|VK_MEDIA_NEXT_TRACK|(Windows) **Brano successivo** chiave|
|VK_MEDIA_PLAY_PAUSE|(Windows) **Multimediale Riproduci/Pausa** chiave|
|VK_MEDIA_PREV_TRACK|(Windows) **Brano precedente** chiave|
|VK_MEDIA_STOP|(Windows) **Arrestare supporti** chiave|
|VK_MODECHANGE|Richiesta di modifica di modalità (IME)|
|VK_NONCONVERT|Annullamento della conversione (IME)|
|VK_OEM_1|(Windows) Per la tastiera standard degli Stati Uniti, il **;:** chiave|
|VK_OEM_102|(Windows) Il tasto parentesi angolare o il tasto barra rovesciata della tastiera RT 102-key|
|VK_OEM_2|(Windows) Per la tastiera standard degli Stati Uniti, il **/?** key|
|VK_OEM_3|(Windows) Per la tastiera standard degli Stati Uniti, il **`~** chiave|
|VK_OEM_4|(Windows) Per la tastiera standard degli Stati Uniti, il **[{** chiave|
|VK_OEM_5|(Windows) Per la tastiera standard degli Stati Uniti, il **\\ &#124;** chiave|
|VK_OEM_6|(Windows) Per la tastiera standard degli Stati Uniti, il **]}** chiave|
|VK_OEM_7|(Windows) Per la tastiera standard degli Stati Uniti, la chiave 'single-quote/virgolette'|
|VK_OEM_COMMA|(Windows) Per qualsiasi paese/area geografica, il **,** chiave|
|VK_OEM_MINUS|(Windows) Per qualsiasi paese/area geografica, il **-** chiave|
|VK_OEM_PERIOD|(Windows) Per qualsiasi paese/area geografica, il **.** key|
|VK_OEM_PLUS|(Windows) Per qualsiasi paese/area geografica, il **+** chiave|
|VK_PACKET|(Windows) Utilizzato per passare caratteri Unicode come se fossero sequenze di tasti.|
|VK_RCONTROL|**Ctrl destro** chiave|
|VK_RMENU|**Dal Menu a destra** chiave|
|VK_RSHIFT|**Spostamento a destra** chiave|
|VK_SLEEP|**Sospensione di computer** chiave|
|VK_VOLUME_DOWN|(Windows) **Volume giù** chiave|
|VK_VOLUME_MUTE|(Windows) **Disattivazione del volume** chiave|
|VK_VOLUME_UP|(Windows) **Aumento del volume** chiave|
|VK_XBUTTON1|(Windows) **X1** pulsante del mouse|
|VK_XBUTTON2|(Windows) **X2** pulsante del mouse|

## <a name="accelerator-key-association"></a>Associazione di chiavi di tasti di scelta rapida

Molte volte si vuole che una voce di menu e una combinazione di tasti esegua lo stesso comando del programma. Questa operazione può essere assegnando lo stesso identificatore di risorsa (ID) alla voce di menu e a una voce nella tabella di tasti di scelta rapida dell'applicazione. È quindi modificare la didascalia della voce di menu per visualizzare il nome del tasto di scelta rapida. Per altre informazioni sulle voci di menu e tasti di scelta rapida, vedere [comandi di Menu](../windows/associating-a-menu-command-with-an-accelerator-key.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor tasti di scelta rapida](../windows/accelerator-editor.md)<br/>