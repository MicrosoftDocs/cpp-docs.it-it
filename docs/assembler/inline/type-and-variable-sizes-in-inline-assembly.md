---
description: "Altre informazioni su: tipi e dimensioni delle variabili nell'assembly inline"
title: Dimensioni delle variabili e dei tipi in assembly inline
ms.date: 08/30/2018
ms.topic: reference
helpviewer_keywords:
- variables, length
- size, getting in inline assembly
- size
- LENGTH operator
- TYPE operator
- SIZE operator
- inline assembly, operators
- variables, type
- variables, size
ms.assetid: b62c2f2b-a7ad-4145-bae4-d890db86d348
ms.openlocfilehash: 0d6822537f542c159c40c0ed6f14dca93aa36525
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122018"
---
# <a name="type-and-variable-sizes-in-inline-assembly"></a>Dimensioni delle variabili e dei tipi in assembly inline

**Specifico di Microsoft**

Gli operatori **length**, **size** e **Type** hanno un significato limitato nell'assembly inline. Non possono essere utilizzati con l'operatore `DUP` (perché non è possibile definire i dati con direttive o operatori di MASM). Tuttavia, è possibile utilizzarli per determinare la dimensione di variabili o tipi C o C++:

- L'operatore **length** può restituire il numero di elementi in una matrice. Restituisce il valore 1 per le variabili non di matrice.

- L'operatore **size** può restituire la dimensione di una variabile C o C++. La dimensione di una variabile è il prodotto di **lunghezza** e **tipo**.

- L'operatore **Type** può restituire la dimensione di una variabile o di un tipo C o C++. Se la variabile è una matrice, **Type** restituisce la dimensione di un singolo elemento della matrice.

Ad esempio, se il programma ha una matrice con 8 elementi **`int`** ,

```cpp
int arr[8];
```

le espressioni assembly e C seguenti impostano la dimensione di `arr` e dei relativi elementi.

|__asm|C|Dimensione|
|-------------|-------|----------|
|**Lunghezza** arr|`sizeof(arr)/sizeof(arr[0])`|8|
|**Dimensioni** arr|`sizeof(arr)`|32|
|**Digitare** arr|`sizeof(arr[0])`|4|

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
