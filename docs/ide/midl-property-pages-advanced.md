---
title: "Pagine delle proprietà MIDL: Avanzate | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCMidlTool.ErrorCheckBounds
- VC.Project.VCMidlTool.ErrorCheckStubData
- VC.Project.VCMidlTool.ErrorCheckAllocations
- VC.Project.VCMidlTool.CPreprocessOptions
- VC.Project.VCMidlTool.UndefinePreprocessorDefinitions
- VC.Project.VCMidlTool.EnableErrorChecks
- VC.Project.VCMidlTool.RedirectOutputAndErrors
- VC.Project.VCMidlTool.ErrorCheckEnumRange
- VC.Project.VCMidlTool.StructMemberAlignment
- VC.Project.VCMidlTool.ErrorCheckRefPointers
- VC.Project.VCMidlTool.ValidateParameters
dev_langs: C++
helpviewer_keywords: MIDL, property pages
ms.assetid: d1c92e01-f403-4ed6-ab45-4043a3c9c6bb
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 15abdc0f35d3f69e301020bb3c9c4f8fb6e9d321
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="midl-property-pages-advanced"></a>Pagine delle proprietà MIDL: Avanzate
Il **avanzate** pagina delle proprietà di **MIDL** cartella consente di specificare le seguenti opzioni del compilatore MIDL:  
  
-   Abilitare il controllo degli errori ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controllare le allocazioni ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla limiti ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla intervallo di enumerazione ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla puntatori di riferimento ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla dati Stub ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   La convalida dei parametri ([/robust](http://msdn.microsoft.com/library/windows/desktop/aa367363)) *  
  
-   Allineamento membri struct ([/Zp](http://msdn.microsoft.com/library/windows/desktop/aa367388))  
  
-   Reindirizzare l'Output ([/o](http://msdn.microsoft.com/library/windows/desktop/aa367351))  
  
-   Opzioni di pre-elaborazione C ([/cpp_opt](http://msdn.microsoft.com/library/windows/desktop/aa367318))  
  
-   Rimuovi definizioni per il preprocessore ([/u](http://msdn.microsoft.com/library/windows/desktop/aa367373))  
  
 \*/ è efficace solo per uso quando si compila per Windows 2000 o versioni successive macchina. Se si compila un progetto ATL e si desidera utilizzare /robust, modificare questa riga nel file dlldatax. c:  
  
```  
#define _WIN32_WINNT 0x0400   //for Windows NT 4.0 or Windows 95 with DCOM  
to   
#define _WIN32_WINNT 0x0500   //for Windows NT 4.0 or Windows 95 with DCOM  
```  
  
 Per informazioni su come accedere il **avanzate** pagina delle proprietà di **MIDL** cartella, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
 Per informazioni su come accedere a livello di codice alle opzioni MIDL per i progetti C++, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)