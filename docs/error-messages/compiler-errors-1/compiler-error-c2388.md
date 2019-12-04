---
title: Errore del compilatore C2388
ms.date: 11/04/2016
f1_keywords:
- C2388
helpviewer_keywords:
- C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
ms.openlocfilehash: 21658a659468a6e2a0d911af70eefdaed320446c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74745057"
---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388

' symbol ': non è possibile dichiarare un simbolo sia con __declspec (AppDomain) che con \__declspec (Process)

Non è possibile usare i modificatori `appdomain` e `process` `__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

L'esempio seguente genera l'errore C2388:

```cpp
// C2388.cpp
// compile with: /clr /c
__declspec(process) __declspec(appdomain) int i;   // C2388
__declspec(appdomain) int i;   // OK
```
