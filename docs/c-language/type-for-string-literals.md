---
title: "Tipo per valori letterali stringa | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "stringhe letterali, tipo"
  - "tipi [C], stringhe letterali"
ms.assetid: f50a28af-20c1-4440-bdc6-564c86a309c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipo per valori letterali stringa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I valori letterali stringa hanno una matrice di tipo `char` \(ovvero, **char\[ \]**\). Le stringhe di caratteri wide hanno matrice di tipo `wchar_t` \(ovvero, **wchar\_t\[ \]**\). Questo significa che una stringa è una matrice con elementi di tipo `char`.  Il numero di elementi della matrice è uguale al numero di caratteri della stringa più uno per il carattere di terminazione null.  
  
## Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)