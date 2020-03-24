---
title: Specializzazione esplicita di modelli di funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- overriding, functions
- function templates, specialization
- explicit specialization of function templates
- declaring functions [C++], specialization of function template
- specialization of function templates
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
ms.openlocfilehash: c9d77cef790bdd0a65651ffb7246e685175482b1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179991"
---
# <a name="explicit-specialization-of-function-templates"></a>Specializzazione esplicita di modelli di funzioni

Con un modello di funzione, è possibile definire il comportamento speciale per un tipo specifico fornendo una specializzazione esplicita (ignora) del modello di funzione per quel tipo. Ad esempio:

```cpp
template<> void MySwap(double a, double b);
```

Questa dichiarazione consente di definire una funzione diversa per le variabili **Double** . Analogamente alle funzioni non modello, vengono applicate le conversioni di tipi standard, ad esempio la promozione di una variabile di tipo **float** a **Double**.

## <a name="example"></a>Esempio

```cpp
// explicit_specialization.cpp
template<class T> void f(T t)
{
};

// Explicit specialization of f with 'char' with the
// template argument explicitly specified:
//
template<> void f<char>(char c)
{
}

// Explicit specialization of f with 'double' with the
// template argument deduced:
//
template<> void f(double d)
{
}
int main()
{
}
```

## <a name="see-also"></a>Vedere anche

[Modelli di funzioni](../cpp/function-templates.md)
