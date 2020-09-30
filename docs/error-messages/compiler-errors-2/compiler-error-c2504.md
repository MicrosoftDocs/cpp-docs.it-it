---
title: Errore del compilatore C2504
ms.date: 11/04/2016
f1_keywords:
- C2504
helpviewer_keywords:
- C2504
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
ms.openlocfilehash: 0860f4b860b370f96c2c29046b090d5b205c63ba
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509394"
---
# <a name="compiler-error-c2504"></a>Errore del compilatore C2504

' Class ': classe di base non definita

La classe base è dichiarata ma non definita.  Possibili cause:

1. Manca il file di inclusione.

1. Classe di base esterna non dichiarata con [extern](../../cpp/extern-cpp.md).

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
