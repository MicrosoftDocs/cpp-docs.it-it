---
title: _close | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _close
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
- _close
dev_langs:
- C++
helpviewer_keywords:
- _close function
- close function
- files [C++], closing
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e49906a1ea0bf66400a6ac753c5d4041bc47217c
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="close"></a>_close

Chiude un file.

## <a name="syntax"></a>Sintassi

```C
int _close(
   int fd
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

## <a name="return-value"></a>Valore restituito

**Close** restituisce 0 se il file è stato chiuso. Il valore restituito-1 indica un errore.

## <a name="remarks"></a>Note

Il **Close** funzione chiude il file associato *fd*.

Il descrittore di file e il punto di controllo file del sistema operativo sottostante vengono chiusi. Non è pertanto necessario chiamare **CloseHandle** se il file è stato originariamente aperto con la funzione Win32 **CreateFile** e convertito in un descrittore di file mediante **open_osfhandle**.

Questa funzione convalida i relativi parametri. Se *fd* è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostata su **EBADF**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_close**|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_open](open-wopen.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chsize](chsize.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
