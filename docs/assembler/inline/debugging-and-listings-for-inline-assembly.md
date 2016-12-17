---
title: "Debug ed elenchi per assembly inline | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__asm (parola chiave) [C++], debug"
  - "bug, __asm (blocchi)"
  - "debug [C++], codice assembly inline"
  - "assembly inline, debug"
  - "assembly inline, elenchi"
  - "debugger livello di origine"
ms.assetid: 69266930-6f9a-433d-b704-f4f44e7b2583
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Debug ed elenchi per assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 I programmi contenenti codice assembly inline possono essere sottoposti a debug con un debugger a livello di origine se si esegue la compilazione con l'opzione [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 All'interno del debugger è possibile impostare punti di interruzione sia in C che in C\+\+ oltre che righe in linguaggio assembly.  Se si abilita la modalità di compilazione mista assembly e linguaggio di origine, è possibile visualizzare sia l'origine che il form disassemblato del codice assembly.  
  
 Tenere presente che l'inserimento di più istruzioni assembly o di più istruzioni del linguaggio di origine su una singola riga può compromettere il debug.  Nella modalità di origine è possibile utilizzare il debugger per impostare i punti di interruzione in una singola riga, ma non nelle singole istruzioni sulla stessa riga.  Lo stesso principio viene applicato a un blocco `__asm` definito come macro C, che si espande in una singola riga logica.  
  
 Se si crea un listato misto di assembly e linguaggio di origine con l'opzione del compilatore [\/FAs](../../build/reference/fa-fa-listing-file.md), il listato conterrà sia i form dell'assembly che del linguaggio di origine di ogni riga in linguaggio assembly.  Le macro non vengono espanse nei listati, ma durante la compilazione.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)