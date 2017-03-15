---
title: "Errore irreversibile C1005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1005"
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

stringa troppo grande per il buffer  
  
 Una stringa in un file intermedio del compilatore ha causato l'overflow di un buffer.  
  
 Questo errore viene in genere visualizzato quando il parametro passato alle opzioni del compilatore [\/Fd](../../build/reference/fd-program-database-file-name.md) o [\/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) è maggiore di 256 byte.