---
description: 'Altre informazioni su: fegetexceptflag'
title: fegetexceptflag
ms.date: 04/05/2018
api_name:
- fegetexceptflag
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
- fegetexceptflag
- fenv/fegetexceptflag
helpviewer_keywords:
- fegetexceptflag function
ms.assetid: 2d28f0ca-70c9-4cff-be8b-3d876eacde71
ms.openlocfilehash: 9690263168c9eef46b5a8b684fa00dfd9d6f8715
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322563"
---
# <a name="fegetexceptflag"></a>fegetexceptflag

Archivia lo stato corrente dei flag di eccezione a virgola mobile specificati.

## <a name="syntax"></a>Sintassi

```C
int fegetexceptflag(
   fexcept_t* pstatus,
   int excepts
);
```

### <a name="parameters"></a>Parametri

*pstatus*<br/>
Puntatore a un oggetto **fexcept_t** per contenere i valori correnti dei flag di eccezione specificati da *excepts*.

*eccetto*<br/>
Flag di eccezione a virgola mobile da archiviare in *pStatus*.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Commenti

La funzione **fegetexceptflag** archivia lo stato corrente dei flag di stato delle eccezioni a virgola mobile specificati da *excepts* nell'oggetto **fexcept_t** a cui fa riferimento *pStatus*.  *pStatus* deve puntare a un oggetto **fexcept_t** valido oppure il comportamento successivo non è definito. La funzione **fegetexceptflag** supporta queste macro di eccezioni, definite in \<fenv.h> :

|Macro di eccezioni|Description|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALL_EXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'argomento *excepts* può essere zero, una delle macro di eccezioni a virgola mobile supportate o l'operatore OR bit per bit di due o più macro. L'effetto di qualsiasi altro valore di argomento non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fegetexceptflag**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>
