---
title: Errore del compilatore C3400
ms.date: 11/04/2016
f1_keywords:
- C3400
helpviewer_keywords:
- C3400
ms.assetid: d44169a8-73b6-4766-b406-b3a6c93f2a4d
ms.openlocfilehash: c4b4cb64da83115ab5b6a5234cda2ea3c7ba3a53
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768627"
---
# <a name="compiler-error-c3400"></a>Errore del compilatore C3400

dipendenza di vincolo circolare che comprende 'constraint_1' e 'constraint_2'

Il compilatore ha rilevato vincoli circolari.

Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3400.

```
// C3400.cpp
// compile with: /clr /c
generic<class T, class U>
where T : U
where U : T   // C3400
public ref struct R {};
```