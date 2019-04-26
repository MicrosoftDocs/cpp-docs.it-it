---
title: _open_osfhandle
ms.date: 05/29/2018
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
ms.openlocfilehash: f45ca46cae459c8606f88a98d03b64c40e5d5f01
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156104"
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

Caso di esito positivo **open_osfhandle** restituisce un descrittore di file di runtime C. In caso contrario, restituisce -1.

## <a name="remarks"></a>Note

Il **open_osfhandle** funzione alloca un descrittore di file di runtime C e la associa l'handle di file del sistema operativo specificato da *osfhandle*. Per evitare un avviso del compilatore, eseguire il cast di *osfhandle* argomento dal **gestire** al **intptr_t**. Il *flags* l'argomento è un'espressione integer formata da uno o più delle costanti manifeste definite in \<fcntl. h >. Quando vengono usate due o più costanti manifeste per comporre il *flags* argomento, le costanti vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

Queste costanti manifeste definite \<fcntl. h >:

|||
|-|-|
| **\_U\_APPEND** | Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura. |
| **\_O\_RDONLY** | Apre il file in sola lettura. |
| **\_O\_TEXT** | Apre il file in modalità testo (convertito). |
| **\_O\_WTEXT** | Apre il file in modalità Unicode (convertito in UTF-16). |

Il **open_osfhandle** chiamata trasferisce la proprietà dell'handle di file Win32 per il descrittore del file. Per chiudere un file aperto con **open_osfhandle**, chiamare [ \_chiudere](close.md). L'handle di file del sistema operativo sottostante viene inoltre chiuso da una chiamata a **Close**, quindi non è necessario chiamare la funzione Win32 **CloseHandle** sull'handle originale. Se il descrittore del file è di proprietà di un **FILE &#42;**  flusso, quindi chiamare [fclose](fclose-fcloseall.md) su esso **FILE &#42;**  flusso chiude anche il descrittore di file e il handle sottostante. In questo caso, non chiamare **Close** nel descrittore di file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_open_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
