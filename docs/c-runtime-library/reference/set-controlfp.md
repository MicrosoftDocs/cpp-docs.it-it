---
description: 'Altre informazioni su: _set_controlfp'
title: _set_controlfp
ms.date: 04/05/2018
api_name:
- _set_controlfp
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
- set_controlfp
- _set_controlfp
helpviewer_keywords:
- set_controlfp function
- floating-point functions, setting control word
- _set_controlfp function
ms.assetid: e0689d50-f68a-4028-a9c1-fb23eedee4ad
ms.openlocfilehash: 44316cb4114d06ced1b3d67a261bc8d3ceb1aee6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288867"
---
# <a name="_set_controlfp"></a>_set_controlfp

Imposta la parola di controllo a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
void __cdecl _set_controlfp(
    unsigned int newControl,
    unsigned int mask
);
```

### <a name="parameters"></a>Parametri

*newControl*<br/>
Valori di bit della parola di controllo nuova.

*maschera*<br/>
Maschera di bit della parola di controllo nuova da impostare.

## <a name="return-value"></a>Valore restituito

No.

## <a name="remarks"></a>Osservazioni

La funzione **_set_controlfp** è simile a **_control87**, ma imposta solo la parola di controllo a virgola mobile su *newControl*. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile. È anche possibile mascherare o annullare il mascheramento delle eccezioni a virgola mobile usando **_set_controlfp**. Per altre informazioni, vedere [_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md).

Questa funzione è deprecata durante la compilazione con [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) perché il Common Language Runtime supporta solo la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Compatibilità|
|-------------|---------------------|-------------------|
|**_set_controlfp**|\<float.h>|solo processore x86|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
