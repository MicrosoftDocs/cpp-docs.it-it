---
description: 'Altre informazioni su: errore del compilatore C3101'
title: Errore del compilatore C3101
ms.date: 11/04/2016
f1_keywords:
- C3101
helpviewer_keywords:
- C3101
ms.assetid: 4f673766-d4f7-4632-94a5-d36a83f7f4b5
ms.openlocfilehash: e0c52eadd2af4b090b34f851d561535f360a7e59
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116171"
---
# <a name="compiler-error-c3101"></a>Errore del compilatore C3101

espressione non valida per l'argomento dell'attributo denominato ' Field '

Quando si Inizializza un argomento di attributo denominato, il valore deve essere una costante in fase di compilazione.

Per ulteriori informazioni sugli attributi, vedere [attributi definiti dall'utente](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3101.

```cpp
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
