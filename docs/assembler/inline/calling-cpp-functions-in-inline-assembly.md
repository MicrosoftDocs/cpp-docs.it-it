---
title: "Chiamata di funzioni C++ in assembly inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], funzioni chiamanti"
  - "chiamate di funzione, funzioni C++"
  - "chiamate di funzione, assembly inline"
  - "funzioni [C++], chiamata in assembly inline"
  - "assembly inline, funzioni chiamanti"
  - "Visual C++, funzioni"
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Chiamata di funzioni C++ in assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Un blocco `__asm` può chiamare solo le funzioni globali C\+\+ non in overload.  Se si chiama una funzione globale C\+\+ in overload o una funzione membro C\+\+, il compilatore genera un errore.  
  
 È inoltre possibile chiamare qualsiasi funzione dichiarata con il collegamento **extern "C"**.  In questo modo un blocco `__asm` nel programma C\+\+ può chiamare le funzioni di libreria C perché tutti i file di intestazione standard dichiarano che le funzioni di libreria utilizzano il collegamento **extern "C"**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)