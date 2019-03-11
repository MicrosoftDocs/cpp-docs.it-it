---
title: 'Procedura: eseguire la conversione unboxing'
ms.date: 11/04/2016
helpviewer_keywords:
- unboxing
ms.assetid: 75794696-9275-47bf-9a7d-5abe6585ab91
ms.openlocfilehash: ae80497a24b090bc5866b3cfb22748b20adda223
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57747943"
---
# <a name="how-to-unbox"></a>Procedura: eseguire la conversione unboxing

Viene illustrato come eseguire la conversione unboxing e modificare un valore.

## <a name="example"></a>Esempio

```
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

[Boxing](../windows/boxing-cpp-component-extensions.md)
