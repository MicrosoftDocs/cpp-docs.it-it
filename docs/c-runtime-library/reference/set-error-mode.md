---
description: 'Altre informazioni su: _set_error_mode'
title: _set_error_mode
ms.date: 11/04/2016
api_name:
- _set_error_mode
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- set_error_mode
- _set_error_mode
helpviewer_keywords:
- _set_error_mode function
- set_error_mode function
ms.assetid: f0807be5-73d1-4a32-a701-3c9bdd139c5c
ms.openlocfilehash: f21983702adb0ae080443e5869485fe581a65f85
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334093"
---
# <a name="_set_error_mode"></a>_set_error_mode

Modifica **__error_mode** per determinare una posizione non predefinita in cui il runtime C scrive un messaggio di errore per un errore che potrebbe terminare il programma.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _set_error_mode(
   int mode_val
);
```

### <a name="parameters"></a>Parametri

*mode_val*<br/>
Destinazione dei messaggi di errore.

## <a name="return-value"></a>Valore restituito

Restituisce la precedente impostazione o -1 se si verifica un errore.

## <a name="remarks"></a>Commenti

Controlla il sink di output degli errori impostando il valore di **__error_mode**. Ad esempio, è possibile indirizzare l'output a un errore standard o usare l'API **MessageBox** .

Il parametro *mode_val* può essere impostato su uno dei valori seguenti.

|Valore|Description|
|---------------|-----------------|
|**_OUT_TO_DEFAULT**|Il sink di errore è determinato dal **__app_type**.|
|**_OUT_TO_STDERR**|Il sink di errore è un errore standard.|
|**_OUT_TO_MSGBOX**|Il sink di errore è una finestra di messaggio.|
|**_REPORT_ERRMODE**|Segnala il valore **__error_mode** corrente.|

Se viene passato un valore diverso da quelli elencati, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_set_error_mode** imposta **errno** su **EINVAL** e restituisce-1.

Quando viene usato con un' [asserzione](assert-macro-assert-wassert.md), **_set_error_mode** Visualizza l'istruzione non riuscita nella finestra di dialogo e offre la possibilità di scegliere il pulsante **Ignora** per poter continuare a eseguire il programma.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_error_mode**|\<stdlib.h>|

## <a name="example"></a>Esempio

```C
// crt_set_error_mode.c
// compile with: /c
#include <stdlib.h>
#include <assert.h>

int main()
{
   _set_error_mode(_OUT_TO_STDERR);
   assert(2+2==5);
}
```

```Output
Assertion failed: 2+2==5, file crt_set_error_mode.c, line 8

This application has requested the Runtime to terminate it in an unusual way.
Please contact the application's support team for more information.
```

## <a name="see-also"></a>Vedere anche

[Macro ASSERT, _assert, _wassert](assert-macro-assert-wassert.md)<br/>
