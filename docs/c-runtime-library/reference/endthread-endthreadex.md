---
title: _endthread, _endthreadex | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _endthread
- _endthreadex
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
- _endthread
- endthreadex
- _endthreadex
- endthread
dev_langs:
- C++
helpviewer_keywords:
- _endthread function
- endthread function
- terminating threads
- endthreadex function
- _endthreadex function
- threading [C++], terminating threads
ms.assetid: 18a91f2f-659e-40b4-b266-ec12dcf2abf5
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ea85337ad22675a9cd7726fa5880d4d565ed9f14
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="endthread-endthreadex"></a>_endthread, _endthreadex

Termina un thread. **endthread** termina un thread creato da **beginthread** e **endthreadex** termina un thread creato da **beginthreadex**.

## <a name="syntax"></a>Sintassi

```C
void _endthread( void );
void _endthreadex(
   unsigned retval
);
```

### <a name="parameters"></a>Parametri

*retval* codice di uscita del Thread.

## <a name="remarks"></a>Note

È possibile chiamare **endthread** o **endthreadex** in modo esplicito per terminare un thread; tuttavia **endthread** oppure **endthreadex** viene chiamato automaticamente quando il thread viene restituito dalla routine passata come parametro a **beginthread** oppure **beginthreadex**. Terminazione di un thread con una chiamata a **endthread** oppure **endthreadex** consente di assicurare il ripristino corretto delle risorse allocate per il thread.

> [!NOTE]
> Per un file eseguibile collegato a Libcmt.lib, non chiamare l'API [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659.aspx) di Win32 per non impedire al sistema di runtime di recuperare le risorse allocate. **endthread** e **endthreadex** recuperano le risorse del thread allocate, quindi chiamare **ExitThread**.

**endthread** chiude automaticamente l'handle del thread. (Questo comportamento è diverso da Win32 **ExitThread** API.) Pertanto, quando si usano **beginthread** e **endthread**, non chiudere in modo esplicito l'handle del thread chiamando Win32 [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211.aspx) API.

Ad esempio Win32 **ExitThread** API **endthreadex** non chiude l'handle del thread. Pertanto, quando si usano **beginthreadex** e **endthreadex**, è necessario chiudere l'handle del thread chiamando Win32 **CloseHandle** API.

> [!NOTE]
> **endthread** e **endthreadex** determinano dei distruttori C++ in sospeso nel thread non essere chiamato.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_endthread**|\<process.h>|
|**_endthreadex**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni multithread delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_beginthread](beginthread-beginthreadex.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_beginthread, _beginthreadex](beginthread-beginthreadex.md)<br/>
