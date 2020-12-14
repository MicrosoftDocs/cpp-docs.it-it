---
description: 'Altre informazioni su: errore del compilatore C3458'
title: Errore del compilatore C3458
ms.date: 11/04/2016
f1_keywords:
- C3458
helpviewer_keywords:
- C3458
ms.assetid: 940202fd-8dcc-4042-9c96-3f9e9127d2f1
ms.openlocfilehash: d26f252cfbbff21ac355a84aea6556d2c761b6d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315920"
---
# <a name="compiler-error-c3458"></a>Errore del compilatore C3458

'attribute1': attributo 'attribute2' già specificato per 'construct'

Due attributi che si escludono reciprocamente sono stati specificati per lo stesso costrutto.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3458

```cpp
// C3458.cpp
// compile with: /clr /c
[System::Reflection::DefaultMember("Chars")]
public ref class MyString {
public:
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // C3458
   property char default[int] {
      char get(int index);
      void set(int index, char c);
   }
};
```
