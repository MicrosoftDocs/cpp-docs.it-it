---
description: 'Altre informazioni su: errore del compilatore C2085'
title: Errore del compilatore C2085
ms.date: 11/04/2016
f1_keywords:
- C2085
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
ms.openlocfilehash: 2cd828c9a18c06c5794bef01ba861f702af2e096
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252116"
---
# <a name="compiler-error-c2085"></a>Errore del compilatore C2085

' Identifier ': non nell'elenco di parametri formali

L'identificatore è stato dichiarato in una definizione di funzione ma non nell'elenco di parametri formali. (Solo ANSI C)

L'esempio seguente genera l'C2085:

```c
// C2085.c
void func1( void )
int main( void ) {}   // C2085
```

Possibile soluzione:

```c
// C2085b.c
void func1( void );
int main( void ) {}
```

Con il punto e virgola mancante, `func1()` è simile a una definizione di funzione, non a un prototipo, pertanto `main` viene definito all'interno di `func1()` , generando l'errore C2085 per identificatore `main` .
