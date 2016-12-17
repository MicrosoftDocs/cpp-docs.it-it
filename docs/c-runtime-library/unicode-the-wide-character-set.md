---
title: "Unicode: set di caratteri estesi | Microsoft Docs"
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
  - "c.international"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Unicode [C++], set di caratteri "wide""
  - "caratteri wide [C++], Unicode"
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Unicode: set di caratteri estesi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un carattere di tipo "wide" è un codice di carattere multilingue a due byte.  Alcuni dei caratteri utilizzati nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentata in base alla specifica Unicode come carattere di tipo "wide".  Compilato e gestito da un grande consorzio, incluso Microsoft, lo standard Unicode ora è largamente accettato.  
  
 Un carattere wide è di tipo `wchar_t`.  Una stringa di caratteri wide è rappresentata come un array `wchar_t[]` ed è puntato da un puntatore `wchar_t*`.  È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo "wide", facendolo precedere dalla lettera `L`.  L'\\0', ad esempio, è il carattere esteso di terminazione `NULL` \(a 16 bit\).  In modo analogo, qualsiasi stringa letterale ASCII può essere rappresentata come una stringa effettiva con caratteri estesi, anteponendovi la lettera "L", ad esempio L"Hello".  
  
 In genere, i caratteri di tipo "wide" occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce.  Inoltre, non è possibile rappresentare con la codifica multibyte più di un'impostazione locale per volta, mentre Unicode consente di rappresentare simultaneamente tutti i set di caratteri esistenti.  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)