---
title: Errore del compilatore C3215
ms.date: 11/04/2016
f1_keywords:
- C3215
helpviewer_keywords:
- C3215
ms.assetid: d0d16007-8885-42e0-b086-2d3a61f348c5
ms.openlocfilehash: 24f17d2990c9258168a6d37fef101c21f62cb08d
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70739489"
---
# <a name="compiler-error-c3215"></a>Errore del compilatore C3215

'type1': parametro di tipo generico già vincolato da 'type2'

Un vincolo è stato specificato più volte.

Per altre informazioni sui generics, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3215:

```
// C3215.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where T : A,A
ref class C {};   // C3215
```

Possibile soluzione:

```
// C3215b.cpp
// compile with: /clr /c
interface struct A {};

generic <class T>
where T : A
ref class C {};
```