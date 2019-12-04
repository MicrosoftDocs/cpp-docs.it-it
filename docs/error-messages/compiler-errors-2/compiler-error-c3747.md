---
title: Errore del compilatore C3747
ms.date: 11/04/2016
f1_keywords:
- C3747
helpviewer_keywords:
- C3747
ms.assetid: a9a4be67-5d9c-4dcc-9ae9-baae46cbecde
ms.openlocfilehash: 761bb44f5097d998fd885fdb1c5caacf90db3642
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761868"
---
# <a name="compiler-error-c3747"></a>Errore del compilatore C3747

parametro di tipo predefinito mancante: parametro param

I parametri generici o di modello con valori predefiniti non possono essere seguiti nell'elenco di parametri per i parametri che non hanno valori predefiniti.

L'esempio seguente genera l'C3747:

```cpp
// C3747.cpp
template <class T1 = int, class T2>   // C3747
struct MyStruct {};
```

Possibile soluzione:

```cpp
// C3747b.cpp
// compile with: /c
template <class T1, class T2 = int>
struct MyStruct {};
```
