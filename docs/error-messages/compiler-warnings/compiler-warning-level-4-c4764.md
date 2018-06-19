---
title: Compilatore avviso (livello 4) C4764 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4764
dev_langs:
- C++
helpviewer_keywords:
- C4764
ms.assetid: 7bd4296f-966b-484c-bf73-8dbc8e85b4a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f400cd28f5c96ab53bf92f5ea86786efdf5ce55
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33294495"
---
# <a name="compiler-warning-level-4-c4764"></a>Avviso del compilatore (livello 4) C4764
Non è possibile allineare oggetti catch a un numero di byte maggiore di 16  
  
 È stato specificato un allineamento maggiore di 16, ma in alcune piattaforme, se la funzione genera un'eccezione, lo stack forzerà un allineamento non maggiore di 16.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4764:  
  
```  
// C4764.cpp  
// compile with: /W4 /EHsc  
// processor: x64 IPF  
#include <stdio.h>  
  
class A   
{  
public:  
    int x;  
};  
  
typedef __declspec(align(32)) A ALIGNEDA;  
  
int main()   
{  
    ALIGNEDA a;  
    try   
    {  
        a.x = 15;  
        throw a;  
    }  
    catch (ALIGNEDA b) // can’t align b to > 16 bytes  
    {  
        printf_s("%d\n", b.x);  
    }  
}   // C4764  
```