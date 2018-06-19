---
title: Compilatore avviso (livello 1) C4716 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4716
dev_langs:
- C++
helpviewer_keywords:
- C4716
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be620264c315fc9c2ff3cd4cb91bd9d77c8a4d07
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33288853"
---
# <a name="compiler-warning-level-1-c4716"></a>Avviso del compilatore (livello 1) C4716
'function' deve restituire un valore  
  
 La funzione specificata non ha restituito un valore.  
  
 Funziona solo con un tipo restituito void possono utilizza il comando restituito senza un valore restituito.  
  
 Quando questa funzione viene chiamata, verrà restituito un valore non definito.  
  
 Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).  
  
 L'esempio seguente genera l'errore C4716:  
  
```  
// C4716.cpp  
// compile with: /c /W1  
// C4716 expected  
#pragma warning(default:4716)  
int test() {  
   // uncomment the following line to resolve  
   // return 0;  
}  
```