---
description: 'Altre informazioni su: fegetround, fesetround'
title: fegetround, fesetround
ms.date: 04/05/2018
api_name:
- fegetround
- fesetround
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fegetround
- fesetround
- fenv/fegetround
- fenv/fesetround
helpviewer_keywords:
- fegetround function
- fesetround function
ms.assetid: 596af00b-be2f-4f57-b2f5-460485f9ff0b
ms.openlocfilehash: f3c112efc1c380ac4ce4495f4365e2a47a1d8fd2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322550"
---
# <a name="fegetround-fesetround"></a>fegetround, fesetround

Ottiene o imposta la modalità di arrotondamento a virgola mobile corrente.

## <a name="syntax"></a>Sintassi

```C
int fegetround(void);

int fesetround(
   int round_mode
);
```

### <a name="parameters"></a>Parametri

*round_mode*<br/>
La modalità di arrotondamento da impostare, come una delle macro di arrotondamento a virgola mobile. Se il valore non è uguale a una delle macro di arrotondamento a virgola mobile, la modalità di arrotondamento non viene modificata.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, **fegetround** restituisce la modalità di arrotondamento come uno dei valori delle macro di arrotondamento a virgola mobile. Restituisce un valore negativo se non è possibile determinare la modalità di arrotondamento corrente.

Se l'operazione riesce, **fesetround** restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Commenti

Le operazioni a virgola mobile possono usare una delle diverse modalità di arrotondamento. Queste modalità controllano la direzione verso cui vengono arrotondati i risultati delle operazioni a virgola mobile durante l'archiviazione. Questi sono i nomi e i comportamenti delle macro di arrotondamento a virgola mobile definite in \<fenv.h> :

|Macro|Description|
|-----------|-----------------|
|FE_DOWNWARD|Arrotonda verso l'infinito negativo.|
|FE_TONEAREST|Arrotonda verso il valore più vicino.|
|FE_TOWARDZERO|Arrotonda per difetto.|
|FE_UPWARD|Arrotonda verso l'infinito positivo.|

Il comportamento predefinito di FE_TONEAREST prevede l'arrotondamento dei risultati a metà strada tra i valori rappresentabili verso il valore più vicino con un bit meno significativo (0) pari.

La modalità di arrotondamento corrente influisce su queste operazioni:

- Conversioni di stringhe.

- Risultati degli operatori aritmetici a virgola mobile al di fuori delle espressioni costanti.

- Funzioni di arrotondamento della libreria, ad esempio **rint** e **nearbyint**.

- Valori restituiti da funzioni matematiche della libreria standard.

La modalità di arrotondamento corrente non influisce su queste operazioni:

- Funzioni della libreria  **Tronca**, lround, **floor** e  .

- Conversioni e cast impliciti da virgola mobile a tipo integer, arrotondati sempre per difetto.

- Risultati degli operatori aritmetici a virgola mobile nelle espressioni costanti, arrotondati sempre al valore più vicino.

Per usare queste funzioni, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso usando la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fegetround**, **fesetround**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[nearbyint, nearbyintf, nearbyintl](nearbyint-nearbyintf-nearbyintl1.md)<br/>
[rint, rintf, rintl](rint-rintf-rintl.md)<br/>
[lrint, lrintf, lrintl, llrint, llrintf, llrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)<br/>
