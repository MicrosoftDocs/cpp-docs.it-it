---
description: 'Altre informazioni su: errore del compilatore C3118'
title: Errore del compilatore C3118
ms.date: 11/04/2016
f1_keywords:
- C3118
helpviewer_keywords:
- C3118
ms.assetid: 40fbe681-8868-4cb2-a2b2-4db4449319a7
ms.openlocfilehash: cc6d9c446603adaa314480f8f18ae8bd2c168277
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151099"
---
# <a name="compiler-error-c3118"></a>Errore del compilatore C3118

' Interface ': le interfacce non supportano l'ereditarietà virtuale

Si è provato a ereditare virtualmente da un'interfaccia. ad esempio:

```cpp
// C3118.cpp
__interface I1 {
};

__interface I2 : virtual I1 {   // C3118
};
```

genera questo errore.
