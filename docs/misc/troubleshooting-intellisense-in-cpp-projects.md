---
title: "Risoluzione dei problemi relativi a IntelliSense nei progetti C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".ncb (file)"
  - "IntelliSense, risoluzione dei problemi di errori in progetti C++"
  - "ncb (file)"
  - "risoluzione dei problemi di IntelliSense"
  - "risoluzione dei problemi in Visual C++, IntelliSense"
ms.assetid: 72e4eb39-66d3-403d-8da7-00ed288a1899
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi a IntelliSense nei progetti C++
In alcune circorstanze IntelliSense può smettere di funzionare.  Utilizzare i passaggi seguenti per determinare la causa del mancato funzionamento di IntelliSense nei progetti C\+\+.  
  
### Per analizzare il mancato funzionamento di IntelliSense nei progetti C\+\+  
  
1.  Assicurarsi che il progetto di Visual C\+\+ non contenga errori di compilazione.  
  
    1.  Se si tratta di un progetto Makefile, vedere [Procedura: abilitare IntelliSense per progetti makefile](../ide/how-to-enable-intellisense-for-makefile-projects.md).  
  
2.  Assicurarsi che stdafx.h si trovi nel percorso di inclusione.  Per ulteriori informazioni sui percorsi di inclusione nei progetti di Visual C\+\+, vedere [Direttiva \#include](../preprocessor/hash-include-directive-c-cpp.md) e [\/I \(Directory di inclusione aggiuntive\)](../build/reference/i-additional-include-directories.md).  
  
## Limitazioni di IntelliSense  
 IntelliSense non funziona nei progetti C\+\+ nelle circostanze di seguito riportate:  
  
-   Il cursore si trova all'interno di un commento di codice.  
  
-   Si sta scrivendo una stringa in modo letterale.  
  
-   Un errore di sintassi compare sopra il cursore.  
  
-   La soluzione è costituita dalla sintassi per C\+\+ gestito o dalla sintassi delle estensioni gestite di C\+\+. precedente.  
  
-   IntelliSense non è completamente supportato quando si fa riferimento più volte a un file di intestazione utilizzando la direttiva `#include` e il significato di tale file cambia a causa di diversi stati delle macro, definiti attraverso la direttiva `#define`.  In altre parole, quando si include più volte un file di intestazione il cui utilizzo cambia in base ai diversi stati delle macro, il funzionamento di IntelliSense non è garantito.  
  
## Vedere anche  
 [Troubleshooting IntelliSense](http://msdn.microsoft.com/it-it/c1b3adb9-0d48-4770-a51e-392ed818c484)   
 [Procedura: organizzare file di output dei progetti per le compilazioni](../ide/how-to-organize-project-output-files-for-builds.md)