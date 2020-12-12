---
description: 'Altre informazioni su: procedura: unboxing'
title: 'Procedura: Eseguire la conversione unboxing'
ms.date: 11/04/2016
helpviewer_keywords:
- unboxing
ms.assetid: 75794696-9275-47bf-9a7d-5abe6585ab91
ms.openlocfilehash: e5f3ae72f1d7b2340baa868a2e1d009b3534e701
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286319"
---
# <a name="how-to-unbox"></a>Procedura: Eseguire la conversione unboxing

Viene illustrato come eseguire l'unboxing e modificare un valore.

## <a name="example"></a>Esempio

```cpp
// vcmcppv2_unboxing.cpp
// compile with: /clr
using namespace System;

int main() {
   int ^ i = gcnew int(13);
   int j;
   Console::WriteLine(*i);   // unboxing
   *i = 14;   // unboxing and assignment
   Console::WriteLine(*i);
   j = safe_cast<int>(i);   // unboxing and assignment
   Console::WriteLine(j);
}
```

```Output
13
14
14
```

## <a name="see-also"></a>Vedere anche

[Boxing](../extensions/boxing-cpp-component-extensions.md)
