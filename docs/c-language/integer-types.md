---
title: Tipi Integer
ms.date: 11/04/2016
helpviewer_keywords:
- integer data type, integer types in C++
- integer constants
- integer types
- integers, types
ms.assetid: c8926a5e-0e98-4e37-9b05-ce97961379bd
ms.openlocfilehash: 23da055b56e2ae77fed796d9ba8e7f227e572a9f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62232852"
---
# <a name="integer-types"></a>Tipi Integer

A ogni costante Integer viene assegnato un tipo in base al valore e al modo in cui viene espresso. È possibile imporre a qualsiasi costante Integer il tipo **long** aggiungendo la lettera **l** o **L** alla fine della costante. È possibile imporle il tipo `unsigned` aggiungendo **u** o **U** al valore. La lettera minuscola **l** può essere confusa con la cifra 1 e deve essere evitata. Di seguito alcuni formati di costanti Integer **long**:

```
/* Long decimal constants */
10L
79L

/* Long octal constants */
012L
0115L

/* Long hexadecimal constants */
0xaL or 0xAL
0X4fL or 0x4FL

/* Unsigned long decimal constant */
776745UL
778866LU
```

Il tipo assegnato a una costante dipende dal valore che la costante rappresenta. Il valore di una costante deve essere compreso tra i valori rappresentabili per il tipo. Il tipo di una costante determina quali conversioni vengono eseguite quando la costante viene utilizzata in un'espressione o quando viene applicato il segno**-** meno (). In questo elenco vengono riepilogate le regole di conversione per le costanti Integer.

- Il tipo di una costante decimale senza un suffisso è `int`, **long int**o **unsigned long int**. Il primo di questi tre tipi in cui può essere rappresentato il valore della costante è il tipo assegnato alla costante.

- Il tipo assegnato a costanti ottali ed esadecimali senza suffissi è `int`, `unsigned int`, **long int** o **unsigned long int** a seconda delle dimensioni della costante.

- Il tipo assegnato alle costanti con suffisso **u** o **U** è **unsigned int**o **unsigned long int** a seconda delle rispettive dimensioni.

- Il tipo assegnato alle costanti con suffisso **l** o **L** è **long int** o **unsigned long int** a seconda delle rispettive dimensioni.

- Il tipo assegnato alle costanti con suffisso **u** o **U** e **l** o **L** è **unsigned long int**.

## <a name="see-also"></a>Vedere anche

[Costanti Integer C](../c-language/c-integer-constants.md)
