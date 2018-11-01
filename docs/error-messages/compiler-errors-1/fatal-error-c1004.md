---
title: Errore irreversibile C1004
ms.date: 11/04/2016
f1_keywords:
- C1004
helpviewer_keywords:
- C1004
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
ms.openlocfilehash: 13fb8963b33569facf62ccedfe9ce8b7bbbbfdc3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428119"
---
# <a name="fatal-error-c1004"></a>Errore irreversibile C1004

fine file imprevista

È stata raggiunta la fine di un file di origine senza la risoluzione di un costrutto. Il codice potrebbe mancare uno degli elementi seguenti:

- Una parentesi graffa di chiusura

- Una parentesi di chiusura

- Marcatore di commento di chiusura (* /)

- Un punto e virgola

Per risolvere questo errore, verificare quanto segue:

- L'unità disco predefinita dispone di spazio sufficiente per i file temporanei, che richiedono circa il doppio dello spazio del file di origine.

- Un' `#if` direttiva che restituisce false non dispone di chiusura `#endif` direttiva.

- Un file di origine non termina con un ritorno a capo e avanzamento riga.

L'esempio seguente genera l'errore C1004:

```
// C1004.cpp
#if TEST
int main() {}
// C1004
```

Possibile soluzione:

```
// C1004b.cpp
#if TEST
#endif

int main() {}
```