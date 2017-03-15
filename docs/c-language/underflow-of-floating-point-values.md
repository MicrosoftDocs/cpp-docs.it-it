---
title: "Underflow di valori a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Underflow di valori a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` sugli errori relativi all'intervallo di underflow  
  
 Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`.  Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)