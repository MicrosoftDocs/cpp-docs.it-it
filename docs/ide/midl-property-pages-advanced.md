---
title: 'Pagine delle proprietà MIDL: Avanzate | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
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
dev_langs:
- C++
helpviewer_keywords:
- MIDL, property pages
ms.assetid: d1c92e01-f403-4ed6-ab45-4043a3c9c6bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5f87518c23848cea91a3e3c48361aa0a63fa88a2
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33330804"
---
# <a name="midl-property-pages-advanced"></a>Pagine delle proprietà MIDL: Avanzate
La pagina delle proprietà **Avanzate** nella cartella **MIDL** consente di specificare le opzioni seguenti del compilatore MIDL:  
  
-   Abilita controllo errori ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla allocazioni ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla limiti ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla intervallo di enumerazione ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla puntatori di riferimento ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Controlla dati stub ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Convalida parametri ([/robust](http://msdn.microsoft.com/library/windows/desktop/aa367363)) *  
  
-   Allineamento membri struct ([/Zp](http://msdn.microsoft.com/library/windows/desktop/aa367388))  
  
-   Reindirizza output ([/o](http://msdn.microsoft.com/library/windows/desktop/aa367351))  
  
-   Opzioni di pre-elaborazione C ([/cpp_opt](http://msdn.microsoft.com/library/windows/desktop/aa367318))  
  
-   Rimuovi definizioni per il preprocessore ([/U](http://msdn.microsoft.com/library/windows/desktop/aa367373))  
  
 \* /robust è applicabile solo alle compilazioni per un computer Windows 2000 o versione successiva. Se si compila un progetto ATL e si vuole usare /robust, modificare questa riga nel file dlldatax.c:  
  
```  
#define _WIN32_WINNT 0x0400   //for Windows NT 4.0 or Windows 95 with DCOM  
to   
#define _WIN32_WINNT 0x0500   //for Windows NT 4.0 or Windows 95 with DCOM  
```  
  
 Per informazioni sull'accesso alla pagina delle proprietà **Avanzate** nella cartella **MIDL**, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).  
  
 Per informazioni su come accedere a livello di codice alle opzioni MIDL per i progetti C++, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)