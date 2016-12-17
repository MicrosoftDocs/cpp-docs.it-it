---
title: "Convenzioni di iostream | Microsoft Docs"
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
  - "iostream (intestazione)"
  - "libreria C++ standard, iostream"
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
caps.latest.revision: 10
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Convenzioni di iostream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le intestazioni di iostream supportano le conversioni tra testo e form codificati e input e output ai file esterni:  
  
|||  
|-|-|  
|[\<fstream\>](../standard-library/fstream.md)|[\< iomanip \>](../standard-library/iomanip.md)|  
|[\<ios\>](../standard-library/ios.md)|[\<iosfwd\>](../standard-library/iosfwd.md)|  
|[\<iostream\>](../standard-library/iostream.md)|[\< istream \>](../standard-library/istream.md)|  
|[\<ostream\>](../standard-library/ostream.md)|[\<sstream\>](../standard-library/sstream.md)|  
|[\< streambuf \>](../standard-library/streambuf.md)|[\<strstream\>](../standard-library/strstream.md)|  
  
 Il più semplice utilizzo di iostream richiede solo di includere l'intestazione [\<iostream\>](../standard-library/iostream.md).  È quindi possibile estrarre i valori da [cin](../Topic/cin.md) o da [wcin](../Topic/wcin.md) per leggere input standard.  Le regole per tale operazione sono descritte nella descrizione della classe [Classe basic\_istream](../standard-library/basic-istream-class.md).  È anche possibile inserire i valori a [cout](../Topic/cout.md) o a [wcout](../Topic/wcout.md) per scrivere l'output standard.  Le regole per tale operazione sono descritte nella descrizione della classe [Classe basic\_ostream](../standard-library/basic-ostream-class.md).  Il comune del controllo di formato a entrambi gli estrattori e insertors viene gestito dalla classe [Classe basic\_ios](../standard-library/basic-ios-class.md).  Modificare queste informazioni di formato riportata di spoglie dell'estrazione e incolla di oggetti è la provincia dei manipolatori.  
  
 È possibile eseguire le stesse operazioni di iostream sui file aperto per nome, utilizzando le classi dichiarate in [\<fstream\>](../standard-library/fstream.md).  Per convertire tra iostream e gli oggetti della classe [Classe basic\_string](../standard-library/basic-string-class.md), utilizzare le classi dichiarate in [\<sstream\>](../standard-library/sstream.md).  Per eseguire la stessa operazione con stringhe in C, utilizzare le classi dichiarate in [\<strstream\>](../standard-library/strstream.md).  
  
 Le intestazioni rimanenti forniscono servizi di supporto, in genere di interesse diretto solo agli utenti più avanzati delle classi di iostream.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)