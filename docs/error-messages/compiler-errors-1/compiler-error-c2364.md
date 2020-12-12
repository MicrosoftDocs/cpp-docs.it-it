---
description: 'Altre informazioni su: errore del compilatore C2364'
title: Errore del compilatore C2364
ms.date: 11/04/2016
f1_keywords:
- C2364
helpviewer_keywords:
- C2364
ms.assetid: 4f550571-94b5-42ca-84cb-663fecbead44
ms.openlocfilehash: 56d774a3ba681ec8cb3ab7bcf491766e30d6ba6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194877"
---
# <a name="compiler-error-c2364"></a>Errore del compilatore C2364

' type ': tipo non valido per l'attributo personalizzato

Gli argomenti denominati per gli attributi personalizzati sono limitati alle costanti in fase di compilazione. Ad esempio, i tipi integrali (int, char e così via), System:: Type ^ e System:: Object ^.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2364.

```cpp
// c2364.cpp
// compile with: /clr /c
using namespace System;

[attribute(AttributeTargets::All)]
public ref struct ABC {
public:
   // Delete the following line to resolve.
   ABC( Enum^ ) {}   // C2364
   ABC( int ) {}   // OK
};
```
