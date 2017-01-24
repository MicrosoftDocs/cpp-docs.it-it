---
title: "Avviso del compilatore C4962 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4962"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4962"
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4962
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo"  
  
 Una funzione non è stata compilata con \/LTCG:PGO perché i dati del conteggio \(profilo\) per la funzione non erano affidabili. Ripetere la profilatura per rigenerare il file PGC che contiene i dati del profilo non affidabili per tale funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).