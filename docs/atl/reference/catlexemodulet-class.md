---
title: Classe CAtlExeModuleT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT::CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT::InitializeCom
- ATLBASE/ATL::CAtlExeModuleT::ParseCommandLine
- ATLBASE/ATL::CAtlExeModuleT::PostMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::PreMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::RegisterClassObjects
- ATLBASE/ATL::CAtlExeModuleT::RevokeClassObjects
- ATLBASE/ATL::CAtlExeModuleT::Run
- ATLBASE/ATL::CAtlExeModuleT::RunMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::UninitializeCom
- ATLBASE/ATL::CAtlExeModuleT::Unlock
- ATLBASE/ATL::CAtlExeModuleT::WinMain
- ATLBASE/ATL::CAtlExeModuleT::m_bDelayShutdown
- ATLBASE/ATL::CAtlExeModuleT::m_dwPause
- ATLBASE/ATL::CAtlExeModuleT::m_dwTimeOut
dev_langs:
- C++
helpviewer_keywords:
- CAtlExeModuleT class
ms.assetid: 82245f3d-91d4-44fa-aa86-7cc7fbd758d9
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 24ee6c4dfb13c31377bdd7d4f57a92d4f11ad4b8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="catlexemodulet-class"></a>Classe CAtlExeModuleT
Questa classe rappresenta il modulo per un'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlExeModuleT : public CAtlModuleT<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CAtlExeModuleT`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::CAtlExeModuleT](#catlexemodulet)|Costruttore.|  
|[CAtlExeModuleT:: ~ CAtlExeModuleT](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::InitializeCom](#initializecom)|Consente di inizializzare COM.|  
|[CAtlExeModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando e, se necessario, esegue la registrazione.|  
|[CAtlExeModuleT::PostMessageLoop](#postmessageloop)|Questo metodo viene chiamato immediatamente dopo l'uscita dal ciclo di messaggi.|  
|[CAtlExeModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.|  
|[CAtlExeModuleT::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto della classe.|  
|[CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto della classe.|  
|[CAtlExeModuleT::Run](#run)|Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulizia.|  
|[CAtlExeModuleT::RunMessageLoop](#runmessageloop)|Questo metodo esegue il ciclo di messaggi.|  
|[CAtlExeModuleT::UninitializeCom](#uninitializecom)|Annulla l'inizializzazione COM.|  
|[CAtlExeModuleT::Unlock](#unlock)|Decrementa il conteggio dei blocchi del modulo.|  
|[CAtlExeModuleT::WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire un file EXE.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown)|Flag che indica che deve essere un ritardo in corso l'arresto del modulo.|  
|[CAtlExeModuleT::m_dwPause](#m_dwpause)|Un valore di pausa utilizzato per verificare che tutti gli oggetti vengono rilasciati prima della chiusura.|  
|[CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout)|Un valore di timeout utilizzato per ritardare lo scaricamento del modulo.|  
  
## <a name="remarks"></a>Note  
 `CAtlExeModuleT`rappresenta il modulo per un'applicazione (EXE) e contiene codice che supporta la creazione di un file EXE, la riga di comando di elaborazione, la registrazione degli oggetti di classe, che esegue il ciclo di messaggi e pulizia in uscita.  
  
 Questa classe è progettata per migliorare le prestazioni quando gli oggetti COM nel server EXE continuamente vengono creati e distrutti. Dopo l'ultimo oggetto COM viene rilasciato, il file EXE è in attesa di una durata specificata per il [CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout) (membro dati). Se non esiste alcuna attività durante questo periodo (vale a dire, non COM vengono creati oggetti), viene avviato il processo di arresto.  
  
 Il [CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown) membro dati è un flag utilizzato per determinare se il file EXE debba utilizzare il meccanismo definito in precedenza. Se è impostata su false, il modulo verrà termina immediatamente.  
  
 Per ulteriori informazioni sui moduli in ATL, vedere [classi di modulo ATL](../../atl/atl-module-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  

  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CAtlExeModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="catlexemodulet"></a>CAtlExeModuleT::CAtlExeModuleT  
 Costruttore.  
  
```
CAtlExeModuleT() throw();
```  
  
### <a name="remarks"></a>Note  
 Se non è stato possibile inizializzare il modulo EXE, WinMain verrà restituito immediatamente senza ulteriore elaborazione.  
  
##  <a name="dtor"></a>CAtlExeModuleT:: ~ CAtlExeModuleT  
 Distruttore.  
  
```
~CAtlExeModuleT() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="initializecom"></a>CAtlExeModuleT::InitializeCom  
 Consente di inizializzare COM.  
  
```
static HRESULT InitializeCom() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal costruttore e può essere sottoposto a override per inizializzare COM in modo diverso dall'implementazione predefinita. L'implementazione predefinita chiama sia **CoInitializeEx (NULL, COINIT_MULTITHREADED)** o **CoInitialize(NULL)** a seconda della configurazione di progetto.  
  
 Override di questo metodo in genere necessario eseguire l'override [CAtlExeModuleT::UninitializeCom](#uninitializecom).  
  
##  <a name="m_bdelayshutdown"></a>CAtlExeModuleT::m_bDelayShutdown  
 Flag che indica che deve essere un ritardo in corso l'arresto del modulo.  
  
```
bool m_bDelayShutdown;
```  
  
### <a name="remarks"></a>Note  
 Vedere il [CAtlExeModuleT Panoramica](../../atl/reference/catlexemodulet-class.md) per informazioni dettagliate.  
  
##  <a name="m_dwpause"></a>CAtlExeModuleT::m_dwPause  
 Un valore di pausa utilizzato per verificare che tutti gli oggetti esistono più prima dell'arresto.  
  
```
DWORD m_dwPause;
```  
  
### <a name="remarks"></a>Note  
 Modificare questo valore dopo la chiamata [CAtlExeModuleT::InitializeCom](#initializecom) per impostare il numero di millisecondi, utilizzato come valore pausa per arrestare il server. Il valore predefinito è 1000 millisecondi.  
  
##  <a name="m_dwtimeout"></a>CAtlExeModuleT::m_dwTimeOut  
 Un valore di timeout utilizzato per ritardare lo scaricamento del modulo.  
  
```
DWORD m_dwTimeOut;
```  
  
### <a name="remarks"></a>Note  
 Modificare questo valore dopo la chiamata [CAtlExeModuleT::InitializeCom](#initializecom) per definire il numero di millisecondi, utilizzato come il valore di timeout per l'arresto del server. Il valore predefinito è 5000 millisecondi. Vedere il [CAtlExeModuleT Panoramica](../../atl/reference/catlexemodulet-class.md) per ulteriori dettagli.  
  
##  <a name="parsecommandline"></a>CAtlExeModuleT::ParseCommandLine  
 Analizza la riga di comando e, se necessario, esegue la registrazione.  
  
```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpCmdLine`  
 La riga di comando passati all'applicazione.  
  
 `pnRetCode`  
 Il valore HRESULT corrispondente alla registrazione (se sono state effettuate).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'applicazione deve continuare a eseguire, in caso contrario false.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da [CAtlExeModuleT::WinMain](#winmain) e può essere sottoposto a override per la gestione della riga di comando. L'implementazione predefinita cerca **/RegServer** e **/UnRegServer** gli argomenti della riga di comando ed esegue la registrazione o annullamento della registrazione.  
  
##  <a name="postmessageloop"></a>CAtlExeModuleT::PostMessageLoop  
 Questo metodo viene chiamato immediatamente dopo l'uscita dal ciclo di messaggi.  
  
```
HRESULT PostMessageLoop() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per eseguire la pulizia di applicazione personalizzata. L'implementazione predefinita chiama [CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects).  
  
##  <a name="premessageloop"></a>CAtlExeModuleT::PreMessageLoop  
 Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.  
  
```
HRESULT PreMessageLoop(int nShowCmd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Il valore passato come il `nShowCmd` parametro WinMain.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per aggiungere il codice di inizializzazione personalizzati per l'applicazione. L'implementazione predefinita registra gli oggetti della classe.  
  
##  <a name="registerclassobjects"></a>CAtlExeModuleT::RegisterClassObjects  
 Registra l'oggetto della classe OLE in modo da altre applicazioni possono connettersi ad essa.  
  
```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwClsContext*  
 Specifica il contesto in cui viene eseguita l'oggetto della classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER.  
  
 `dwFlags`  
 Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo, S_FALSE se non fosse nessuna classe per la registrazione o un errore HRESULT in caso di errore.  
  
##  <a name="revokeclassobjects"></a>CAtlExeModuleT::RevokeClassObjects  
 Rimuove l'oggetto di classe.  
  
```
HRESULT RevokeClassObjects() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo, S_FALSE se non fosse nessuna classe per la registrazione o un errore HRESULT in caso di errore.  
  
##  <a name="run"></a>CAtlExeModuleT::Run  
 Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulizia.  
  
```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Specifica la modalità di visualizzare la finestra. Questo parametro può essere uno dei valori descritti nella [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) sezione. Il valore predefinito è SW_HIDE.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere sottoposto a override. Tuttavia, in pratica è preferibile eseguire l'override [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](#runmessageloop), o [CAtlExeModuleT::PostMessageLoop](#postmessageloop) invece.  
  
##  <a name="runmessageloop"></a>CAtlExeModuleT::RunMessageLoop  
 Questo metodo esegue il ciclo di messaggi.  
  
```
void RunMessageLoop() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere sottoposto a override per modificare il comportamento del ciclo di messaggi.  
  
##  <a name="uninitializecom"></a>CAtlExeModuleT::UninitializeCom  
 Annulla l'inizializzazione COM.  
  
```
static void UninitializeCom() throw();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo chiama [CoUninitialize](http://msdn.microsoft.com/library/windows/desktop/ms688715) e viene chiamato dal distruttore. Eseguire l'override di questo metodo se esegue l'override [CAtlExeModuleT::InitializeCom](#initializecom).  
  
##  <a name="unlock"></a>CAtlExeModuleT::Unlock  
 Decrementa il conteggio dei blocchi del modulo.  
  
```
LONG Unlock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="winmain"></a>CAtlExeModuleT::WinMain  
 Questo metodo implementa il codice necessario per eseguire un file EXE.  
  
```
int WinMain(int nShowCmd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nShowCmd`  
 Specifica la modalità di visualizzare la finestra. Questo parametro può essere uno dei valori descritti nella [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559) sezione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una valore restituito dell'eseguibile.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere sottoposto a override. Se si esegue l'override [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::PostMessageLoop](#postmessageloop), o [CAtlExeModuleT::RunMessageLoop](#runmessageloop) non fornisce abbastanza flessibilità, è possibile eseguire l'override di `WinMain` funzione utilizzando questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio ATLDuck](../../visual-cpp-samples.md)   
 [Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)   
 [Classe CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

