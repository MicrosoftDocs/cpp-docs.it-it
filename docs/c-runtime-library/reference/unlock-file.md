---
description: 'Altre informazioni su: _unlock_file'
title: _unlock_file
ms.date: 4/2/2020
api_name:
- _unlock_file
- _o__unlock_file
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _unlock_file
- unlock_file
helpviewer_keywords:
- files [C++], unlocking
- unlock_file function
- _unlock_file function
- unlocking files
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
ms.openlocfilehash: 6b639ca178f9cb397e9ec14f383b952e94400e7c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299358"
---
# <a name="_unlock_file"></a>_unlock_file

Sblocca un file, consentendo ad altri processi di accedere al file.

## <a name="syntax"></a>Sintassi

```C
void _unlock_file(
   FILE* file
);
```

### <a name="parameters"></a>Parametri

*file*<br/>
Handle di file.

## <a name="remarks"></a>Commenti

La funzione **_unlock_file** Sblocca il file specificato dal *file*. Lo sblocco di un file consente l'accesso al file da altri processi. Questa funzione non deve essere chiamata a meno che **_lock_file** stato precedentemente chiamato sul puntatore del *file* . La chiamata di **_unlock_file** su un file che non è bloccato può causare un deadlock. Per un esempio, vedere [_lock_file](lock-file.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_unlock_file**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_lock_file](lock-file.md)<br/>
