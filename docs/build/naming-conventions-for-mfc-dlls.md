---
title: "Convenzioni di denominazione per le DLL MFC | Microsoft Docs"
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
  - "DLL [C++], nomi di librerie"
  - "DLL [C++], convenzioni di denominazione"
  - "librerie [C++], DLL MFC (nomi)"
  - "DLL MFC [C++], convenzioni di denominazione"
  - "librerie MFC [C++], convenzioni di denominazione"
  - "convenzioni di denominazione [C++], DLL MFC"
  - "versioni DLL condivise [C++]"
ms.assetid: 0db9c3f3-87d3-40e8-8964-250f9d2a2209
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Convenzioni di denominazione per le DLL MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le DLL e le librerie incluse in MFC seguono una convenzione di denominazione strutturata.  In tal modo, viene semplificata l'individuazione della DLL o della libreria da utilizzare per un determinato scopo.  
  
 Le librerie di importazione necessarie per compilare applicazioni o DLL di estensione che utilizzano queste DLL hanno lo stesso nome di base della DLL con estensione LIB.  
  
### Convenzione di denominazione delle DLL condivise  
  
|DLL|Descrizione|  
|---------|-----------------|  
|MFCx0.DLL|DLL MFC, versione di rilascio ANSI|  
|MFCx0U.DLL|DLL MFC, versione di rilascio Unicode|  
|MFCx0D.DLL|DLL MFC, versione di debug ANSI|  
|MFCx0UD.DLL|DLL MFC, versione di debug Unicode|  
  
 Se ci si collega in modo dinamico alla versione di DLL condivisa di MFC, da un'applicazione o da una DLL di estensione, è necessario includere MFCx0.DLL con il prodotto.  Se la propria applicazione richiede il supporto Unicode, includere invece MFCx0U.DLL.  
  
 Se si collega la propria DLL in modo statico a MFC, è necessario collegarla a una delle librerie MFC statiche.  Queste versioni vengono denominate in base alla convenzione \[N&#124;U\]AFXCW\[D\].LIB.  Per ulteriori informazioni, vedere la tabella "Convenzioni di denominazione delle librerie a collegamento statico" in [Convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md) \(MFC\).  
  
 Per l'elenco delle DLL di Visual C\+\+ che possono essere distribuite con le applicazioni, vedere il file Redist.txt nella directory di installazione di Visual Studio.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Convenzioni di denominazione per le librerie](../mfc/library-naming-conventions.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)