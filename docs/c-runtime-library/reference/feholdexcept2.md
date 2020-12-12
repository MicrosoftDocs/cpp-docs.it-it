---
description: 'Altre informazioni su: feholdexcept'
title: feholdexcept
ms.date: 04/05/2018
api_name:
- feholdexcept
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
- feholdexcept
- fenv/feholdexcept
helpviewer_keywords:
- feholdexcept function
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
ms.openlocfilehash: 89ccf9bedb05752202152f6bd862b11b2f765322
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322524"
---
# <a name="feholdexcept"></a>feholdexcept

Salva l'ambiente a virgola mobile corrente nell'oggetto specificato, cancella i flag di stato a virgola mobile e, se possibile, inserisce l'ambiente a virgola mobile in modalità senza interruzioni.

## <a name="syntax"></a>Sintassi

```C
int feholdexcept(
   fenv_t *penv
);
```

### <a name="parameters"></a>Parametri

*penv*<br/>
Puntatore a un oggetto **fenv_t** per contenere una copia dell'ambiente a virgola mobile.

## <a name="return-value"></a>Valore restituito

Restituisce zero se e solo se la funzione è in grado di attivare correttamente la gestione delle eccezioni a virgola mobile senza interruzioni.

## <a name="remarks"></a>Commenti

La funzione **feholdexcept** viene usata per archiviare lo stato dell'ambiente a virgola mobile corrente nell'oggetto **fenv_t** a cui punta *penv* e per impostare l'ambiente in modo da non interrompere l'esecuzione sulle eccezioni a virgola mobile. Questa attività è nota come modalità senza interruzioni.  Questa modalità continua fino a quando l'ambiente viene ripristinato tramite [fesetenv](fesetenv1.md) o [feupdateenv](feupdateenv.md).

È possibile usare questa funzione all'inizio di una subroutine che deve nascondere uno o più eccezioni a virgola mobile dal chiamante. Per segnalare un'eccezione, è possibile cancellare semplicemente le eccezioni indesiderate tramite [feclearexcept](feclearexcept1.md) e quindi terminare la modalità non di arresto con una chiamata a **feupdateenv**.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**feholdexcept**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[fesetenv](fesetenv1.md)<br/>
[feupdateenv](feupdateenv.md)<br/>
