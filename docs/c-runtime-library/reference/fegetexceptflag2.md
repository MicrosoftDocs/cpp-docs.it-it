---
title: fegetexceptflag | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- fegetexceptflag
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fegetexceptflag
- fenv/fegetexceptflag
dev_langs:
- C++
helpviewer_keywords:
- fegetexceptflag function
ms.assetid: 2d28f0ca-70c9-4cff-be8b-3d876eacde71
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5f81f89b6e004ff188b381ec38e3af6ef3d7585d
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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
Un puntatore a un **fexcept_t** oggetto che conterrà i valori correnti dei flag di eccezione specificato da *excepts*.

*excepts*<br/>
I flag di eccezione a virgola mobile da archiviare nella *pstatus*.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

Il **fegetexceptflag** funzione archivia lo stato corrente di flag di stato eccezione a virgola mobile specificato da *excepts* nel **fexcept_t** oggetto a cui fa riferimento *pstatus*.  *pstatus* deve puntare a un valore valido **fexcept_t** oggetto o il comportamento successive non è definito. Il **fegetexceptflag** funzione supporta queste macro delle eccezioni, definite in \<fenv. h >:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

Il *excepts* argomento può essere uguale a zero, una delle macro eccezioni a virgola mobile supportati o bit per bit o di due o più delle macro. L'effetto di qualsiasi altro valore di argomento non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fegetexceptflag**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>
