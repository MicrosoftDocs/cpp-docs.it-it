---
title: "Avviso degli strumenti del linker LNK4254 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4254"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4254"
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso degli strumenti del linker LNK4254
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sezione 'sezione1' \(offset\) unita in 'sezione2' \(offset\) con attributi diversi  
  
 È stato unito il contenuto di due sezioni con attributi diversi.  È possibile che i risultati del programma differiscano da quelli previsti.  Ad esempio, i dati desiderati in modalità di sola lettura potrebbero trovarsi in una sezione modificabile.  
  
 Per evitare di visualizzare l'avviso LNK4254, modificare o rimuovere la richiesta di unione.  
  
 Per computer x86 e destinazioni Windows CE \(ARM, MIPS, SH4 e Thumb\) con Visual C\+\+, la sezione .CRT è di sola lettura.  Se il codice dipende dal comportamento precedente \(le sezioni .CRT sono di lettura e scrittura\), potrebbero verificarsi comportamenti imprevisti.  
  
 Per ulteriori informazioni, vedere,  
  
-   [\/MERGE \(Combina sezioni\)](../../build/reference/merge-combine-sections.md)  
  
-   [comment](../../preprocessor/comment-c-cpp.md)  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK4254:  
  
```  
// LNK4254.cpp  
// compile with: /W1 /link /WX  
// LNK4254 expected  
#pragma comment(linker, "/merge:.data=.text")  
int main() {}  
```