---
title: Classe CContainedWindowT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CContainedWindowT
- ATLWIN/ATL::CContainedWindowT
- ATLWIN/ATL::CContainedWindowT::CContainedWindowT
- ATLWIN/ATL::CContainedWindowT::Create
- ATLWIN/ATL::CContainedWindowT::DefWindowProc
- ATLWIN/ATL::CContainedWindowT::GetCurrentMessage
- ATLWIN/ATL::CContainedWindowT::RegisterWndSuperclass
- ATLWIN/ATL::CContainedWindowT::SubclassWindow
- ATLWIN/ATL::CContainedWindowT::SwitchMessageMap
- ATLWIN/ATL::CContainedWindowT::UnsubclassWindow
- ATLWIN/ATL::CContainedWindowT::WindowProc
- ATLWIN/ATL::CContainedWindowT::m_dwMsgMapID
- ATLWIN/ATL::CContainedWindowT::m_lpszClassName
- ATLWIN/ATL::CContainedWindowT::m_pfnSuperWindowProc
- ATLWIN/ATL::CContainedWindowT::m_pObject
dev_langs:
- C++
helpviewer_keywords:
- CContainedWindow class
- contained windows
- CContainedWindowT class
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4cf792fed2f7a5cac45826649224a565228f9d73
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccontainedwindowt-class"></a>Classe CContainedWindowT
Questa classe implementa una finestra contenuta all'interno di un altro oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class TBase = CWindow, class TWinTraits = CControlWinTraits>  
class CContainedWindowT : public TBase
```  
  
#### <a name="parameters"></a>Parametri  
 *TBase*  
 Classe di base della nuova classe. La classe base predefinita è `CWindow`.  
  
 `TWinTraits`  
 Classe traits che definisce gli stili della finestra. Il valore predefinito è `CControlWinTraits`.  
  
> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) è una specializzazione di `CContainedWindowT`. Se si desidera modificare la classe base o tratti, utilizzare `CContainedWindowT` direttamente.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::CContainedWindowT](#ccontainedwindowt)|Costruttore. Inizializza i membri di dati per specificare il mapping tra i messaggi per elaborare i messaggi della finestra indipendente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT:: Create](#create)|Crea una finestra.|  
|[CContainedWindowT::DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|  
|[CContainedWindowT::GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|  
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registra la classe della finestra della finestra contenuta.|  
|[CContainedWindowT](#subclasswindow)|Crea una sottoclasse di una finestra.|  
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Modifica il mapping di messaggi viene utilizzato per elaborare i messaggi della finestra indipendente.|  
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|  
|[CContainedWindowT::WindowProc](#windowproc)|(Statico) Elabora i messaggi inviati alla finestra indipendente.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifica il mapping tra i messaggi per elaborare i messaggi della finestra indipendente.|  
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifica il nome di una classe finestra esistente su cui basare una nuova classe della finestra.|  
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|  
|[CContainedWindowT::m_pObject](#m_pobject)|Punta all'oggetto contenitore.|  
  
## <a name="remarks"></a>Note  
 `CContainedWindowT`implementa una finestra contenuta all'interno di un altro oggetto. `CContainedWindowT`'s utilizza routine di finestra eseguire il mapping di un messaggio nell'oggetto contenitore per indirizzare i messaggi per i gestori appropriati. Quando si crea un `CContainedWindowT` dell'oggetto, specificare il mapping del messaggio deve essere utilizzato.  
  
 `CContainedWindowT`Consente di creare una nuova finestra Creazione di superclassi una classe finestra esistente. Il **crea** metodo registra innanzitutto una classe della finestra che si basa su una classe esistente, ma utilizza `CContainedWindowT::WindowProc`. **Creare** crea quindi una finestra in base a questa nuova classe della finestra. Ogni istanza di `CContainedWindowT` possibile superclasse una classe della finestra diverso.  
  
 `CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la procedura della finestra in `CContainedWindowT::WindowProc`. Ogni istanza di `CContainedWindowT` può creare una sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato `CContainedWindowT` dell'oggetto, chiamare **crea** o `SubclassWindow`. È opportuno non richiamare entrambi i metodi sullo stesso oggetto.  
  
 Quando si utilizza il **Aggiungi controllo basato su** opzione nella creazione guidata progetto ATL, la procedura guidata aggiungerà automaticamente un `CContainedWindowT` membro dati alla classe che implementa il controllo. L'esempio seguente illustra la modalità in cui viene dichiarata finestra contenuta:  
  
 [!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]  
  
|Per altre informazioni su|Vedere|  
|--------------------------------|---------|  
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Uso delle finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|WINDOWS|[Windows](http://msdn.microsoft.com/library/windows/desktop/ms632595) e argomenti successivi in Windows SDK|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `TBase`  
  
 `CContainedWindowT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="ccontainedwindowt"></a>CContainedWindowT::CContainedWindowT  
 Il costruttore inizializza i membri di dati.  
  
```
CContainedWindowT(
    LPTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);

CContainedWindowT(
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0)
    CContainedWindowT();
```     
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 [in] Il nome di una classe finestra esistente in cui si baserà finestra contenuta.  
  
 `pObject`  
 [in] Un puntatore all'oggetto contenitore che dichiara la mappa messaggi. Classe di tale oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra indipendente. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.  
  
### <a name="remarks"></a>Note  
 Se si desidera creare una nuova finestra tramite [crea](#create), è necessario passare il nome di una classe finestra esistente per il `lpszClassName` parametro. Per un esempio, vedere il [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
 Esistono tre costruttori:  
  
-   Il costruttore con tre argomenti viene in genere chiamato.  
  
-   Il costruttore con due argomenti utilizza il nome della classe da **TBase::GetWndClassName**.  
  
-   Se si desidera fornire gli argomenti in un secondo momento, viene utilizzato il costruttore senza argomenti. È necessario fornire il nome di classe della finestra, oggetto mappa messaggi e ID mappa del messaggio quando successivamente si chiama **crea**.  
  
 Se si crea una sottoclasse una finestra esistente tramite [SubclassWindow](#subclasswindow), `lpszClassName` valore non verrà utilizzato; pertanto, è possibile passare **NULL** per questo parametro.  
  
##  <a name="create"></a>CContainedWindowT:: Create  
 Chiamate [RegisterWndSuperclass](#registerwndsuperclass) per registrare una classe della finestra che si basa su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc).  
  
```
HWND Create(  
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    LPCTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 [in] Il nome di una classe finestra esistente in cui si baserà finestra contenuta.  
  
 `pObject`  
 [in] Un puntatore all'oggetto contenitore che dichiara la mappa messaggi. Classe di tale oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra indipendente. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.  
  
 `hWndParent`  
 [in] Handle alla finestra padre o proprietaria.  
  
 `rect`  
 [in] Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica la posizione della finestra. Il `RECT` può essere passato tramite puntatore o riferimento.  
  
 `szWindowName`  
 [in] Specifica il nome della finestra. Il valore predefinito è **NULL**.  
  
 `dwStyle`  
 [in] Lo stile della finestra. Il valore predefinito è **WS_CHILD &#124; WS_VISIBLE**. Per un elenco di valori possibili, vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in Windows SDK.  
  
 `dwExStyle`  
 [in] Lo stile della finestra estesi. Il valore predefinito è 0, vale a dire nessuno stile esteso. Per un elenco di valori possibili, vedere [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 `MenuOrID`  
 [in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.  
  
 `lpCreateParam`  
 [in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle di finestra appena creato. in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 Il nome della classe finestra esistente viene salvato [m_lpszClassName](#m_lpszclassname). **Creare** crea quindi una finestra basata su questa nuova classe. La finestra appena creata viene associata automaticamente al `CContainedWindowT` oggetto.  
  
> [!NOTE]
>  Non chiamare **crea** se è già stato chiamato [SubclassWindow](#subclasswindow).  
  
> [!NOTE]
>  Se viene utilizzato 0 come valore per il `MenuOrID` parametro deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.  
  
##  <a name="defwindowproc"></a>CContainedWindowT::DefWindowProc  
 Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti da una mappa messaggi.  
  
```
LRESULT DefWindowProc()
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `DefWindowProc` chiamate di [CallWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633571) funzione Win32 per inviare le informazioni del messaggio alla routine della finestra specificata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
##  <a name="getcurrentmessage"></a>CContainedWindowT::GetCurrentMessage  
 Restituisce il messaggio corrente ( **m_pCurrentMsg**).  
  
```
const _ATL_MSG* GetCurrentMessage();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il messaggio corrente, inclusi in un pacchetto di `MSG` struttura.  
  
##  <a name="m_dwmsgmapid"></a>CContainedWindowT::m_dwMsgMapID  
 Contiene l'identificatore della mappa messaggi attualmente in uso per la finestra indipendente.  
  
```
DWORD m_dwMsgMapID;
```  
  
### <a name="remarks"></a>Note  
 Questa mappa del messaggio deve essere dichiarata nell'oggetto contenitore.  
  
 La mappa messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è sempre identificato da zero. Una mappa messaggi alternativa, è dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), identificato da `msgMapID`.  
  
 `m_dwMsgMapID`viene prima inizializzata dal costruttore e può essere modificato chiamando [SwitchMessageMap](#switchmessagemap). Per un esempio, vedere il [CContainedWindowT Panoramica](../../atl/reference/ccontainedwindowt-class.md).  
  
##  <a name="m_lpszclassname"></a>CContainedWindowT::m_lpszClassName  
 Specifica il nome di una classe finestra esistente.  
  
```
LPTSTR m_lpszClassName;
```  
  
### <a name="remarks"></a>Note  
 Quando si crea una finestra, [crea](#create) registra una nuova classe di finestra è basata sulla classe esistente che utilizza [CContainedWindowT::WindowProc](#windowproc).  
  
 `m_lpszClassName`viene inizializzata dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
##  <a name="m_pfnsuperwindowproc"></a>CContainedWindowT::m_pfnSuperWindowProc  
 Se la finestra contenuta è una sottoclasse, `m_pfnSuperWindowProc` punta alla routine della finestra originale della classe della finestra.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### <a name="remarks"></a>Note  
 Se la finestra indipendente è impostato come superclasse, ovvero si basa su una classe di finestra di modifica di una classe esistente, `m_pfnSuperWindowProc` punta alla procedura di finestra della classe di finestra esistente.  
  
 Il [DefWindowProc](#defwindowproc) metodo invia informazioni sul messaggio alla routine della finestra salvata in `m_pfnSuperWindowProc`.  
  
##  <a name="m_pobject"></a>CContainedWindowT::m_pObject  
 Punta all'oggetto contenente il `CContainedWindowT` oggetto.  
  
```
CMessageMap* m_pObject;
```  
  
### <a name="remarks"></a>Note  
 Questo contenitore, la cui classe deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md), dichiara la mappa dei messaggi utilizzata dalla finestra indipendente.  
  
 `m_pObject`viene inizializzata dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
##  <a name="registerwndsuperclass"></a>CContainedWindowT::RegisterWndSuperclass  
 Chiamato da [crea](#create) per registrare la classe di finestra della finestra contenuta.  
  
```
ATOM RegisterWndSuperClass();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un atom che identifica in modo univoco la classe di finestra da registrare; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questa classe di finestra è basata su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc). Procedura di nome e la finestra della classe di finestra esistente vengono salvati in [m_lpszClassName](#m_lpszclassname) e [m_pfnSuperWindowProc](#m_pfnsuperwindowproc), rispettivamente.  
  
##  <a name="subclasswindow"></a>CContainedWindowT  
 Le sottoclassi finestra identificata da `hWnd` e lo collega al `CContainedWindowT` oggetto.  
  
```
BOOL SubclassWindow(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra da una sottoclasse.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra è stata impostata come sottoclasse; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Usa ora la finestra impostata come sottoclasse [CContainedWindowT::WindowProc](#windowproc). La procedura di finestra originale viene salvata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [crea](#create).  
  
##  <a name="switchmessagemap"></a>CContainedWindowT::SwitchMessageMap  
 Modifica il mapping tra i messaggi da utilizzare per elaborare i messaggi della finestra indipendente.  
  
```
void SwitchMessageMap(DWORD dwMsgMapID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMsgMapID`  
 [in] Identificatore della mappa del messaggio. Utilizzare la mappa dei messaggi predefinito dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), passare a zero. Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.  
  
### <a name="remarks"></a>Note  
 La mappa dei messaggi deve essere definita nell'oggetto contenitore.  
  
 Inizialmente, si specifica l'identificatore di mappa di messaggio nel costruttore.  
  
##  <a name="unsubclasswindow"></a>CContainedWindowT::UnsubclassWindow  
 Scollega la finestra impostata come sottoclasse dal `CContainedWindowT` dell'oggetto e ripristina la procedura di finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bForce`  
 [in] Impostare su **TRUE** per forzare la procedura di finestra originale deve essere ripristinato anche se la procedura di finestra per questa `CContainedWindowT` oggetto non è attualmente attivo. Se `bForce` è impostato su **FALSE** e la procedura di finestra per questa `CContainedWindowT` oggetto non è attualmente attivo, la procedura di finestra originale non verrà ripristinata.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra una sottoclasse in precedenza. Se `bForce` è impostato su **FALSE** e la procedura di finestra per questa `CContainedWindowT` oggetto non è attualmente attivo, restituisce **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo se si desidera ripristinare la procedura di finestra originale prima la finestra viene eliminata. In caso contrario, [WindowProc](#windowproc) verrà automaticamente questa operazione quando la finestra viene eliminata.  
  
##  <a name="windowproc"></a>CContainedWindowT::WindowProc  
 Questo metodo statico implementa la routine della finestra.  
  
```
static LRESULT CALLBACK WindowProc(  
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 `WindowProc`indirizza i messaggi alla mappa messaggi identificato da [m_dwMsgMapID](#m_dwmsgmapid). Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione aggiuntiva dei messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [CWindow (classe)](../../atl/reference/cwindow-class.md)   
 [Classe di CWindowImpl](../../atl/reference/cwindowimpl-class.md)   
 [Classe CMessageMap](../../atl/reference/cmessagemap-class.md)   
 [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)   
 [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
