---
title: "Utilizzo di C o C++ in blocchi __asm | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], elementi di C/C++"
  - "commenti, blocchi __asm"
  - "costanti, blocchi __asm"
  - "assembly inline, combinazione di istruzioni con istruzioni C/C++"
  - "macro, __asm (blocchi)"
  - "direttive del preprocessore"
  - "direttive del preprocessore, blocchi __asm"
  - "preprocessore, direttive"
  - "simboli, blocchi __asm"
  - "nomi di tipi, blocchi __asm"
  - "nomi typedef, blocchi __asm"
ms.assetid: ae8b2b52-6b75-42e3-ac0c-ad02d922ed97
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo di C o C++ in blocchi __asm
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Poiché le istruzioni assembly inline possono essere combinate con le istruzioni C\+\+ o C, le stesse possono riferirsi alle variabili C\+\+ o C indicandole per nome e utilizzare molti altri elementi di tali linguaggi.  
  
 Un blocco `__asm` può utilizzare i seguenti elementi di linguaggio:  
  
-   Simboli, incluse le etichette e i nomi di funzioni e variabili  
  
-   Costanti, incluse le costanti simboliche e i membri `enum`  
  
-   Direttive per il preprocessore e macro  
  
-   Commenti \(sia **\/\* \*\/** che **\/\/** \)  
  
-   Nomi dei tipi \(laddove sia possibile utilizzare i tipi MASM\)  
  
-   Nomi `typedef`, in genere utilizzati con operatori come **PTR** e **TYPE** o per specificare membri di struttura o di unione  
  
 All'interno di un blocco `__asm` è possibile specificare le costanti Integer sia con la notazione C che con la notazione base dell'assembler \(ad esempio, 0x100 e 100h sono equivalenti\).  Ciò consente di definire \(utilizzando `#define`\) una costante in C e utilizzarla in seguito nelle parti dell'assembly del programma C o C\+\+.  È inoltre possibile specificare le costanti nel formato ottale precedendole con 0.  Ad esempio, 0777 specifica una costante ottale.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo degli operatori in blocchi \_\_asm](../../assembler/inline/using-operators-in-asm-blocks.md)  
  
-   [Utilizzo di simboli C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)  
  
-   [Accesso a dati C o C\+\+ in blocchi \_\_asm](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)  
  
-   [Scrittura di funzioni con assembly inline](../../assembler/inline/writing-functions-with-inline-assembly.md)  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)