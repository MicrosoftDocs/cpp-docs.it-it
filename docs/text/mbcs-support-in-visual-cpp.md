---
title: Supporto per MBCS in Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- _mbcs
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 51472ba9c0bc15d6b12ddcd3a3b88b65a3a2682b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205196"
---
# <a name="mbcs-support-in-visual-c"></a>Supporto per MBCS in Visual C++
Quando eseguito su una versione di Windows, il sistema di sviluppo di Visual C++ (inclusi gli strumenti dell'editor, debugger e riga di comando del codice sorgente integrato) è abilitata per MBCS, fatta eccezione per la finestra di memoria.  
  
 Finestra memoria non interpreta i byte di dati come caratteri MBCS, anche se possibile interpretarli come caratteri ANSI o Unicode. Caratteri ANSI sono sempre pari a 1 byte le dimensioni e i caratteri Unicode sono di dimensioni pari a 2 byte. Con MBCS, caratteri possono essere 1 o 2 byte le dimensioni e la relativa interpretazione dipende la tabella codici è in uso. Per questo motivo, è difficile per la finestra di memoria da visualizzare in modo affidabile i caratteri MBCS. Finestra memoria non è possibile sapere quali byte corrisponde all'inizio di un carattere. Lo sviluppatore può visualizzare i valori di byte nella finestra memoria e cercare il valore nelle tabelle per determinare la rappresentazione di caratteri. Ciò è possibile perché lo sviluppatore conosce l'indirizzo iniziale di una stringa in base al codice sorgente.  
  
 Visual C++ accetta i caratteri a byte doppio ogni volta che è opportuno eseguire questa operazione. Nelle voci di testo nell'editor di risorse di Visual C++ (ad esempio, testo statico nell'editor finestre) e le voci di testo statico nell'editor delle icone e finestre di dialogo sono inclusi i nomi di percorso e i nomi di file. Inoltre, il preprocessore riconosce alcune direttive DBCS:, ad esempio, nomi di file nei `#include` (istruzioni) e come argomenti per il `code_seg` e `data_seg` pragma. Nell'editor del codice sorgente, vengono accettate caratteri DBCS in commenti e i valori letterali stringa, anche se non è in elementi del linguaggio C/C++ (ad esempio i nomi delle variabili).  
  
##  <a name="_core_support_for_the_input_method_editor_.28.ime.29"></a> Supporto per l'Input Method Editor (IME)  
 Applicazioni scritte per i mercati dell'est asiatico che usano in genere MBCS (ad esempio, Giappone) supportano l'IME di Windows per l'immissione di entrambi i caratteri a byte singolo e double. L'ambiente di sviluppo di Visual C++ include il supporto completo per IME. Per altre informazioni, vedere [IME esempio: dimostrazione del controllo della modalità IME e dell'implementazione del livello IME 3](https://msdn.microsoft.com/87ebdf65-cef0-451d-a6fc-d5fb64178b14).  
  
 Le tastiere giapponesi non supportano direttamente i caratteri Kanji. L'IME converte una stringa fonetica, inserita in uno degli altri alfabeti giapponesi (Romaji, Katakana e Hiragana) relative rappresentazioni Kanji possibili. Se è presente l'ambiguità, è possibile selezionare tra diverse alternative. Dopo aver selezionato il carattere Kanji desiderato, l'IME passa due `WM_CHAR` messaggi all'applicazione di controllo.  
  
 L'IME, attivata da ALT +\` combinazione di tasti, viene visualizzata come un set di pulsanti (un indicatore) e una finestra di conversione. L'applicazione consente di posizionare la finestra nel punto di inserimento di testo. L'applicazione deve gestire `WM_MOVE` e `WM_SIZE` messaggi riposizionando la finestra di conversione di conformarsi al nuovo percorso o alla dimensione della finestra di destinazione.  
  
 Se si desidera che gli utenti dell'applicazione per avere la possibilità di immettere caratteri Kanji, l'applicazione deve gestire i messaggi IME di Windows. Per altre informazioni sulla programmazione di IME, vedere [Input Method Editor](/previous-versions/windows/desktop/ms776145\(v=vs.85\)).  
  
## <a name="visual-c-debugger"></a>Debugger di Visual C++  
 Il debugger di Visual C++ offre la possibilità di impostare i punti di interruzione per i messaggi IME. Inoltre, la finestra memoria può visualizzare caratteri a byte doppio.  
  
## <a name="command-line-tools"></a>Strumenti della riga di comando  
 Gli strumenti da riga di comando di Visual C++, tra cui il compilatore NMAKE e il compilatore di risorse (RC. Con estensione EXE), sono abilitati per MBCS. È possibile utilizzare l'opzione/c del compilatore di risorse per modificare la tabella codici predefinita durante la compilazione di risorse dell'applicazione.  
  
 Per modificare le impostazioni locali predefinite durante la compilazione del codice sorgente, utilizzare [#pragma setlocale](../preprocessor/setlocale.md).  
  
## <a name="graphical-tools"></a>Strumenti di grafici  
 Gli strumenti basati su Windows di Visual C++, ad esempio Spy + + e la risorsa, strumenti di modifica supportano completamente le stringhe di IME.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per set di caratteri Multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)   
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)