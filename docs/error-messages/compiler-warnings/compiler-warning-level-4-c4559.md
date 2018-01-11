---
title: Compilatore avviso (livello 4) C4559 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4559
dev_langs: C++
helpviewer_keywords: C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fa3dcd3bc2af9e7a9376ff6a2e5db31dbbe9c898
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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