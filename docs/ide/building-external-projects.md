---
title: "Compilazione di progetti esterni | Microsoft Docs"
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
  - "compilazioni [C++], progetti esterni"
  - "progetti esterni"
  - "progetti Makefile, progetti esterni"
  - "progetti [C++], progetti esterni"
  - "progetti Visual C++, progetti esterni"
ms.assetid: 650b7803-ea91-489d-bee3-8f3e990e223c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione di progetti esterni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un progetto esterno è un progetto di Visual C\+\+ che utilizza un makefile o altre funzionalità al di fuori dell'ambiente di sviluppo di Visual C\+\+.  
  
 Se si dispone di un progetto esterno \(ad esempio un progetto makefile\) che si desidera compilare nell'ambiente di sviluppo Visual C\+\+, creare un progetto Makefile e specificare il comando di compilazione del progetto e l'output nella Creazione guidata applicazione makefile.  Per ulteriori informazioni, vedere [Creazione di un progetto makefile](../ide/creating-a-makefile-project.md).  
  
 Visual C\+\+ non supporta più la capacità di esportare un makefile relativo al progetto attivo dall'ambiente di sviluppo.  Utilizzare [Opzioni della riga di comando devenv](../Topic/Devenv%20Command%20Line%20Switches.md) per compilare progetti di Visual Studio dalla riga di comando.  
  
## Vedere anche  
 [Compilazione di progetti C\+\+ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)