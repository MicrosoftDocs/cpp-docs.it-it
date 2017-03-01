---
title: Classe CContainedWindowT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CContainedWindow
- CContainedWindowT
- ATL.CContainedWindowT
dev_langs:
- C++
helpviewer_keywords:
- CContainedWindow class
- contained windows
- CContainedWindowT class
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
caps.latest.revision: 23
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
ms.openlocfilehash: e10aa4b455696fd217f88b6eb1de2421fccda6de
ms.lasthandoff: 02/24/2017

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
 Classe di base della nuova classe. La classe di base predefinita è `CWindow`.  
  
 `TWinTraits`  
 Classe traits che definisce gli stili della finestra. Il valore predefinito è `CControlWinTraits`.  
  
> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) è una specializzazione di `CContainedWindowT`. Se si desidera modificare la classe di base o tratti, utilizzare `CContainedWindowT` direttamente.  
  
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
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registra la classe della finestra della finestra indipendente.|  
|[CContainedWindowT](#subclasswindow)|Crea una sottoclasse di una finestra.|  
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Modifica il mapping di messaggi viene utilizzato per elaborare i messaggi della finestra indipendente.|  
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|  
|[CContainedWindowT::WindowProc](#windowproc)|(Statico) Elabora i messaggi inviati alla finestra indipendente.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifica il mapping tra i messaggi per elaborare i messaggi della finestra indipendente.|  
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifica il nome di una classe finestra esistente in cui verrà impostata una nuova classe della finestra.|  
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|  
|[CContainedWindowT::m_pObject](#m_pobject)|Punta all'oggetto contenitore.|  
  
## <a name="remarks"></a>Note  
 `CContainedWindowT`implementa una finestra contenuta all'interno di un altro oggetto. `CContainedWindowT`'s utilizza procedure finestra eseguire il mapping di un messaggio nell'oggetto contenitore per indirizzare i messaggi per i gestori appropriati. Quando si crea un `CContainedWindowT` dell'oggetto, specificare il mapping tra i messaggi deve essere utilizzato.  
  
 `CContainedWindowT`Consente di creare una nuova finestra di creazione di superclassi una classe finestra esistente. Il **crea** metodo registra innanzitutto una classe della finestra basata su una classe esistente, ma utilizza `CContainedWindowT::WindowProc`. **Creare** crea quindi una finestra in base alla nuova classe di finestra. Ogni istanza di `CContainedWindowT` possibile superclasse una classe finestra diversa.  
  
 `CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la procedura della finestra in `CContainedWindowT::WindowProc`. Ogni istanza di `CContainedWindowT` può creare una sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato `CContainedWindowT` oggetto, chiamare il metodo **crea** o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.  
  
 Quando si utilizza il **Aggiungi controllo basato su** opzione nella creazione guidata progetto ATL, la procedura guidata aggiungerà automaticamente un `CContainedWindowT` membro dati alla classe che implementa il controllo. Nell'esempio seguente viene illustrato come viene dichiarata la finestra indipendente:  
  
 [!code-cpp[NVC_ATL_Windowing&#38;](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]  
  
 [!code-cpp[NVC_ATL_Windowing&#39;](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]  
  
 [!code-cpp[&#40; NVC_ATL_Windowing](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]  
  
|Per altre informazioni su|Vedere|  
|--------------------------------|---------|  
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Uso delle finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|Windows|[Windows](http://msdn.microsoft.com/library/windows/desktop/ms632595) e gli argomenti successivi il[!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `TBase`  
  
 `CContainedWindowT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="a-nameccontainedwindowta--ccontainedwindowtccontainedwindowt"></a><a name="ccontainedwindowt"></a>CContainedWindowT::CContainedWindowT  
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
 [in] Il nome di una classe finestra esistente in cui si baserà la finestra indipendente.  
  
 `pObject`  
 [in] Puntatore all'oggetto contenitore che dichiara la mappa messaggi. Classe dell'oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra indipendente. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), passare `msgMapID`.  
  
### <a name="remarks"></a>Note  
 Se si desidera creare una nuova finestra tramite [crea](#create), è necessario passare il nome di una classe finestra esistente per il `lpszClassName` parametro. Per un esempio, vedere il [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
 Esistono tre costruttori:  
  
-   Il costruttore con tre argomenti viene in genere viene chiamato.  
  
-   Il costruttore con due argomenti utilizza il nome della classe da **TBase::GetWndClassName**.  
  
-   Se si desidera fornire gli argomenti in un secondo momento, viene utilizzato il costruttore senza argomenti. È necessario fornire il nome di classe della finestra, oggetto mappa messaggi e ID mappa del messaggio quando successivamente si chiama **crea**.  
  
 Se si crea una sottoclasse una finestra esistente tramite [SubclassWindow](#subclasswindow), `lpszClassName` valore non verrà utilizzato; pertanto, è possibile passare **NULL** per questo parametro.  
  
##  <a name="a-namecreatea--ccontainedwindowtcreate"></a><a name="create"></a>CContainedWindowT:: Create  
 Chiamate [RegisterWndSuperclass](#registerwndsuperclass) per registrare una classe della finestra basata su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc).  
  
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
 [in] Il nome di una classe finestra esistente in cui si baserà la finestra indipendente.  
  
 `pObject`  
 [in] Puntatore all'oggetto contenitore che dichiara la mappa messaggi. Classe dell'oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra indipendente. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), passare `msgMapID`.  
  
 `hWndParent`  
 [in] Handle alla finestra padre o proprietaria.  
  
 `rect`  
 [in] Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica la posizione della finestra. Il `RECT` può essere passato tramite puntatore o riferimento.  
  
 `szWindowName`  
 [in] Specifica il nome della finestra. Il valore predefinito è **NULL**.  
  
 `dwStyle`  
 [in] Lo stile della finestra. Il valore predefinito è **WS_CHILD | WS_VISIBLE**. Per un elenco di valori possibili, vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] Lo stile di finestra esteso. Il valore predefinito è 0, vale a dire nessuno stile esteso. Per un elenco di valori possibili, vedere [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.  
  
 `lpCreateParam`  
 [in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle di finestra appena creato. in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 Il nome della classe finestra esistente viene salvato [m_lpszClassName](#m_lpszclassname). **Creare** crea quindi una finestra in base alla nuova classe. La finestra appena creata viene associata automaticamente al `CContainedWindowT` oggetto.  
  
> [!NOTE]
>  Non chiamare **crea** se è già stato chiamato [SubclassWindow](#subclasswindow).  
  
> [!NOTE]
>  Se si utilizza 0 come valore per il `MenuOrID` parametro deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.  
  
##  <a name="a-namedefwindowproca--ccontainedwindowtdefwindowproc"></a><a name="defwindowproc"></a>CContainedWindowT::DefWindowProc  
 Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti da mappa messaggi.  
  
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
  
##  <a name="a-namegetcurrentmessagea--ccontainedwindowtgetcurrentmessage"></a><a name="getcurrentmessage"></a>CContainedWindowT::GetCurrentMessage  
 Restituisce il messaggio corrente ( **m_pCurrentMsg**).  
  
```
const _ATL_MSG* GetCurrentMessage();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il messaggio corrente, sotto fornito di `MSG` struttura.  
  
##  <a name="a-namemdwmsgmapida--ccontainedwindowtmdwmsgmapid"></a><a name="m_dwmsgmapid"></a>CContainedWindowT::m_dwMsgMapID  
 Contiene l'identificatore della mappa messaggi attualmente in uso per la finestra indipendente.  
  
```
DWORD m_dwMsgMapID;
```  
  
### <a name="remarks"></a>Note  
 La mappa messaggi deve essere dichiarata nell'oggetto contenitore.  
  
 Il mapping dei messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554), viene sempre identificata da zero. Una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), identificato da `msgMapID`.  
  
 `m_dwMsgMapID`viene inizializzato dal costruttore e può essere modificato chiamando [SwitchMessageMap](#switchmessagemap). Per un esempio, vedere il [CContainedWindowT Panoramica](../../atl/reference/ccontainedwindowt-class.md).  
  
##  <a name="a-namemlpszclassnamea--ccontainedwindowtmlpszclassname"></a><a name="m_lpszclassname"></a>CContainedWindowT::m_lpszClassName  
 Specifica il nome di una classe finestra esistente.  
  
```
LPTSTR m_lpszClassName;
```  
  
### <a name="remarks"></a>Note  
 Quando si crea una finestra, [crea](#create) registra una nuova classe di finestra basata sulla classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc).  
  
 `m_lpszClassName`viene inizializzata dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
##  <a name="a-namempfnsuperwindowproca--ccontainedwindowtmpfnsuperwindowproc"></a><a name="m_pfnsuperwindowproc"></a>CContainedWindowT::m_pfnSuperWindowProc  
 Se la finestra contenuta è una sottoclasse, `m_pfnSuperWindowProc` punta alla routine della finestra originale della classe della finestra.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### <a name="remarks"></a>Note  
 Se la finestra indipendente è impostato come superclasse, ovvero si basa su una classe finestra che consente di modificare una classe esistente, `m_pfnSuperWindowProc` punta alla procedura della finestra della classe finestra esistente.  
  
 Il [DefWindowProc](#defwindowproc) metodo invia informazioni del messaggio alla routine della finestra salvata in `m_pfnSuperWindowProc`.  
  
##  <a name="a-namempobjecta--ccontainedwindowtmpobject"></a><a name="m_pobject"></a>CContainedWindowT::m_pObject  
 Punta all'oggetto che contiene il `CContainedWindowT` oggetto.  
  
```
CMessageMap* m_pObject;
```  
  
### <a name="remarks"></a>Note  
 Questo contenitore, la cui classe deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md), dichiara la mappa dei messaggi utilizzata dalla finestra indipendente.  
  
 `m_pObject`viene inizializzata dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.  
  
##  <a name="a-nameregisterwndsuperclassa--ccontainedwindowtregisterwndsuperclass"></a><a name="registerwndsuperclass"></a>CContainedWindowT::RegisterWndSuperclass  
 Chiamato da [crea](#create) per registrare la classe di finestra della finestra indipendente.  
  
```
ATOM RegisterWndSuperClass();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un atomo che identifica in modo univoco la classe di finestra viene registrata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questa classe della finestra basata su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc). Procedura di nome e la finestra della classe di finestra esistenti vengono salvati [m_lpszClassName](#m_lpszclassname) e [m_pfnSuperWindowProc](#m_pfnsuperwindowproc), rispettivamente.  
  
##  <a name="a-namesubclasswindowa--ccontainedwindowtsubclasswindow"></a><a name="subclasswindow"></a>CContainedWindowT  
 Le sottoclassi finestra identificata da `hWnd` e lo collega al `CContainedWindowT` oggetto.  
  
```
BOOL SubclassWindow(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra da una sottoclasse.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra è stato sottoclassato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Ora utilizza la finestra impostata come sottoclasse [CContainedWindowT::WindowProc](#windowproc). Routine della finestra originale viene salvata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [crea](#create).  
  
##  <a name="a-nameswitchmessagemapa--ccontainedwindowtswitchmessagemap"></a><a name="switchmessagemap"></a>CContainedWindowT::SwitchMessageMap  
 Modifica il mapping tra i messaggi da utilizzare per elaborare i messaggi della finestra indipendente.  
  
```
void SwitchMessageMap(DWORD dwMsgMapID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMsgMapID`  
 [in] Identificatore della mappa messaggi. Utilizzare la mappa messaggi predefinita dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554), passare zero. Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), passare `msgMapID`.  
  
### <a name="remarks"></a>Note  
 La mappa dei messaggi deve essere definito nell'oggetto contenitore.  
  
 Inizialmente è specificare l'identificatore della mappa del messaggio nel costruttore.  
  
##  <a name="a-nameunsubclasswindowa--ccontainedwindowtunsubclasswindow"></a><a name="unsubclasswindow"></a>CContainedWindowT::UnsubclassWindow  
 Disconnette la finestra sottoclassata dal `CContainedWindowT` dell'oggetto e ripristina la routine della finestra originale, salvato in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bForce`  
 [in] Impostato su **TRUE** per forzare la procedura di finestra originale deve essere ripristinato anche se la procedura della finestra per questo `CContainedWindowT` oggetto non è attualmente attivo. Se `bForce` è impostato su **FALSE** e la procedura della finestra per questo `CContainedWindowT` oggetto non è attualmente attivo, la procedura della finestra originale non verrà ripristinata.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra sottoclassata in precedenza. Se `bForce` è impostato su **FALSE** e la procedura della finestra per questo `CContainedWindowT` oggetto non è attualmente attivo, restituisce **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo solo se si desidera ripristinare la procedura della finestra originale prima che la finestra viene eliminata. In caso contrario, [WindowProc](#windowproc) eseguirà questa operazione automaticamente quando la finestra viene eliminata.  
  
##  <a name="a-namewindowproca--ccontainedwindowtwindowproc"></a><a name="windowproc"></a>CContainedWindowT::WindowProc  
 Questo metodo statico implementa la procedura della finestra.  
  
```
static LRESULT CALLBACK WindowProc(  
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] L'handle della finestra.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 `WindowProc`indirizza i messaggi alla mappa messaggi identificato da [m_dwMsgMapID](#m_dwmsgmapid). Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntivi.  
  
## <a name="see-also"></a>Vedere anche  
 [CWindow (classe)](../../atl/reference/cwindow-class.md)   
 [CWindowImpl (classe)](../../atl/reference/cwindowimpl-class.md)   
 [Classe CMessageMap](../../atl/reference/cmessagemap-class.md)   
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [ALT_MSG_MAP](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

