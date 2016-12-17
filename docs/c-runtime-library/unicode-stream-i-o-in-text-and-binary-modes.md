---
title: "I/O flusso Unicode in modalit&#224; testo e binaria | Microsoft Docs"
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
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "I/O [CRT], flusso unicode"
  - "routine I/O di flussi"
  - "I/O di flussi unicode"
  - "Unicode, routine I/O di flussi"
ms.assetid: 68be0c3e-a9e6-4fd5-b34a-1b5207f0e7d6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# I/O flusso Unicode in modalit&#224; testo e binaria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando una routine di flusso I\/O Unicode \(come `fwprintf`, `fwscanf`, `fgetwc`, `fputwc`, `fgetws`, o `fputws`\) fa in modo che operi su un file aperto in modalità testo \(impostazione predefinita\), due tipi di conversioni di carattere vengono eseguiti:  
  
-   Conversione Unicode\-to\-MBCS o MBCS\-to\-Unicode.  Quando una funzione Unicode di I\/O flusso viene eseguita in modalità testo, si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte.  Pertanto, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione `mbtowc`.  Per qualche motivo, le funzioni Unicode di output flusso convertono i caratteri "wide" in caratteri multibyte, come se fosse una chiamata alla funzione `wctomb`.  
  
-   Conversione del ritorno a capo \- avanzamento riga \(CR\-LF\).  Questa conversione precede la conversione MBCS \- Unicode \(per le funzioni di input del flusso Unicode\) e dopo la conversione Unicode – MBCS \(per le funzioni di output del flusso Unicode\).  Durante l'input, ogni combinazione di ritorno a capo \- avanzamento di riga viene convertita in un unico carattere di avanzamento riga.  Durante l'output, ogni carattere di avanzamento di riga viene tradotto in una combinazione di ritorno a capo \- avanzamento di riga.  
  
 Tuttavia, quando una funzione Unicode di flusso I\/O viene eseguita in modalità binaria, il file viene considerato come Unicode e nessuna traduzione o conversione di carattere CR\-LF viene eseguita per l'input o l'output.  Utilizzare il \_setmode \(\_fileno \(stdin\), \_O\_BINARY\); istruzione per poter utilizzare wcin in un file di testo Unicode.  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Input e output](../c-runtime-library/input-and-output.md)