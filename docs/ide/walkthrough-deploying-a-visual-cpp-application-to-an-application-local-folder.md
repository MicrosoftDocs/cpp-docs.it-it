---
title: "Procedura dettagliata: distribuzione di un&#39;applicazione Visual C++ in una cartella locale di un&#39;applicazione | Microsoft Docs"
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
  - "applicazioni Visual C++ (distribuzione)"
ms.assetid: 47a81c47-9dbe-47c6-96cc-fbb2fda5e6ad
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: distribuzione di un&#39;applicazione Visual C++ in una cartella locale di un&#39;applicazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto come distribuire un'applicazione di Visual C\+\+ copiando i file nella cartella.  
  
## Prerequisiti  
  
-   Un computer con Visual Studio installata.  
  
-   Un altro computer che non dispone delle librerie di Visual C\+\+.  
  
### Per distribuire un'applicazione in una cartella locale di un'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i passaggi di [Procedura dettagliata: distribuire un'applicazione Visual C\+\+ tramite un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).  
  
2.  Copiare MFC e la raccolta appropriati di \(CRT\) di runtime del linguaggio C per ad esempio, per una piattaforma x86 e il supporto Unicode, copiare mfc100u.dll e msvcr100.dll da \\Program Files\\Microsoft Visual Studio 10.0\\VC\\redist\\x86\\, quindi incollarli nella cartella \\Release\\ del progetto MFC.  Per ulteriori informazioni su altri file che potrebbe essere necessario copiare, vedere [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
3.  Eseguire l'applicazione MFC in un secondo computer che non dispone delle librerie di Visual C\+\+.  
  
    1.  Copiare il contenuto \\ release \\ e incollili nella cartella applicazione nel secondo computer.  
  
    2.  Eseguire l'applicazione nel secondo computer.  
  
     L'applicazione verrà eseguita correttamente perché le librerie Visual C\+\+ sono disponibili nella cartella locale dell'applicazione.  
  
## Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)