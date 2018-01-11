---
title: Compilatore avviso (livello 3) C4278 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4278
dev_langs: C++
helpviewer_keywords: C4278
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 249b13b70f3f10942852d7a9aa13dcf4f08e1f7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4278"></a>Avviso del compilatore (livello 3) C4278
'identifier': identificatore nella libreria dei tipi 'tlb' è già una macro. Utilizzare il qualificatore 'rename'  
  
 Quando si utilizza [#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi da importare tenta di dichiarare un identificatore ***identificatore***. Tuttavia, questo è già un simbolo valido.  
  
 Utilizzare il `#import` **rinominare** attributo per assegnare un alias per il simbolo della libreria dei tipi.