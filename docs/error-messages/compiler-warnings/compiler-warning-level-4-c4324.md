---
title: Compilatore avviso (livello 4) C4324 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4324
dev_langs:
- C++
helpviewer_keywords:
- C4324
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c34d2fb963be790cfd28f08dd4339fa8ac200c6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298977"
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