---
title: _open_osfhandle
ms.date: 05/21/2019
api_name:
- _open_osfhandle
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
- api-ms-win-crt-stdio-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _open_osfhandle
- open_osfhandle
helpviewer_keywords:
- open_osfhandle function
- file handles [C++], associating
- _open_osfhandle function
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
ms.openlocfilehash: 2fa2d8190082967d14dd780aa9be7286996b1f9f
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70951211"
---
# <a name="_open_osfhandle"></a>_open_osfhandle

Associa un descrittore di file di runtime C a un handle di file del sistema operativo esistente.

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

## <a name="remarks"></a>Note

La funzione **_open_osfhandle** alloca un descrittore di file di runtime C. Associa questo descrittore di file con l'handle di file del sistema operativo specificato da *osfhandle*. Per evitare un avviso del compilatore, eseguire il cast di dell'argomento *osfhandle* da **HANDLE** a **intptr_t**. L'argomento *flags* è un'espressione integer formata da una o più delle costanti del manifesto definite in \<fcntl.h>. È possibile utilizzare l'operatore OR bit per bit **&#124;** () per combinare due o più costanti manifesto per formare l'argomento dei *flag* .

Queste costanti manifesto sono definite in \<fcntl.h>:

|||
|-|-|
| **\_O\_APPEND** | Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura. |
| **\_O\_RDONLY** | Apre il file in sola lettura. |
| **\_O\_TEXT** | Apre il file in modalità testo (convertito). |
| **\_O\_WTEXT** | Apre il file in modalità Unicode (convertito in UTF-16). |

La chiamata **_open_osfhandle** trasferisce la proprietà dell'handle di file Win32 al descrittore di file. Per chiudere un file aperto tramite **_open_osfhandle**, chiamare [\_close](close.md). Anche l'handle di file del sistema operativo sottostante viene chiuso da una chiamata a **_close**. Non chiamare la funzione Win32 **CloseHandle** sull'handle originale. Se il descrittore del file è di proprietà di un flusso di **file &#42;**  , una chiamata a [fclose](fclose-fcloseall.md) chiude sia il descrittore del file che l'handle sottostante. In questo caso non chiamare **_close** per il descrittore di file o **CloseHandle** per l'handle originale.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_open_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[\_get_osfhandle](get-osfhandle.md)
