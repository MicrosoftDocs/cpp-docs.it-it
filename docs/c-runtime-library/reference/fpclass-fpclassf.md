---
title: _fpclass, _fpclassf
ms.date: 4/2/2020
api_name:
- _fpclass
- _fpclassf
- _o__fpclass
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
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fpclass
- _fpclass
- _fpclassf
- math/_fpclass
- float/_fpclass
- math/_fpclassf
helpviewer_keywords:
- fpclass function
- floating-point numbers, IEEE representation
- _fpclass function
- _fpclassf function
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
ms.openlocfilehash: a6591d9348739d27831785a05f4a602aacdd4d0c
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82914852"
---
# <a name="_fpclass-_fpclassf"></a>_fpclass, _fpclassf

Restituisce un valore che indica la classificazione a virgola mobile dell'argomento.

## <a name="syntax"></a>Sintassi

```C
int _fpclass(
   double x
);

int _fpclassf(
   float x
); /* x64 only */
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

Le funzioni **_fpclass** e **_fpclassf** restituiscono un valore intero che indica la classificazione a virgola mobile dell'argomento *x*. La classificazione può avere uno dei valori seguenti, definiti in \<float.h>.

|valore|Descrizione|
|-----------|-----------------|
|**_FPCLASS_SNAN**|Segnalazione NaN|
|**_FPCLASS_QNAN**|NaN non interattivo|
|**_FPCLASS_NINF**|Infinito negativo (-INF)|
|**_FPCLASS_NN**|Valore diverso da zero normalizzato negativo|
|**_FPCLASS_ND**|Denormalizzato negativo|
|**_FPCLASS_NZ**|Zero negativo (-0)|
|**_FPCLASS_PZ**|0 positivo (+0)|
|**_FPCLASS_PD**|Denormalizzato positivo|
|**_FPCLASS_PN**|Diverso da zero normalizzato positivo|
|**_FPCLASS_PINF**|Infinito positivo (+INF)|

## <a name="remarks"></a>Osservazioni

Le funzioni **_fpclass** e **_fpclassf** sono specifiche di Microsoft. Sono simili a [fpclassify](fpclassify.md), ma restituiscono informazioni più dettagliate sull'argomento. La funzione **_fpclassf** è disponibile solo quando viene compilata per la piattaforma x64.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_fpclass**, **_fpclassf**|\<float.h>|

Per altre informazioni sulla compatibilità e la conformità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[fpclassify](fpclassify.md)<br/>
