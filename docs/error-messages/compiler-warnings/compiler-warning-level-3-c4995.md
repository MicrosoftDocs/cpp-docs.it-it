---
title: Compilatore avviso (livello 3) C4995 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4995
dev_langs:
- C++
helpviewer_keywords:
- C4995
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4c8bf04670f8899209a42e2cc8d20420d522ef4c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4995"></a>Compilatore avviso (livello 3) C4995
'function': nome contrassegnato come obsoleto #pragma  
  
 Il compilatore ha rilevato una funzione contrassegnata con il pragma [deprecato](../../preprocessor/deprecated-c-cpp.md). È possibile che tale funzione non sia più supportata in una versione futura. È possibile disattivare questo avviso con il [avviso](../../preprocessor/warning.md) pragma (ad esempio riportato di seguito).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4995:  
  
```  
// C4995.cpp  
// compile with: /W3  
#include <stdio.h>  
  
// #pragma warning(disable : 4995)  
void func1(void)  
{  
    printf("\nIn func1");  
}  
  
int main()   
{  
    func1();  
    #pragma deprecated(func1)  
    func1();   // C4995  
}  
```