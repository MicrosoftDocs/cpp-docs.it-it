---
title: _setmaxstdio | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _setmaxstdio
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
- setmaxstdio
- _setmaxstdio
dev_langs:
- C++
helpviewer_keywords:
- maximum open files
- _setmaxstdio function
- setmaxstdio function
- open files, maximum
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
caps.latest.revision: 12
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 7947bb8de34b5e80321ddacf03e4606a53b5dc90
ms.lasthandoff: 02/24/2017

---
# <a name="setmaxstdio"></a>_setmaxstdio
Imposta un massimo per il numero dei file aperti contemporaneamente al livello `stdio`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _setmaxstdio(  
   int newmax   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `newmax`  
 Nuovo massimo per il numero dei file aperti contemporaneamente al livello `stdio`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce `newmax` in caso di esito positivo e -1 in caso contrario.  
  
 Se `newmax` è minore di `_IOB_ENTRIES` o maggiore del numero massimo di handle disponibili nel sistema operativo, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_setmaxstdio` modifica il valore massimo per il numero di file che possono essere aperti contemporaneamente al livello `stdio`.  
  
 Le operazioni di I/O del runtime C supportano ora molti più file aperti nelle piattaforme Win32 rispetto alle versioni precedenti. È possibile aprire contemporaneamente fino a 2.048 file al [livello lowio](../../c-runtime-library/low-level-i-o.md) (ovvero apertura e accesso ai file tramite le funzioni `_open`, `_read`, `_write` e le altre funzioni della famiglia di funzioni di I/O). È possibile aprire contemporaneamente fino a 512 file al [livello stdio](../../c-runtime-library/stream-i-o.md) (ovvero apertura e accesso ai file tramite le funzioni `fopen`, `fgetc`, `fputc` e le altre funzioni della famiglia). Il limite di 512 file aperti al livello `stdio` può essere aumentato a un massimo di 2.048 tramite la funzione `_setmaxstdio`.  
  
 Dato che le funzioni al livello `stdio`, come `fopen`, sono basate sulle funzioni del livello `lowio`, il numero massimo di 2.048 è un limite superiore fisso per il numero di file aperti contemporaneamente accessibili tramite la libreria di runtime C.  
  
> [!NOTE]
>  Questo limite superiore potrebbe essere maggiore di quanto supportato da una particolare configurazione e piattaforma Win32.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_setmaxstdio`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere [_getmaxstdio](../../c-runtime-library/reference/getmaxstdio.md) per un esempio dell'uso di `_setmaxstdio`.  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)
