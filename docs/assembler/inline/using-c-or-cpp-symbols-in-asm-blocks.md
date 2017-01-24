---
title: "Utilizzo di simboli C o C++ in blocchi __asm | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], sintassi"
  - "simboli, blocchi __asm"
  - "Visual C, simboli in blocchi __asm"
  - "Visual C++, blocchi __asm"
ms.assetid: 0758ffdc-dfe9-41c8-a5e1-fd395bcac328
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo di simboli C o C++ in blocchi __asm
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 Un  `__asm`blocco può fare riferimento a qualsiasi simbolo C o C\+\+ in cui viene visualizzato il blocco di ambito.  \(Simboli C e C\+\+ sono nomi di variabili, i nomi di funzione e le etichette. in altre parole, i nomi non sono costanti simboliche o  `enum`membri.  È possibile chiamare i membri di C\+\+ funzioni.\)  
  
 Alcune limitazioni all'uso di simboli C e C\+\+:  
  
-   Ogni istruzione in linguaggio assembly può contenere solo una C o simbolo di C\+\+.  Più simboli possono essere visualizzati nella stessa istruzione assembly solo con  **lunghezza**,  **tipo**, e  **dimensione** espressioni.  
  
-   Funzioni a cui fa riferimento un  `__asm`blocco deve essere dichiarato precedentemente nel programma \(prototipo\).  In caso contrario, il compilatore non è possibile distinguere i nomi di funzione e le etichette nel  `__asm`blocco.  
  
-   Un  `__asm`blocco non è possibile utilizzare i simboli C o C\+\+ con la stessa ortografia parole MASM riservato \(senza distinzione tra minuscole\).  Parole riservate di MASM includono nomi di istruzioni, ad esempio  **PUSH** e registrare nomi quali accensione comandata.  
  
-   Tag di struttura e di unione non vengono riconosciute nelle  `__asm`blocchi.  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Utilizzo di C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)