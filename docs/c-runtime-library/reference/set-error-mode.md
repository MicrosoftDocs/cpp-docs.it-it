---
title: _set_error_mode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _set_error_mode
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- set_error_mode
- _set_error_mode
dev_langs:
- C++
helpviewer_keywords:
- _set_error_mode function
- set_error_mode function
ms.assetid: f0807be5-73d1-4a32-a701-3c9bdd139c5c
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 557af6f9fe37db1e0811508f247eadd0fcfa74a2
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="seterrormode"></a>_set_error_mode

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

## <a name="remarks"></a>Note

Controlla il sink di output di errore impostando il valore di **__error_mode**. Ad esempio, è possibile indirizzare l'output a un errore standard o usare il **MessageBox** API.

Il *mode_val* parametro può essere impostato su uno dei valori seguenti.

|Parametro|Descrizione|
|---------------|-----------------|
|**_OUT_TO_DEFAULT**|Il sink di errore è determinato dal **__app_type**.|
|**_OUT_TO_STDERR**|Il sink di errore è un errore standard.|
|**_OUT_TO_MSGBOX**|Il sink di errore è una finestra di messaggio.|
|**_REPORT_ERRMODE**|Report corrente **__error_mode** valore.|

Se viene passato un valore diverso da quelli elencati, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **set_error_mode** imposta **errno** al **EINVAL** e restituisce -1.

Quando viene usato con un [asserzione](assert-macro-assert-wassert.md), **set_error_mode** consente di visualizzare l'istruzione non riuscita nella finestra di dialogo e offre la possibilità di scegliere il **ignora** pulsante in modo che sia possibile continuare a eseguire il programma.

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

[assert Macro, _assert, _wassert](assert-macro-assert-wassert.md)<br/>
