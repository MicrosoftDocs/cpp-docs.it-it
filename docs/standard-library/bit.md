---
title: '&lt;bit&gt;'
description: Funzioni per l'accesso, la manipolazione e l'elaborazione di singoli bit e sequenze di bit.
ms.date: 08/28/2020
f1_keywords:
- <bit>
helpviewer_keywords:
- bit header
ms.openlocfilehash: 7a87071d30756714e19c971281f642ce16f09d61
ms.sourcegitcommit: 3628707bc17c99aac7aac27eb126cc2eaa4d07b4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/31/2020
ms.locfileid: "89194546"
---
# <a name="ltbitgt"></a>&lt;bit&gt;

Definisce le funzioni per accedere, modificare ed elaborare i singoli bit e sequenze di bit.

Sono ad esempio disponibili funzioni per ruotare i bit, trovare il numero di bit consecutivi impostati o cancellati, verificare se un numero è una potenza integrale di due, trovare il numero più piccolo di bit per rappresentare un numero e così via.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<bit>

**Spazio dei nomi:** std

`/std:c++latest` è obbligatorio

## <a name="members"></a>Membri

### <a name="types"></a>Tipi

| Tipo | Descrizione |
|--------|----------|
| [Endian](bit-enum.md) | Specifica la caratteristica di tipo scalare. |

### <a name="functions"></a>Funzioni

| Funzione | Descrizione |
|-----|-----|
|[bit_cast](bit-functions.md#bit_cast) | Reinterpretare la rappresentazione dell'oggetto da un tipo a un altro. |
|[bit_ceil](bit-functions.md#bit_ceil) | Trovare la potenza minima di due maggiori o uguali a un valore. |
|[bit_floor](bit-functions.md#bit_floor) | Trovare la potenza integrale più grande di due non maggiore di un valore. |
|[bit_width](bit-functions.md#bit_width) | Trovare il numero più piccolo di bit necessari per rappresentare un valore. |
|[countl_zero](bit-functions.md#countl_zero) | Contare il numero di bit consecutivi impostati su zero, a partire dal bit più significativo. |
|[countl_one](bit-functions.md#countl_one) | Contare il numero di bit consecutivi impostati su uno, a partire dal bit più significativo. |
|[countr_zero](bit-functions.md#countr_zero) | Contare il numero di bit consecutivi impostati su zero, a partire dal bit meno significativo. |
|[countr_one](bit-functions.md#countl_one) | Contare il numero di bit consecutivi impostati su uno, iniziando dal bit meno significativo. |
|[has_single_bit](bit-functions.md#has_single_bit) | Controllare se un valore ha un solo bit impostato su uno. Equivale a verificare se un valore è una potenza di due. |
|[popcount](bit-functions.md#popcount) | Contare il numero di bit impostati su uno. |
|[rotl](bit-functions.md#rotl) | Calcola il risultato di una rotazione a sinistra bit per bit. |
|[rotr](bit-functions.md#rotr) | Calcola il risultato di una rotazione a destra bit per bit. |

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](cpp-standard-library-header-files.md)