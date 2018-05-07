---
title: Compilatore avviso (livello 3) C4619 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4619
dev_langs:
- C++
helpviewer_keywords:
- C4619
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cd598c99e87947d60831a1d62c268e3b5797b4ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-3-c4619"></a>Avviso del compilatore (livello 3) C4619
\#avviso pragma: nessun numero avviso 'number'  
  
 È stato effettuato un tentativo di disattivare un avviso che non esiste.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4619:  
  
```  
// C4619.cpp  
// compile with: /W3 /c  
#pragma warning(default : 4619)  
#pragma warning(disable : 4354)   // C4619, C4354 does not exist  
```