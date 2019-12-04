---
title: Errore del compilatore C3880
ms.date: 11/04/2016
f1_keywords:
- C3880
helpviewer_keywords:
- C3880
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
ms.openlocfilehash: 54fd65fb4fe23a5c493a4e9ac83a5e44b0596362
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74736672"
---
# <a name="compiler-error-c3880"></a>Errore del compilatore C3880

' var ': non può essere un membro dati literal

Il tipo di un attributo [letterale](../../extensions/literal-cpp-component-extensions.md) deve essere, o convertibile in fase di compilazione, in uno dei tipi seguenti:

- tipo integrale

- string

- enum con un tipo integrale o sottostante

L'esempio seguente genera l'C3880:

```cpp
// C3880.cpp
// compile with: /clr /c
ref struct Y1 {
   literal System::Decimal staticConst1 = 10;   // C3880
   literal int staticConst2 = 10;   // OK
};
```
