---
title: Compilatore avviso (livello 2) C4307 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4307
dev_langs:
- C++
helpviewer_keywords:
- C4307
ms.assetid: 7cca11e9-be61-49e4-8b15-88b84f0cbf07
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 52914fc5825bda5647308c006b853538f3d6225e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292032"
---
# <a name="compiler-warning-level-2-c4307"></a>Avviso del compilatore (livello 2) C4307
'operator': overflow di costante integrale  
  
 L'operatore viene utilizzato in un'espressione che restituisce una costante integer all'overflow lo spazio allocato. Si potrebbe essere necessario utilizzare un tipo più grande per la costante. Oggetto **tipo signed int** contiene un valore minore rispetto a un `unsigned int` perché il **tipo signed int** utilizza un bit per rappresentare il segno.  
  
 L'esempio seguente genera l'errore C4307:  
  
```  
// C4307.cpp  
// compile with: /W2  
int i = 2000000000 + 2000000000;   // C4307  
int j = (unsigned)2000000000 + 2000000000;   // OK  
  
int main()  
{  
}  
```