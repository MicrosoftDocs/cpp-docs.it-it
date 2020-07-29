---
title: Tipi Integer
ms.date: 07/22/2020
helpviewer_keywords:
- integer data type, integer types in C++
- integer constants
- integer types
- integers, types
ms.assetid: c8926a5e-0e98-4e37-9b05-ce97961379bd
ms.openlocfilehash: 61ed64c613bc88ed5bf62999ba77fa4090c1ec4a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211801"
---
# <a name="integer-types"></a>Tipi Integer

A ogni costante Integer viene assegnato un tipo in base al relativo valore e al modo in cui viene espresso. È possibile forzare qualsiasi costante integer nel tipo **`long`** aggiungendo la lettera **`l`** o **`L`** alla fine della costante; è possibile forzare l'esecuzione del tipo aggiungendo **`unsigned`** **`u`** o **`U`** al valore. La lettera minuscola **`l`** può essere confusa con la cifra 1 e deve essere evitata. Di seguito sono riportate alcune forme di **`long`** costanti integer:

```C
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

Il tipo assegnato a una costante dipende dal valore che la costante rappresenta. Il valore di una costante deve essere compreso tra i valori rappresentabili per il tipo. Il tipo di una costante determina quali conversioni vengono eseguite quando la costante viene utilizzata in un'espressione o quando viene applicato il segno meno ( **`-`** ). In questo elenco vengono riepilogate le regole di conversione per le costanti Integer.

- Il tipo di una costante decimale senza un suffisso è **`int`** , **`long int`** o **`unsigned long int`** . Il primo di questi tre tipi in cui può essere rappresentato il valore della costante è il tipo assegnato alla costante.

- Il tipo assegnato alle costanti ottali ed esadecimali senza suffissi è **`int`** ,, **`unsigned int`** **`long int`** o **`unsigned long int`** a seconda delle dimensioni della costante.

- Il tipo assegnato alle costanti con un **`u`** **`U`** suffisso o è **`unsigned int`** o **`unsigned long int`** a seconda delle dimensioni.

- Il tipo assegnato alle costanti con un **`l`** **`L`** suffisso o è **`long int`** o **`unsigned long int`** a seconda delle dimensioni.

- Il tipo assegnato alle costanti con un oggetto **`u`** o **`U`** e un **`l`** **`L`** suffisso o è **`unsigned long int`** .

## <a name="see-also"></a>Vedere anche

[Costanti Integer C](../c-language/c-integer-constants.md)
