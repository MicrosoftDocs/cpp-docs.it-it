---
title: "Errori di posizione file | Microsoft Docs"
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
helpviewer_keywords: 
  - "puntatori a file [C++], errori di posizione file"
ms.assetid: d5e59d8b-08c0-4927-a338-0b2d8234ce24
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Errori di posizione file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.9.9.1, 4.9.9.4** Il valore a cui la macro `errno` viene impostata dalla funzione `fgetpos` o `ftell` in caso di errore  
  
 Quando `fgetpos` o `ftell` non riesce, `errno` è impostato sulla costante del manifesto `EINVAL` se il percorso non è valido o EBADF se il numero di file non è corretto.  Le costanti sono definite in ERRNO.H.  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)