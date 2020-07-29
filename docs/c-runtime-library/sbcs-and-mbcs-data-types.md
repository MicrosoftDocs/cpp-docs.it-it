---
title: tipi di dati SBCS e MBCS
ms.date: 04/11/2018
f1_keywords:
- MBCS
- SBCS
helpviewer_keywords:
- SBCS and MBCS data types
- data types [C], MBCS and SBCS
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
ms.openlocfilehash: 72215b7a3fff638daf02f136e3a107ce8a8a00d5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233912"
---
# <a name="sbcs-and-mbcs-data-types"></a>tipi di dati SBCS e MBCS

Qualsiasi routine della libreria di runtime di Microsoft MBCS che gestisce un solo carattere multibyte o un byte di un carattere multibyte prevede un **`unsigned int`** argomento (dove 0x00 <= valore carattere <= 0xFFFF e 0x00 <= valore byte <= 0xFF). Una routine MBCS che gestisce byte o caratteri multibyte in un contesto di stringa prevede una stringa di caratteri multibyte da rappresentare come **`unsigned char`** puntatore.

> [!CAUTION]
> Ogni byte di un carattere multibyte può essere rappresentato in un a 8 bit **`char`** . Tuttavia, un carattere a byte singolo SBCS o MBCS di tipo **`char`** con un valore maggiore di 0x7F è negativo. Quando tale carattere viene convertito direttamente in o in **`int`** **`long`** , il risultato viene esteso con segno dal compilatore e può pertanto generare risultati imprevisti.

Pertanto è consigliabile rappresentare un byte di un carattere multibyte come un a 8 bit **`unsigned char`** . In alternativa, per evitare un risultato negativo, convertire semplicemente un carattere a byte singolo di tipo **`char`** in un oggetto **`unsigned char`** prima di convertirlo in un oggetto **`int`** o **`long`** .

Poiché alcune funzioni di gestione delle stringhe SBCS accettano parametri (con segno) **`char`** <strong>\*</strong> , viene generato un avviso del compilatore non corrispondente al tipo quando viene definito **_MBCS** . Esistono tre modi per evitare questo problema, elencati in ordine di efficienza:

1. Usare le funzioni inline indipendenti dai tipi in TCHAR.H. Questo è il comportamento predefinito.

1. Usare le macro dirette in TCHAR.H definendo **_MB_MAP_DIRECT** nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. È il metodo più veloce, ma non è indipendente dai tipi.

1. Usare le funzioni della libreria collegata staticamente indipendente dai tipi in TCHAR.H. A tale scopo, definire la costante **_NO_INLINING** nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
