---
title: Errore del compilatore C3219
ms.date: 11/04/2016
f1_keywords:
- C3219
helpviewer_keywords:
- C3219
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
ms.openlocfilehash: 72d5c3737dd2059dff46369b87d0e2caecef5a4f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737959"
---
# <a name="compiler-error-c3219"></a>Errore del compilatore C3219

'param': un parametro generico non può essere vincolato da non interfacce multiple: 'class'

Vincolare un parametro generico per due o più classi gestite non è consentito.

L'esempio seguente genera l'errore C3219:

```cpp
// C3219.cpp
// compile with: /clr
ref class A {};
ref class B {};

generic <class T>
where T : A, B
ref class E {};   // C3219
```

L'esempio seguente illustra una possibile soluzione:

```cpp
// C3219b.cpp
// compile with: /clr /c
ref class A {};

interface struct C {};

generic <class T>
where T : A
ref class E {};
```
