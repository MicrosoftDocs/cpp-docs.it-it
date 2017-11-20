---
title: Supporto di libreria a collegamento dinamico | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- regular MFC DLLs [MFC], project targets as DLLs
- DLLs [MFC], MFC
- NAFXDW.LIB
- MFC DLLs [MFC], regular MFC DLLs
- USRDLLs, DLL support
- NAFXDWD.LIB
ms.assetid: cc31c69f-3c78-4db1-9ecd-0fd8dc3217e3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 95e7586dc15c641ff4915b3257f4ed33a552fde2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dynamic-link-library-support"></a>Supporto libreria di collegamento dinamico
Le librerie lib e NAFXCWD (elencate nella tabella convenzioni di denominazione di libreria a collegamento statico [convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md)) creare il progetto come una libreria a collegamento dinamico, denominata "DLL MFC regolare" (in precedenza "USRDLL") che può essere utilizzato con applicazioni non è state compilate con la libreria di classi. Questo supporto DLL non è identico MFCx0 e MFCx0D. dll (noto come AFXDLL), che contengono l'intera libreria di classi in una DLL. Per ulteriori informazioni, vedere [DLL](../build/dlls-in-visual-cpp.md). Per una tabella dei nomi delle DLL, vedere [convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)

