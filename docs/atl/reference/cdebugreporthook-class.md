---
description: 'Altre informazioni su: classe CDebugReportHook'
title: Classe CDebugReportHook
ms.date: 11/04/2016
f1_keywords:
- CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook::CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook::CDebugReportHookProc
- ATLUTIL/ATL::CDebugReportHook::RemoveHook
- ATLUTIL/ATL::CDebugReportHook::SetHook
- ATLUTIL/ATL::CDebugReportHook::SetPipeName
- ATLUTIL/ATL::CDebugReportHook::SetTimeout
helpviewer_keywords:
- CDebugReportHook class
ms.assetid: 798076c3-6e63-4286-83b8-aa1bbcd0c20c
ms.openlocfilehash: 0b26965114caefb8727a34b99a7cacb30c415aac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141973"
---
# <a name="cdebugreporthook-class"></a>Classe CDebugReportHook

Utilizzare questa classe per inviare report di debug a un named pipe.

## <a name="syntax"></a>Sintassi

```
class CDebugReportHook
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDebugReportHook:: CDebugReportHook](#cdebugreporthook)|Chiama il [cmdlet Getpipename](#setpipename), il [timeout](#settimeout)e l' [associazione](#sethook).|
|[CDebugReportHook:: ~ CDebugReportHook](#dtor)|Chiama [CDebugReportHook:: RemoveHook](#removehook).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDebugReportHook:: CDebugReportHookProc](#cdebugreporthookproc)|Statico Funzione di creazione di report personalizzata collegata al processo di creazione di report di debug del runtime C.|
|[CDebugReportHook:: RemoveHook](#removehook)|Chiamare questo metodo per arrestare l'invio di report di debug al named pipe e ripristinare l'hook del report precedente.|
|[CDebugReportHook:: SEHOOK](#sethook)|Chiamare questo metodo per iniziare a inviare report di debug al named pipe.|
|[CDebugReportHook:: sepipename](#setpipename)|Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.|
|[CDebugReportHook:: timeout](#settimeout)|Chiamare questo metodo per impostare l'intervallo di tempo in millisecondi durante il quale questa classe resterà in attesa che il named pipe diventi disponibile.|

## <a name="remarks"></a>Commenti

Creare un'istanza di questa classe nelle build di debug dei servizi o delle applicazioni per inviare i report di debug a una named pipe. I report di debug vengono generati chiamando [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o usando un wrapper per questa funzione, ad esempio le macro [ATLTRACE](debugging-and-error-reporting-macros.md#atltrace) e [ATLASSERT](debugging-and-error-reporting-macros.md#atlassert) .

L'uso di questa classe consente di eseguire il debug interattivo dei componenti eseguiti in [stazioni di finestra](/windows/win32/winstation/window-stations)non interattive.

Si noti che i report di debug vengono inviati usando il contesto di sicurezza sottostante del thread. La rappresentazione è temporaneamente disabilitata in modo che i report di debug possano essere visualizzati in situazioni in cui è in corso la rappresentazione di utenti con privilegi limitati, ad esempio nelle applicazioni Web.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="cdebugreporthookcdebugreporthook"></a><a name="cdebugreporthook"></a> CDebugReportHook:: CDebugReportHook

Chiama il [cmdlet Getpipename](#setpipename), il [timeout](#settimeout)e l' [associazione](#sethook).

```
CDebugReportHook(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe",
    DWORD dwTimeout = 20000) throw();
```

### <a name="parameters"></a>Parametri

*szMachineName*<br/>
Nome del computer a cui deve essere inviato l'output di debug. Il valore predefinito è il computer locale.

*szPipeName*<br/>
Nome dell'named pipe a cui deve essere inviato l'output di debug.

*dwTimeout*<br/>
Tempo in millisecondi che questa classe attenderà che la named pipe diventi disponibile.

## <a name="cdebugreporthookcdebugreporthook"></a><a name="dtor"></a> CDebugReportHook:: ~ CDebugReportHook

Chiama [CDebugReportHook:: RemoveHook](#removehook).

```
~CDebugReportHook() throw();
```

## <a name="cdebugreporthookcdebugreporthookproc"></a><a name="cdebugreporthookproc"></a> CDebugReportHook:: CDebugReportHookProc

Funzione di creazione di report personalizzata collegata al processo di creazione di report di debug del runtime C.

```
static int __cdecl CDebugReportHookProc(
    int reportType,
    char* message,
    int* returnValue) throw();
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report (_CRT_WARN, _CRT_ERROR o _CRT_ASSERT).

*message*<br/>
La stringa di messaggio.

*returnValue*<br/>
Valore che deve essere restituito da [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).

### <a name="return-value"></a>Valore restituito

Restituisce FALSE se l'hook gestisce il messaggio in questione in modo completo, in modo che non siano necessarie altre operazioni di creazione di report. Restituisce TRUE se `_CrtDbgReport` deve segnalare il messaggio in modo normale.

### <a name="remarks"></a>Commenti

La funzione di creazione di report tenta di aprire il named pipe e comunicare con il processo all'altra estremità. Se la pipe è occupata, la funzione di creazione di report resterà in attesa fino a quando la pipe non è disponibile o il timeout scade. Il timeout può essere impostato dal costruttore o da una chiamata a [CDebugReportHook:: setime](#settimeout)out.

Il codice in questa funzione viene eseguito nel contesto di sicurezza sottostante del thread chiamante, ovvero la rappresentazione è disabilitata per la durata di questa funzione.

## <a name="cdebugreporthookremovehook"></a><a name="removehook"></a> CDebugReportHook:: RemoveHook

Chiamare questo metodo per arrestare l'invio di report di debug al named pipe e ripristinare l'hook del report precedente.

```cpp
void RemoveHook() throw();
```

### <a name="remarks"></a>Commenti

Chiama [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per ripristinare l'hook del report precedente.

## <a name="cdebugreporthooksethook"></a><a name="sethook"></a> CDebugReportHook:: SEHOOK

Chiamare questo metodo per iniziare a inviare report di debug al named pipe.

```cpp
void SetHook() throw();
```

### <a name="remarks"></a>Commenti

Chiama [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per avere i report di debug indirizzati tramite [CDebugReportHookProc](#cdebugreporthookproc) al named pipe. Questa classe tiene traccia del precedente hook del report in modo che possa essere ripristinato quando viene chiamato [RemoveHook](#removehook) .

## <a name="cdebugreporthooksetpipename"></a><a name="setpipename"></a> CDebugReportHook:: sepipename

Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.

```
BOOL SetPipeName(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe") throw();
```

### <a name="parameters"></a>Parametri

*szMachineName*<br/>
Nome del computer a cui deve essere inviato l'output di debug.

*szPipeName*<br/>
Nome dell'named pipe a cui deve essere inviato l'output di debug.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="cdebugreporthooksettimeout"></a><a name="settimeout"></a> CDebugReportHook:: timeout

Chiamare questo metodo per impostare l'intervallo di tempo in millisecondi durante il quale questa classe resterà in attesa che il named pipe diventi disponibile.

```cpp
void SetTimeout(DWORD dwTimeout);
```

### <a name="parameters"></a>Parametri

*dwTimeout*<br/>
Tempo in millisecondi che questa classe attenderà che la named pipe diventi disponibile.

## <a name="see-also"></a>Vedi anche

[Classi](../../atl/reference/atl-classes.md)
