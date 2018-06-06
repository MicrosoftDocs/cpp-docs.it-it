---
title: _open_osfhandle | Microsoft Docs
ms.custom: ''
ms.date: 05/29/2018
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: af3783420389dc008e39c818c39406f0b2af8af5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34569836"
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

*osfhandle*<br/>
Handle di file del sistema operativo.

*flags*<br/>
Tipi di operazioni consentite.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **open_osfhandle** restituisce un descrittore di file di runtime C. In caso contrario, restituisce -1.

## <a name="remarks"></a>Note

Il **open_osfhandle** funzione alloca un descrittore di file di runtime C e la associa l'handle di file del sistema operativo specificato da *osfhandle*. Per evitare un avviso del compilatore, eseguire il cast di *osfhandle* argomento dal **gestire** al **intptr_t**. Il *flags* l'argomento è un'espressione integer formata da uno o più delle costanti manifesto definiti \<fcntl >. Quando due o più costanti del manifesto vengono usate per costituire il *flags* argomento, vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

Queste costanti manifesto sono definite in \<fcntl >:

|||
|-|-|
**\_O\_APPEND**|Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura.
**\_O\_RDONLY**|Apre il file in sola lettura.
**\_O\_TEXT**|Apre il file in modalità testo (convertito).
**\_O\_WTEXT**|Apre il file in modalità Unicode (convertito in UTF-16).

Il **open_osfhandle** chiamata trasferisce la proprietà dell'handle di file Win32 per il descrittore del file. Per chiudere un file aperto con **open_osfhandle**, chiamare [ \_chiudere](close.md). L'handle di file del sistema operativo sottostante viene chiuso anche da una chiamata a **Close**, pertanto non è necessario chiamare la funzione Win32 **CloseHandle** nell'handle di originale. Se il descrittore del file è di proprietà di un **FILE &#42;**  flusso, quindi chiamare [fclose](fclose-fcloseall.md) su quel **FILE &#42;**  stream e inoltre chiude il descrittore di file e il handle sottostante. In questo caso, non chiamare **Close** nel descrittore di file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_open_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
