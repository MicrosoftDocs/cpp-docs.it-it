---
description: 'Altre informazioni su: errore del compilatore C3385'
title: Errore del compilatore C3385
ms.date: 11/04/2016
f1_keywords:
- C3385
helpviewer_keywords:
- C3385
ms.assetid: 5f1838c1-986e-47db-8dbc-e06976b83cf3
ms.openlocfilehash: d51659561deb21882532b772455cf1e3636684aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285565"
---
# <a name="compiler-error-c3385"></a>Errore del compilatore C3385

'class::function': una funzione che ha un attributo personalizzato DllImport non può restituire un'istanza di una classe

Una funzione definita come appartenente a un file DLL specificato con l'attributo `DllImport` non può restituire un'istanza di una classe.

L'esempio seguente genera l'errore C3385:

```cpp
// C3385.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

struct SomeStruct1 {};

public ref struct Wrap {
   [ DllImport("somedll.dll", CharSet=CharSet::Unicode) ]
   static SomeStruct1 f1([In, Out] SomeStruct1 *pS);   // C3385
};
```
