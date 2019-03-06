---
title: Errore del compilatore C3132
ms.date: 11/04/2016
f1_keywords:
- C3132
helpviewer_keywords:
- C3132
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
ms.openlocfilehash: 1a97e04747cb92909380e66d1f4ea8ca62183054
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424171"
---
# <a name="compiler-error-c3132"></a>Errore del compilatore C3132

'-parametro della funzione': le matrici di parametri è applicabile solo a un argomento formale di tipo 'array gestito monodimensionale'

Il <xref:System.ParamArrayAttribute> attributo è stato applicato a un parametro che non rappresenta una matrice unidimensionale.

L'esempio seguente genera l'errore C3132:

```
// C3132.cpp
// compile with: /clr /c
using namespace System;
void f( [ParamArray] Int32[,] );   // C3132
void g( [ParamArray] Int32[] );   // C3132

void h( [ParamArray] array<Char ^> ^ MyArray );   // OK
```