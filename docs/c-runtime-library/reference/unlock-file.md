---
title: _unlock_file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _unlock_file
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _unlock_file
- unlock_file
dev_langs:
- C++
helpviewer_keywords:
- files [C++], unlocking
- unlock_file function
- _unlock_file function
- unlocking files
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 503087d84e65e556fa610efbf0054c66ee774d48
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="unlockfile"></a>_unlock_file

Sblocca un file, consentendo ad altri processi di accedere al file.

## <a name="syntax"></a>Sintassi

```C
void _unlock_file(
   FILE* file
);
```

### <a name="parameters"></a>Parametri

*file* handle di File.

## <a name="remarks"></a>Note

Il **unlock_file** funzione Sblocca il file specificato da *file*. Lo sblocco di un file consente l'accesso al file da altri processi. Questa funzione non deve essere chiamata solo se **lock_file** è stato chiamato in precedenza sul *file* puntatore. La chiamata **unlock_file** in un file che non sia bloccato, potrebbe causare un deadlock. Per un esempio, vedere [_lock_file](lock-file.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_unlock_file**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_lock_file](lock-file.md)<br/>
