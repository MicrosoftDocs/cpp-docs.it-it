---
title: Errore del compilatore C2599
ms.date: 11/04/2016
f1_keywords:
- C2599
helpviewer_keywords:
- C2599
ms.assetid: 88515f36-7589-47e2-862e-0de8b18d6668
ms.openlocfilehash: 872c3a66d4738c1a69990dffdbbc59cee9e90002
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544638"
---
# <a name="compiler-error-c2599"></a>Errore del compilatore C2599

'enum': dichiarazione con prototipo di tipo enum non è consentita

Il compilatore non supporta più la dichiarazione con prototipo di un'enumerazione gestita.

Dichiarazione con prototipo di un tipo enum non è consentita negli [/Za](../../build/reference/za-ze-disable-language-extensions.md).

L'esempio seguente genera l'errore C2599:

```
// C2599.cpp
// compile with: /clr /c
enum class Status;   // C2599

enum class Status2 { stop2, hold2, go2};

ref struct MyStruct {
   // Delete the following line to resolve.
   Status m_status;

   Status2 m_status2;   // OK
};

enum class Status { stop, hold, go };
```