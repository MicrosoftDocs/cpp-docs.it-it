---
title: Classe CWinAppEx | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinAppEx
- AFXWINAPPEX/CWinAppEx
- AFXWINAPPEX/CWinAppEx::CWinAppEx
- AFXWINAPPEX/CWinAppEx::CleanState
- AFXWINAPPEX/CWinAppEx::EnableLoadWindowPlacement
- AFXWINAPPEX/CWinAppEx::EnableTearOffMenus
- AFXWINAPPEX/CWinAppEx::EnableUserTools
- AFXWINAPPEX/CWinAppEx::ExitInstance
- AFXWINAPPEX/CWinAppEx::GetBinary
- AFXWINAPPEX/CWinAppEx::GetContextMenuManager
- AFXWINAPPEX/CWinAppEx::GetDataVersion
- AFXWINAPPEX/CWinAppEx::GetDataVersionMajor
- AFXWINAPPEX/CWinAppEx::GetDataVersionMinor
- AFXWINAPPEX/CWinAppEx::GetInt
- AFXWINAPPEX/CWinAppEx::GetKeyboardManager
- AFXWINAPPEX/CWinAppEx::GetMouseManager
- AFXWINAPPEX/CWinAppEx::GetObject
- AFXWINAPPEX/CWinAppEx::GetRegSectionPath
- AFXWINAPPEX/CWinAppEx::GetRegistryBase
- AFXWINAPPEX/CWinAppEx::GetSectionBinary
- AFXWINAPPEX/CWinAppEx::GetSectionInt
- AFXWINAPPEX/CWinAppEx::GetSectionObject
- AFXWINAPPEX/CWinAppEx::GetSectionString
- AFXWINAPPEX/CWinAppEx::GetShellManager
- AFXWINAPPEX/CWinAppEx::GetString
- AFXWINAPPEX/CWinAppEx::GetTooltipManager
- AFXWINAPPEX/CWinAppEx::GetUserToolsManager
- AFXWINAPPEX/CWinAppEx::InitContextMenuManager
- AFXWINAPPEX/CWinAppEx::InitKeyboardManager
- AFXWINAPPEX/CWinAppEx::InitMouseManager
- AFXWINAPPEX/CWinAppEx::InitShellManager
- AFXWINAPPEX/CWinAppEx::InitTooltipManager
- AFXWINAPPEX/CWinAppEx::IsResourceSmartUpdate
- AFXWINAPPEX/CWinAppEx::IsStateExists
- AFXWINAPPEX/CWinAppEx::LoadState
- AFXWINAPPEX/CWinAppEx::OnAppContextHelp
- AFXWINAPPEX/CWinAppEx::OnViewDoubleClick
- AFXWINAPPEX/CWinAppEx::OnWorkspaceIdle
- AFXWINAPPEX/CWinAppEx::SaveState
- AFXWINAPPEX/CWinAppEx::SetRegistryBase
- AFXWINAPPEX/CWinAppEx::ShowPopupMenu
- AFXWINAPPEX/CWinAppEx::WriteBinary
- AFXWINAPPEX/CWinAppEx::WriteInt
- AFXWINAPPEX/CWinAppEx::WriteObject
- AFXWINAPPEX/CWinAppEx::WriteSectionBinary
- AFXWINAPPEX/CWinAppEx::WriteSectionInt
- AFXWINAPPEX/CWinAppEx::WriteSectionObject
- AFXWINAPPEX/CWinAppEx::WriteSectionString
- AFXWINAPPEX/CWinAppEx::WriteString
- AFXWINAPPEX/CWinAppEx::LoadCustomState
- AFXWINAPPEX/CWinAppEx::LoadWindowPlacement
- AFXWINAPPEX/CWinAppEx::OnClosingMainFrame
- AFXWINAPPEX/CWinAppEx::PreLoadState
- AFXWINAPPEX/CWinAppEx::PreSaveState
- AFXWINAPPEX/CWinAppEx::ReloadWindowPlacement
- AFXWINAPPEX/CWinAppEx::SaveCustomState
- AFXWINAPPEX/CWinAppEx::StoreWindowPlacement
- AFXWINAPPEX/CWinAppEx::m_bForceImageReset
dev_langs:
- C++
helpviewer_keywords:
- CWinAppEx class
ms.assetid: a3d3e053-3e22-463f-9444-c73abb1bb9d7
caps.latest.revision: 37
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: b471749e1e0e2c3ed7b1d8913122c4758276e166
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---
# <a name="cwinappex-class"></a>Classe CWinAppEx
`CWinAppEx`gestisce lo stato dell'applicazione, Salva lo stato nel Registro di sistema, carica lo stato dal Registro di sistema, inizializza i gestori applicazione e vengono forniti collegamenti a tali gestori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWinAppEx : public CWinApp  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::CWinAppEx](#cwinappex)|Costruisce un oggetto `CWinAppEx`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::CleanState](#cleanstate)|Rimuove le informazioni sull'applicazione dal Registro di sistema Windows.|  
|[CWinAppEx::EnableLoadWindowPlacement](#enableloadwindowplacement)|Specifica se l'applicazione caricherà la dimensione e posizione della finestra cornice principale dal Registro di sistema.|  
|[CWinAppEx::EnableTearOffMenus](#enabletearoffmenus)|Abilita tear-off menu per l'applicazione.|  
|[CWinAppEx::EnableUserTools](#enableusertools)|Consente all'utente di creare i comandi di menu personalizzate nell'applicazione.|  
|[CWinAppEx::ExitInstance](#exitinstance)|Chiamato dal framework dall'interno di `Run` funzione membro per uscire dall'installazione di questa istanza dell'applicazione. (Esegue l'override [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).)|  
|[CWinAppEx::GetBinary](#getbinary)|Legge i dati binari che sono associati il valore del Registro di sistema.|  
|[CWinAppEx::GetContextMenuManager](#getcontextmenumanager)|Restituisce un puntatore all'oggetto globale [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) oggetto.|  
|[CWinAppEx::GetDataVersion](#getdataversion)||  
|[CWinAppEx::GetDataVersionMajor](#getdataversionmajor)|Restituisce la versione principale dell'applicazione nel Registro di sistema Windows.|  
|[CWinAppEx::GetDataVersionMinor](#getdataversionminor)|Restituisce la versione secondaria dell'applicazione nel Registro di sistema Windows.|  
|[CWinAppEx::GetInt](#getint)|Legge i dati numerici che sono associati il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetKeyboardManager](#getkeyboardmanager)|Restituisce un puntatore all'oggetto globale [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) oggetto.|  
|[CWinAppEx::GetMouseManager](#getmousemanager)|Restituisce un puntatore all'oggetto globale [CMouseManager](../../mfc/reference/cmousemanager-class.md) oggetto.|  
|[CWinAppEx::GetObject](#getobject)|Legge `CObject`-derivati i dati associati con il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetRegSectionPath](#getregsectionpath)|Restituisce una stringa che rappresenta il percorso di una chiave del Registro di sistema. Questo percorso consente di concatenare il percorso relativo fornito con il percorso dell'applicazione.|  
|[CWinAppEx::GetRegistryBase](#getregistrybase)|Restituisce il percorso del Registro di sistema per l'applicazione.|  
|[CWinAppEx::GetSectionBinary](#getsectionbinary)|Legge i dati binari associati con la chiave specificata e il valore dal Registro di sistema.|  
|[CWinAppEx::GetSectionInt](#getsectionint)|Legge i dati numerici dal Registro di sistema associato con la chiave specificata e il valore.|  
|[CWinAppEx::GetSectionObject](#getsectionobject)|Legge `CObject` i dati associati con la chiave specificata e il valore dal Registro di sistema.|  
|[CWinAppEx::GetSectionString](#getsectionstring)|Legge i dati stringa associata con la chiave specificata e il valore dal Registro di sistema.|  
|[CWinAppEx::GetShellManager](#getshellmanager)|Restituisce un puntatore all'oggetto globale [CShellManager](../../mfc/reference/cshellmanager-class.md) oggetto.|  
|[CWinAppEx::GetString](#getstring)|Legge i dati di stringa che sono associati il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetTooltipManager](#gettooltipmanager)|Restituisce un puntatore all'oggetto globale [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) oggetto.|  
|[CWinAppEx::GetUserToolsManager](#getusertoolsmanager)|Restituisce un puntatore all'oggetto globale [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) oggetto.|  
|[CWinAppEx::InitContextMenuManager](#initcontextmenumanager)|Inizializza il `CContextMenuManager` oggetto.|  
|[CWinAppEx::InitKeyboardManager](#initkeyboardmanager)|Inizializza il `CKeyboardManager` oggetto.|  
|[CWinAppEx::InitMouseManager](#initmousemanager)|Inizializza il `CMouseManager` oggetto.|  
|[CWinAppEx::InitShellManager](#initshellmanager)|Inizializza il `CShellManager` classe|  
|[CWinAppEx:: Inittooltipmanager](#inittooltipmanager)|Inizializza il `CTooltipManager` classe.|  
|[CWinAppEx::IsResourceSmartUpdate](#isresourcesmartupdate)||  
|[CWinAppEx::IsStateExists](#isstateexists)|Indica se la chiave specificata è nel Registro di sistema.|  
|[CWinAppEx::LoadState](#loadstate)|Carica lo stato dell'applicazione dal Registro di sistema.|  
|[CWinAppEx::OnAppContextHelp](#onappcontexthelp)|Chiamato dal framework quando l'utente richiede la Guida sensibile al contesto per il **personalizzazione** la finestra di dialogo.|  
|[CWinAppEx::OnViewDoubleClick](#onviewdoubleclick)|Richiama il comando definito dall'utente quando l'utente fa doppio clic in un punto qualsiasi nell'applicazione.|  
|[CWinAppEx::OnWorkspaceIdle](#onworkspaceidle)||  
|[CWinAppEx::SaveState](#savestate)|Scrive lo stato del framework dell'applicazione nel Registro di sistema di Windows.|  
|[CWinAppEx::SetRegistryBase](#setregistrybase)|Imposta il percorso della chiave del Registro di sistema predefinito. Questa chiave fungerà da una radice per tutte le chiamate successive del Registro di sistema.|  
|[CWinAppEx::ShowPopupMenu](#showpopupmenu)|Visualizza un menu popup.|  
|[CWinAppEx::WriteBinary](#writebinary)|Scrive i dati binari per il valore del Registro di sistema.|  
|[CWinAppEx::WriteInt](#writeint)|Scrive i dati numerici per il valore del Registro di sistema.|  
|[CWinAppEx::WriteObject](#writeobject)|Scrive i dati che sono derivati dal [CObject (classe)](../../mfc/reference/cobject-class.md) al valore del Registro di sistema.|  
|[CWinAppEx::WriteSectionBinary](#writesectionbinary)|Scrive i dati binari in un valore della chiave del Registro di sistema specificata.|  
|[CWinAppEx::WriteSectionInt](#writesectionint)|Scrive i dati numerici in un valore della chiave del Registro di sistema specificata.|  
|[CWinAppEx::WriteSectionObject](#writesectionobject)|Scrive dati derivati dalla `CObject` classe su un valore della chiave del Registro di sistema.|  
|[CWinAppEx::WriteSectionString](#writesectionstring)|Scrive i dati di stringa su un valore della chiave del Registro di sistema.|  
|[CWinAppEx::WriteString](#writestring)|Scrive i dati di stringa per il valore del Registro di sistema.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::LoadCustomState](#loadcustomstate)|Chiamato dal framework quando è stato caricato lo stato dell'applicazione.|  
|[CWinAppEx::LoadWindowPlacement](#loadwindowplacement)|Chiamato dal framework durante il caricamento di dimensioni e la posizione dell'applicazione dal Registro di sistema. I dati caricati sono incluse le dimensioni e la posizione del frame principale al momento dell'ultima chiusura dell'applicazione.|  
|[CWinAppEx::OnClosingMainFrame](#onclosingmainframe)|Chiamato dal framework durante l'elaborazione di una finestra cornice principale `WM_CLOSE`.|  
|[CWinAppEx::PreLoadState](#preloadstate)|Chiamato dal framework immediatamente prima che lo stato dell'applicazione viene caricato.|  
|[CWinAppEx::PreSaveState](#presavestate)|Chiamato dal framework immediatamente precedente viene salvato lo stato dell'applicazione.|  
|[CWinAppEx::ReloadWindowPlacement](#reloadwindowplacement)|Ricarica dimensioni e la posizione della finestra fornita dal Registro di sistema|  
|[CWinAppEx::SaveCustomState](#savecustomstate)|Chiamato dal framework dopo lo stato dell'applicazione viene scritto nel Registro di sistema.|  
|[CWinAppEx::StoreWindowPlacement](#storewindowplacement)|Chiamato dal framework per le dimensioni e la posizione del frame principale di scrittura nel Registro di sistema.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::m_bForceImageReset](#m_bforceimagereset)|Specifica se il framework verrà reimpostato tutte le immagini della barra degli strumenti quando viene caricata la finestra cornice contenente la barra degli strumenti.|  
  
## <a name="remarks"></a>Note  
 La maggior parte delle funzionalità fornite dal framework MFC dipende la `CWinAppEx` classe. È possibile incorporare la `CWinAppEx` classe nell'applicazione in uno dei due modi:  
  
-   Costruire un `CWinAppEx` classe nel thread principale.  
  
-   Derivare la classe principale dell'applicazione da `CWinAppEx`.  
  
 Dopo che integrano `CWinAppEx` nell'applicazione, è possibile inizializzare uno dei gestori dell'applicazione. Prima di utilizzare un'applicazione di gestione, è necessario inizializzarlo chiamando il metodo initialize appropriato. Per ottenere un puntatore a un responsabile specifico, chiamare il metodo get associato. Il `CWinAppEx` classe gestisce i gestori applicazione seguenti: [CMouseManager classe](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager classe](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md), [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md), e [CMenuTearOffManager classe](../../mfc/reference/cmenutearoffmanager-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 [CWinAppEx](../../mfc/reference/cwinappex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinappex.h  
  
##  <a name="cleanstate"></a>CWinAppEx::CleanState  
 Rimuove tutte le informazioni sull'applicazione dal Registro di sistema Windows.  
  
```  
virtual BOOL CleanState(LPCTSTR lpszSectionName=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSectionName`  
 Stringa che contiene un percorso di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo cancella i dati dell'applicazione da una sezione specifica del Registro di sistema. È possibile specificare la sezione cancellare usando il parametro `lpszSectionName`. Se `lpszSectionName` è `NULL`, questo metodo verrà utilizzato il percorso del Registro di sistema predefinito archiviato nel `CWinAppEx` oggetto. Per ottenere il percorso del Registro di sistema predefinito, utilizzare [CWinAppEx::GetRegistryBase](#getregistrybase).  
  
##  <a name="cwinappex"></a>CWinAppEx::CWinAppEx  
 Costruisce un oggetto `CWinAppEx`.  
  
```  
CWinAppEx(BOOL bResourceSmartUpdate = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bResourceSmartUpdate`  
 Un parametro booleano che specifica se l'oggetto dell'area di lavoro deve rilevare e gestire gli aggiornamenti delle risorse.  
  
### <a name="remarks"></a>Note  
 La `CWinAppEx` classe dispone di metodi di inizializzazione, fornisce funzionalità per il salvataggio e caricamento delle informazioni dell'applicazione nel Registro di sistema e controlla le impostazioni di applicazione globale. Consente inoltre di utilizzare gestori globali, ad esempio il [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md) e [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md). Ogni applicazione può avere solo un'istanza di `CWinAppEx` classe.  
  
##  <a name="enableloadwindowplacement"></a>CWinAppEx::EnableLoadWindowPlacement  
 Specifica se l'applicazione caricherà la dimensione e posizione della finestra cornice principale dal Registro di sistema.  
  
```  
void EnableLoadWindowPlacement(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Specifica se l'applicazione carica la dimensione e posizione della finestra cornice principale dal Registro di sistema.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le dimensioni e la posizione del frame principale viene caricato dal Registro di sistema con le impostazioni dell'applicazione. Questo errore si verifica durante [CWinAppEx::LoadState](#loadstate). Se non si desidera caricare il posizionamento della finestra iniziale dal Registro di sistema, chiamare il metodo con `bEnable` impostato su `false`.  
  
##  <a name="enabletearoffmenus"></a>CWinAppEx::EnableTearOffMenus  
 Crea e Inizializza un [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) oggetto.  
  
```  
BOOL EnableTearOffMenus(
    LPCTSTR lpszRegEntry,  
    const UINT uiCmdFirst,  
    const UINT uiCmdLast);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszRegEntry`  
 Stringa che contiene il percorso di una chiave del Registro di sistema. L'applicazione utilizza questa chiave del Registro di sistema per archiviare le informazioni per i menu a comparsa.  
  
 [in] `uiCmdFirst`  
 Il primo tear esterno menu ID.  
  
 [in] `uiCmdLast`  
 L'ultimo tear esterno menu ID.  
  
### <a name="return-value"></a>Valore restituito  
 `True`Se il `CMenuTearOffManager` viene creato e inizializzato correttamente. `false` se si verifica un errore o se il `CMenuTearOffManager` esiste già.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per abilitare i menu a comparsa nell'applicazione. È necessario chiamare questa funzione da `InitInstance`.  
  
##  <a name="enableusertools"></a>CWinAppEx::EnableUserTools  
 Consente all'utente di creare i comandi di menu personalizzate che consentono di ridurre le sequenze di tasti nell'applicazione. Questo metodo crea un [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) oggetto.  
  
```  
BOOL EnableUserTools(
    const UINT uiCmdToolsDummy,  
    const UINT uiCmdFirst,  
    const UINT uiCmdLast,  
    CRuntimeClass* pToolRTC = RUNTIME_CLASS(CUserTool),  
    UINT uArgMenuID = 0,  
    UINT uInitDirMenuID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdToolsDummy`  
 Intero senza segno che il framework utilizza come segnaposto per l'ID di comando del menu Strumenti utente.  
  
 [in] `uiCmdFirst`  
 L'ID di comando per il primo comando dello strumento di utente.  
  
 [in] `uiCmdLast`  
 L'ID di comando per l'ultimo comando dello strumento di utente.  
  
 [in] `pToolRTC`  
 Una classe che il `CUserToolsManager` oggetto utilizzato per creare nuovi strumenti utente.  
  
 [in] `uArgMenuID`  
 L'ID del menu di argomento.  
  
 [in] `uInitDirMenuID`  
 L'ID di menu per la directory iniziale dello strumento.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo crea e Inizializza un `CUserToolsManager` dell'oggetto; `FALSE` se il metodo non riesce o se un `CUserToolsManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Quando si abilita strumenti definiti dall'utente, il framework supporta automaticamente un menu dinamico che può essere estesa durante la personalizzazione. Il framework associa ogni nuovo elemento a un comando esterno. Il framework chiama questi comandi quando l'utente seleziona l'elemento appropriato dal **strumenti** menu.  
  
 Ogni volta che l'utente aggiunge un nuovo elemento, il framework crea un nuovo oggetto. Il tipo di classe per il nuovo oggetto è definito da `pToolRTC`. Il `pToolRTC` deve derivare dal tipo di classe di [CUserTool classe](../../mfc/reference/cusertool-class.md).  
  
 Per ulteriori informazioni sugli strumenti di utente e come essi incorporare nell'applicazione, vedere [strumenti definiti dall'utente](../../mfc/user-defined-tools.md).  
  
##  <a name="exitinstance"></a>CWinAppEx::ExitInstance  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int ExitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getbinary"></a>CWinAppEx::GetBinary  
 Legge i dati binari da una chiave del Registro di sistema.  
  
```  
BOOL GetBinary(
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [out] `ppData`  
 Puntatore al buffer che il metodo compila con i dati binari.  
  
 [out] `pBytes`  
 Puntatore a un intero senza segno che il metodo utilizzato per scrivere il numero di byte letti.  
  
### <a name="return-value"></a>Valore restituito  
 `True`Se ha esito positivo. `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati binari scritti nel Registro di sistema. Per scrivere dati nel Registro di sistema, utilizzare i metodi [CWinAppEx::WriteBinary](#writebinary) e [CWinAppEx::WriteSectionBinary](#writesectionbinary).  
  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getcontextmenumanager"></a>CWinAppEx::GetContextMenuManager  
 Restituisce un puntatore all'oggetto globale [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) oggetto.  
  
```  
CContextMenuManager* GetContextMenuManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CContextMenuManager` oggetto.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto CContextMenuManager non è inizializzato, questa funzione chiama [CWinAppEx::InitContextMenuManager](#initcontextmenumanager) prima di restituire un puntatore.  
  
##  <a name="getdataversion"></a>CWinAppEx::GetDataVersion  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetDataVersion() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdataversionmajor"></a>CWinAppEx::GetDataVersionMajor  
 Restituisce la versione principale dell'applicazione che viene salvata nel Registro di sistema Windows quando si chiama [CWinAppEx::SaveState](#savestate).  
  
```  
int GetDataVersionMajor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che contiene il numero di versione principale.  
  
##  <a name="getdataversionminor"></a>CWinAppEx::GetDataVersionMinor  
 Restituisce la versione secondaria dell'applicazione che viene salvata nel Registro di sistema Windows quando si chiama [CWinAppEx::SaveState](#savestate).  
  
```  
int GetDataVersionMinor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che contiene il numero di versione secondario.  
  
##  <a name="getint"></a>CWinAppEx::GetInt  
 Legge i dati di tipo integer da una chiave del Registro di sistema.  
  
```  
int GetInt(
    LPCTSTR lpszEntry,  
    int nDefault = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il nome di una voce del Registro di sistema.  
  
 [in] `nDefault`  
 Il valore predefinito che il metodo restituisce se la voce del Registro di sistema specificato non esiste.  
  
### <a name="return-value"></a>Valore restituito  
 I dati del Registro di sistema se il metodo ha esito positivo. in caso contrario `nDefault`.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati di tipo integer dal Registro di sistema. Se non sono presenti dati di tipo integer associati alla chiave del Registro di sistema indicata da `lpszEntry`, questo metodo restituisce `nDefault`. Per scrivere dati nel Registro di sistema, utilizzare i metodi [CWinAppEx::WriteSectionInt](#writesectionint) e [CWinAppEx::WriteInt](#writeint).  
  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getkeyboardmanager"></a>CWinAppEx::GetKeyboardManager  
 Restituisce un puntatore all'oggetto globale [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) oggetto.  
  
```  
CKeyboardManager* GetKeyboardManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CKeyboardManager` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il gestore della tastiera non è inizializzato, questa funzione chiama [CWinAppEx::InitKeyboardManager](#initkeyboardmanager) prima di restituire un puntatore.  
  
##  <a name="getmousemanager"></a>CWinAppEx::GetMouseManager  
 Restituisce un puntatore all'oggetto globale [CMouseManager](../../mfc/reference/cmousemanager-class.md) oggetto.  
  
```  
CMouseManager* GetMouseManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CMouseManager` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il gestore del mouse non è inizializzato, questa funzione chiama [CWinAppEx::InitMouseManager](#initmousemanager) prima di restituire un puntatore.  
  
##  <a name="getobject"></a>CWinAppEx::GetObject  
 Legge [CObject](../../mfc/reference/cobject-class.md)- dervied dati dal Registro di sistema.  
  
```  
BOOL GetObject(
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il percorso relativo di una voce del Registro di sistema.  
  
 [out] `obj`  
 Un riferimento a un `CObject`. Il metodo utilizza questo riferimento per archiviare i dati del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati dal Registro di sistema che è derivato da `CObject`. Per scrivere `CObject` dati nel Registro di sistema, utilizzare uno [CWinAppEx::WriteObject](#writeobject) o [CWinAppEx::WriteSectionObject](#writesectionobject).  
  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema che si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getregistrybase"></a>CWinAppEx::GetRegistryBase  
 Recupera il percorso del Registro di sistema predefinito per l'applicazione.  
  
```  
LPCTSTR GetRegistryBase();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che contiene il percorso di percorso del Registro di sistema predefinito.  
  
### <a name="remarks"></a>Note  
 Tutti i metodi del [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) che accedono all'avvio del Registro di sistema in un percorso predefinito. Utilizzare questo metodo per recuperare un percorso di percorso del Registro di sistema predefinito. Utilizzare [CWinAppEx::SetRegistryBase](#setregistrybase) per modificare il percorso del Registro di sistema predefinito.  
  
##  <a name="getregsectionpath"></a>CWinAppEx::GetRegSectionPath  
 Crea e restituisce il percorso assoluto di una chiave del Registro di sistema.  
  
```  
CString GetRegSectionPath(LPCTSTR szSectionAdd = _T(""));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `szSectionAdd`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il percorso assoluto di una chiave del Registro di sistema.  
  
### <a name="remarks"></a>Note  
 Questo metodo definisce percorso assoluto della chiave del Registro di sistema aggiungendo il percorso relativo `szSectionAdd` nel percorso del Registro di sistema predefinito per l'applicazione. Per ottenere la chiave del Registro di sistema predefinito, utilizzare il metodo [CWinAppEx::GetRegistryBase](#getregistrybase).  
  
##  <a name="getsectionbinary"></a>CWinAppEx::GetSectionBinary  
 Legge i dati binari dal Registro di sistema.  
  
```  
BOOL GetSectionBinary(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da leggere.  
  
 [out] `ppData`  
 Un puntatore al buffer in cui il metodo archivia i dati.  
  
 [out] `pBytes`  
 Puntatore a un intero senza segno. Il metodo scrive le dimensioni di `ppData` per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 `True` se l'esito è positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati binari che viene scritto nel Registro di sistema utilizzando i metodi [CWinAppEx::WriteBinary](#writebinary) e [CWinAppEx::WriteSectionBinary](#writesectionbinary).  
  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getsectionint"></a>CWinAppEx::GetSectionInt  
 Legge i dati di tipo integer dal Registro di sistema.  
  
```  
int GetSectionInt(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    int nDefault = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da leggere.  
  
 [in] `nDefault`  
 Il valore predefinito da restituire se il valore specificato non esiste.  
  
### <a name="return-value"></a>Valore restituito  
 I dati integer che viene archiviati nel valore del Registro di sistema. `nDefault` se i dati non esiste.  
  
### <a name="remarks"></a>Note  
 Utilizzare i metodi [CWinAppEx::WriteInt](#writeint) e [CWinAppEx::WriteSectionInt](#writesectionint) per scrivere i dati di tipo integer al Registro di sistema.  
  
 Il `lpszSubSection` parametro non è un percorso assoluto di una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getsectionobject"></a>CWinAppEx::GetSectionObject  
 Legge [CObject](../../mfc/reference/cobject-class.md) dati del Registro di sistema dal Registro di sistema.  
  
```  
BOOL GetSectionObject(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da leggere.  
  
 [out] `obj`  
 Un riferimento a un `CObject`. Il metodo utilizza questo `CObject` per archiviare i dati del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati dal Registro di sistema. I dati letti è `CObject` dati, o per una classe derivata da `CObject`. Per scrivere `CObject` dati nel Registro di sistema, utilizzare uno [CWinAppEx::WriteObject](#writeobject) o [CWinAppEx::WriteSectionObject](#writesectionobject).  
  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getsectionstring"></a>CWinAppEx::GetSectionString  
 Legge dati dal Registro di sistema di tipo stringa.  
  
```  
CString GetSectionString(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszDefault = _T(""));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da leggere.  
  
 [in] `lpszDefault`  
 Il valore predefinito da restituire se il valore specificato non esiste.  
  
### <a name="return-value"></a>Valore restituito  
 Dati di tipo stringa archiviati nel valore del Registro di sistema se è presente il tipo di dati. in caso contrario `lpszDefault`.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati di stringa scritti nel Registro di sistema. Utilizzare [CWinAppEx::WriteString](#writestring) e [CWinAppEx::WriteSectionString](#writesectionstring) per scrivere i dati di stringa del Registro di sistema.  
  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="getshellmanager"></a>CWinAppEx::GetShellManager  
 Restituisce un puntatore all'oggetto globale [CShellManager](../../mfc/reference/cshellmanager-class.md) oggetto.  
  
```  
CShellManager* GetShellManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CShellManager` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `CShellManager` oggetto non inizializzato, questa funzione chiama [CWinAppEx::InitShellManager](#initshellmanager) prima di restituire un puntatore.  
  
##  <a name="getstring"></a>CWinAppEx::GetString  
 Legge dati da una chiave del Registro di sistema di tipo stringa.  
  
```  
CString GetString(
    LPCTSTR lpszEntry,  
    LPCTSTR lpzDefault= _T(""));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Una stringa che contiene il nome di una chiave del Registro di sistema  
  
 [in] `lpzDefault`  
 Il valore predefinito che il metodo restituisce se la voce del Registro di sistema specificato non esiste.  
  
### <a name="return-value"></a>Valore restituito  
 I dati di stringa archiviati nel Registro di sistema se ha esito positivo. `lpszDefault` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo legge i dati di stringa scritti nel Registro di sistema. Per scrivere dati nel Registro di sistema, utilizzare i metodi [CWinAppEx::WriteString](#writestring) o [CWinAppEx::WriteSectionString](#writesectionstring).  
  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="gettooltipmanager"></a>CWinAppEx::GetTooltipManager  
 Restituisce un puntatore all'oggetto globale [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) oggetto.  
  
```  
CTooltipManager* GetTooltipManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CTooltipManager` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `CTooltipManager` oggetto non inizializzato, questa funzione chiama [CWinAppEx:: Inittooltipmanager](#inittooltipmanager) prima di restituire un puntatore.  
  
##  <a name="getusertoolsmanager"></a>CWinAppEx::GetUserToolsManager  
 Restituisce un puntatore all'oggetto globale [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) oggetto.  
  
```  
CUserToolsManager* GetUserToolsManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto globale `CUserToolsManager` oggetto; `NULL` se strumenti di gestione utente non sono abilitato per l'applicazione.  
  
### <a name="remarks"></a>Note  
 Prima di recuperare un puntatore al `CUserToolsManager` dell'oggetto, è necessario inizializzare il gestore chiamando [CWinAppEx::EnableUserTools](#enableusertools).  
  
##  <a name="initcontextmenumanager"></a>CWinAppEx::InitContextMenuManager  
 Inizializza il [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) oggetto.  
  
```  
BOOL InitContextMenuManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo crea l'oggetto CContextMenuManager. 0 se il `CContextMenuManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Se si chiama [CWinAppEx::GetContextMenuManager](#getcontextmenumanager), l'implementazione predefinita di tale metodo chiama `InitContextMenuManager`.  
  
 Se l'applicazione contiene già un gestore del menu di contesto e si chiama `InitContextMenuManager`, l'applicazione avrà un [ASSERT](diagnostic-services.md#assert) errore. Pertanto, non chiamare `InitContextMenuManager` se si crea un `CContextMenuManager` direttamente l'oggetto. Se non si utilizza un oggetto personalizzato `CContextMenuManager`, si consiglia di utilizzare `GetContextMenuManager` per creare un `CContextMenuManager` oggetto.  
  
##  <a name="initkeyboardmanager"></a>CWinAppEx::InitKeyboardManager  
 Inizializza il [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md) oggetto.  
  
```  
BOOL InitKeyboardManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo crea il `CKeyboardManager` oggetto; 0 se il `CKeyboardManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Se si chiama [CWinAppEx::GetKeyboardManager](#getkeyboardmanager), l'implementazione predefinita di tale metodo chiama `InitKeyboardManager`.  
  
 Se l'applicazione contiene già un gestore della tastiera e si chiama `InitKeyboardManager`, l'applicazione avrà un [ASSERT](diagnostic-services.md#assert) errore. Pertanto, non chiamare `InitKeyboardManager` se si crea un `CKeyboardManager` direttamente l'oggetto. Se non si utilizza un oggetto personalizzato `CKeyboardManager`, si consiglia di utilizzare `GetKeyboardManager` per creare un `CKeyboardManager` oggetto.  
  
##  <a name="initmousemanager"></a>CWinAppEx::InitMouseManager  
 Inizializza il [CMouseManager](../../mfc/reference/cmousemanager-class.md) oggetto.  
  
```  
BOOL InitMouseManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo crea il `CMouseManager` oggetto; 0 se il `CMouseManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Se si chiama [CWinAppEx::GetMouseManager](#getmousemanager), l'implementazione predefinita di tale metodo chiama `InitMouseManager`.  
  
 Se l'applicazione contiene già un gestore del mouse e si chiama `InitMouseManager`, l'applicazione avrà un [ASSERT](diagnostic-services.md#assert) errore. Pertanto non è necessario chiamare `InitMouseManager` se si crea un `CMouseManager` direttamente l'oggetto. Se non si utilizza un oggetto personalizzato `CMouseManager`, si consiglia di utilizzare `GetMouseManager` per creare un `CMouseManager` oggetto.  
  
##  <a name="initshellmanager"></a>CWinAppEx::InitShellManager  
 Inizializza il [CShellManager](../../mfc/reference/cshellmanager-class.md) oggetto.  
  
```  
BOOL InitShellManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo crea il `CShellManager` oggetto; 0 se il `CShellManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Se si chiama [CWinAppEx::GetShellManager](#getshellmanager), l'implementazione predefinita di tale metodo chiama `InitShellManager`.  
  
 Se l'applicazione contiene già un gestore della shell e si chiama `InitShellManager`, l'applicazione genera un [ASSERT](diagnostic-services.md#assert) errore. Pertanto, non chiamare il metodo `InitShellManager` se si crea un `CShellManager` direttamente l'oggetto. Se non si utilizza un oggetto personalizzato `CShellManager`, utilizzare `GetShellManager` per creare un `CShellManager` oggetto.  
  
##  <a name="inittooltipmanager"></a>CWinAppEx:: Inittooltipmanager  
 Inizializza il [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) oggetto.  
  
```  
BOOL InitTooltipManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo crea il `CTooltipManager` oggetto; 0 se il `CTooltipManager` oggetto esiste già.  
  
### <a name="remarks"></a>Note  
 Se si chiama [CWinAppEx::GetTooltipManager](#gettooltipmanager), l'implementazione predefinita di tale metodo chiama `InitTooltipManager`.  
  
 Se l'applicazione contiene già un gestore della descrizione comando e si chiama `InitTooltipManager`, l'applicazione avrà un [ASSERT](diagnostic-services.md#assert) errore. Pertanto, non chiamare `InitTooltipManager` se si crea un `CTooltipManager` direttamente l'oggetto. Se non si utilizza un oggetto personalizzato `CTooltipManager`, si consiglia di utilizzare `GetTooltipManager` per creare un `CTooltipManager` oggetto.  
  
##  <a name="isresourcesmartupdate"></a>CWinAppEx::IsResourceSmartUpdate  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsResourceSmartUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isstateexists"></a>CWinAppEx::IsStateExists  
 Indica se la chiave specificata è nel Registro di sistema.  
  
```  
BOOL IsStateExists(LPCTSTR lpszSectionName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSectionName`  
 Stringa che contiene un percorso di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiave nel Registro di sistema. in caso contrario 0.  
  
##  <a name="loadcustomstate"></a>CWinAppEx::LoadCustomState  
 Il framework chiama questo metodo dopo aver caricato lo stato dell'applicazione dal Registro di sistema.  
  
```  
virtual void LoadCustomState();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera eseguire qualsiasi elaborazione dopo l'applicazione carica lo stato dal Registro di sistema. Per impostazione predefinita, questo metodo non esegue alcuna operazione.  
  
 Per caricare informazioni sullo stato personalizzate dal Registro di sistema, le informazioni devono prima essere salvate utilizzando [CWinAppEx::SaveCustomState](#savecustomstate).  
  
##  <a name="loadstate"></a>CWinAppEx::LoadState  
 Legge lo stato dell'applicazione dal Registro di sistema Windows.  
  
```  
BOOL LoadState(
    CMDIFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL LoadState(
    CFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL LoadState(
    COleIPFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
virtual BOOL LoadState(
    LPCTSTR lpszSectionName = NULL,  
    CFrameImpl* pFrameImpl = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
 Puntatore a un oggetto finestra cornice. Il metodo si applica le informazioni sullo stato nel Registro di sistema a questa finestra cornice.  
  
 [in] `lpszSectionName`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `pFrameImpl`  
 Un puntatore a un `CFrameImpl` oggetto. Il metodo si applica le informazioni sullo stato nel Registro di sistema a questa finestra cornice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo carica lo stato dell'applicazione e qualsiasi informazione sullo stato per una finestra cornice. Le informazioni caricate per la finestra cornice viene applicate alla finestra cornice fornito. Se non si specifica una finestra cornice, viene caricate solo le informazioni sullo stato dell'applicazione. Le informazioni sull'applicazione che include lo stato del [CMouseManager classe](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager classe](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md)e [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md).  
  
 L'implementazione predefinita di `CFrameImpl::OnLoadFrame` chiamate `LoadState`.  
  
 Il `lpszSectionName` parametro non è il percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="loadwindowplacement"></a>CWinAppEx::LoadWindowPlacement  
 Chiamato dal framework durante il caricamento di dimensioni e la posizione della finestra cornice principale dal Registro di sistema.  
  
```  
virtual BOOL LoadWindowPlacement(
    CRect& rectNormalPosition,  
    int& nFlags,  
    int& nShowCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectNormalPosition`  
 Un rettangolo che contiene le coordinate della finestra cornice principale quando è nella posizione ripristinata.  
  
 [out] `nFlags`  
 Flag che controllano la posizione della finestra ridotta a icona e come il sistema operativo commuta tra una finestra ridotta a icona e una finestra ripristinata.  
  
 [out] `nShowCmd`  
 Valore intero che specifica lo stato di visualizzazione della finestra. Per ulteriori informazioni sui possibili valori, vedere [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, MFC carica automaticamente la posizione precedente e stato della finestra cornice principale all'avvio dell'applicazione. Per ulteriori informazioni su come queste informazioni vengono archiviate nel Registro di sistema, vedere [CWinAppEx::StoreWindowPlacement](#storewindowplacement).  
  
 Eseguire l'override di questo metodo se si desidera caricare ulteriori informazioni sulla finestra cornice principale.  
  
##  <a name="m_bforceimagereset"></a>CWinAppEx::m_bForceImageReset  
 Specifica se il framework Reimposta tutte le immagini della barra degli strumenti una volta caricato nuovamente la finestra cornice contenente la barra degli strumenti.  
  
```  
BOOL m_bForceImageReset;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_bForceImageReset` (membro dati) è una variabile protetta.  
  
##  <a name="onappcontexthelp"></a>CWinAppEx::OnAppContextHelp  
 Il framework chiama questo metodo quando l'utente richiede la Guida sensibile al contesto per il **personalizzazione** la finestra di dialogo.  
  
```  
virtual void OnAppContextHelp(
    CWnd* pWndControl,  
    const DWORD dwHelpIDArray[]);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndControl`  
 Un puntatore a un oggetto window per il quale viene richiamato Guida sensibile al contesto.  
  
 [in] `dwHelpIDArray[]`  
 Un valore riservato.  
  
### <a name="remarks"></a>Note  
 Questo metodo è attualmente riservato per utilizzi futuri. L'implementazione predefinita non esegue alcuna operazione e non è attualmente chiamato dal framework.  
  
##  <a name="onclosingmainframe"></a>CWinAppEx::OnClosingMainFrame  
 Il framework chiama questo metodo durante l'elaborazione di una finestra cornice `WM_CLOSE`.  
  
```  
virtual void OnClosingMainFrame(CFrameImpl* pFrameImpl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrameImpl`  
 Un puntatore a un `CFrameImpl` oggetto.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questo metodo salva lo stato di `pFrameImpl`.  
  
##  <a name="onviewdoubleclick"></a>CWinAppEx::OnViewDoubleClick  
 Chiama il comando definito dall'utente che è associato a una visualizzazione quando l'utente fa doppio clic in un punto qualsiasi all'interno di tale visualizzazione.  
  
```  
virtual BOOL OnViewDoubleClick(
    CWnd* pWnd,  
    int iViewId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Un puntatore a un oggetto derivato dal [classe CView](../../mfc/reference/cview-class.md).  
  
 [in] `iViewId`  
 L'ID di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 `True`Se il framework rileva che un comando. in caso contrario false.  
  
### <a name="remarks"></a>Note  
 Per supportare il comportamento del mouse personalizzato, è necessario chiamare questa funzione quando si elabora il `WM_LBUTTONDBLCLK` messaggio. Questo metodo verrà eseguito il comando associato all'ID di visualizzazione fornito da `iViewId`. Per ulteriori informazioni sul comportamento del mouse personalizzato, vedere [personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md).  
  
##  <a name="onworkspaceidle"></a>CWinAppEx::OnWorkspaceIdle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnWorkspaceIdle(CWnd*);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CWnd*`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="preloadstate"></a>CWinAppEx::PreLoadState  
 Il framework chiama questo metodo immediatamente prima che lo stato dell'applicazione viene caricato dal Registro di sistema.  
  
```  
virtual void PreLoadState();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera eseguire elaborazioni immediatamente prima che il framework Carica lo stato dell'applicazione.  
  
##  <a name="presavestate"></a>CWinAppEx::PreSaveState  
 Il framework chiama questo metodo immediatamente prima di salvare lo stato dell'applicazione.  
  
```  
virtual void PreSaveState();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera eseguire elaborazioni immediatamente prima che il framework Salva lo stato dell'applicazione.  
  
##  <a name="reloadwindowplacement"></a>CWinAppEx::ReloadWindowPlacement  
 Ricarica dimensioni e la posizione di una finestra dal Registro di sistema.  
  
```  
virtual BOOL ReloadWindowPlacement(CFrameWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
 Puntatore a una finestra cornice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. 0 se il caricamento non riuscito o non esiste nessun dato da caricare.  
  
### <a name="remarks"></a>Note  
 Utilizzare la funzione [CWinAppEx::StoreWindowPlacement](#storewindowplacement) per scrivere le dimensioni e la posizione di una finestra del Registro di sistema.  
  
##  <a name="savecustomstate"></a>CWinAppEx::SaveCustomState  
 Il framework chiama questo metodo dopo che viene salvato lo stato dell'applicazione nel Registro di sistema.  
  
```  
virtual void SaveCustomState();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera eseguire qualsiasi elaborazione dopo l'applicazione salva lo stato nel Registro di sistema. Per impostazione predefinita, questo metodo non esegue alcuna operazione.  
  
##  <a name="savestate"></a>CWinAppEx::SaveState  
 Scrive lo stato dell'applicazione nel Registro di sistema di Windows.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszSectionName = NULL,  
    CFrameImpl* pFrameImpl = NULL);

 
BOOL SaveState(
    CMDIFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL SaveState(
    CFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);

 
BOOL SaveState(
    COleIPFrameWndEx* pFrame,  
    LPCTSTR lpszSectionName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSectionName`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `pFrameImpl`  
 Un puntatore a un `CFrameImpl` oggetto. Questo frame viene salvato nel Registro di sistema di Windows.  
  
 [in] `pFrame`  
 Puntatore a un oggetto finestra cornice. Questo frame viene salvato nel Registro di sistema di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 `True`Se ha esito positivo. `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo salva lo stato dell'applicazione e qualsiasi informazione sullo stato per la finestra del frame specificato. Se non si fornisce una finestra cornice, il metodo salva solo lo stato dell'applicazione. Le informazioni sull'applicazione che include lo stato del [CMouseManager classe](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager classe](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md)e [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md).  
  
 Il `lpszSectionName` parametro non è il percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
##  <a name="setregistrybase"></a>CWinAppEx::SetRegistryBase  
 Imposta il percorso del Registro di sistema predefinito per l'applicazione.  
  
```  
LPCTSTR SetRegistryBase(LPCTSTR lpszSectionName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSectionName`  
 Stringa che contiene il percorso di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che contiene il percorso di percorso del Registro di sistema predefinito.  
  
### <a name="remarks"></a>Note  
 Tutti i metodi del [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) che accedono all'avvio del Registro di sistema in un percorso predefinito. Utilizzare questo metodo per modificare il percorso del Registro di sistema predefinito. Utilizzare [CWinAppEx::GetRegistryBase](#getregistrybase) per recuperare il percorso del Registro di sistema predefinito.  
  
##  <a name="showpopupmenu"></a>CWinAppEx::ShowPopupMenu  
 Visualizza un menu popup.  
  
```  
virtual BOOL ShowPopupMenu(
    UINT uiMenuResId,  
    const CPoint& point,  
    CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiMenuResId`  
 Un ID di risorsa di menu.  
  
 [in] `point`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che specifica la posizione del menu di scelta nelle coordinate dello schermo.  
  
 [in] `pWnd`  
 Puntatore alla finestra proprietaria di menu di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu di scelta rapida viene visualizzato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di visualizzare il menu associato `uiMenuResId`.  
  
 Per supportare il menu di scelta rapida, è necessario disporre di un [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) oggetto. Se non hanno inizializzato il `CContextMenuManager` oggetto `ShowPopupMenu` avrà esito negativo.  
  
##  <a name="storewindowplacement"></a>CWinAppEx::StoreWindowPlacement  
 Chiamato dal framework per scrivere nel Registro di sistema di dimensioni e la posizione della finestra cornice principale.  
  
```  
virtual BOOL StoreWindowPlacement(
    const CRect& rectNormalPosition,  
    int nFlags,  
    int nShowCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 Flag che controllano la posizione della finestra ridotta a icona e come il sistema operativo commuta tra una finestra ridotta a icona e una finestra ripristinata.  
  
 [in] `nShowCmd`  
 Valore intero che specifica lo stato di visualizzazione della finestra. Per ulteriori informazioni sui possibili valori, vedere [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow).  
  
 [in] `rectNormalPosition`  
 Un rettangolo che contiene le coordinate della finestra cornice principale quando è stato ripristinato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, MFC Salva automaticamente la posizione e lo stato della finestra cornice principale prima la chiusura dell'applicazione. Queste informazioni vengono archiviate nel Registro di sistema nella chiave WindowPlacement nel percorso del Registro di sistema predefinito per l'applicazione. Per ulteriori informazioni sul percorso del Registro di sistema predefinito dell'applicazione, vedere [CWinAppEx::GetRegistryBase](#getregistrybase).  
  
 Eseguire l'override di questo metodo se si desidera archiviare informazioni aggiuntive su una finestra cornice principale.  
  
##  <a name="writebinary"></a>CWinAppEx::WriteBinary  
 Scrive dati binari nel Registro di sistema.  
  
```  
BOOL WriteBinary(
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [in] `pData`  
 I dati da archiviare.  
  
 [in] `nBytes`  
 Le dimensioni di `pData` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema che si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
 Se la chiave specificata da `lpszEntry` non esiste, questo metodo verrà creato.  
  
##  <a name="writeint"></a>CWinAppEx::WriteInt  
 Scrive i dati numerici nel Registro di sistema.  
  
```  
BOOL WriteInt(
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [in] `nValue`  
 I dati da archiviare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
 Se la chiave specificata da `lpszEntry` non esiste, questo metodo verrà creato.  
  
##  <a name="writeobject"></a>CWinAppEx::WriteObject  
 Scrive dati derivati dal [CObject (classe)](../../mfc/reference/cobject-class.md) nel Registro di sistema.  
  
```  
BOOL WriteObject(
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il valore da impostare.  
  
 [in] `obj`  
 Un riferimento a `CObject` dati in cui verrà archiviato il metodo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo scrive il `obj` dati al valore specificato nella chiave del Registro di sistema predefinito. Utilizzare [CWinAppEx::GetRegistryBase](#getregistrybase) per determinare la chiave del Registro di sistema corrente.  
  
##  <a name="writesectionbinary"></a>CWinAppEx::WriteSectionBinary  
 Scrive dati binari in un valore nel Registro di sistema.  
  
```  
BOOL WriteSectionBinary(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Una stringa che contiene il nome di una chiave del Registro di sistema  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da impostare.  
  
 [in] `pData`  
 I dati da scrivere nel Registro di sistema.  
  
 [in] `nBytes`  
 Le dimensioni di `pData` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszSubSection` parametro non è il percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
 Se la chiave specificata da `lpszEntry` non esiste, questo metodo verrà creato.  
  
##  <a name="writesectionint"></a>CWinAppEx::WriteSectionInt  
 Scrive i dati numerici nel Registro di sistema.  
  
```  
BOOL WriteSectionInt(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da impostare.  
  
 [in] `nValue`  
 I dati da scrivere nel Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
 Se la chiave specificata da `lpszEntry` non esiste, questo metodo verrà creato.  
  
##  <a name="writesectionobject"></a>CWinAppEx::WriteSectionObject  
 Scrive dati derivati dal [CObject (classe)](../../mfc/reference/cobject-class.md) su un valore del Registro di sistema.  
  
```  
BOOL WriteSectionObject(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    CObject& obj);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il nome del valore da impostare.  
  
 [in] `obj`  
 I dati da archiviare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase), rispettivamente.  
  
 Se il valore specificato da `lpszEntry` non esiste nella chiave del Registro di sistema specificata da `lpszSubSection`, questo metodo creerà tale valore.  
  
##  <a name="writesectionstring"></a>CWinAppEx::WriteSectionString  
 Scrive i dati di stringa su un valore nel Registro di sistema.  
  
```  
BOOL WriteSectionString(
    LPCTSTR lpszSubSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszSubSection`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [in] `lpszEntry`  
 Stringa che contiene il valore da impostare.  
  
 [in] `lpszValue`  
 I dati della stringa da scrivere nel Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszSubSection` parametro non è un percorso assoluto per una voce del Registro di sistema. È un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase), rispettivamente.  
  
 Se il valore specificato da `lpszEntry` non esiste in `lpszSubSection`, questo metodo verrà creato.  
  
##  <a name="writestring"></a>CWinAppEx::WriteString  
 Scrive i dati di stringa al Registro di sistema.  
  
```  
BOOL WriteString(
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszEntry`  
 Stringa che contiene il nome di una chiave del Registro di sistema.  
  
 [in] `lpszValue`  
 I dati da archiviare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo dà esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `lpszEntry` parametro è il nome di una voce del Registro di sistema si trova sotto la chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, utilizzare i metodi [CWinAppEx::GetRegistryBase](#getregistrybase) e [CWinAppEx::SetRegistryBase](#setregistrybase) rispettivamente.  
  
 Se la chiave specificata da `lspzEntry` non esiste, questo metodo verrà creato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)   
 [Classe CMouseManager](../../mfc/reference/cmousemanager-class.md)   
 [Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)   
 [Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)   
 [Classe CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md)

