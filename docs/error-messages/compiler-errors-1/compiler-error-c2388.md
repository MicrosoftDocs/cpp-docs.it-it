---
description: 'Altre informazioni su: errore del compilatore C2388'
title: Errore del compilatore C2388
ms.date: 11/04/2016
f1_keywords:
- C2388
helpviewer_keywords:
- C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
ms.openlocfilehash: 63a2758b4e214b38c7d999bdc2a33d328709ea67
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123981"
---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388

' symbol ': non è possibile dichiarare un simbolo sia con __declspec (AppDomain) che con \_ _declspec (Process)

`appdomain` `process` **`__declspec`** Non è possibile usare i modificatori e sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

L'esempio seguente genera l'errore C2388:

```cpp
// C2388.cpp
// compile with: /clr /c
__declspec(process) __declspec(appdomain) int i;   // C2388
__declspec(appdomain) int i;   // OK
```
