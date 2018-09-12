---
title: Tipi di dati SBCS e MBCS | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- MBCS
- SBCS
dev_langs:
- C++
helpviewer_keywords:
- SBCS and MBCS data types
- data types [C], MBCS and SBCS
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8cd45a20557eb3a7b2af3b1c2ecba3cc858af503
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205260"
---
# <a name="sbcs-and-mbcs-data-types"></a>Tipi di dati SBCS e MBCS

Qualsiasi routine della libreria di runtime Microsoft MBCS che gestisce un solo carattere multibyte o un byte di un carattere multibyte prevede un argomento `unsigned int` (dove 0x00 <= valore del carattere <= 0xFFFF e 0x00 <= valore del byte <= 0xFF). Una routine MBCS che gestisce i byte o i caratteri multibyte in un contesto di stringa prevede che una stringa di caratteri multibyte sia rappresentata come puntatore `unsigned char`.

> [!CAUTION]
> Ogni byte di un carattere multibyte può essere rappresentato in un **char** a 8 bit. Tuttavia, un carattere a un byte SBCS o MBCS di tipo **char** con un valore maggiore di 0x7F è negativo. Quando un carattere come questo viene convertito direttamente in **int** o in **long**, il risultato viene esteso con segno dal compilatore e può pertanto generare risultati imprevisti.

Pertanto è consigliabile rappresentare un byte di un carattere multibyte come un `unsigned char` a 8 bit. In alternativa, per evitare un risultato negativo, convertire semplicemente un carattere a byte singolo di tipo **char** in un `unsigned char` prima di convertirlo in un **int** o in un **long**.

Poiché alcune funzioni di gestione delle stringhe SBCS usano parametri **char**<strong>\*</strong> (con segno), quando **_MBCS** viene definito, il compilatore genera un avviso di mancata corrispondenza di tipo. Esistono tre modi per evitare questo problema, elencati in ordine di efficienza:

1. Usare le funzioni inline indipendenti dai tipi in TCHAR.H. Comportamento predefinito.

1. Usare le macro dirette in TCHAR.H definendo **_MB_MAP_DIRECT** nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. È il metodo più veloce, ma non è indipendente dai tipi.

1. Usare le funzioni della libreria collegata staticamente indipendente dai tipi in TCHAR.H. A tale scopo, definire la costante **_NO_INLINING** nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
