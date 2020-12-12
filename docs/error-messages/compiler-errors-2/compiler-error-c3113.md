---
description: 'Altre informazioni su: errore del compilatore C3113'
title: Errore del compilatore C3113
ms.date: 11/04/2016
f1_keywords:
- C3113
helpviewer_keywords:
- C3113
ms.assetid: 3afdc668-b29e-474e-9ea3-aa027d42db7c
ms.openlocfilehash: dcad27e26e0795b8d1901cca51dc5cd16a88ae5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115989"
---
# <a name="compiler-error-c3113"></a>Errore del compilatore C3113

un'Structure ' non può essere un modello/generico

Si è provato a creare un modello di classe o una classe generica da un'interfaccia o da un'enumerazione.

L'esempio seguente genera l'C3113:

```cpp
// C3113.cpp
// compile with: /c
template <class T>
enum E {};   // C3113
// try the following line instead
// class MyClass{};
```
