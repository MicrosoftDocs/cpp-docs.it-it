---
title: Errore del compilatore C3101
ms.date: 11/04/2016
f1_keywords:
- C3101
helpviewer_keywords:
- C3101
ms.assetid: 4f673766-d4f7-4632-94a5-d36a83f7f4b5
ms.openlocfilehash: 8db1ba622a0c83a7f2a6421d79ff5853cbc4d9a9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555558"
---
# <a name="compiler-error-c3101"></a>Errore del compilatore C3101

espressione non valida per l'attributo denominato argomento 'field'

Durante l'inizializzazione di un argomento denominato dell'attributo, il valore deve essere una costante in fase di compilazione.

Per altre informazioni sugli attributi, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3101.

```
// C3101.cpp
// compile with: /clr /c
ref class AAttribute : System::Attribute {
public:
   int Field;
};

extern int i;

[assembly:A(Field = i)];   // C3101
[assembly:A(Field = 0)];   // OK
```