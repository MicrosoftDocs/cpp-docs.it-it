---
title: -PROFILE (Profiler strumenti di prestazioni) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VC.Project.VCLinkerTool.Profile
dev_langs: C++
helpviewer_keywords:
- -PROFILE linker option
- /PROFILE linker option
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 54aff4c81b0bff9fcd6727333ee7d17c76564c71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="profile-performance-tools-profiler"></a>/PROFILE (Profiler strumenti di prestazioni)
Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/PROFILE  
```  
  
## <a name="remarks"></a>Note  
 /Profile implica le seguenti opzioni del linker:  
  
-   [/OPT: REF](../../build/reference/opt-optimizations.md)  
  
-   /OPT: NOICF  
  
-   [/INCREMENTAL: NO](../../build/reference/incremental-link-incrementally.md)  
  
-   [/FIXED: NO](../../build/reference/fixed-fixed-base-address.md)  
  
 O il profilo indica al linker di generare una sezione di rilocazione nell'immagine del programma.  Una sezione di rilocazione consente al profiler di trasformare l'immagine di programma per ottenere dati di profilo.  
  
 **/ PROFILO** è disponibile solo nelle versioni Enterprise per team di sviluppo.  Per ulteriori informazioni su PREfast, vedere [analisi del codice per C/C++ Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **profilo** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)