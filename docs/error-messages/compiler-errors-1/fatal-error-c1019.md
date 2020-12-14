---
description: 'Altre informazioni su: errore irreversibile C1019'
title: Errore irreversibile C1019
ms.date: 11/04/2016
f1_keywords:
- C1019
helpviewer_keywords:
- C1019
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
ms.openlocfilehash: d11a4300b29e497fef2f148d07963997586781ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316388"
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
