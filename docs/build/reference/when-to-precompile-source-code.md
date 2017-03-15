---
title: "Condizioni per la precompilazione del codice sorgente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di intestazione precompilata, quando precompilare"
  - "codice sorgente, precompilazione"
ms.assetid: eb8ba193-fd87-40d3-9545-c75deabe37cb
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Condizioni per la precompilazione del codice sorgente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il codice precompilato risulta utile durante il ciclo di sviluppo per ridurre il tempo di compilazione, specialmente nelle seguenti situazioni:  
  
-   Se si utilizza sempre un grande corpo di codice cui vengono raramente apportate modifiche.  
  
-   Se il programma include più moduli, che utilizzano tutti un set standard di file di inclusione e le stesse opzioni di compilazione.  In questo caso è possibile precompilare tutti i file di inclusione in un'intestazione precompilata.  
  
 La prima compilazione, che crea il file di intestazione precompilata, richiede più tempo rispetto alle compilazioni successive.  Le successive compilazioni possono essere più rapide grazie all'inserimento del codice precompilato.  
  
 È possibile precompilare programmi sia in linguaggio C che in C\+\+.  Nella programmazione in linguaggio C\+\+ è pratica comune separare le informazioni sull'interfaccia delle classi in file di intestazione.  Questi file di intestazione potranno in seguito essere inclusi in programmi che utilizzano la classe.  La precompilazione di queste intestazioni consente di ridurre il tempo necessario per la compilazione di un programma.  
  
> [!NOTE]
>  Sebbene sia possibile utilizzare solo un file di intestazione precompilata \(pch\) per ciascun file di origine, è possibile utilizzare più file pch in uno stesso progetto.  
  
## Vedere anche  
 [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)