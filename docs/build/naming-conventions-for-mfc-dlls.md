---
title: Convenzioni di denominazione per le DLL MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC libraries [C++], naming conventions
- naming conventions [C++], MFC DLLs
- MFC DLLs [C++], naming conventions
- libraries [C++], MFC DLL names
- shared DLL versions [C++]
- DLLs [C++], naming conventions
- DLLs [C++], library names
ms.assetid: 0db9c3f3-87d3-40e8-8964-250f9d2a2209
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4f7702e9babcc4769136d6deab63b627f8b09bd4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="naming-conventions-for-mfc-dlls"></a>Convenzioni di denominazione per le DLL MFC
Le DLL e librerie incluse in MFC seguono una convenzione di denominazione strutturata. Questo rende più semplice sapere quali DLL o della libreria da utilizzare per un determinato scopo.  
  
 Le librerie di importazione necessari per compilare applicazioni o DLL di estensione MFC che utilizzano queste DLL con lo stesso nome di base della DLL, ma hanno un'estensione di file con estensione LIB.  
  
### <a name="shared-dll-naming-convention"></a>Convenzione di denominazione delle DLL condivise  
  
|DLL|Descrizione|  
|---------|-----------------|  
|MFCx0|DLL MFC, versione ANSI|  
|Mfcx0u|DLL MFC, versione Unicode|  
|MFCx0D. dll|DLL MFC, versione di Debug ANSI|  
|MFCx0UD.DLL|DLL MFC, versione di Unicode Debug|  
  
 Se si collega in modo dinamico per la versione DLL condivisa di MFC, se si tratta di un'applicazione o da una DLL di estensione MFC, è necessario includere MFCx0 con il prodotto. Se è necessario il supporto Unicode nell'applicazione, è possibile includere Mfcx0u.  
  
 Se si collega la DLL in modo statico a MFC, è necessario collegare con una delle librerie MFC statiche. Queste versioni vengono denominate in base alla convenzione di [N &#124; U] AFXCW [D]. LIB. Per ulteriori informazioni, vedere la tabella "Convenzioni di denominazione della libreria di collegamento statico" in [convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md) (MFC).  
  
 Per un elenco di DLL di Visual C++ che può essere distribuito con le applicazioni, vedere il file Redist in installazione di Visual Studio.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [La convenzione di denominazione per le raccolte](../mfc/library-naming-conventions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)