---
title: _set_controlfp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8b095fe13e8ecf20769ab833ace574d740fd185b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="setcontrolfp"></a>_set_controlfp
Imposta la parola di controllo a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _set_controlfp(  
    unsigned int newControl,  
    unsigned int mask  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `newControl`  
 Valori di bit della parola di controllo nuova.  
  
 `mask`  
 Maschera di bit della parola di controllo nuova da impostare.  
  
## <a name="return-value"></a>Valore restituito  
 Nessuno.  
  
## <a name="remarks"></a>Note  
 `_set_controlfp` è simile a `_control87`, ma imposta solo la parola di controllo a virgola mobile su `newControl`. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile. È anche possibile usare `_set_controlfp` per mascherare o annullare il mascheramento delle eccezioni a virgola mobile. Per altre informazioni, vedere [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md).  
  
 Questa funzione è deprecata durante la compilazione con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime supporta solo la precisione a virgola mobile predefinita.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Compatibilità|  
|-------------|---------------------|-------------------|  
|`_set_controlfp`|\<float.h>|solo processore x86|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [_clear87, _clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [_status87, _statusfp, _statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)