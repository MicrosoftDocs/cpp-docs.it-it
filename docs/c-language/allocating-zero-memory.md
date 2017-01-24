---
title: "Nessuna allocazione di memoria | Microsoft Docs"
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
  - "allocazione di memoria, memoria azzerata"
  - "memoria azzerata"
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Nessuna allocazione di memoria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.10.3** Comportamento della funzione `calloc`, `malloc` o `realloc` se la dimensione richiesta è zero  
  
 Le funzioni `calloc`, `malloc` e `realloc` accettano lo zero come argomento.  Non è stata allocata alcuna memoria, ma viene restituito un puntatore valido e il blocco di memoria può essere modificato in un secondo momento da realloc.  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)