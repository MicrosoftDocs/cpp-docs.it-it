---
title: Compilatore avviso (livello 4) C4324 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4324
dev_langs: C++
helpviewer_keywords: C4324
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 5b284da42b5928d0cd040f73486056f3163e7948
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4324"></a>Avviso del compilatore (livello 4) C4324
'nome_struttura': è stato applicato un riempimento struttura Align  
  
 La spaziatura interna è stata aggiunta alla fine di una struttura poiché è stato specificato un [__declspec(align)](../../cpp/align-cpp.md) valore.  
  
 Ad esempio, il codice seguente genera l'errore C4324:  
  
```  
// C4324.cpp  
// compile with: /W4  
struct __declspec(align(32)) A  
{  
   char a;  
};   // C4324  
  
int main()  
{  
}  
```