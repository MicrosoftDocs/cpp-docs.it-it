---
title: fesetexceptflag
ms.date: 04/05/2018
api_name:
- fesetexceptflag
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
- fesetexceptflag
- fenv/fesetexceptflag
helpviewer_keywords:
- fesetexceptflag function
ms.assetid: 2f7dad77-9e54-4097-a3e3-35176ace4de5
ms.openlocfilehash: b16de7ea54b5f1df21b6626febe773c8cef556f5
ms.sourcegitcommit: ba4180a2d79d7e391f2f705797505d4aedbc2a5e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2020
ms.locfileid: "76972151"
---
# <a name="fesetexceptflag"></a>fesetexceptflag

Imposta i flag di stato a virgola mobile specificati nell'ambiente corrente a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
int fesetexceptflag(
     const fexcept_t *pstatus,
     int excepts
);
```

### <a name="parameters"></a>Parametri

*pstatus*<br/>
Puntatore a un oggetto **fexcept_t** contenente i valori a cui impostare i flag di stato delle eccezioni. L'oggetto può essere impostato da una precedente chiamata a [fegetexceptflag](fegetexceptflag2.md).

*excepts*<br/>
Flag di stato delle eccezioni a virgola mobile da impostare.

## <a name="return-value"></a>Valore restituito

Se tutti i flag di stato delle eccezioni specificati sono impostati correttamente, restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

La funzione **fesetexceptflag** imposta lo stato dei flag di stato delle eccezioni a virgola mobile specificati da ad *eccezione* dei valori corrispondenti impostati nell'oggetto **fexcept_t** a cui fa riferimento *pStatus*.  Non genera l'eccezione. Il puntatore *pStatus* deve puntare a un oggetto **fexcept_t** valido oppure il comportamento successivo non è definito. La funzione **fesetexceptflag** supporta questi valori di macro di eccezione in *excepts*, definiti in \<fenv. h >:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALL_EXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'argomento *excepts* può essere zero, una delle macro di eccezioni a virgola mobile supportate o l'operatore OR bit per bit di due o più macro. L'effetto di qualsiasi altro valore di argomento non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti di

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fesetexceptflag**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[fegetexceptflag](fegetexceptflag2.md)<br/>
