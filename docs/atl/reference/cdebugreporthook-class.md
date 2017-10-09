---
title: Classe CDebugReportHook | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: 72790fca5fbfb2856d4da780f276b9cfdc53a26a
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cdebugreporthook-class"></a>CDebugReportHook (classe)
Utilizzare questa classe per inviare i report di debug a una named pipe.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CDebugReportHook
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDebugReportHook::CDebugReportHook](#cdebugreporthook)|Chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).|  
|[CDebugReportHook:: ~ CDebugReportHook](#dtor)|Chiamate [CDebugReportHook::RemoveHook](#removehook).|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDebugReportHook::CDebugReportHookProc](#cdebugreporthookproc)|(Statico) La funzione report personalizzata che è collegata al processo di segnalazione del debug di runtime C.|  
|[CDebugReportHook::RemoveHook](#removehook)|Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook di report precedente.|  
|[CDebugReportHook::SetHook](#sethook)|Chiamare questo metodo per avviare l'invio di report di debug alla named pipe.|  
|[CDebugReportHook::SetPipeName](#setpipename)|Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.|  
|[CDebugReportHook::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.|  
  
## <a name="remarks"></a>Note  
 Nelle build di debug del servizi o applicazioni di inviare i report di debug a una named pipe, creare un'istanza di questa classe. I report di debug vengono generate mediante la chiamata [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o tramite un wrapper per questa funzione, ad esempio il [ATLTRACE](debugging-and-error-reporting-macros.md#atltrace) e [ATLASSERT](debugging-and-error-reporting-macros.md#atlassert) macro.  
  
 Utilizzo di questa classe consente di eseguire in modo interattivo il debug di componenti in esecuzione in modalità interattiva [postazioni](http://msdn.microsoft.com/library/windows/desktop/ms687096).  
  
 Si noti che i report di debug vengono inviati utilizzando il contesto di sicurezza sottostante del thread. La rappresentazione è temporaneamente disabilitata in modo che nelle situazioni in cui la rappresentazione di utenti con privilegi limitati in corso, ad esempio nelle applicazioni web, è possibile visualizzare i report di debug.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="cdebugreporthook"></a>CDebugReportHook::CDebugReportHook  
 Chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).  
  
```
CDebugReportHook(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe",
    DWORD dwTimeout = 20000) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `szMachineName`  
 Il nome del computer a cui inviare l'output di debug. Il valore predefinito per il computer locale.  
  
 `szPipeName`  
 Il nome della named pipe a cui inviare l'output di debug.  
  
 `dwTimeout`  
 Il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
##  <a name="dtor"></a>CDebugReportHook:: ~ CDebugReportHook  
 Chiamate [CDebugReportHook::RemoveHook](#removehook).  
  
```
~CDebugReportHook() throw();
```  
  
##  <a name="cdebugreporthookproc"></a>CDebugReportHook::CDebugReportHookProc  
 La funzione report personalizzata che è collegata al processo di segnalazione del debug di runtime C.  
  
```
static int __cdecl CDebugReportHookProc(
    int reportType,
    char* message,
    int* returnValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `reportType`  
 Il tipo di report ( CRT_WARN, CRT_ERROR o CRT_ASSERT).  
  
 `message`  
 La stringa di messaggio.  
  
 *returnValue*  
 Il valore che deve essere restituito [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce FALSE se la funzione hook gestisce il messaggio in questione completamente in modo che sia necessario alcun report ulteriore. Restituisce TRUE se `_CrtDbgReport` deve segnalare il messaggio nel modo normale.  
  
### <a name="remarks"></a>Note  
 La funzione di creazione di report tenta di aprire la named pipe e comunicare con il processo a altra estremità. Se la pipe è occupata, la funzione di segnalazione dovrà attendere fino a quando la pipe è disponibile o il timeout scade. Il timeout può essere impostato dal costruttore o una chiamata a [CDebugReportHook::SetTimeout](#settimeout).  
  
 Il codice in questa funzione viene eseguito nel contesto di sicurezza sottostante del thread chiamante, ovvero la rappresentazione è disabilitata per la durata di questa funzione.  
  
##  <a name="removehook"></a>CDebugReportHook::RemoveHook  
 Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook di report precedente.  
  
```
void RemoveHook() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [crtsetreporthook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per ripristinare l'hook di report precedente.  
  
##  <a name="sethook"></a>CDebugReportHook::SetHook  
 Chiamare questo metodo per avviare l'invio di report di debug alla named pipe.  
  
```
void SetHook() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [crtsetreporthook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) avere i rapporti di debug instradati [CDebugReportHookProc](#cdebugreporthookproc) alla named pipe. Questa classe tiene traccia di hook del report precedente in modo che possano essere ripristinati quando [RemoveHook](#removehook) viene chiamato.  
  
##  <a name="setpipename"></a>CDebugReportHook::SetPipeName  
 Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.  
  
```
BOOL SetPipeName(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe") throw();
```  
  
### <a name="parameters"></a>Parametri  
 `szMachineName`  
 Il nome del computer a cui inviare l'output di debug.  
  
 `szPipeName`  
 Il nome della named pipe a cui inviare l'output di debug.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
##  <a name="settimeout"></a>CDebugReportHook::SetTimeout  
 Chiamare questo metodo per impostare il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
```
void SetTimeout(DWORD dwTimeout);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTimeout`  
 Il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)

