---
title: _findclose
ms.date: 11/04/2016
apiname:
- _findclose
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
- _findclose
- findclose
helpviewer_keywords:
- _findclose function
- findclose function
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
ms.openlocfilehash: 29010f8a502d463eeb6ca98837a1b7dae9f5ae6b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62333755"
---
# <a name="findclose"></a>_findclose

Chiude l'handle di ricerca specificato e rilascia le risorse associate.

## <a name="syntax"></a>Sintassi

```C
int _findclose(
   intptr_t handle
);
```

### <a name="parameters"></a>Parametri

*handle*<br/>
Handle di ricerca restituito da una chiamata precedente a **FindFirst**.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **FindClose** restituisce 0. In caso contrario, restituisce -1 e imposta **errno** al **ENOENT**, che indica che non altri file corrispondenti è stata trovata.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findclose**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)<br/>
