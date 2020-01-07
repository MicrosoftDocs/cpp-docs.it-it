---
title: Errore del compilatore C2088
ms.date: 11/04/2016
f1_keywords:
- C2088
helpviewer_keywords:
- C2088
ms.assetid: b93f7094-185b-423d-8bb9-507cd757dbf5
ms.openlocfilehash: 1f798774a7735a6aceb0bf75b3c6da9ccb1e4a72
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301977"
---
# <a name="compiler-error-c2088"></a>Errore del compilatore C2088

' operator ': non valido per ' Class-Key '

L'operatore non è stato definito per la struttura o l'Unione. Questo errore è valido solo per il codice C.

L'esempio seguente genera l'C2088 tre volte:

```c
// C2088.c
struct S {
   int m_i;
} s;

int main() {
   int i = s * 1;   // C2088
   struct S s2 = +s;   // C2088
   s++;   // C2088
}
```
