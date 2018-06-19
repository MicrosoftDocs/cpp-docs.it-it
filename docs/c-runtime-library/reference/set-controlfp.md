---
title: _set_controlfp | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _set_controlfp
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
- set_controlfp
- _set_controlfp
dev_langs:
- C++
helpviewer_keywords:
- set_controlfp function
- floating-point functions, setting control word
- _set_controlfp function
ms.assetid: e0689d50-f68a-4028-a9c1-fb23eedee4ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a2647e9719c2aa3fe303393fcc1da55de0385581
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32406420"
---
# <a name="setcontrolfp"></a>_set_controlfp

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

*Maschera*<br/>
Maschera di bit della parola di controllo nuova da impostare.

## <a name="return-value"></a>Valore restituito

Nessuno.

## <a name="remarks"></a>Note

Il **set_controlfp** è simile alla funzione **_control87**, ma imposta solo la parola di controllo a virgola mobile *newControl*. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile. È anche possibile mascherare o annullare il mascheramento eccezioni a virgola mobile utilizzando **set_controlfp**. Per altre informazioni, vedere [_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md).

Questa funzione è deprecata durante la compilazione con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime supporta solo la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Compatibilità|
|-------------|---------------------|-------------------|
|**_set_controlfp**|\<float.h>|solo processore x86|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
