---
description: 'Altre informazioni su: errore del compilatore C3132'
title: Errore del compilatore C3132
ms.date: 11/04/2016
f1_keywords:
- C3132
helpviewer_keywords:
- C3132
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
ms.openlocfilehash: e81ddcb977342a687dce329239a590f90eca67ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177393"
---
# <a name="compiler-error-c3132"></a>Errore del compilatore C3132

' function-parameter ': le matrici di parametri possono essere applicate solo a un argomento formale di tipo ' array gestito unidimensionale '

L' <xref:System.ParamArrayAttribute> attributo è stato applicato a un parametro che non è una matrice unidimensionale.

L'esempio seguente genera l'C3132:

```cpp
// C3132.cpp
// compile with: /clr /c
using namespace System;
void f( [ParamArray] Int32[,] );   // C3132
void g( [ParamArray] Int32[] );   // C3132

void h( [ParamArray] array<Char ^> ^ MyArray );   // OK
```
