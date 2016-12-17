---
title: "Supporto per MBCS in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lingue asiatiche [C++]"
  - "set di caratteri [C++], multibyte"
  - "caratteri cinesi [C++]"
  - "Editor di codice [C++], supporto MBCS"
  - "debugger [C++], supporto MBCS"
  - "Double Byte Character Set [C++]"
  - "IME [C++]"
  - "IME [C++], MBCS"
  - "Input Method Editor [C++]"
  - "Input Method Editor [C++], MBCS"
  - "caratteri giapponesi [C++]"
  - "supporto caratteri Kanji [C++]"
  - "MBCS [C++], abilitazione"
  - "caratteri multibyte [C++]"
  - "NMAKE (programma), supporto MBCS"
  - "editor di risorse [C++], supporto MBCS"
  - "strumenti [C++], supporto MBCS"
ms.assetid: 6179f6b7-bc61-4a48-9267-fb7951223e38
caps.latest.revision: 7
caps.handback.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Supporto per MBCS in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il sistema di sviluppo Visual C\+\+, compresi l'editor integrato del codice sorgente, il debugger e gli strumenti della riga di comando, supporta il formato MBCS, ad eccezione della finestra Memoria, quando viene eseguito su una versione del sistema operativo Windows 2000 o Windows XP predisposta per tale formato.  
  
 La finestra memoria non interpreta i byte di dati come caratteri MBCS, anche se è in grado di interpretarli come ANSI o unicode.  I caratteri ANSI sono sempre una dimensione di 1 byte e caratteri unicode è una dimensione di 2 byte.  Con MBCS, i caratteri possono essere 1 o 2 byte per dimensione e nella relativa interpretazione dipende dalla tabella codici utilizzata.  Per questo motivo, è difficile la finestra memoria in modo affidabile visualizzare i caratteri MBCS.  La finestra memoria non è in grado di stabilire quale byte è l'inizio di un carattere.  Lo sviluppatore può visualizzare i valori dei byte nella finestra Memoria, nonché cercare il valore nelle tabelle per determinare la rappresentazione del carattere.  Tale operazione è possibile perché lo sviluppatore conosce l'indirizzo iniziale di una stringa basata sul codice sorgente.  
  
 Visual C\+\+ accetta i caratteri a byte doppio quando necessario,  ovvero nei nomi dei percorsi e dei file nelle finestre di dialogo e nelle immissioni di testo nell'editor delle risorse di Visual C\+\+, ad esempio il testo statico nell'editor delle finestre e le immissioni di testo statico nell'editor delle icone.  Inoltre, il preprocessore riconosce alcune istruzioni a byte doppio, ad esempio i nomi di file nelle istruzioni `#include` e come argomenti dei pragma **code\_seg** e **data\_seg**.  Nell'editor del codice sorgente i caratteri a byte doppio vengono accettati nei commenti e nelle stringhe letterali, mentre non vengono accettati negli elementi del linguaggio C\/C\+\+, ad esempio nei nomi di variabile.  
  
##  <a name="_core_support_for_the_input_method_editor_.28.ime.29"></a> Supporto per l'IME \(Input Method Editor, editor del metodo di input\)  
 In genere, le applicazioni scritte per i mercati dell'Estremo Oriente che utilizzano il formato MBCS, ad esempio il mercato giapponese, supportano l'IME di Windows per l'immissione di caratteri sia a byte singolo che doppio.  L'ambiente di sviluppo di Visual C\+\+ offre il supporto completo per l'IME.  Per ulteriori informazioni, vedere [Esempio IME: Dimostrazione del controllo della modalità IME e dell'implementazione del livello IME 3](http://msdn.microsoft.com/it-it/87ebdf65-cef0-451d-a6fc-d5fb64178b14).  
  
 Le tastiere giapponesi non supportano direttamente i caratteri Kanji.  L'IME converte una stringa fonetica, immessa in uno degli altri sistemi di scrittura giapponesi \(Romaji, Katakana o Hiragana\) nella possibile rappresentazione corrispondente Kanji.  Se si crea ambiguità, è possibile scegliere tra diverse alternative.  Una volta selezionato il carattere Kanji desiderato, l'IME passa due messaggi `WM_CHAR` all'applicazione di controllo.  
  
 L'IME, attivato dalla combinazione di tasti ALT\+\`, viene visualizzato come una serie di pulsanti \(un indicatore\) e una finestra di conversione.  L'applicazione posiziona la finestra nel punto di inserimento del testo.  L'applicazione dovrà gestire i messaggi `WM_MOVE` e `WM_SIZE` riposizionando la finestra di conversione in modo che si adatti alla nuova posizione o alle nuove dimensioni della finestra di destinazione.  
  
 Se si desidera che gli utenti dell'applicazione siano in grado di immettere i caratteri Kanji, l'applicazione dovrà poter gestire i messaggi dell'IME di Windows.  Per ulteriori informazioni sulla programmazione IME, vedere [Editor del metodo di input \(IME\)](https://msdn.microsoft.com/en-us/library/ms776145.aspx).  
  
## Debugger di Visual C\+\+  
 Il debugger di Visual C\+\+ consente di impostare i punti di interruzione sui messaggi dell'IME  e di visualizzare nella finestra Memoria i caratteri a byte doppio.  
  
## Strumenti della riga di comando  
 Gli strumenti della riga di comando di Visual C\+\+, inclusi il compilatore, NMAKE e il compilatore di risorse \(RC.EXE\), sono abilitati per il formato MBCS.  Quando si compilano le risorse dell'applicazione, è possibile utilizzare l'opzione \/c del compilatore di risorse per modificare la tabella codici predefinita.  
  
 Per modificare le impostazioni locali predefinite durante la compilazione del codice sorgente, utilizzare [\#pragma setlocale](../preprocessor/setlocale.md).  
  
## Strumenti grafici  
 Gli strumenti di Visual C\+\+ per Windows, quali Spy\+\+ e gli strumenti per la modifica delle risorse, offrono il supporto completo delle stringhe IME.  
  
## Vedere anche  
 [Supporto per set di caratteri multibyte \(MBCS, Multibyte Character Set\)](../text/support-for-multibyte-character-sets-mbcss.md)   
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)