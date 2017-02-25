---
title: "Compiler Error C3550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3550"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3550"
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Compiler Error C3550
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

in questo contesto sono consentiti solo valori 'decltype\(auto\)' normali  
  
 Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo.  Non può essere usato come parte di una dichiarazione di puntatore \(`decltype(auto*)`\), di una dichiarazione di riferimento \(`decltype(auto&)`\) di qualsiasi altra qualifica simile.  
  
## Vedere anche  
 [auto](../../cpp/auto-cpp.md)