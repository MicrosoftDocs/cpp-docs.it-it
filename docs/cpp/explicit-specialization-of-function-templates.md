---
title: La specializzazione esplicita di modelli di funzione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- overriding, functions
- function templates, specialization
- explicit specialization of function templates
- declaring functions [C++], specialization of function template
- specialization of function templates
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e35eda35a7d2474826ce151292121be224955420
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410733"
---
# <a name="explicit-specialization-of-function-templates"></a>Specializzazione esplicita di modelli di funzioni
Con un modello di funzione, è possibile definire il comportamento speciale per un tipo specifico fornendo una specializzazione esplicita (ignora) del modello di funzione per quel tipo. Ad esempio:  
  
```cpp
template<> void MySwap(double a, double b);  
```  
  
 Questa dichiarazione consente di definire una funzione diversa per **doppie** variabili. Come funzioni non modello, le conversioni standard (quali la promozione di una variabile di tipo **float** a **doppie**) vengono applicati.  
  
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
