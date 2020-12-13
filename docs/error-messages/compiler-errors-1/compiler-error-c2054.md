---
description: 'Altre informazioni su: errore del compilatore C2054'
title: Errore del compilatore C2054
ms.date: 11/04/2016
f1_keywords:
- C2054
helpviewer_keywords:
- C2054
ms.assetid: 37f7c612-0d7d-4728-9e67-ac4160555f48
ms.openlocfilehash: b86c805a5687679cfa4bb5ed667c3bcf3adbad94
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341360"
---
# <a name="compiler-error-c2054"></a>Errore del compilatore C2054

previsto ' (' per seguire ' Identifier '

L'identificatore di funzione viene usato in un contesto che richiede le parentesi finali.

Questo errore può essere causato dall'omissione di un segno di uguale (=) su un'inizializzazione complessa.

L'esempio seguente genera l'C2054:

```c
// C2054.c
int array1[] { 1, 2, 3 };   // C2054, missing =
```

Possibile soluzione:

```c
// C2054b.c
int main() {
   int array2[] = { 1, 2, 3 };
}
```
