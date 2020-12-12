---
description: 'Altre informazioni su: errore del compilatore C3400'
title: Errore del compilatore C3400
ms.date: 11/04/2016
f1_keywords:
- C3400
helpviewer_keywords:
- C3400
ms.assetid: d44169a8-73b6-4766-b406-b3a6c93f2a4d
ms.openlocfilehash: d2ed88232f88c49f72c868e7b378aa0d6ef30ac3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321955"
---
# <a name="compiler-error-c3400"></a>Errore del compilatore C3400

dipendenza di vincolo circolare che comprende 'constraint_1' e 'constraint_2'

Il compilatore ha rilevato vincoli circolari.

Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3400.

```cpp
// C3400.cpp
// compile with: /clr /c
generic<class T, class U>
where T : U
where U : T   // C3400
public ref struct R {};
```
