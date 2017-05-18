---
title: C3445 errore del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 04/10/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3445
dev_langs:
- C++
helpviewer_keywords:
- C3445
ms.assetid: 0d272bfc-136b-4025-a9ba-5e4eea5f8215
caps.latest.revision: 3
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: c89d7f1f13829422a330960ac319531fc551fb97
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3445"></a>C3445 errore del compilatore
inizializzazione di elenco copia di '*tipo*' non è possibile utilizzare un costruttore esplicito  
  
Secondo lo standard C++ 17 ISO, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload in elenco-inizializzazione di copia, ma deve generare un errore se tale overload scelto.  
  
A partire da Visual Studio 2017, il compilatore rileva errori relativi alla creazione di oggetti utilizzando un elenco di inizializzatori non trovate da Visual Studio 2015. Questi errori potrebbero causare un comportamento non definito in fase di esecuzione o di arresti anomali del sistema.

## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3445.  
  
```cpp  
// C3445.cpp  
struct A
{
    explicit A(int) {} 
    A(double) {}
};

int main()
{
    A a1 = { 1 };     // error C3445: copy-list-initialization of 
                      //     'A' cannot use an explicit constructor
}
```  
  
Per correggere l'errore, utilizzare invece l'inizializzazione diretta:  
  
```cpp  
// C3445b.cpp  
struct A
{
    explicit A(int) {} 
    A(double) {}
};

int main()
{
    A a1{ 1 };
}  
```  
  
