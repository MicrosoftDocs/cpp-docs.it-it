---
description: 'Altre informazioni su: errore del compilatore C2117'
title: Errore del compilatore C2117
ms.date: 11/04/2016
f1_keywords:
- C2117
helpviewer_keywords:
- C2117
ms.assetid: b947379d-5861-42fc-ac26-170318579cbd
ms.openlocfilehash: 0e0d84a73d5f36f3014aa07d51b9701276a6e071
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335244"
---
# <a name="compiler-error-c2117"></a>Errore del compilatore C2117

' Identifier ': overflow dei limiti della matrice

Una matrice ha troppi inizializzatori:

- Gli inizializzatori e gli elementi della matrice non corrispondono alle dimensioni e alla quantità.

- Nessuno spazio per il terminatore null in una stringa.

L'esempio seguente genera l'C2117:

```cpp
// C2117.cpp
int main() {
   char abc[4] = "abcd";   // C2117
   char def[4] = "abd";   // OK
}
```
