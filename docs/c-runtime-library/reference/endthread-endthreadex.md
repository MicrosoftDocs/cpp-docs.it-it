---
title: _endthread, _endthreadex
ms.date: 4/2/2020
api_name:
- _endthread
- _endthreadex
- _o__endthread
- _o__endthreadex
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
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _endthread
- endthreadex
- _endthreadex
- endthread
helpviewer_keywords:
- _endthread function
- endthread function
- terminating threads
- endthreadex function
- _endthreadex function
- threading [C++], terminating threads
ms.assetid: 18a91f2f-659e-40b4-b266-ec12dcf2abf5
ms.openlocfilehash: a3889adcc90bd62e766102b72aae68577915e55b
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82915077"
---
# <a name="_endthread-_endthreadex"></a>_endthread, _endthreadex

Termina un thread. **_endthread** termina un thread creato da **_beginthread** e **_endthreadex** termina un thread creato da **_beginthreadex**.

## <a name="syntax"></a>Sintassi

```C
void _endthread( void );
void _endthreadex(
   unsigned retval
);
```

### <a name="parameters"></a>Parametri

*retval*<br/>
Codice di uscita del thread

## <a name="remarks"></a>Osservazioni

È possibile chiamare in modo esplicito **_endthread** o **_endthreadex** per terminare un thread. Tuttavia, **_endthread** o **_endthreadex** viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro a **_beginthread** o **_beginthreadex**. La terminazione di un thread con una chiamata a **endthread** o **_endthreadex** contribuisce a garantire il ripristino corretto delle risorse allocate per il thread.

> [!NOTE]
> Per un file eseguibile collegato a Libcmt.lib, non chiamare l'API [ExitThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread) di Win32 per non impedire al sistema di runtime di recuperare le risorse allocate. **_endthread** e **_endthreadex** recuperare le risorse del thread allocate, quindi chiamare **ExitThread**.

**_endthread** chiude automaticamente l'handle del thread. Questo comportamento è diverso dall'API Win32 **ExitThread** . Pertanto, quando si utilizzano **_beginthread** e **_endthread**, non chiudere in modo esplicito l'handle del thread chiamando l'API Win32 [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) .

Analogamente all'API Win32 **ExitThread** , **_endthreadex** non chiude l'handle del thread. Pertanto, quando si usano **_beginthreadex** e **_endthreadex**, è necessario chiudere l'handle del thread chiamando l'API Win32 **CloseHandle** .

> [!NOTE]
> **_endthread** e **_endthreadex** causare la mancata chiamata dei distruttori C++ in sospeso nel thread.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_endthread**|\<process.h>|
|**_endthreadex**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [_beginthread](beginthread-beginthreadex.md).

## <a name="see-also"></a>Vedere anche

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[_beginthread, _beginthreadex](beginthread-beginthreadex.md)<br/>
