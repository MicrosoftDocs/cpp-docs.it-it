---
title: Compilatore (livello 1) Avviso C4810 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4810
dev_langs:
- C++
helpviewer_keywords:
- C4810
ms.assetid: 39e2cae0-9c1c-4ac1-aaa0-5f661d06085b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a803a219520519f91605971d6fd515746cabb37
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4810"></a>Avviso del compilatore (livello 1) C4810
valore di pragma pack(show) == n  
  
 Questo avviso viene generato quando si usa l'opzione **show** della direttiva pragma [pack](../../preprocessor/pack.md) . *n* è il valore corrente di pack.  
  
 Il codice seguente, ad esempio, illustra il funzionamento dell'avviso C4810 con la direttiva pragma pack:  
  
```  
// C4810.cpp  
// compile with: /W1 /LD  
// C4810 expected  
#pragma pack(show)  
#pragma pack(4)  
#pragma pack(show)  
```