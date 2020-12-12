---
description: 'Altre informazioni su: formati di data e ora di Windows a 32 bit'
title: Formati data e ora di Windows a 32 bit
ms.date: 11/04/2016
f1_keywords:
- vc.time
helpviewer_keywords:
- 32-bit Windows
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
ms.openlocfilehash: 3893a2abc5d00cfba7ec83209470e907f87d3e94
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135785"
---
# <a name="32-bit-windows-timedate-formats"></a>Formati data e ora di Windows a 32 bit

L'ora del file e la data vengono archiviate separatamente usando interi senza segno come campi di bit. L'ora del file e la data sono raccolte nel modo seguente:

### <a name="time"></a>Ora

|Posizione di bit:|0   1   2   3   4|5   6   7   8   9   A|B   C   D   E   F|
|-------------------|-----------------------|---------------------------|-----------------------|
|Lunghezza:|5|6|5|
|Contenuto:|ore|minutes|incrementi di 2 secondi|
|Intervallo di valori:|0-23|0-59|0-29 in intervalli di 2 secondi|

### <a name="date"></a>Data

|Posizione di bit:|0   1   2   3   4   5   6|7   8   9   A|B   C   D   E   F|
|-------------------|-------------------------------|-------------------|-----------------------|
|Lunghezza:|7|4|5|
|Contenuto:|anno|month|day|
|Intervallo di valori:|0-119|1-12|1-31|
||(rispetto al 1980)|||

## <a name="see-also"></a>Vedi anche

[Costanti globali](../c-runtime-library/global-constants.md)
