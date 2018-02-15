---
title: srand | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- srand
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- srand
dev_langs:
- C++
helpviewer_keywords:
- random starting point
- random starting point, setting
- random numbers, generating
- srand function
- numbers, pseudorandom
- numbers, random
- pseudorandom numbers
- starting points, setting random
- starting points
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4cc76b80ca6c01d6512c69cc13fb0934e79b6ae5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="srand"></a>srand

Imposta il valore di inizializzazione iniziale per il generatore di numeri pseudocasuali utilizzato il `rand` (funzione).

## <a name="syntax"></a>Sintassi

```C
void srand(
   unsigned int seed
);
```

### <a name="parameters"></a>Parametri

*seed*  
Valore di inizializzazione per la generazione di numeri pseudocasuali

## <a name="remarks"></a>Note

La funzione `srand` imposta il punto iniziale per generare una serie di interi pseudocasuali nel thread corrente. Per reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare il `srand` funzione e utilizzano la stessa *valore di inizializzazione* nuovo argomento. Qualsiasi altro valore per *valore di inizializzazione* imposta il generatore in un altro punto di partenza nella sequenza pseudocasuale. `rand` recupera i numeri pseudocasuali generati. La chiamata `rand` prima di qualsiasi chiamata a `srand` genera la stessa sequenza di chiamata `srand` con *valore di inizializzazione* passato come 1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`srand`|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="example"></a>Esempio

Vedere l'esempio per [rand](../../c-runtime-library/reference/rand.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)  
[rand](../../c-runtime-library/reference/rand.md)  
