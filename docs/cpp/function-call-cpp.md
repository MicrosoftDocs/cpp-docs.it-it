---
title: Funzione chiamata (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0d583609a1013620384e7e938182403fb5c694fb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081396"
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

```cpp
Point pt;
pt( 3, 2 );
```

Dato un appropriato operatore di chiamata di funzione sottoposto a overload, tuttavia, è possibile usare questa sintassi per compensare le 3 unità della coordinata `x` e le 2 unità della coordinata `y`. Questa definizione viene illustrata dal codice seguente:

```cpp
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