---
title: "Opzioni /O (Ottimizza codice) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.Optimization"
  - "/o"
  - "VC.Project.VCCLWCECompilerTool.Optimization"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, prestazioni"
  - "prestazioni, compilatore cl.exe"
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni /O (Ottimizza codice)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le opzioni **\/O** controllano diverse ottimizzazioni che consentono di creare codice per velocità massima o dimensioni minime.  
  
-   [\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) ottimizza il codice per ottenere dimensioni minime.  
  
-   [\/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) ottimizza il codice per ottenere la velocità massima.  
  
-   [\/Ob](../../build/reference/ob-inline-function-expansion.md) controlla l'espansione delle funzioni inline.  
  
-   [\/Od](../../build/reference/od-disable-debug.md) disabilita l'ottimizzazione, accelerando la compilazione e semplificando il debug.  
  
-   [\/Og](../../build/reference/og-global-optimizations.md) abilita ottimizzazioni globali.  
  
-   [\/Oi](../../build/reference/oi-generate-intrinsic-functions.md) genera funzioni intrinseche per chiamate di funzione appropriate.  
  
-   [\/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) indica al compilatore di preferire le ottimizzazioni per dimensione a quelle per velocità.  
  
-   [\/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) \(impostazione predefinita\) indica al compilatore di preferire le ottimizzazioni per velocità a quelle per dimensione.  
  
-   [\/Ox](../../build/reference/ox-full-optimization.md) seleziona l'ottimizzazione completa.  
  
-   [\/Oy](../../build/reference/oy-frame-pointer-omission.md) elimina la creazione di puntatori ai frame nello stack delle chiamate per chiamate di funzione più veloci.  
  
## Osservazioni  
 È inoltre possibile combinare più opzioni **\/O** in un'unica istruzione dell'opzione.  `/Odi` equivale, ad esempio, a `/Od /Oi`.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)