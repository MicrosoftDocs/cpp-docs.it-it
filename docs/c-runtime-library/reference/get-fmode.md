---
title: _get_fmode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _get_fmode
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
- get_fmode
- _get_fmode
dev_langs:
- C++
helpviewer_keywords:
- _get_fmode function
- file translation [C++], default mode
- get_fmode function
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 3081981cde81b200d5896bab4d362db13742eb42
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="getfmode"></a>_get_fmode
Ottiene la modalità di conversione file predefinita per le operazioni di I/O dei file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _get_fmode(   
   int * pmode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pmode`  
 Un puntatore a un Integer da riempire con la modalità predefinita corrente: `_O_TEXT` o `_O_BINARY`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se `pmode` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione ottiene il valore della variabile globale [_fmode](../../c-runtime-library/fmode.md). Questa variabile specifica la modalità di conversione file predefinita sia per le operazioni di I/O dei file del flusso che per quelle a basso livello, quali `_open`, `_pipe`, `fopen` e `freopen`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_get_fmode`|\<stdlib.h>|\<fcntl.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [_set_fmode](../../c-runtime-library/reference/set-fmode.md).  
  
## <a name="see-also"></a>Vedere anche  
 [_fmode](../../c-runtime-library/fmode.md)   
 [_set_fmode](../../c-runtime-library/reference/set-fmode.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md)
