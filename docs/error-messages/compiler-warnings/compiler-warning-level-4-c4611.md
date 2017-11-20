---
title: Compilatore avviso (livello 4) C4611 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4611
dev_langs: C++
helpviewer_keywords: C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8f2ed128d37ff4c09247097d771bc62a97f6e757
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611
interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile  
  
 In alcune piattaforme, le funzioni che includono **catch** potrebbe non supportare la semantica di oggetti C++ di distruzione quando sono fuori ambito.  
  
 Per evitare un comportamento imprevisto, evitare di utilizzare **catch** in funzioni che dispongono di costruttori e distruttori.  
  
 Questo avviso viene generato solo una volta. vedere [avviso pragma](../../preprocessor/warning.md).