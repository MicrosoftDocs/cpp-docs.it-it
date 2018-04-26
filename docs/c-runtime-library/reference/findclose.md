---
title: _findclose | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _findclose function
- findclose function
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 89c1f515bb072c649a93b77e49b500ea4636e423
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

*Handle*<br/>
Handle di ricerca restituiti da una chiamata precedente a **FindFirst**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **FindClose** restituisce 0. In caso contrario, restituisce -1 e imposta **errno** alla **ENOENT**, che indica che la corrispondenza non sono più file è stata trovata.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findclose**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)<br/>
