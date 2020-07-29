---
title: Errore del compilatore C3384
ms.date: 11/04/2016
f1_keywords:
- C3384
helpviewer_keywords:
- C3384
ms.assetid: c9f92c6a-62a9-4333-b2b1-bc55c7f288b6
ms.openlocfilehash: fdc129be94fce3f97eca988d8080e9d01fd48248
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221094"
---
# <a name="compiler-error-c3384"></a>Errore del compilatore C3384

'type_parameter': i vincoli value e ref si escludono a vicenda

Non è possibile vincolare un tipo generico sia a che a **`value class`** **`ref class`** .

Per ulteriori informazioni, vedere [vincoli sui parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3384.

```cpp
// C3384.cpp
// compile with: /c /clr
generic <typename T>
where T : ref class
where T : value class   // C3384
ref class List {};
```
