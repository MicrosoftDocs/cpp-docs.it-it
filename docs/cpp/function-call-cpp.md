---
title: Chiamata di funzione (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function calls, C++ functions
- functions [C++], calling
- operator overloading [C++], function calls
- function overloading [C++], function-call operator
- function calls, operator
- operators [C++], overloading
- operator overloading [C++], examples
- function call operator ()
ms.assetid: 5094254a-045b-46f7-8653-69bc91e80dce
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: e066ab4c154c04c0c1a39b7f8d0164881a0a96cc
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="function-call-c"></a>Chiamata di funzione (C++)
L'operatore di chiamata di funzione, richiamato mediante l'uso delle parentesi, è un operatore binario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
primary-expression ( expression-list )  
```  
  
## <a name="remarks"></a>Note  
 In questo contesto, `primary-expression` è il primo operando e `expression-list`, probabilmente un elenco di argomenti vuoto, è il secondo operando. L'operatore di chiamata di funzione viene usato per operazioni che richiedono un certo numero di parametri. Questo procedimento funziona perché `expression-list` è un elenco e non un singolo operando. L'operatore di chiamata di funzione deve essere una funzione membro non statica.  
  
 Quando è sottoposto a overload, l'operatore di chiamata di funzione non modifica le modalità di chiamata delle funzioni, ma il modo in cui deve essere interpretato l'operatore quando viene applicato a oggetti di un dato tipo classe. Ad esempio, il codice seguente sarebbe normalmente privo di significato:  
  
```  
Point pt;  
pt( 3, 2 );  
```  
  
 Dato un appropriato operatore di chiamata di funzione sottoposto a overload, tuttavia, è possibile usare questa sintassi per compensare le 3 unità della coordinata `x` e le 2 unità della coordinata `y`. Questa definizione viene illustrata dal codice seguente:  
  
```  
// function_call.cpp  
class Point  
{  
public:  
    Point() { _x = _y = 0; }  
    Point &operator()( int dx, int dy )  
        { _x += dx; _y += dy; return *this; }  
private:  
    int _x, _y;  
};  
  
int main()  
{  
   Point pt;  
   pt( 3, 2 );  
}  
```  
  
 Si noti che l'operatore di chiamata di funzione viene applicato al nome di un oggetto e non al nome di una funzione.  
  
 È possibile sottoporre a overload l'operatore di chiamata di funzione anche usando un puntatore a una funzione (e non la funzione medesima).  
  
```cpp  
typedef void(*ptf)();  
void func()  
{  
}  
struct S  
{  
   operator ptf()  
   {  
      return func;  
   }  
};  
  
int main()  
{  
   S s;  
   s();//operates as s.operator ptf()()  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
