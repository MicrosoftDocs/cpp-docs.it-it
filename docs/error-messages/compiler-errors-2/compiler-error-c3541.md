---
title: Errore del compilatore C3541 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3541
dev_langs:
- C++
helpviewer_keywords:
- C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a2440d1ab91cda00240d99d2188365754bd34fb3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33255110"
---
# <a name="compiler-error-c3541"></a>Errore del compilatore C3541
'type': Impossibile applicare typeid a un tipo che contiene 'auto'  
  
 Il [typeid](../../windows/typeid-cpp-component-extensions.md) operatore non può essere applicato al tipo indicato perché contiene il `auto` identificatore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3541.  
  
```  
// C3541.cpp  
// Compile with /Zc:auto  
#include <typeinfo>  
int main() {  
    auto x = 123;  
    typeid(x);    // OK  
    typeid(auto); // C3541  
    return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [auto Keyword](../../cpp/auto-keyword.md)   
 [/Zc: auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)   
 [typeid](../../windows/typeid-cpp-component-extensions.md)