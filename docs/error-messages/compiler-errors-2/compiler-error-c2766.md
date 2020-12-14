---
description: 'Altre informazioni su: errore del compilatore C2766'
title: Errore del compilatore C2766
ms.date: 11/04/2016
f1_keywords:
- C2766
helpviewer_keywords:
- C2766
ms.assetid: 8032f4ca-6827-4f04-9c61-c44643c85cc4
ms.openlocfilehash: bace06c6dc4392fa023317d9711005837d156aa2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239493"
---
# <a name="compiler-error-c2766"></a>Errore del compilatore C2766

specializzazione esplicita; ' specializzazione ' è già stato definito

Non sono consentite specializzazioni esplicite duplicate. Per altre informazioni, vedere [specializzazione esplicita di modelli di funzione](../../cpp/explicit-specialization-of-function-templates.md).

L'esempio seguente genera l'C2766:

```cpp
// C2766.cpp
// compile with: /c
template<class T>
struct A {};

template<>
struct A<int> {};

template<>
struct A<int> {};   // C2766
// try the following line instead
// struct A<char> {};
```
