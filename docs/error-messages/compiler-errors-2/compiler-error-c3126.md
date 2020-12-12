---
description: 'Altre informazioni su: errore del compilatore C3126'
title: Errore del compilatore C3126
ms.date: 11/04/2016
f1_keywords:
- C3126
helpviewer_keywords:
- C3126
ms.assetid: e72658a3-5d85-4a31-89a4-dbc3d475973d
ms.openlocfilehash: 7084359ae0be412ccb36e9a634cc72848f1c8daa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345459"
---
# <a name="compiler-error-c3126"></a>Errore del compilatore C3126

Impossibile definire un'Unione ' Union ' all'interno del tipo gestito ' type '

Impossibile definire un'Unione all'interno di un tipo gestito.

L'esempio seguente genera l'C3126:

```cpp
// C3126_2.cpp
// compile with: /clr /c
ref class Test
{
   union x
   {   // C3126
      int a;
      int b;
   };
};
```
