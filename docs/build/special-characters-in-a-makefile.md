---
title: "Caratteri speciali in un makefile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro, caratteri speciali"
  - "makefile, caratteri speciali"
  - "NMAKE (programma), caratteri speciali"
  - "caratteri speciali, in macro NMAKE"
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Caratteri speciali in un makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Anteporre un accento circonflesso \(^\) a un carattere speciale NMAKE per utilizzarlo come valore letterale di carattere.  Gli accenti circonflessi che precedono altri caratteri verranno ignorati.  I caratteri speciali sono:  
  
 `:  ;  #  (  )  $  ^  \  {  }  !  @  —`  
  
 Un accento circonflesso \(^\) in una stringa tra virgolette viene considerato come un valore letterale di accento circonflesso.  Un accento circonflesso posizionato alla fine di una riga inserisce un valore letterale di carattere di nuova riga in una stringa o in una macro.  
  
 Nelle macro una barra rovesciata \(\\\) seguita da un carattere di nuova riga viene sostituita da uno spazio.  
  
 Nei comandi il simbolo di percentuale \(%\) rappresenta un identificatore di file.  Per rappresentare il simbolo % letteralmente in un comando, specificarne due consecutivi \(%%\) invece di uno solo.  In altre situazioni il simbolo di percentuale \(%\) viene interpretato letteralmente, mentre il doppio simbolo di percentuale \(%%\) viene interpretato sempre come un unico simbolo di percentuale \(%\).  Pertanto, per rappresentare letteralmente un doppio simbolo di percentuale, specificarne tre \(%%%\) oppure quattro \(%%%%\).  
  
 Per utilizzare il simbolo di dollaro \($\) come carattere in un comando, è necessario specificarne due \($$\).  Questo metodo può essere utilizzato anche in altre situazioni in cui sia valida la combinazione ^$.  
  
## Vedere anche  
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)