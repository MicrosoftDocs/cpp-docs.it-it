---
title: Errore del compilatore C2599 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2599
dev_langs:
- C++
helpviewer_keywords:
- C2599
ms.assetid: 88515f36-7589-47e2-862e-0de8b18d6668
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 515e380ea87b8ea648a00644ce8bca6428903f18
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044483"
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