---
title: Errore del compilatore C2504
ms.date: 11/04/2016
f1_keywords:
- C2504
helpviewer_keywords:
- C2504
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
ms.openlocfilehash: d47d99962d089d873cb9bbdf9baac7eab706fc16
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746890"
---
# <a name="compiler-error-c2504"></a>Errore del compilatore C2504

' Class ': classe di base non definita

La classe base è dichiarata ma non definita.  Cause possibili:

1. Manca il file di inclusione.

1. Classe di base esterna non dichiarata con [extern](../../cpp/using-extern-to-specify-linkage.md).

L'esempio seguente genera l'C2504:

```cpp
// C2504.cpp
// compile with: /c
class A;
class B : public A {};   // C2504
```

Ok

```
class C{};
class D : public C {};
```
