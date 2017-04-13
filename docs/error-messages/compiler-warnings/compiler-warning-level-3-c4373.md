---
title: Compilatore (livello 3) avviso C4373 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4373
dev_langs:
- C++
helpviewer_keywords:
- C4373
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 36d4491f8a621f1ee97de9682faf94a26a89fa70
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-3-c4373"></a>Avviso del compilatore (livello 3) C4373
'%$S': la funzione virtuale esegue l'override di '%$pS', le versioni precedenti del compilatore non hanno eseguito l'override se i parametri si differenziavano solo per i qualificatori const/volatile  
  
 L'applicazione contiene un metodo in una classe derivata che esegue l'override di un metodo virtuale in una classe di base e i parametri nel metodo di overriding differiscono solo per un [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md) qualificatore dai parametri del metodo virtuale. Questo significa che il compilatore deve associare un riferimento della funzione al metodo nella base o classe derivata.  
  
 Versioni del compilatore precedenti a [!INCLUDE[cpp_orcas_long](../../cpp/includes/cpp_orcas_long_md.md)] associano la funzione al metodo nella classe base, quindi inviare un messaggio di avviso. Le versioni successive del compilatore ignorano il qualificatore `const` o `volatile` , associano la funzione al metodo nella classe derivata e generano quindi l'avviso `C4373`. Questo secondo comportamento è conforme allo standard C++.  
  
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
