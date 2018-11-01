---
title: Errore irreversibile C1019
ms.date: 11/04/2016
f1_keywords:
- C1019
helpviewer_keywords:
- C1019
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
ms.openlocfilehash: 2d8e63510b762b0de0cda50ab7a03b773dfb949a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50574083"
---
# <a name="fatal-error-c1019"></a>Errore irreversibile C1019

#else imprevisto

La direttiva `#else` viene visualizzata all'esterno di un costrutto `#if`, `#ifdef`o `#ifndef` . Usare `#else` solo all'interno di uno di questi costrutti.

L'esempio seguente genera l'errore C1019:

```
// C1019.cpp
#else   // C1019
#endif

int main() {}
```

Possibile soluzione:

```
// C1019b.cpp
#if 1
#else
#endif

int main() {}
```