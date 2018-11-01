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
ms.openlocfilehash: 3d91383f895f1a8be983efe42f685419ca988823
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665179"
---
# <a name="explicit-specialization-of-function-templates"></a>Specializzazione esplicita di modelli di funzioni

Con un modello di funzione, è possibile definire il comportamento speciale per un tipo specifico fornendo una specializzazione esplicita (ignora) del modello di funzione per quel tipo. Ad esempio:

```cpp
template<> void MySwap(double a, double b);
```

Questa dichiarazione consente di definire una funzione diversa per **doppie** variabili. Come funzioni non modello, le conversioni di tipo standard (quali la promozione di una variabile di tipo **float** al **double**) vengono applicati.

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