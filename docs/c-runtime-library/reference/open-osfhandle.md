---
title: _open_osfhandle
ms.date: 05/21/2019
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
helpviewer_keywords:
- open_osfhandle function
- file handles [C++], associating
- _open_osfhandle function
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
ms.openlocfilehash: 8527dade37f20b7341d5a26f5752ece668ab7fc9
ms.sourcegitcommit: bde3279f70432f819018df74923a8bb895636f81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/23/2019
ms.locfileid: "66174798"
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

Se ha esito positivo, **_open_osfhandle** restituisce un descrittore di file di runtime C. In caso contrario restituisce -1.

## <a name="remarks"></a>Osservazioni

La funzione **_open_osfhandle** alloca un descrittore di file di runtime C e lo associa a un handle di file del sistema operativo specificato da *osfhandle*. Per evitare un avviso del compilatore, eseguire il cast di dell'argomento *osfhandle* da **HANDLE** a **intptr_t**. L'argomento *flags* è un'espressione integer formata da una o più delle costanti del manifesto definite in \<fcntl.h>. Quando vengono usate due o più costanti manifesto per comporre l'argomento *flags*, le costanti vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

Queste costanti manifesto sono definite in \<fcntl.h>:

|||
|-|-|
| **\_O\_APPEND** | Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura. |
| **\_O\_RDONLY** | Apre il file in sola lettura. |
| **\_O\_TEXT** | Apre il file in modalità testo (convertito). |
| **\_O\_WTEXT** | Apre il file in modalità Unicode (convertito in UTF-16). |

La chiamata **_open_osfhandle** trasferisce la proprietà dell'handle di file Win32 al descrittore di file. Per chiudere un file aperto tramite **_open_osfhandle**, chiamare [\_close](close.md). Anche l'handle di file del sistema operativo sottostante viene chiuso da una chiamata a **_close**. Non chiamare la funzione Win32 **CloseHandle** sull'handle originale. Se il descrittore del file è di proprietà di un flusso **FILE &#42;** una chiamata a [fclose](fclose-fcloseall.md) su tale flusso **FILE &#42;** chiude sia il descrittore del file sia l'handle sottostante. In questo caso non chiamare **_close** per il descrittore di file o **CloseHandle** per l'handle originale.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_open_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
