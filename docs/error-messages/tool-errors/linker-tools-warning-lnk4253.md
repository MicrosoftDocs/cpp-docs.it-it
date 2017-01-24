---
title: "Avviso degli strumenti del linker LNK4253 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4253"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4253"
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4253
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sezione 'sezione1' non unita in 'sezione2' perché già unita in 'sezione3'  
  
 Il linker ha rilevato più richieste di unione in conflitto.  Una delle richieste verrà ignorata.  
  
 È stata rilevata un'opzione o una direttiva **\/MERGE**, ma la sezione `from` è già stata unita in un'altra sezione in seguito a un'opzione o a una direttiva **\/MERGE** precedente o a un'unione implicita dal linker.  
  
 Per correggere l'errore LNK4253, rimuovere una delle richieste di unione.  
  
 Per computer x86 e destinazioni Windows CE \(ARM, MIPS, SH4 e Thumb\) con Visual C\+\+, la sezione .CRT è ora di sola lettura.  Se il codice dipende dal comportamento precedente \(le sezioni con estensione CRT sono di lettura e scrittura\), potrebbero verificarsi comportamenti imprevisti.  
  
 Per ulteriori informazioni, vedere,  
  
-   [\/MERGE \(Combina sezioni\)](../../build/reference/merge-combine-sections.md)  
  
-   [comment](../../preprocessor/comment-c-cpp.md)  
  
## Esempio  
 Nell'esempio riportato di seguito al linker viene richiesto di unire la sezione `.rdata` due volte, ma in sezioni diverse.  Nell'esempio viene generato l'errore LNK4253.  
  
```  
// LNK4253.cpp  
// compile with: /W1 /link /merge:.rdata=text2  
// LNK4253 expected  
#pragma comment(linker, "/merge:.rdata=.text")  
int main() {}  
```