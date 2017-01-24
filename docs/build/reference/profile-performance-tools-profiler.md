---
title: "/PROFILE (Profiler strumenti di prestazioni) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.Profile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/PROFILE (opzione del linker)"
  - "-PROFILE (opzione del linker)"
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /PROFILE (Profiler strumenti di prestazioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Produce un file di output utilizzabile con il profiler di Strumenti per le prestazioni.  
  
## Sintassi  
  
```  
/PROFILE  
```  
  
## Note  
 \/PROFILE implica le opzioni del linker riportate di seguito:  
  
-   [\/OPT:REF](../../build/reference/opt-optimizations.md)  
  
-   \/OPT:NOICF  
  
-   [\/INCREMENTAL:NO](../../build/reference/incremental-link-incrementally.md)  
  
-   [\/FIXED:NO](../../build/reference/fixed-fixed-base-address.md)  
  
 \/PROFILE determina la generazione di una sezione di rilocazione nell'immagine del programma.  Una sezione di rilocazione consente al profiler di trasformare l'immagine del programma al fine di ottenere i dati di profilo.  
  
 **\/PROFILE** è disponibile solo nelle versioni Enterprise per team di sviluppo.  Per ulteriori informazioni su PREfast, vedere [Cenni preliminari sull'analisi del codice per C\/C\+\+](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Profilo**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)