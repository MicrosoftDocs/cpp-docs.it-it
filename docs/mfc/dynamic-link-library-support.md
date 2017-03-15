---
title: "Supporto libreria di collegamento dinamico | Microsoft Docs"
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
  - "DLL [C++], MFC"
  - "DLL MFC [C++], DLL regolari"
  - "NAFXDW.LIB"
  - "NAFXDWD.LIB"
  - "DLL regolari [C++], destinazioni progetti come DLL"
  - "USRDLL, supporto DLL"
ms.assetid: cc31c69f-3c78-4db1-9ecd-0fd8dc3217e3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Supporto libreria di collegamento dinamico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le librerie di NAFXCWD.lib e di NAFXCW.lib \(elencate nella tabella delle convenzioni di denominazione delle librerie a collegamento statico in [Convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md)\) crea il progetto come libreria a collegamento dinamico, denominata "di una DLL regolare" \(precedentemente un "USRDLL"\) che può essere utilizzato con le applicazioni non compilate con la libreria di classi.  Questo supporto di DLL non è lo stesso di MFCx0.DLL e MFCx0D.DLL \(noti come AFXDLL\), che contengono l'intera libreria di classi in una DLL.  Per ulteriori informazioni, vedere [DLLs](../build/dlls-in-visual-cpp.md).  Per una tabella dei nomi delle DLL, vedere [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md).  
  
## Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)