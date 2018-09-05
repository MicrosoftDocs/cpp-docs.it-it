---
title: Classe CDebugReportHook | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook::CDebugReportHook
- ATLUTIL/ATL::CDebugReportHook::CDebugReportHookProc
- ATLUTIL/ATL::CDebugReportHook::RemoveHook
- ATLUTIL/ATL::CDebugReportHook::SetHook
- ATLUTIL/ATL::CDebugReportHook::SetPipeName
- ATLUTIL/ATL::CDebugReportHook::SetTimeout
dev_langs:
- C++
helpviewer_keywords:
- CDebugReportHook class
ms.assetid: 798076c3-6e63-4286-83b8-aa1bbcd0c20c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 00a7bfd149bb83dc31327e3ea235479532213e03
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760832"
---
# <a name="cdebugreporthook-class"></a>Classe CDebugReportHook

Usare questa classe per inviare i report di debug a una named pipe.

## <a name="syntax"></a>Sintassi

```
class CDebugReportHook
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDebugReportHook::CDebugReportHook](#cdebugreporthook)|Le chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).|
|[CDebugReportHook:: ~ CDebugReportHook](#dtor)|Le chiamate [CDebugReportHook::RemoveHook](#removehook).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDebugReportHook::CDebugReportHookProc](#cdebugreporthookproc)|(Statico) La funzione report personalizzata che è collegata al processo di gestione sul debug del runtime C.|
|[CDebugReportHook::RemoveHook](#removehook)|Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e il ripristino l'hook di report precedente.|
|[CDebugReportHook::SetHook](#sethook)|Chiamare questo metodo per iniziare a inviare i report di debug alla named pipe.|
|[CDebugReportHook::SetPipeName](#setpipename)|Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.|
|[CDebugReportHook::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo in millisecondi che questa classe dovrà attendere la named pipe diventi disponibile.|

## <a name="remarks"></a>Note

Creare un'istanza di questa classe nelle build di debug del servizi o applicazioni di inviare i report di debug a una named pipe. Report di debug vengono generati chiamando [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o tramite un wrapper per questa funzione, ad esempio le [ATLTRACE](debugging-and-error-reporting-macros.md#atltrace) e [ATLASSERT](debugging-and-error-reporting-macros.md#atlassert) macro.

Utilizzo di questa classe consente di eseguire in modo interattivo il debug di componenti in esecuzione interattivo [postazioni](/windows/desktop/winstation/window-stations).

Si noti che i report di debug vengono inviati utilizzando il contesto di sicurezza sottostante del thread. La rappresentazione è temporaneamente disabilitata in modo che sia possono visualizzare i report di debug nelle situazioni in cui la rappresentazione di utenti con privilegi limitati è in corso, ad esempio nelle applicazioni web.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="cdebugreporthook"></a>  CDebugReportHook::CDebugReportHook

Le chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).

```
CDebugReportHook(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe",
    DWORD dwTimeout = 20000) throw();
```

### <a name="parameters"></a>Parametri

*szMachineName*  
Il nome del computer in cui deve essere inviato l'output di debug. L'impostazione predefinita nel computer locale.

*szPipeName*  
Il nome della named pipe a cui inviare l'output di debug.

*dwTimeout*  
Il tempo in millisecondi che questa classe dovrà attendere la named pipe diventi disponibile.

##  <a name="dtor"></a>  CDebugReportHook:: ~ CDebugReportHook

Le chiamate [CDebugReportHook::RemoveHook](#removehook).

```
~CDebugReportHook() throw();
```

##  <a name="cdebugreporthookproc"></a>  CDebugReportHook::CDebugReportHookProc

La funzione report personalizzata che è collegata al processo di gestione sul debug del runtime C.

```
static int __cdecl CDebugReportHookProc(
    int reportType,
    char* message,
    int* returnValue) throw();
```

### <a name="parameters"></a>Parametri

*reportType*  
Tipo di report ( CRT_WARN, CRT_ERROR o CRT_ASSERT).

*message*  
La stringa di messaggio.

*returnValue*  
Il valore che deve essere restituito dalla [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).

### <a name="return-value"></a>Valore restituito

Restituisce FALSE se la funzione hook gestisce il messaggio in questione completamente in modo che sia necessario alcun report ulteriore. Restituisce TRUE se `_CrtDbgReport` deve segnalare il messaggio in modo normale.

### <a name="remarks"></a>Note

La funzione di creazione di report tenta di aprire la named pipe e comunicare con il processo a altra estremità. Se la pipe è occupata, la funzione di segnalazione attenderà fino a quando la pipe è gratuita o alla scadenza del timeout. Il timeout può essere impostato dal costruttore o una chiamata a [CDebugReportHook::SetTimeout](#settimeout).

Il codice in questa funzione viene eseguito nel contesto di sicurezza sottostante del thread chiamante, vale a dire, la rappresentazione è disabilitata per la durata di questa funzione.

##  <a name="removehook"></a>  CDebugReportHook::RemoveHook

Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e il ripristino l'hook di report precedente.

```
void RemoveHook() throw();
```

### <a name="remarks"></a>Note

Le chiamate [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per ripristinare l'hook di report precedente.

##  <a name="sethook"></a>  CDebugReportHook::SetHook

Chiamare questo metodo per iniziare a inviare i report di debug alla named pipe.

```
void SetHook() throw();
```

### <a name="remarks"></a>Note

Le chiamate [_CrtSetReportHook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) affinché i report di debug instradati attraverso [CDebugReportHookProc](#cdebugreporthookproc) alla named pipe. Questa classe tiene traccia di hook del report precedente in modo che possa essere ripristinata quando [RemoveHook](#removehook) viene chiamato.

##  <a name="setpipename"></a>  CDebugReportHook::SetPipeName

Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.

```
BOOL SetPipeName(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe") throw();
```

### <a name="parameters"></a>Parametri

*szMachineName*  
Il nome del computer in cui deve essere inviato l'output di debug.

*szPipeName*  
Il nome della named pipe a cui inviare l'output di debug.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="settimeout"></a>  CDebugReportHook::SetTimeout

Chiamare questo metodo per impostare il tempo in millisecondi che questa classe dovrà attendere la named pipe diventi disponibile.

```
void SetTimeout(DWORD dwTimeout);
```

### <a name="parameters"></a>Parametri

*dwTimeout*  
Il tempo in millisecondi che questa classe dovrà attendere la named pipe diventi disponibile.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)
