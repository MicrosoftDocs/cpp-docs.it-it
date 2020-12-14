---
description: 'Altre informazioni su: errore irreversibile C1004'
title: Errore irreversibile C1004
ms.date: 11/04/2016
f1_keywords:
- C1004
helpviewer_keywords:
- C1004
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
ms.openlocfilehash: f21978f5ff314a8273dde60428dc89ca0c5767b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262685"
---
# <a name="fatal-error-c1004"></a>Errore irreversibile C1004

fine del file imprevista

Il compilatore ha raggiunto la fine di un file di origine senza risolvere un costrutto. Nel codice potrebbe mancare uno degli elementi seguenti:

- Parentesi graffa di chiusura

- Parentesi di chiusura

- Marcatore di chiusura del commento (*/)

- Punto e virgola

Per correggere l'errore, verificare quanto segue:

- Lo spazio disponibile nell'unità disco predefinita non è sufficiente per i file temporanei, che richiedono circa due volte lo spazio del file di origine.

- Una `#if` direttiva che restituisce false non dispone di una direttiva di chiusura `#endif` .

- Un file di origine non termina con un ritorno a capo e un avanzamento riga.

L'esempio seguente genera l'C1004:

```cpp
// C1004.cpp
#if TEST
int main() {}
// C1004
```

Possibile soluzione:

```cpp
// C1004b.cpp
#if TEST
#endif

int main() {}
```
