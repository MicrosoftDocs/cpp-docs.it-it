---
title: 'Procedura: bloccare puntatori e matrici | Microsoft Docs'
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- pointers, pinning
- arrays [C++], pinning
ms.assetid: ee783260-e676-46b8-a38e-11a06f1d57b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7adf9d4d45b4acafd65adc27e28d8eb0639d32c8
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49327895"
---
# <a name="how-to-pin-pointers-and-arrays"></a>Procedura: bloccare puntatori e matrici

Il blocco di un oggetto secondario definito in un oggetto gestito comporta il blocco di tutto l'oggetto.  Ad esempio, se un qualsiasi elemento di una matrice è bloccato, sarà bloccata tutta la matrice. Non esistono estensioni del linguaggio per dichiarare una matrice bloccata. Per bloccare una matrice, dichiarare un puntatore di blocco al relativo tipo di elemento e bloccarne uno degli elementi.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// pin_ptr_array.cpp
// compile with: /clr
#include <stdio.h>
using namespace System;

int main() {
   array<Byte>^ arr = gcnew array<Byte>(4);
   arr[0] = 'C';
   arr[1] = '+';
   arr[2] = '+';
   arr[3] = '\0';
   pin_ptr<Byte> p = &arr[1];   // entire array is now pinned
   unsigned char * cp = p;

   printf_s("%s\n", cp); // bytes pointed at by cp
                         // will not move during call
}
```

```Output
++
```

## <a name="see-also"></a>Vedere anche

[pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)