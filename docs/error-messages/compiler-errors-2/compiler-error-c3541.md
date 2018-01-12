---
title: Errore del compilatore C3541 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3541
dev_langs: C++
helpviewer_keywords: C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eeef2650dd772784ceee5e7802a46650e4cfcbe1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 [parola chiave Auto](../../cpp/auto-keyword.md)   
 [/Zc: auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)   
 [typeid](../../windows/typeid-cpp-component-extensions.md)