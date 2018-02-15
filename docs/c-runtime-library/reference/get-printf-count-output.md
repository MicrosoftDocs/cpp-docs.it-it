---
title: _get_printf_count_output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _get_printf_count_output
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- get_printf_count_output
- _get_printf_count_output
dev_langs:
- C++
helpviewer_keywords:
- '%n format'
- get_printf_count_output function
- _get_printf_count_output function
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 05184838f9ac68e697cc7ff326c33c266f865875
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="getprintfcountoutput"></a>_get_printf_count_output
Indica se le funzioni della famiglia [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) supportano il formato `%n`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _get_printf_count_output();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Diverso da zero se `%n` è supportato, 0 se `%n` non è supportato.  
  
## <a name="remarks"></a>Note  
 Se `%n` non è supportato (impostazione predefinita), se viene rilevato `%n` nella stringa di formato di una qualsiasi delle funzioni `printf` verrà richiamato il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se `%n` è abilitato il supporto (vedere [set_printf_count_output](../../c-runtime-library/reference/set-printf-count-output.md)) quindi `%n` si comporteranno come descritto in [sintassi specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_get_printf_count_output`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_set_printf_count_output](../../c-runtime-library/reference/set-printf-count-output.md).  
  
## <a name="see-also"></a>Vedere anche  
[_set_printf_count_output](../../c-runtime-library/reference/set-printf-count-output.md)  
