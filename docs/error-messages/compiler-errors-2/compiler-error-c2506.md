---
title: Errore del compilatore C2506
ms.date: 11/04/2016
f1_keywords:
- C2506
helpviewer_keywords:
- C2506
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
ms.openlocfilehash: 593fbbc6b561e6390624aa79af14dc665a552990
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746838"
---
# <a name="compiler-error-c2506"></a>Errore del compilatore C2506

' member ': non è possibile applicare ' __declspec (modificatore)' a questo simbolo

Non è possibile dichiarare i membri statici di una classe gestita per processo o per dominio di applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2506.

```cpp
// C2506.cpp
// compile with: /clr /c
ref struct R {
   __declspec(process) static int n;   // C2506
   int o;   // OK
};
```
