---
title: CDebugReportHook (classe)
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
ms.openlocfilehash: 621d32a14618327873e6e0cce856c5792e1f8c46
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327107"
---
# <a name="cdebugreporthook-class"></a>CDebugReportHook (classe)

Utilizzare questa classe per inviare report di debug a una named pipe.

## <a name="syntax"></a>Sintassi

```
class CDebugReportHook
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDebugReportHook::CDebugReportHook](#cdebugreporthook)|Chiama [SetPipeName](#setpipename), [SetTimeout](#settimeout)e [SetHook](#sethook).|
|[CDebugReportHook:: CDebugReportHook](#dtor)|Chiama [CDebugReportHook::RemoveHook](#removehook).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDebugReportHook::CDebugReportHookProc](#cdebugreporthookproc)|(Statico) Funzione di report personalizzata collegata al processo di creazione di report di runtime del linguaggio C.|
|[CDebugReportHook::RemoveHook](#removehook)|Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook del report precedente.|
|[CDebugReportHook::SetHookCDebugReportHook::SetHook](#sethook)|Chiamare questo metodo per avviare l'invio di report di debug alla named pipe.|
|[CDebugReportHook::SetPipeName](#setpipename)|Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.|
|[CDebugReportHook::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo in millisecondi che questa classe attenderà che la named pipe diventi disponibile.|

## <a name="remarks"></a>Osservazioni

Creare un'istanza di questa classe nelle build di debug dei servizi o delle applicazioni per inviare report di debug a una named pipe. I report di debug vengono generati chiamando [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o utilizzando un wrapper per questa funzione, ad esempio le macro [ATLTRACE](debugging-and-error-reporting-macros.md#atltrace) e [ATLASSERT.](debugging-and-error-reporting-macros.md#atlassert)

L'utilizzo di questa classe consente di eseguire il debug interattivo di componenti in esecuzione in [stazioni](/windows/win32/winstation/window-stations)finestra non interattive.

Si noti che i report di debug vengono inviati utilizzando il contesto di sicurezza sottostante del thread. La rappresentazione è temporaneamente disabilitata in modo che i report di debug possano essere visualizzati in situazioni in cui è in corso la rappresentazione di utenti con privilegi limitati, ad esempio nelle applicazioni Web.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="cdebugreporthookcdebugreporthook"></a><a name="cdebugreporthook"></a>CDebugReportHook::CDebugReportHook

Chiama [SetPipeName](#setpipename), [SetTimeout](#settimeout)e [SetHook](#sethook).

```
CDebugReportHook(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe",
    DWORD dwTimeout = 20000) throw();
```

### <a name="parameters"></a>Parametri

*SzMachineName (NomeComputerdisz)*<br/>
Nome del computer a cui deve essere inviato l'output di debug. Il valore predefinito è il computer locale.

*SzPipeName (nome di szPipe)*<br/>
Nome della named pipe a cui deve essere inviato l'output di debug.

*dwTimeout (dwTimeout)*<br/>
Tempo in millisecondi di attesa della named pipe per la disponibilità della named pipe.

## <a name="cdebugreporthookcdebugreporthook"></a><a name="dtor"></a>CDebugReportHook:: CDebugReportHook

Chiama [CDebugReportHook::RemoveHook](#removehook).

```
~CDebugReportHook() throw();
```

## <a name="cdebugreporthookcdebugreporthookproc"></a><a name="cdebugreporthookproc"></a>CDebugReportHook::CDebugReportHookProc

Funzione di report personalizzata collegata al processo di creazione di report di runtime del linguaggio C.

```
static int __cdecl CDebugReportHookProc(
    int reportType,
    char* message,
    int* returnValue) throw();
```

### <a name="parameters"></a>Parametri

*reportType (tipo di report)*<br/>
Tipo di report (_CRT_WARN, _CRT_ERROR o _CRT_ASSERT).

*Messaggio*<br/>
La stringa di messaggio.

*Returnvalue*<br/>
Valore che deve essere restituito da [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).

### <a name="return-value"></a>Valore restituito

Restituisce FALSE se l'hook gestisce completamente il messaggio in questione in modo che non siano necessarie ulteriori segnalazioni. Restituisce `_CrtDbgReport` TRUE se deve riportare il messaggio nel modo normale.

### <a name="remarks"></a>Osservazioni

La funzione di reporting tenta di aprire la named pipe e comunicare con il processo all'altra estremità. Se la pipe è occupata, la funzione di segnalazione attenderà che la pipe sia libera o che il timeout scada. Il timeout può essere impostato dal costruttore o da una chiamata a [CDebugReportHook::SetTimeout](#settimeout).

Il codice in questa funzione viene eseguito nel contesto di sicurezza sottostante del thread chiamante, ovvero la rappresentazione è disabilitata per la durata di questa funzione.

## <a name="cdebugreporthookremovehook"></a><a name="removehook"></a>CDebugReportHook::RemoveHook

Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook del report precedente.

```
void RemoveHook() throw();
```

### <a name="remarks"></a>Osservazioni

Chiama [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per ripristinare l'hook del report precedente.

## <a name="cdebugreporthooksethook"></a><a name="sethook"></a>CDebugReportHook::SetHookCDebugReportHook::SetHook

Chiamare questo metodo per avviare l'invio di report di debug alla named pipe.

```
void SetHook() throw();
```

### <a name="remarks"></a>Osservazioni

Chiama [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per avere report di debug instradati tramite [CDebugReportHookProc](#cdebugreporthookproc) alla named pipe. Questa classe tiene traccia dell'hook del report precedente in modo che possa essere ripristinato quando viene chiamato [RemoveHook.This](#removehook) class keeps track of the previous report hook so that it can be restored when RemoveHook is called.

## <a name="cdebugreporthooksetpipename"></a><a name="setpipename"></a>CDebugReportHook::SetPipeName

Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.

```
BOOL SetPipeName(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe") throw();
```

### <a name="parameters"></a>Parametri

*SzMachineName (NomeComputerdisz)*<br/>
Nome del computer a cui deve essere inviato l'output di debug.

*SzPipeName (nome di szPipe)*<br/>
Nome della named pipe a cui deve essere inviato l'output di debug.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="cdebugreporthooksettimeout"></a><a name="settimeout"></a>CDebugReportHook::SetTimeout

Chiamare questo metodo per impostare il tempo in millisecondi che questa classe attenderà che la named pipe diventi disponibile.

```
void SetTimeout(DWORD dwTimeout);
```

### <a name="parameters"></a>Parametri

*dwTimeout (dwTimeout)*<br/>
Tempo in millisecondi di attesa della named pipe per la disponibilità della named pipe.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)
