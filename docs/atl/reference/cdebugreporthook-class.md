---
title: Classe CDebugReportHook | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CDebugReportHook
- CDebugReportHook
- ATL::CDebugReportHook
dev_langs:
- C++
helpviewer_keywords:
- CDebugReportHook class
ms.assetid: 798076c3-6e63-4286-83b8-aa1bbcd0c20c
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 632167d4f78ef930673450d6d087f32e91b6541f
ms.lasthandoff: 02/24/2017

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
|[CDebugReportHook::CDebugReportHook](#cdebugreporthook)|Chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).|  
|[CDebugReportHook:: ~ CDebugReportHook](#dtor)|Chiamate [CDebugReportHook::RemoveHook](#removehook).|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDebugReportHook::CDebugReportHookProc](#cdebugreporthookproc)|(Statico) La funzione personalizzata che è collegata al processo di segnalazione il debug del runtime C.|  
|[CDebugReportHook::RemoveHook](#removehook)|Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook di report precedente.|  
|[CDebugReportHook::SetHook](#sethook)|Chiamare questo metodo per iniziare a inviare i report di debug alla named pipe.|  
|[CDebugReportHook::SetPipeName](#setpipename)|Chiamare questo metodo per impostare il computer e il nome della pipe a cui verranno inviati i report di debug.|  
|[CDebugReportHook::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.|  
  
## <a name="remarks"></a>Note  
 Creare un'istanza di questa classe nelle build di debug delle applicazioni di inviare report di debug a una named pipe o servizi. I rapporti di debug generati chiamando [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o tramite un wrapper per questa funzione, ad esempio il [ATLTRACE](http://msdn.microsoft.com/library/c796baa5-e2b9-4814-a27d-d800590b102e) e [ATLASSERT](http://msdn.microsoft.com/library/98e3e0fc-77e2-499b-a6f6-b17a21c6fbd3) macro.  
  
 Utilizzo di questa classe consente di eseguire in modo interattivo il debug di componenti in esecuzione modalità interattiva [postazioni](http://msdn.microsoft.com/library/windows/desktop/ms687096).  
  
 Si noti che i report di debug vengono inviati utilizzando il contesto di sicurezza sottostante del thread. La rappresentazione è temporaneamente disabilitata in modo che sia possono visualizzare i report di debug in situazioni in cui la rappresentazione di utenti con privilegi limitati in corso, ad esempio nelle applicazioni web.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="a-namecdebugreporthooka--cdebugreporthookcdebugreporthook"></a><a name="cdebugreporthook"></a>CDebugReportHook::CDebugReportHook  
 Chiamate [al metodo SetPipeName](#setpipename), [SetTimeout](#settimeout), e [SetHook](#sethook).  
  
```
CDebugReportHook(
    LPCSTR szMachineName = ".",
    LPCSTR szPipeName = "AtlsDbgPipe",
    DWORD dwTimeout = 20000) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `szMachineName`  
 Il nome del computer a cui inviare l'output di debug. Valore predefinito per il computer locale.  
  
 `szPipeName`  
 Il nome della named pipe a cui inviare l'output di debug.  
  
 `dwTimeout`  
 Il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
##  <a name="a-namedtora--cdebugreporthookcdebugreporthook"></a><a name="dtor"></a>CDebugReportHook:: ~ CDebugReportHook  
 Chiamate [CDebugReportHook::RemoveHook](#removehook).  
  
```
~CDebugReportHook() throw();
```  
  
##  <a name="a-namecdebugreporthookproca--cdebugreporthookcdebugreporthookproc"></a><a name="cdebugreporthookproc"></a>CDebugReportHook::CDebugReportHookProc  
 La funzione personalizzata che è collegata al processo di segnalazione il debug del runtime C.  
  
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
 Il valore che deve essere restituito da [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce FALSE se la funzione hook gestisce il messaggio in questione completamente, in modo che non sia necessario alcun report ulteriore. Restituisce TRUE se `_CrtDbgReport` deve segnalare il messaggio nel modo consueto.  
  
### <a name="remarks"></a>Note  
 La funzione di segnalazione tenta di aprire la named pipe e comunicare con il processo a altra estremità. Se la pipe è occupata, la funzione di segnalazione attenderà la pipe è gratuita o della scadenza del timeout. Il timeout può essere impostato dal costruttore o una chiamata a [CDebugReportHook::SetTimeout](#settimeout).  
  
 Il codice in questa funzione viene eseguito nel contesto di sicurezza sottostante del thread chiamante, vale a dire la rappresentazione è disabilitata per la durata di questa funzione.  
  
##  <a name="a-nameremovehooka--cdebugreporthookremovehook"></a><a name="removehook"></a>CDebugReportHook::RemoveHook  
 Chiamare questo metodo per interrompere l'invio di report di debug alla named pipe e ripristinare l'hook di report precedente.  
  
```
void RemoveHook() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [crtsetreporthook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per ripristinare l'hook di report precedente.  
  
##  <a name="a-namesethooka--cdebugreporthooksethook"></a><a name="sethook"></a>CDebugReportHook::SetHook  
 Chiamare questo metodo per iniziare a inviare i report di debug alla named pipe.  
  
```
void SetHook() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [crtsetreporthook2](../../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) per disporre di un report di debug instradato [CDebugReportHookProc](#cdebugreporthookproc) alla named pipe. Questa classe tiene traccia di hook del report precedente in modo che possa essere ripristinato quando [RemoveHook](#removehook) viene chiamato.  
  
##  <a name="a-namesetpipenamea--cdebugreporthooksetpipename"></a><a name="setpipename"></a>CDebugReportHook::SetPipeName  
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
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesettimeouta--cdebugreporthooksettimeout"></a><a name="settimeout"></a>CDebugReportHook::SetTimeout  
 Chiamare questo metodo per impostare il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
```
void SetTimeout(DWORD dwTimeout);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTimeout`  
 Il tempo in millisecondi che questa classe rimarrà in attesa della named pipe diventi disponibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)

