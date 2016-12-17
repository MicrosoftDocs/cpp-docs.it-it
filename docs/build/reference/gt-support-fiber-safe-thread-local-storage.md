---
title: "/GT (Supporta archiviazione locale di thread indipendente da fiber) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.EnableFiberSafeOptimizations"
  - "/gt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GT (opzione del compilatore) [C++]"
  - "archiviazione locale di thread statica indipendente da fiber (opzione del compilatore) [C++]"
  - "GT (opzione del compilatore) [C++]"
  - "-GT (opzione del compilatore) [C++]"
  - "archiviazione locale di thread statica e indipendenza da fiber"
  - "archiviazione locale di thread"
ms.assetid: 071fec79-c701-432b-9970-457344133159
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /GT (Supporta archiviazione locale di thread indipendente da fiber)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta l'indipendenza da fiber per i dati assegnati utilizzando l'archiviazione locale di thread statica, ovvero i dati allocati con `__declspec(thread)`.  
  
## Sintassi  
  
```  
/GT  
```  
  
## Note  
 Ai dati dichiarati con `__declspec(thread)` viene fatto riferimento tramite una matrice TLS \(Thread\-Local Storage\).  La matrice TLS è una matrice di indirizzi che il sistema gestisce per ciascun thread.  Ogni indirizzo in questa matrice fornisce la posizione dei dati di archiviazione thread\-local.  
  
 Un fiber è un oggetto leggero composto da uno stack e da un contesto di registro e può essere pianificato su vari thread.  Può inoltre essere eseguito su qualsiasi thread.  Poiché un fiber può essere scambiato e riavviato in un secondo momento su un thread diverso, l'indirizzo della matrice TLS non deve essere inserito nella cache o ottimizzato come sottoespressione comune in una chiamata di funzione. Per informazioni dettagliate al riguardo, vedere l'opzione [\/Og \(Ottimizzazioni globali\)](../../build/reference/og-global-optimizations.md).  **\/GT** impedisce questo tipo di ottimizzazioni.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Attiva ottimizzazioni fiber**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)