---
title: Compilatore avviso (livello 3) C4278 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4278
dev_langs:
- C++
helpviewer_keywords:
- C4278
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b556166f61c5d77ac34fb7243ac25d5baeaa2b1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-3-c4278"></a>Avviso del compilatore (livello 3) C4278
'identifier': identificatore nella libreria dei tipi 'tlb' è già una macro. Utilizzare il qualificatore 'rename'  
  
 Quando si utilizza [#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi da importare tenta di dichiarare un identificatore ***identificatore***. Tuttavia, questo è già un simbolo valido.  
  
 Utilizzare il `#import` **rinominare** attributo per assegnare un alias per il simbolo della libreria dei tipi.