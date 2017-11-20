---
title: Supporto per MBCS in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _mbcs
dev_langs: C++
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
caps.latest.revision: "7"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 65d5fc64db1e43d9b0914a9d8671e466f4ee87e6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mbcs-support-in-visual-c"></a>Supporto per MBCS in Visual C++
Durante l'esecuzione su una versione del sistema operativo Windows 2000 o Windows XP, il sistema di sviluppo di Visual C++ (incluso l'editor del codice sorgente integrato, debugger e strumenti da riga di comando) è abilitata per MBCS, fatta eccezione per la memoria (finestra).  
  
 Finestra memoria non interpreta i byte di dati come caratteri MBCS, anche se è possibile interpretati come caratteri ANSI o Unicode. Caratteri ANSI sono sempre di dimensioni pari a 1 byte e i caratteri Unicode sono di dimensioni pari a 2 byte. Con MBCS, caratteri possono essere 1 o 2 byte di dimensioni e la relativa interpretazione dipende la tabella codici è in uso. Per questo motivo, è difficile per la finestra di memoria da visualizzare in modo affidabile i caratteri MBCS. Finestra memoria non è in grado di byte che è l'inizio di un carattere. Lo sviluppatore può visualizzare i valori di byte in memoria (finestra) e cercare il valore nelle tabelle per determinare la rappresentazione di caratteri. Questo è possibile perché lo sviluppatore sa che l'indirizzo iniziale di una stringa in base al codice sorgente.  
  
 Visual C++ accetta caratteri a byte doppio, ogni volta che è opportuno eseguire questa operazione. Questo include i nomi di percorso e dei file nelle finestre di dialogo e le voci di testo nell'editor di risorse di Visual C++ (ad esempio, testo statico nell'editor finestre) e le voci di testo statico nell'editor delle icone. Inoltre, il preprocessore riconosce alcune istruzioni a byte doppio, ad esempio, nomi di file nelle `#include` istruzioni e come argomenti il **code_seg** e **data_seg** pragma. Nell'editor del codice sorgente, vengono accettate caratteri DBCS in commenti e i valori letterali stringa, anche se non è in elementi del linguaggio C/C++ (ad esempio i nomi delle variabili).  
  
##  <a name="_core_support_for_the_input_method_editor_.28.ime.29"></a>Supporto per Input Method Editor (IME)  
 Applicazioni scritte per i mercati dell'Asia orientale, che utilizzano in genere il formato MBCS (ad esempio, Giappone) supportano IME Windows per l'immissione di entrambi i caratteri a byte singolo e doppio. Ambiente di sviluppo di Visual C++ include il supporto completo per IME. Per ulteriori informazioni, vedere [esempio IME: dimostrazione del controllo della modalità IME e dell'implementazione del livello IME 3](http://msdn.microsoft.com/en-us/87ebdf65-cef0-451d-a6fc-d5fb64178b14).  
  
 Le tastiere giapponesi non supportano direttamente i caratteri Kanji. IME converte una stringa fonetica, inserita in uno degli altri alfabeti giapponesi (Romaji, Katakana e Hiragana) relative rappresentazioni Kanji possibili. In caso di ambiguità, è possibile selezionare tra diverse alternative. Dopo aver selezionato il carattere Kanji desiderato, IME passa due `WM_CHAR` messaggi all'applicazione di controllo.  
  
 IME, attivata da ALT +\` combinazione di tasti, viene visualizzato come un set di pulsanti (un indicatore) e una finestra di conversione. L'applicazione consente di posizionare la finestra nel punto di inserimento di testo. L'applicazione deve gestire `WM_MOVE` e `WM_SIZE` messaggi riposizionando la finestra di conversione sia conforme al nuovo percorso o alla dimensione della finestra di destinazione.  
  
 Se si desidera che gli utenti dell'applicazione per avere la possibilità di immettere i caratteri Kanji, l'applicazione deve gestire i messaggi di Windows IME. Per ulteriori informazioni sulla programmazione IME, vedere [Input Method Editor](https://msdn.microsoft.com/en-us/library/ms776145.aspx).  
  
## <a name="visual-c-debugger"></a>Debugger di Visual C++  
 Il debugger di Visual C++ fornisce la possibilità di impostare i punti di interruzione per i messaggi IME. Inoltre, la finestra di memoria può visualizzare caratteri a byte doppio.  
  
## <a name="command-line-tools"></a>Strumenti della riga di comando  
 Gli strumenti da riga di comando di Visual C++, tra cui il compilatore, NMAKE e il compilatore di risorse (RC. Con estensione EXE), sono abilitati per MBCS. È possibile utilizzare l'opzione /c del compilatore di risorse per modificare la tabella codici predefinita durante la compilazione di risorse dell'applicazione.  
  
 Per modificare le impostazioni locali predefinite durante la compilazione del codice sorgente, utilizzare [#pragma setlocale](../preprocessor/setlocale.md).  
  
## <a name="graphical-tools"></a>Strumenti di grafici  
 Gli strumenti basati su Windows Visual C++, ad esempio Spy + + e la risorsa, strumenti di modifica supportano completamente le stringhe IME.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per il set di caratteri Multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)   
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)