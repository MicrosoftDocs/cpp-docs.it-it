---
description: 'Altre informazioni su: errore del compilatore C2041'
title: Errore del compilatore C2041
ms.date: 11/04/2016
f1_keywords:
- C2041
helpviewer_keywords:
- C2041
ms.assetid: c9a33bb1-f9cf-47d6-bd21-7d867a8c37d5
ms.openlocfilehash: 5c980b6783b4b14e4878278699e5b4f7618ff0f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175261"
---
# <a name="compiler-error-c2041"></a>Errore del compilatore C2041

cifra ' character ' non valida per ' Number ' di base

Il carattere specificato non è una cifra valida per la base, ad esempio ottale o esadecimale.

L'esempio seguente genera l'C2041:

```cpp
// C2041.cpp
int i = 081;   // C2041  8 is not a base 8 digit
```

Possibile soluzione:

```cpp
// C2041b.cpp
// compile with: /c
int j = 071;
```
