---
description: 'Altre informazioni su: errore irreversibile C1018'
title: Errore irreversibile C1018
ms.date: 11/04/2016
f1_keywords:
- C1018
helpviewer_keywords:
- C1018
ms.assetid: 2ceb8a99-30b2-4b80-bf42-e9f3305b3c52
ms.openlocfilehash: 68b81406916ef358a73112c9f6f8b2370c627e54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316414"
---
# <a name="fatal-error-c1018"></a>Errore irreversibile C1018

#elif imprevisto

La direttiva `#elif` viene visualizzata all'esterno di un costrutto `#if`, `#ifdef`o `#ifndef` . Usare `#elif` solo all'interno di uno di questi costrutti.

L'esempio seguente genera l'errore C1018:

```cpp
// C1018.cpp
#elif      // C1018
#endif

int main() {}
```

Possibile soluzione:

```cpp
// C1018b.cpp
#if 1
#elif
#endif

int main() {}
```
