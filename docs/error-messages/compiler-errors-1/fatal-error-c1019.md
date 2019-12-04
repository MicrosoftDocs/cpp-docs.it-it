---
title: Errore irreversibile C1019
ms.date: 11/04/2016
f1_keywords:
- C1019
helpviewer_keywords:
- C1019
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
ms.openlocfilehash: f33139393f7f6225edf0c4b3f992b93d35bd6afa
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756916"
---
# <a name="fatal-error-c1019"></a>Errore irreversibile C1019

#else imprevisto

La direttiva `#else` viene visualizzata all'esterno di un costrutto `#if`, `#ifdef`o `#ifndef` . Usare `#else` solo all'interno di uno di questi costrutti.

L'esempio seguente genera l'errore C1019:

```cpp
// C1019.cpp
#else   // C1019
#endif

int main() {}
```

Possibile soluzione:

```cpp
// C1019b.cpp
#if 1
#else
#endif

int main() {}
```
