---
description: 'Altre informazioni su: errore del compilatore C2504'
title: Errore del compilatore C2504
ms.date: 11/04/2016
f1_keywords:
- C2504
helpviewer_keywords:
- C2504
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
ms.openlocfilehash: 2a2269d750673a912096b497c10a9b112c23207c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213026"
---
# <a name="compiler-error-c2504"></a>Errore del compilatore C2504

' Class ': classe di base non definita

La classe base è dichiarata ma non definita.  Cause possibili:

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
