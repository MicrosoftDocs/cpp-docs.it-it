---
title: Supporto per MBCS in Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- tools [C++], MBCS support
- Asian languages [C++]
- Code Editor [C++], MBCS support
- IME [C++]
- Chinese characters [C++]
- Input Method Editor [C++], MBCS
- resource editors [C++], MBCS support
- debugger [C++], MBCS support
- character sets [C++], multibyte
- Japanese characters [C++]
- multibyte characters [C++]
- Kanji character support [C++]
- NMAKE program, MBCS support
- double-byte character sets [C++]
- IME [C++], MBCS
- Input Method Editor [C++]
- MBCS [C++], enabling
ms.assetid: 6179f6b7-bc61-4a48-9267-fb7951223e38
ms.openlocfilehash: 404fcee5e48d8db28e56a005f24f8cac5892240e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375786"
---
# <a name="mbcs-support-in-visual-c"></a>Supporto per MBCS in Visual C++

Quando viene eseguito su una versione di Windows abilitata per MBCS, il sistema di sviluppo di Visual C, inclusi l'editor integrato del codice sorgente, il debugger e gli strumenti della riga di comando, è abilitato per MBCS, ad eccezione della finestra di memoria.

La finestra di memoria non interpreta i byte dei dati come caratteri MBCS, anche se può interpretarli come caratteri ANSI o Unicode. I caratteri ANSI hanno sempre una dimensione di 1 byte e i caratteri Unicode di 2 byte. Con MBCS, i caratteri possono avere una dimensione di 1 o 2 byte e la loro interpretazione dipende dalla tabella codici in uso. Per questo motivo, è difficile per la finestra di memoria visualizzare in modo affidabile i caratteri MBCS. La finestra di memoria non può sapere quale byte è l'inizio di un carattere. Lo sviluppatore può visualizzare i valori di byte nella finestra di memoria e cercare il valore nelle tabelle per determinare la rappresentazione dei caratteri. Ciò è possibile perché lo sviluppatore conosce l'indirizzo iniziale di una stringa in base al codice sorgente.

In caso affermativo, in Visual Cè sono accettati i caratteri a byte doppio. Sono inclusi i nomi dei percorsi e dei file nelle finestre di dialogo e le voci di testo nell'editor di risorse di Visual C, ad esempio il testo statico nell'editor finestre e le voci di testo statico nell'editor icone. Inoltre, il preprocessore riconosce alcune direttive a byte doppio, `#include` ad esempio i nomi `code_seg` `data_seg` di file nelle istruzioni e come argomenti per i pragma e . Nell'editor del codice sorgente, i caratteri a byte doppio nei commenti e nei valori letterali stringa vengono accettati, anche se non si trovano negli elementi del linguaggio C/C, ad esempio i nomi delle variabili.

## <a name="support-for-the-input-method-editor-ime"></a><a name="_core_support_for_the_input_method_editor_.28.ime.29"></a>Supporto per Input Method Editor (IME)

Le applicazioni scritte per i mercati dell'Asia orientale che utilizzano MBCS (ad esempio, il Giappone) in genere supportano l'IME di Windows per l'immissione di caratteri sia a byte singolo che a byte doppio. L'ambiente di sviluppo di Visual Cè contiene il supporto completo per l'IME.

Le tastiere giapponesi non supportano direttamente i caratteri Kanji. L'IME converte una stringa fonetica, immessa in uno degli altri alfabeti giapponesi (Romaji, Katakana o Hiragana) nelle sue possibili rappresentazioni Kanji. In caso di ambiguità, è possibile scegliere tra diverse alternative. Dopo aver selezionato il carattere Kanji desiderato, l'IME passa due `WM_CHAR` messaggi all'applicazione di controllo.

L'IME, attivato dalla\` combinazione di tasti ALT , viene visualizzato come un set di pulsanti (un indicatore) e una finestra di conversione. L'applicazione posiziona la finestra in corrispondenza del punto di inserimento del testo. L'applicazione `WM_MOVE` deve `WM_SIZE` gestire e messaggi riposizionando la finestra di conversione in modo che sia conforme alla nuova posizione o alle nuove dimensioni della finestra di destinazione.

Se si desidera che gli utenti dell'applicazione abbiano la possibilità di immettere caratteri Kanji, l'applicazione deve gestire i messaggi IME di Windows. Per ulteriori informazioni sulla programmazione IME, vedere [Input Method Manager](/windows/win32/intl/input-method-manager).

## <a name="visual-c-debugger"></a>Debugger di Visual C

Il debugger di Visual Cè consente di impostare punti di interruzione sui messaggi IME. Inoltre, la finestra Memoria può visualizzare caratteri a byte doppio.

## <a name="command-line-tools"></a>Strumenti della riga di comando

Gli strumenti da riga di comando di Visual C, inclusi il compilatore, NMAKE e il compilatore di risorse (RC. EXE), sono abilitati per MBCS. È possibile utilizzare l'opzione /c del compilatore di risorse per modificare la tabella codici predefinita durante la compilazione delle risorse dell'applicazione.

Per modificare le impostazioni locali predefinite in fase di compilazione del codice sorgente, utilizzare [#pragma setlocale](../preprocessor/setlocale.md).

## <a name="graphical-tools"></a>Strumenti grafici

Gli strumenti basati su Windows di Visual C, ad esempio Spy e gli strumenti di modifica delle risorse, supportano completamente le stringhe IME.

## <a name="see-also"></a>Vedere anche

[Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)
