---
title: "Operazioni bit per bit con segno | Microsoft Docs"
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
  - "operazioni bit per bit"
  - "operazioni bit per bit con segno"
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operazioni bit per bit con segno
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.3** Risultati delle operazioni bit per bit sui valori Signed Integer  
  
 Le operazioni bit per bit sui valori Signed Integer funzionano in modo analogo alle operazioni bit per bit sui valori Unsigned Integer.  È possibile ad esempio esprimere `–16 & 99` in binario come  
  
```  
  11111111 11110000  
& 00000000 01100011  
  _________________  
  00000000 01100000  
```  
  
 Il risultato dell'operazione AND bit per bit è 96.  
  
## Vedere anche  
 [Integer](../c-language/integers.md)