---
description: 'Altre informazioni su: srand'
title: srand
ms.date: 4/2/2020
api_name:
- srand
- _o_srand
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: bea91841b549fae09faa4345767fc22cf4d6208e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292170"
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

## <a name="remarks"></a>Commenti

La funzione **srand** imposta il punto di partenza per la generazione di una serie di numeri interi pseudocasuale nel thread corrente. Per reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare la funzione **srand** e usare di nuovo lo stesso argomento di *inizializzazione* . Qualsiasi altro valore per *Seed* imposta il generatore su un punto di partenza diverso nella sequenza pseudocasuale. **Rand** recupera i numeri pseudocasuale generati. La chiamata di **Rand** prima di qualsiasi chiamata a **srand** genera la stessa sequenza della chiamata di **srand** con il valore di *inizializzazione* passato a 1.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**srand**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [rand](rand.md).

## <a name="see-also"></a>Vedi anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[rand](rand.md)<br/>
