---
title: _get_osfhandle | Microsoft Docs
ms.custom: ''
ms.date: 12/12/2017
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _get_osfhandle
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
- get_osfhandle
- _get_osfhandle
dev_langs:
- C++
helpviewer_keywords:
- operating systems, getting file handles
- get_osfhandle function
- _get_osfhandle function
- file handles [C++], operating system
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ef9481cb0ad962de96b710b31ac1460b9703ae6e
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getosfhandle"></a>_get_osfhandle

Recupera l''handle di file del sistema operativo associato al descrittore di file specificato.

## <a name="syntax"></a>Sintassi

```C
intptr_t _get_osfhandle(
   int fd
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file esistente.

## <a name="return-value"></a>Valore restituito

Restituisce un handle di file del sistema operativo se *fd* è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **INVALID_HANDLE_VALUE** (-1) e imposta **errno** al **EBADF**, che indica un handle di file non valido.

## <a name="remarks"></a>Note

Per chiudere un file con handle di file di sistema operativo () consente di ottenere **get_osfhandle**, chiamare [Close](close.md) sul descrittore del file *fd*. Non chiamare **CloseHandle** sul valore restituito di questa funzione. L'handle di file del sistema operativo sottostante è di proprietà per il *fd* descrittore di file e viene chiuso quando [Close](close.md) viene chiamato sul *fd*. Se il descrittore del file è di proprietà di un **FILE \***  flusso, quindi chiamare [fclose](fclose-fcloseall.md) su quel **FILE \***  flusso chiude il descrittore di file e l'handle di file del sistema operativo sottostante. In questo caso, non chiamare [Close](close.md) nel descrittore di file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
