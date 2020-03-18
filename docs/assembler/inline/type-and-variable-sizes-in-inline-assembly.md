---
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
ms.openlocfilehash: cdb8bddccbea0ef711cb0be4bbac60f7457c625c
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441573"
---
# <a name="type-and-variable-sizes-in-inline-assembly"></a>Dimensioni delle variabili e dei tipi in assembly inline

**Sezione specifica Microsoft**

Gli operatori **length**, **size**e **Type** hanno un significato limitato nell'assembly inline. Non possono essere utilizzati con l'operatore `DUP` (perché non è possibile definire i dati con direttive o operatori di MASM). Tuttavia, è possibile utilizzarli per determinare la dimensione di variabili o tipi C o C++:

- L'operatore **length** può restituire il numero di elementi in una matrice. Restituisce il valore 1 per le variabili non di matrice.

- L'operatore **size** può restituire la dimensione di una variabile C C++ o. La dimensione di una variabile è il prodotto di **lunghezza** e **tipo**.

- L'operatore **Type** può restituire la dimensione di un C++ tipo o di una variabile. Se la variabile è una matrice, **Type** restituisce la dimensione di un singolo elemento della matrice.

Ad esempio, se il programma ha una matrice **int** a 8 elementi,

```cpp
int arr[8];
```

le espressioni assembly e C seguenti impostano la dimensione di `arr` e dei relativi elementi.

|__asm|C|Dimensione|
|-------------|-------|----------|
|**Lunghezza** arr|`sizeof`(arr)/`sizeof`(arr[0])|8|
|**Dimensioni** arr|`sizeof`(arr)|32|
|**Digitare** arr|`sizeof`(arr[0])|4|

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>