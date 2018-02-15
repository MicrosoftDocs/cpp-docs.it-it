---
title: _open_osfhandle | Microsoft Docs
ms.custom: 
ms.date: 12/12/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _open_osfhandle
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
- _open_osfhandle
- open_osfhandle
dev_langs:
- C++
helpviewer_keywords:
- open_osfhandle function
- file handles [C++], associating
- _open_osfhandle function
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 34f60a327f3bc4c6a6ce1beb6d7b399faa393a70
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="openosfhandle"></a>_open_osfhandle

Associa un descrittore di file di runtime C con una gestione di file del sistema operativo esistente.

## <a name="syntax"></a>Sintassi

```cpp
int _open_osfhandle (
   intptr_t osfhandle,
   int flags
);
```

### <a name="parameters"></a>Parametri

*osfhandle*  
Handle di file del sistema operativo.

*flags*  
Tipi di operazioni consentite.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, `_open_osfhandle` restituisce un descrittore di file di runtime C. In caso contrario, restituisce -1.

## <a name="remarks"></a>Note

Il `_open_osfhandle` funzione alloca un descrittore di file di runtime C e la associa l'handle di file del sistema operativo specificato da *osfhandle*. Il *flag* argomento è un'espressione integer formata da uno o più delle costanti del manifesto definite in fcntl. Quando due o più costanti del manifesto vengono usate per costituire il *flag* argomento, vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

Fcntl. h definisce le costanti manifesto seguenti:

**\_O\_APPEND**  
Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura.

**\_O\_RDONLY**  
Apre il file in sola lettura.

**\_O\_TEXT**  
Apre il file in modalità testo (convertito).

**\_O\_WTEXT**  
Apre il file in modalità Unicode (convertito in UTF-16).

Per chiudere un file aperto con `_open_osfhandle`, chiamare [ \_chiudere](../../c-runtime-library/reference/close.md). L'handle di file del sistema operativo sottostante viene chiuso anche da una chiamata a `_close`, pertanto non è necessario chiamare la funzione Win32 `CloseHandle` dell'handle originale. Se il descrittore del file è di proprietà di un `FILE *` flusso, quindi chiamare [fclose](../../c-runtime-library/reference/fclose-fcloseall.md) su quel `FILE *` stream e inoltre chiude il descrittore del file sia l'handle sottostante. In questo caso, non chiamare `_close` nel descrittore di file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_open_osfhandle`|\<io.h>|

Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)  
