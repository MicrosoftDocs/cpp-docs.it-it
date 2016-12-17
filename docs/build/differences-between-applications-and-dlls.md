---
title: "Differenze tra applicazioni e DLL | Microsoft Docs"
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
  - "applicazioni [C++], e DLL"
  - "DLL [C++], e applicazioni"
  - "file eseguibili [C++], DLL e applicazioni"
ms.assetid: 8f271523-d8d0-4ad1-84d2-0c5645d7fd5b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Differenze tra applicazioni e DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Benché siano entrambe moduli di programma eseguibili, le DLL e le applicazioni presentano varie differenze.  Per l'utente finale, la differenza più ovvia è data dal fatto che le DLL non sono programmi eseguibili direttamente.  Per il sistema, le differenze fondamentali tra applicazioni e DLL sono due:  
  
-   più istanze di un'applicazione possono essere eseguite contemporaneamente nel sistema, mentre è possibile eseguire una sola istanza di DLL alla volta;  
  
-   a differenza di una DLL, un'applicazione può contenere elementi quali uno stack, memoria globale, handle di file e una coda di messaggi.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportare da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Vantaggi dell'utilizzo delle DLL](../build/advantages-of-using-dlls.md)  
  
-   [DLL non MFC: cenni preliminari](../build/non-mfc-dlls-overview.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione: cenni preliminari](../build/extension-dlls-overview.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)