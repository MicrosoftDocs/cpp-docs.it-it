---
title: Compilatore avviso (livello 4) C4559 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4559
dev_langs:
- C++
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c853fa55482604d97c29653fadb06b0afdd44977
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33295350"
---
# <a name="compiler-warning-level-4-c4559"></a>Avviso del compilatore (livello 4) C4559
'function': ridefinizione. la funzione ottiene __declspec(modifier)  
  
 Ridefinizione o ridichiarazione di una funzione e la seconda definizione o dichiarazione aggiunto un _**declspec** modificatore (***modificatore***). Si tratta di un avviso informativo. Per risolvere questo problema, eliminare una delle definizioni.  
  
 L'esempio seguente genera l'errore C4559:  
  
```  
// C4559.cpp  
// compile with: /W4 /LD  
void f();  
__declspec(noalias) void f();   // C4559  
```