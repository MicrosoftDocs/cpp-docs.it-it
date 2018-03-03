---
title: Compilatore (livello 3) avviso C4373 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4373
dev_langs:
- C++
helpviewer_keywords:
- C4373
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 43523cb5f4c024ec3e937e88fca7f78c341ab19d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4373"></a>Avviso del compilatore (livello 3) C4373
'%$S': la funzione virtuale esegue l'override di '%$pS', le versioni precedenti del compilatore non hanno eseguito l'override se i parametri si differenziavano solo per i qualificatori const/volatile  
  
 L'applicazione contiene un metodo in una classe derivata che esegue l'override di un metodo virtuale in una classe base ed i parametri nel metodo di overriding differiscono per un solo qualificatore [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md) rispetto ai parametri del metodo virtuale. Questo significa che il compilatore deve associare un riferimento della funzione al metodo nella base o classe derivata.  
  
 Le versioni del compilatore precedenti a [!INCLUDE[cpp_orcas_long](../../cpp/includes/cpp_orcas_long_md.md)] associano la funzione al metodo nella classe base, quindi generano un messaggio di avviso. Le versioni successive del compilatore ignorano il qualificatore `const` o `volatile` , associano la funzione al metodo nella classe derivata e generano quindi l'avviso `C4373`. Questo secondo comportamento è conforme allo standard C++.  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente genera l'avviso C4373.  
  
```  
// c4373.cpp  
// compile with: /c /W3  
#include <stdio.h>  
struct Base  
{  
    virtual void f(int i) {  
        printf("base\n");  
    }  
};  
struct Derived : Base  
{  
    void f(const int i) {  // C4373  
        printf("derived\n");  
    }  
};  
void main()  
{  
    Derived d;  
    Base* p = &d;  
    p->f(1);  
}  
```  
  
```Output  
derived  
```