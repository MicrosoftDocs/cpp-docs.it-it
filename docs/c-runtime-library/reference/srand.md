---
title: srand
ms.date: 01/02/2018
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
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- srand
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
ms.openlocfilehash: d74ae4cbec5a76df48bb2b56acab7329e6cf8aa5
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927411"
---
# <a name="srand"></a>srand

Imposta il valore di inizializzazione iniziale per il generatore di numeri pseudocasuale usato dalla funzione **Rand** .

## <a name="syntax"></a>Sintassi

```C
void srand(
   unsigned int seed
);
```

### <a name="parameters"></a>Parametri

*seed*<br/>
Valore di inizializzazione per la generazione di numeri pseudocasuali

## <a name="remarks"></a>Note

La funzione **srand** imposta il punto di partenza per la generazione di una serie di numeri interi pseudocasuale nel thread corrente. Per reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare la funzione **srand** e usare di nuovo lo stesso argomento di *inizializzazione* . Qualsiasi altro valore per *Seed* imposta il generatore su un punto di partenza diverso nella sequenza pseudocasuale. **Rand** recupera i numeri pseudocasuale generati. La chiamata di **Rand** prima di qualsiasi chiamata a **srand** genera la stessa sequenza della chiamata di **srand** con il valore di *inizializzazione* passato a 1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**srand**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [rand](rand.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[rand](rand.md)<br/>
