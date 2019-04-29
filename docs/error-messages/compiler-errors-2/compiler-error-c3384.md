---
title: Errore del compilatore C3384
ms.date: 11/04/2016
f1_keywords:
- C3384
helpviewer_keywords:
- C3384
ms.assetid: c9f92c6a-62a9-4333-b2b1-bc55c7f288b6
ms.openlocfilehash: d1b7e1a69035df358cf84ad791f611928dab8b5a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328763"
---
# <a name="compiler-error-c3384"></a>Errore del compilatore C3384

'type_parameter': i vincoli value e ref si escludono a vicenda

Non è possibile vincolare un tipo generico sia a `value class` che `ref class`.

Visualizzare [vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3384.

```
// C3384.cpp
// compile with: /c /clr
generic <typename T>
where T : ref class
where T : value class   // C3384
ref class List {};
```