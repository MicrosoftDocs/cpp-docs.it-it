---
title: Compilatore avviso (livello 1) C4508 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4508
dev_langs:
- C++
helpviewer_keywords:
- C4508
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53f152c2f3573e5f3bd7b8e9be0603ed6d3f11bb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283196"
---
# <a name="compiler-warning-level-1-c4508"></a>Avviso del compilatore (livello 1) C4508
'function': funzione deve restituire un valore. 'void' verrà restituito il tipo  
  
 La funzione non dispone di alcun tipo restituito specificato. In questo caso, C4430 deve generare anche e il compilatore implementa per risolvere il problema segnalato da C4430 (valore predefinito è di tipo int).  
  
 Per risolvere il problema, è necessario dichiarare in modo esplicito il tipo restituito delle funzioni.  
  
 L'esempio seguente genera l'errore C4508:  
  
```  
// C4508.cpp  
// compile with: /W1 /c  
#pragma warning (disable : 4430)  
func() {}   // C4508  
void func2() {}   // OK  
```