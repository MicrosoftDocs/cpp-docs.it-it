---
title: "Errore irreversibile U1099 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1099"
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1099 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow dello stack  
  
 Il makefile in corso di elaborazione è troppo complesso per l'allocazione di stack corrente di NMAKE.  L'allocazione a disposizione di NMAKE è di 0x3000 \(12 KB\).  
  
 Per aumentare l'allocazione per lo stack di NMAKE, eseguire l'utilità [editbin \/stack](../../build/reference/stack.md) con un'opzione di stack maggiore:  
  
 **editbin \/STACK:reserve NMAKE.EXE**  
  
 dove *reserve* è un numero maggiore di quello dell'allocazione per lo stack corrente di NMAKE.