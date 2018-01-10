---
title: 'Unicode: set di caratteri wide | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.international
dev_langs: C++
helpviewer_keywords:
- Unicode [C++], wide character set
- wide characters [C++], Unicode
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 46702f9ea91c9cbba7f7ddbaadc23de88d80fe9c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="unicode-the-wide-character-set"></a>Unicode: set di caratteri wide
Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Qualsiasi carattere utilizzato nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentato in base alla specifica Unicode come carattere wide. Sviluppato e gestito da un grande consorzio che include Microsoft, lo standard Unicode ora è comunemente accettato.  
  
 Un carattere wide è di tipo `wchar_t`. Una stringa di caratteri wide è rappresentata come una matrice `wchar_t[]` ed è puntata da un puntatore `wchar_t*`. È possibile rappresentare qualsiasi carattere ASCII come carattere wide, facendolo precedere dalla lettera `L`. L'\0', ad esempio, è il carattere wide di terminazione `NULL` (a 16 bit). In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come un valore letterale stringa di caratteri wide anteponendovi la lettera "L" (L"Hello").  
  
 In genere, i caratteri wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, non è possibile rappresentare con la codifica multibyte più di un'impostazione locale per volta, mentre Unicode consente di rappresentare simultaneamente tutti i set di caratteri esistenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)