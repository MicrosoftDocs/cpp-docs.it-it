---
title: "Errore del compilatore C2220 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2220"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2220"
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2220
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

avviso utilizzato come errore \- nessun file oggetto generato  
  
 Con [\/WX](../../build/reference/compiler-option-warning-level.md), tutti gli avvisi sono considerati errori.  Poiché si è verificato un errore, non è stato generato alcun oggetto o file eseguibile.  
  
 Questo errore viene visualizzato solo quando il flag **\/WX** viene impostato e un avviso viene generato durante la compilazione.  Per correggere questo errore, è necessario eliminare ogni avviso nel progetto.  
  
### Per risolvere il problema, utilizzare una delle seguenti tecniche  
  
-   Correggere i problemi che causano gli avvisi nel progetto.  
  
-   Compilare a un un livello di avviso inferiore\-ad esempio, utilizzare **\/W3** anziché **\/W4**.  
  
-   Utilizzare un pragma [warning](../../preprocessor/warning.md) per disabilitare o eliminare un avviso specifico.  
  
-   Non utilizzare **\/WX** per compilare.