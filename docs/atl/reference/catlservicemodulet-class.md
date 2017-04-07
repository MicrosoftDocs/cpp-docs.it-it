---
title: Classe CAtlServiceModuleT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT::CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT::Handler
- ATLBASE/ATL::CAtlServiceModuleT::InitializeSecurity
- ATLBASE/ATL::CAtlServiceModuleT::Install
- ATLBASE/ATL::CAtlServiceModuleT::IsInstalled
- ATLBASE/ATL::CAtlServiceModuleT::LogEvent
- ATLBASE/ATL::CAtlServiceModuleT::OnContinue
- ATLBASE/ATL::CAtlServiceModuleT::OnInterrogate
- ATLBASE/ATL::CAtlServiceModuleT::OnPause
- ATLBASE/ATL::CAtlServiceModuleT::OnShutdown
- ATLBASE/ATL::CAtlServiceModuleT::OnStop
- ATLBASE/ATL::CAtlServiceModuleT::OnUnknownRequest
- ATLBASE/ATL::CAtlServiceModuleT::ParseCommandLine
- ATLBASE/ATL::CAtlServiceModuleT::PreMessageLoop
- ATLBASE/ATL::CAtlServiceModuleT::RegisterAppId
- ATLBASE/ATL::CAtlServiceModuleT::Run
- ATLBASE/ATL::CAtlServiceModuleT::ServiceMain
- ATLBASE/ATL::CAtlServiceModuleT::SetServiceStatus
- ATLBASE/ATL::CAtlServiceModuleT::Start
- ATLBASE/ATL::CAtlServiceModuleT::Uninstall
- ATLBASE/ATL::CAtlServiceModuleT::Unlock
- ATLBASE/ATL::CAtlServiceModuleT::UnregisterAppId
- ATLBASE/ATL::CAtlServiceModuleT::WinMain
- ATLBASE/ATL::CAtlServiceModuleT::m_bService
- ATLBASE/ATL::CAtlServiceModuleT::m_dwThreadID
- ATLBASE/ATL::CAtlServiceModuleT::m_hServiceStatus
- ATLBASE/ATL::CAtlServiceModuleT::m_status
- ATLBASE/ATL::CAtlServiceModuleT::m_szServiceName
dev_langs:
- C++
helpviewer_keywords:
- CAtlServiceModuleT class
ms.assetid: 8fc753ce-4a50-402b-9b4a-0a4ce5dd496c
caps.latest.revision: 20
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
ms.openlocfilehash: c8fcadca667b618d9e5f112d7910c8e6e6f6c65d
ms.lasthandoff: 02/24/2017

---
# <a name="catlservicemodulet-class"></a>Classe CAtlServiceModuleT
Questa classe implementa un servizio.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, UINT nServiceNameID>  
class ATL_NO_VTABLE CAtlServiceModuleT : public CAtlExeModuleT<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CAtlServiceModuleT`.  
  
 *nServiceNameID*  
 Identificatore della risorsa del servizio.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT::CAtlServiceModuleT](#catlservicemodulet)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT:: Handler](#handler)|La routine del gestore per il servizio.|  
|[CAtlServiceModuleT:: InitializeSecurity](#initializesecurity)|Fornisce il valore predefinito di impostazioni di sicurezza per il servizio.|  
|[CAtlServiceModuleT::Install](#install)|Installa e crea il servizio.|  
|[CAtlServiceModuleT::IsInstalled](#isinstalled)|Conferma che il servizio sia stato installato.|  
|[CAtlServiceModuleT::LogEvent](#logevent)|Scrive nel registro eventi.|  
|[CAtlServiceModuleT::OnContinue](#oncontinue)|Eseguire l'override di questo metodo per riprendere il servizio.|  
|[CAtlServiceModuleT::OnInterrogate](#oninterrogate)|Eseguire l'override di questo metodo per interrogare il servizio.|  
|[CAtlServiceModuleT::OnPause](#onpause)|Eseguire l'override di questo metodo per sospendere il servizio.|  
|[CAtlServiceModuleT::OnShutdown](#onshutdown)|Eseguire l'override di questo metodo per arrestare il servizio|  
|[CAtlServiceModuleT::OnStop](#onstop)|Eseguire l'override di questo metodo per arrestare il servizio|  
|[CAtlServiceModuleT::OnUnknownRequest](#onunknownrequest)|Eseguire l'override di questo metodo per gestire le richieste sconosciute per il servizio|  
|[CAtlServiceModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando e, se necessario, esegue la registrazione.|  
|[CAtlServiceModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.|  
|[CAtlServiceModuleT::RegisterAppId](#registerappid)|Registra il servizio nel Registro di sistema.|  
|[CAtlServiceModuleT](#run)|Esegue il servizio.|  
|[CAtlServiceModuleT::](#servicemain)|Il metodo chiamato da Gestione controllo servizi.|  
|[CAtlServiceModuleT::SetServiceStatus](#setservicestatus)|Aggiorna lo stato del servizio.|  
|[CAtlServiceModuleT:: Start](#start)|Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.|  
|[CAtlServiceModuleT::Uninstall](#uninstall)|Arresta e rimuove il servizio.|  
|[CAtlServiceModuleT::Unlock](#unlock)|Decrementa il conteggio dei blocchi del servizio.|  
|[CAtlServiceModuleT::UnregisterAppId](#unregisterappid)|Rimuove il servizio dal Registro di sistema.|  
|[CAtlServiceModuleT:: WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire il servizio.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT::m_bService](#m_bservice)|Flag che indica che il programma viene eseguito come servizio.|  
|[CAtlServiceModuleT::m_dwThreadID](#m_dwthreadid)|Variabile membro archiviare l'identificatore del thread.|  
|[CAtlServiceModuleT::m_hServiceStatus](#m_hservicestatus)|Variabile membro l'archiviazione di un handle per la struttura di informazioni di stato per il servizio corrente.|  
|[CAtlServiceModuleT::m_status](#m_status)|Variabile membro archiviare la struttura di informazioni di stato per il servizio corrente.|  
|[CAtlServiceModuleT::m_szServiceName](#m_szservicename)|Il nome del servizio in corso la registrazione.|  
  
## <a name="remarks"></a>Note  
 `CAtlServiceModuleT`, derivato da [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implementa un modulo servizio ATL. `CAtlServiceModuleT`fornisce metodi per l'elaborazione della riga di comando, installazione, la registrazione e rimozione. Se è necessaria la funzionalità aggiuntiva, questi e altri metodi possono essere ignorati.  
  
 Questa classe sostituisce obsoleta [CComModule (classi)](../../atl/reference/ccommodule-class.md) utilizzato nelle versioni precedenti di ATL. Vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)  
  
 `CAtlServiceModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="catlservicemodulet"></a>CAtlServiceModuleT::CAtlServiceModuleT  
 Costruttore.  
  
```
CAtlServiceModuleT() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza i membri di dati e imposta lo stato iniziale del servizio.  
  
##  <a name="handler"></a>CAtlServiceModuleT:: Handler  
 La routine del gestore per il servizio.  
  
```
void Handler(DWORD dwOpcode) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwOpcode*  
 Un commutatore che definisce l'operazione del gestore. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Questo è il codice che chiama Gestione controllo servizi (SCM) per recuperare lo stato delle istruzioni servizio e problema, ad esempio arrestare o sospendere. Gestione controllo servizi passa un codice operativo, illustrato di seguito, a `Handler` per indicare cosa deve eseguire il servizio.  
  
|Codice operativo|Significato|  
|--------------------|-------------|  
|SERVICE_CONTROL_STOP|Arresta il servizio. L'override del metodo [CAtlServiceModuleT::OnStop](#onstop) in atlbase. h per modificare il comportamento.|  
|SERVICE_CONTROL_PAUSE|Utente è implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnPause](#onpause) in atlbase. h per sospendere il servizio.|  
|SERVICE_CONTROL_CONTINUE|Utente è implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnContinue](#oncontinue) in atlbase. h per continuare il servizio.|  
|SERVICE_CONTROL_INTERROGATE|Utente è implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnInterrogate](#oninterrogate) in atlbase. h per interrogare il servizio.|  
|SERVICE_CONTROL_SHUTDOWN|Utente è implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnShutdown](#onshutdown) in atlbase. h per arrestare il servizio.|  
  
 Se il codice dell'operazione non viene riconosciuto, il metodo [CAtlServiceModuleT::OnUnknownRequest](#onunknownrequest) viene chiamato.  
  
 Un servizio generato da ATL predefinito gestisce solo l'istruzione di interruzione. Se Gestione controllo servizi passa l'istruzione di interruzione, il servizio comunica a Gestione controllo servizi che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stesso. Questo termina il ciclo di messaggi e il servizio verrà chiuso.  
  
##  <a name="initializesecurity"></a>CAtlServiceModuleT:: InitializeSecurity  
 Fornisce il valore predefinito di impostazioni di sicurezza per il servizio.  
  
```
HRESULT InitializeSecurity() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 In Visual Studio .NET 2003, questo metodo non è implementato nella classe di base. La creazione guidata progetto di Visual Studio include il metodo nel codice generato, ma si verificherà un errore di compilazione se un progetto creato in una versione precedente di Visual C++ viene compilato utilizzando ATL 7.1. Qualsiasi classe che deriva da `CAtlServiceModuleT` devono implementare questo metodo nella classe derivata.  
  
 Utilizzare l'autenticazione livello PKT, livello di rappresentazione di RPC_C_IMP_LEVEL_IDENTIFY e un descrittore di protezione non null nella chiamata a **CoInitializeSecurity**.  
  
 Per i progetti di servizio senza attributi generato dalla procedura guidata, il risultato sarà in  
  
 [!code-cpp[NVC_ATL_Service n.&1;](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_1.cpp)]  
  
 Per i progetti di servizio con gli attributi, il risultato sarà in  
  
 [!code-cpp[NVC_ATL_ServiceAttrib n.&1;](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_2.cpp)]  
  
##  <a name="install"></a>CAtlServiceModuleT::Install  
 Installa e crea il servizio.  
  
```
BOOL Install() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Installa il servizio nel database di Gestione controllo servizi (SCM) e quindi crea l'oggetto servizio. Se non è stato possibile creare il servizio, viene visualizzata una finestra di messaggio e il metodo restituisce FALSE.  
  
##  <a name="isinstalled"></a>CAtlServiceModuleT::IsInstalled  
 Conferma che il servizio sia stato installato.  
  
```
BOOL IsInstalled() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il servizio è installato, FALSE in caso contrario.  
  
##  <a name="logevent"></a>CAtlServiceModuleT::LogEvent  
 Scrive nel registro eventi.  
  
```
void __cdecl LogEvent(LPCTSTR pszFormat, ...) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Stringa da scrivere nel registro eventi.  
  
 ...  
 Facoltative aggiuntive stringhe da scrivere nel registro eventi.  
  
### <a name="remarks"></a>Note  
 Questo metodo scrive i dettagli in un log eventi, utilizzando la funzione [ReportEvent](http://msdn.microsoft.com/library/windows/desktop/aa363679). Se nessun servizio è in esecuzione, la stringa viene inviata alla console.  
  
##  <a name="m_bservice"></a>CAtlServiceModuleT::m_bService  
 Flag che indica che il programma viene eseguito come servizio.  
  
```
BOOL m_bService;
```  
  
### <a name="remarks"></a>Note  
 Utilizzato per distinguere un file EXE del servizio da un file EXE dell'applicazione.  
  
##  <a name="m_dwthreadid"></a>CAtlServiceModuleT::m_dwThreadID  
 L'identificatore del thread del servizio di archiviazione di una variabile membro.  
  
```
DWORD m_dwThreadID;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile archivia l'identificatore del thread del thread corrente.  
  
##  <a name="m_hservicestatus"></a>CAtlServiceModuleT::m_hServiceStatus  
 Variabile membro l'archiviazione di un handle per la struttura di informazioni di stato per il servizio corrente.  
  
```
SERVICE_STATUS_HANDLE m_hServiceStatus;
```  
  
### <a name="remarks"></a>Note  
 Il [SERVICE_STATUS](http://msdn.microsoft.com/library/windows/desktop/ms685996) struttura contiene informazioni relative a un servizio.  
  
##  <a name="m_status"></a>CAtlServiceModuleT::m_status  
 Variabile membro archiviare la struttura di informazioni di stato per il servizio corrente.  
  
```
SERVICE_STATUS m_status;
```  
  
### <a name="remarks"></a>Note  
 Il [SERVICE_STATUS](http://msdn.microsoft.com/library/windows/desktop/ms685996) struttura contiene informazioni relative a un servizio.  
  
##  <a name="m_szservicename"></a>CAtlServiceModuleT::m_szServiceName  
 Il nome del servizio in corso la registrazione.  
  
```
TCHAR [256] m_szServiceName;
```  
  
### <a name="remarks"></a>Note  
 Una stringa con terminazione null che archivia il nome del servizio.  
  
##  <a name="oncontinue"></a>CAtlServiceModuleT::OnContinue  
 Eseguire l'override di questo metodo per riprendere il servizio.  
  
```
void OnContinue() throw();
```  
  
##  <a name="oninterrogate"></a>CAtlServiceModuleT::OnInterrogate  
 Eseguire l'override di questo metodo per interrogare il servizio.  
  
```
void OnInterrogate() throw();
```  
  
##  <a name="onpause"></a>CAtlServiceModuleT::OnPause  
 Eseguire l'override di questo metodo per sospendere il servizio.  
  
```
void OnPause() throw();
```  
  
##  <a name="onshutdown"></a>CAtlServiceModuleT::OnShutdown  
 Eseguire l'override di questo metodo per arrestare il servizio.  
  
```
void OnShutdown() throw();
```  
  
##  <a name="onstop"></a>CAtlServiceModuleT::OnStop  
 Eseguire l'override di questo metodo per arrestare il servizio.  
  
```
void OnStop() throw();
```  
  
##  <a name="onunknownrequest"></a>CAtlServiceModuleT::OnUnknownRequest  
 Eseguire l'override di questo metodo per gestire le richieste sconosciute per il servizio.  
  
```
void OnUnknownRequest(DWORD /* dwOpcode*/) throw();
```  
  
### <a name="parameters"></a>Parametri  
 */\*dwOpcode\*/*  
 Riservato.  
  
##  <a name="parsecommandline"></a>CAtlServiceModuleT::ParseCommandLine  
 Analizza la riga di comando e, se necessario, esegue la registrazione.  
  
```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpCmdLine`  
 Riga di comando  
  
 `pnRetCode`  
 Il valore HRESULT corrispondente alla registrazione (se sono state effettuate).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'esito positivo o false se il file RGS fornito nella riga di comando non è stato registrato.  
  
### <a name="remarks"></a>Note  
 Analizza la riga di comando e nei registri o Annulla la registrazione dei file RGS fornito, se necessario. Questo metodo chiama [CAtlExeModuleT::ParseCommandLine](../../atl/reference/catlexemodulet-class.md#parsecommandline) per verificare la presenza di **/RegServer** e **/UnregServer**. Aggiunta dell'argomento **- servizio** verrà registrato il servizio.  
  
##  <a name="premessageloop"></a>CAtlServiceModuleT::PreMessageLoop  
 Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.  
  
```
HRESULT PreMessageLoop(int nShowCmd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Questo parametro viene passato a [CAtlExeModuleT::PreMessageLoop](../../atl/reference/catlexemodulet-class.md#premessageloop).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per aggiungere il codice di inizializzazione personalizzata per il servizio.  
  
##  <a name="registerappid"></a>CAtlServiceModuleT::RegisterAppId  
 Registra il servizio nel Registro di sistema.  
  
```
inline HRESULT RegisterAppId(bool bService = false) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *bService*  
 Deve essere true per registrare come un servizio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="run"></a>CAtlServiceModuleT  
 Esegue il servizio.  
  
```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Specifica la modalità di visualizzare la finestra. Questo parametro può essere uno dei valori descritti nella [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) sezione. Il valore predefinito è SW_HIDE.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Dopo essere stato chiamato, **eseguire** chiamate [CAtlServiceModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](../../atl/reference/catlexemodulet-class.md#runmessageloop), e [CAtlExeModuleT::PostMessageLoop](../../atl/reference/catlexemodulet-class.md#postmessageloop).  
  
##  <a name="servicemain"></a>CAtlServiceModuleT::  
 Questo metodo viene chiamato da Gestione controllo servizi.  
  
```
void ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwArgc*  
 L'argomento argc.  
  
 *lpszArgv*  
 L'argomento argv.  
  
### <a name="remarks"></a>Note  
 Le chiamate di Gestione controllo servizi (SCM) `ServiceMain` quando si apre l'applicazione Servizi nel Pannello di controllo, selezionare il servizio e fare clic su Start.  
  
 Dopo il server chiama `ServiceMain`, un servizio deve fornire SCM una funzione del gestore. Questa funzione consente di ottenere lo stato del servizio e passare istruzioni specifiche (ad esempio la sospensione o arresto) Gestione controllo servizi. Successivamente, [CAtlServiceModuleT](#run) viene chiamato per svolgere il compito principale del servizio. **Eseguire** continua l'esecuzione fino a quando il servizio viene arrestato.  
  
##  <a name="setservicestatus"></a>CAtlServiceModuleT::SetServiceStatus  
 Questo metodo aggiorna lo stato del servizio.  
  
```
void SetServiceStatus(DWORD dwState) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwState`  
 Il nuovo stato. Vedere [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241) per i valori possibili.  
  
### <a name="remarks"></a>Note  
 Aggiorna le informazioni sullo stato della gestione controllo servizi per il servizio. Viene chiamato dal [CAtlServiceModuleT](#run), [CAtlServiceModuleT::](#servicemain) e altri metodi del gestore. Lo stato viene inoltre archiviato nella variabile membro [CAtlServiceModuleT::m_status](#m_status).  
  
##  <a name="start"></a>CAtlServiceModuleT:: Start  
 Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.  
  
```
HRESULT Start(int nShowCmd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Specifica la modalità di visualizzare la finestra. Questo parametro può essere uno dei valori descritti nella [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) sezione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il [CAtlServiceModuleT:: WinMain](#winmain) metodo gestisce sia l'installazione di registrazione, nonché le attività coinvolte nella rimozione delle voci del Registro di sistema e la disinstallazione del modulo. Quando viene eseguito il servizio, `WinMain` chiamate **avviare**.  
  
##  <a name="uninstall"></a>CAtlServiceModuleT::Uninstall  
 Arresta e rimuove il servizio.  
  
```
BOOL Uninstall() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Arresta l'esecuzione del servizio e lo rimuove dal database di Gestione controllo servizi.  
  
##  <a name="unlock"></a>CAtlServiceModuleT::Unlock  
 Decrementa il conteggio dei blocchi del servizio.  
  
```
LONG Unlock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il conteggio dei blocchi, che può essere utile per la diagnostica e debug.  
  
##  <a name="unregisterappid"></a>CAtlServiceModuleT::UnregisterAppId  
 Rimuove il servizio dal Registro di sistema.  
  
```
HRESULT UnregisterAppId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="winmain"></a>CAtlServiceModuleT:: WinMain  
 Questo metodo implementa il codice necessario per avviare il servizio.  
  
```
int WinMain(int nShowCmd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Specifica la modalità di visualizzare la finestra. Questo parametro può essere uno dei valori descritti nella [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) sezione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore restituito del servizio.  
  
### <a name="remarks"></a>Note  
 Questo metodo elabora la riga di comando (con [CAtlServiceModuleT::ParseCommandLine](#parsecommandline)) e quindi avvia il servizio (utilizzando [CAtlServiceModuleT:: Start](#start)).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

