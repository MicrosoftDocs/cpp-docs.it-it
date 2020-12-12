---
description: 'Altre informazioni su: errore del compilatore C2511'
title: Errore del compilatore C2511
ms.date: 11/04/2016
f1_keywords:
- C2511
helpviewer_keywords:
- C2511
ms.assetid: df999efe-fe2b-418b-bb55-4af6a0592631
ms.openlocfilehash: 846173cc887fd09b564d18e063820bc0e0d5b184
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212922"
---
# <a name="compiler-error-c2511"></a>Errore del compilatore C2511

' Identifier ': funzione membro in overload non trovata in ' Class '

Nessuna versione della funzione dichiarata con i parametri specificati.  Cause possibili:

1. Parametri errati passati alla funzione.

1. Parametri passati nell'ordine errato.

1. Ortografia errata dei nomi dei parametri.

L'esempio seguente genera l'C2511:

```cpp
// C2511.cpp
// compile with: /c
class C {
   int c_2;
   int Func(char *, char *);
};

int C::Func(char *, char *, int i) {   // C2511
// try the following line instead
// int C::Func(char *, char *) {
   return 0;
}
```
