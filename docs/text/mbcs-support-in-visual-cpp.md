---
description: 'Altre informazioni su: supporto MBCS in Visual C++'
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
ms.openlocfilehash: f216e381db8111c54f30b2c2fe326f4914024956
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207137"
---
# <a name="mbcs-support-in-visual-c"></a>Supporto per MBCS in Visual C++

Quando viene eseguito in una versione di Windows abilitata per MBCS, il sistema di sviluppo Visual C++ (inclusi l'editor del codice sorgente integrato, il debugger e gli strumenti da riga di comando) è abilitato per MBCS, ad eccezione della finestra memoria.

La finestra memoria non interpreta byte di dati come caratteri MBCS, anche se può interpretarli come caratteri ANSI o Unicode. I caratteri ANSI hanno sempre una dimensione di 1 byte e i caratteri Unicode sono di 2 byte. Con MBCS, i caratteri possono avere una dimensione di 1 o 2 byte e la relativa interpretazione dipende dalla tabella codici in uso. Per questo motivo, è difficile per la finestra memoria visualizzare in modo affidabile i caratteri MBCS. La finestra memoria non è in grado di stabilire quale byte è l'inizio di un carattere. Lo sviluppatore può visualizzare i valori di byte nella finestra memoria e cercare il valore nelle tabelle per determinare la rappresentazione dei caratteri. Questo è possibile perché lo sviluppatore conosce l'indirizzo iniziale di una stringa basata sul codice sorgente.

Visual C++ accetta caratteri a doppio byte laddove è opportuno eseguire questa operazione. Sono inclusi i nomi di percorso e i nomi file nelle finestre di dialogo e le voci di testo nell'editor di risorse Visual C++ (ad esempio, testo statico nell'editor finestre e voci di testo statico nell'editor delle icone). Inoltre, il preprocessore riconosce alcune direttive a doppio byte, ad esempio i nomi di file nelle `#include` istruzioni e come argomenti per i `code_seg` pragma e `data_seg` . Nell'editor del codice sorgente, i caratteri DBCS nei commenti e nei valori letterali stringa vengono accettati, anche se non negli elementi del linguaggio C/C++, ad esempio i nomi delle variabili.

## <a name="support-for-the-input-method-editor-ime"></a><a name="_core_support_for_the_input_method_editor_.28.ime.29"></a> Supporto per input Method Editor (IME)

Le applicazioni scritte per i mercati asiatici orientali che usano MBCS (ad esempio, Giappone) supportano normalmente l'IME di Windows per l'immissione di caratteri a byte singolo e a byte doppio. L'ambiente di sviluppo Visual C++ contiene il supporto completo per l'IME.

Le tastiere giapponesi non supportano direttamente i caratteri kanji. L'IME converte una stringa fonetica, immessa in uno degli altri alfabeti giapponesi (Romaji, Katakana o Hiragana) nelle rappresentazioni kanji possibili. In caso di ambiguità, è possibile scegliere tra diverse alternative. Dopo aver selezionato il carattere Kanji desiderato, l'IME passa due `WM_CHAR` messaggi all'applicazione di controllo.

L'IME, attivato dalla combinazione di tasti ALT + \` , viene visualizzato come un set di pulsanti (un indicatore) e una finestra di conversione. L'applicazione posiziona la finestra in corrispondenza del punto di inserimento del testo. L'applicazione deve gestire `WM_MOVE` i `WM_SIZE` messaggi e riposizionando la finestra di conversione in modo da conformarsi alla nuova posizione o alla nuova dimensione della finestra di destinazione.

Se si vuole che gli utenti dell'applicazione siano in grado di immettere caratteri kanji, l'applicazione deve gestire i messaggi IME di Windows. Per ulteriori informazioni sulla programmazione IME, vedere [Input Method Manager](/windows/win32/intl/input-method-manager).

## <a name="visual-c-debugger"></a>Debugger Visual C++

Il debugger Visual C++ consente di impostare punti di interruzione nei messaggi IME. Inoltre, nella finestra memoria possono essere visualizzati caratteri a byte doppio.

## <a name="command-line-tools"></a>Strumenti della riga di comando

Gli strumenti da riga di comando Visual C++, tra cui il compilatore, NMAKE e il compilatore di risorse (RC.EXE), sono abilitati per MBCS. È possibile usare l'opzione/c del compilatore di risorse per modificare la tabella codici predefinita quando si compilano le risorse dell'applicazione.

Per modificare le impostazioni locali predefinite in fase di compilazione del codice sorgente, utilizzare [#pragma setlocale](../preprocessor/setlocale.md).

## <a name="graphical-tools"></a>Strumenti grafici

Gli strumenti basati su Windows Visual C++, ad esempio Spy + + e gli strumenti di modifica delle risorse, supportano completamente le stringhe IME.

## <a name="see-also"></a>Vedi anche

[Supporto per set di caratteri multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)
