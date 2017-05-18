---
title: Classe CComCompositeControl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComCompositeControl
- ATLCTL/ATL::CComCompositeControl
- ATLCTL/ATL::CComCompositeControl::CComCompositeControl
- ATLCTL/ATL::CComCompositeControl::AdviseSinkMap
- ATLCTL/ATL::CComCompositeControl::CalcExtent
- ATLCTL/ATL::CComCompositeControl::Create
- ATLCTL/ATL::CComCompositeControl::CreateControlWindow
- ATLCTL/ATL::CComCompositeControl::SetBackgroundColorFromAmbient
- ATLCTL/ATL::CComCompositeControl::m_hbrBackground
- ATLCTL/ATL::CComCompositeControl::m_hWndFocus
dev_langs:
- C++
helpviewer_keywords:
- CComCompositeControl class
- composite controls, CComCompositeControl class
ms.assetid: 1304b931-27e8-4fbc-be8e-bb226ad887fb
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
ms.openlocfilehash: ab99b8682e8b529cc124fbda1e6facaac48d0927
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomcompositecontrol-class"></a>Classe CComCompositeControl
Questa classe fornisce i metodi richiesti per implementare un controllo composito.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CComCompositeControl : public CComControl<T,CAxDialogImpl<T>>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), anche da tutte le altre interfacce desiderato per il supporto per il controllo composto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl::CComCompositeControl](#ccomcompositecontrol)|Costruttore.|  
|[CComCompositeControl:: ~ CComCompositeControl](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl](#advisesinkmap)|Chiamare questo metodo per inviare o annullare gli avvisi per tutti i controlli contenuti nel controllo composito.|  
|[CComCompositeControl::CalcExtent](#calcextent)|Chiamare questo metodo per calcolare le dimensioni in **HIMETRIC** unità della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.|  
|[CComCompositeControl::Create](#create)|Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.|  
|[CComCompositeControl::CreateControlWindow](#createcontrolwindow)|Chiamare questo metodo per creare la finestra di controllo e consigliare qualsiasi controllo ospitato.|  
|[CComCompositeControl::SetBackgroundColorFromAmbient](#setbackgroundcolorfromambient)|Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl::m_hbrBackground](#m_hbrbackground)|Il pennello di sfondo.|  
|[CComCompositeControl::m_hWndFocus](#m_hwndfocus)|L'handle della finestra che ha attualmente lo stato attivo.|  
  
## <a name="remarks"></a>Note  
 Le classi derivate dalla classe `CComCompositeControl` ereditano le funzionalità di un controllo composito ActiveX. Controlli ActiveX derivati da `CComCompositeControl` sono ospitate da una finestra di dialogo standard. Questi tipi di controlli sono denominati controlli compositi perché sono in grado di ospitare altri controlli (controlli nativi di Windows e i controlli ActiveX).  
  
 `CComCompositeControl`Identifica la risorsa finestra di dialogo da utilizzare nella creazione del controllo composito mediante la ricerca di un membro di dati enumerati nella classe figlio. Il membro IDD di questa classe figlio è impostato per l'ID risorsa della risorsa finestra di dialogo che verrà utilizzata come la finestra del controllo. Di seguito è riportato un esempio del membro dati che la classe derivata da `CComCompositeControl` deve contenere per identificare la risorsa finestra di dialogo da utilizzare per la finestra del controllo:  
  
 [!code-cpp[NVC_ATL_COM&13;](../../atl/codesnippet/cpp/ccomcompositecontrol-class_1.h)]  
  
> [!NOTE]
>  Controlli composti sono sempre controlli di finestre, sebbene possano contenere controlli privi di finestra.  
  
 Un controllo implementato da un `CComCompositeControl`-classe derivata è incorporato nel comportamento di tabulazione predefinito. Quando il controllo riceve lo stato attivo da abilitati in un'applicazione contenitore, lo stato attivo per tutti i controlli contenuti del controllo composito, quindi all'esterno del controllo composito e l'elemento successivo nell'ordine di tabulazione del contenitore ciclicamente causerà successivamente premendo il tasto TAB. Ordine di tabulazione dei controlli contenuti è determinato dalla risorsa finestra di dialogo e determina l'ordine in cui la tabulazione si verificherà.  
  
> [!NOTE]
>  Affinché i tasti di scelta rapida per il corretto funzionamento con un `CComCompositeControl`, è necessario caricare una tabella di tasti di scelta rapida, come il controllo viene creato, passare l'handle e il numero di tasti di scelta rapida in [IOleControlImpl::GetControlInfo](../../atl/reference/iolecontrolimpl-class.md#getcontrolinfo)e infine eliminare la tabella quando viene rilasciato il controllo.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&14;](../../atl/codesnippet/cpp/ccomcompositecontrol-class_2.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `WinBase`  
  
 [CComControlBase](../../atl/reference/ccomcontrolbase-class.md)  
  
 [CComControl](../../atl/reference/ccomcontrol-class.md)  
  
 `CComCompositeControl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="advisesinkmap"></a>CComCompositeControl  
 Chiamare questo metodo per inviare o annullare gli avvisi per tutti i controlli contenuti nel controllo composito.  
  
```
HRESULT AdviseSinkMap(bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `bAdvise`  
 True se tutti i controlli devono essere informato; in caso contrario false.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`  
 Tutti i controlli nell'evento mappa sink sono stati connessi o disconnessi dall'origine evento completata.  
  
 **E_FAIL**  
 Non tutti i controlli nell'evento mappa sink può essere connesso o disconnesso dall'origine evento completata.  
  
 `E_POINTER`  
 Questo errore indica in genere un problema con una voce nella mappa del sink di evento del controllo o un problema con un argomento di modello utilizzato un `IDispEventImpl` o `IDispEventSimpleImpl` classe di base.  
  
 **CONNECT_E_ADVISELIMIT**  
 Il punto di connessione ha già raggiunto il limite di connessioni e non può accettare più.  
  
 **CONNECT_E_CANNOTCONNECT**  
 Il sink non supporta l'interfaccia richiesta dal punto di connessione.  
  
 **CONNECT_E_NOCONNECTION**  
 Il valore del cookie non rappresenta una connessione valida. Questo errore indica in genere un problema con una voce nella mappa del sink di evento del controllo o un problema con un argomento di modello utilizzato un `IDispEventImpl` o `IDispEventSimpleImpl` classe di base.  
  
### <a name="remarks"></a>Note  
 L'implementazione di base di questo metodo cerca le voci dell'evento sink mappa. È quindi suggerisce o unadvises i punti di connessione per gli oggetti COM descritti dalle voci sink della mappa eventi sink. Questo metodo di membro si basa inoltre sul fatto che la classe derivata eredita da un'istanza di `IDispEventImpl` per ogni controllo nella mappa del sink che deve essere consigliato o unadvised.  
  
##  <a name="calcextent"></a>CComCompositeControl::CalcExtent  
 Chiamare questo metodo per calcolare le dimensioni in **HIMETRIC** unità della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.  
  
```
BOOL CalcExtent(SIZE& size);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Un riferimento a un **dimensioni** struttura deve essere compilato da questo metodo.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo è contenuto in una finestra di dialogo; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 La dimensione viene restituito nel `size` parametro.  
  
##  <a name="create"></a>CComCompositeControl::Create  
 Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.  
  
```
HWND Create(
    HWND hWndParent,
    RECT& /* rcPos */,
    LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle della finestra padre del controllo.  
  
 `rcPos`  
 Riservato.  
  
 `dwInitParam`  
 Dati da passare al controllo durante la creazione del controllo. I dati passati come `dwInitParam` verrà visualizzato come il **LPARAM** parametro il [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) messaggio, che verrà inviato al controllo composito quando viene creato.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per la finestra di dialogo controllo composito appena creato.  
  
### <a name="remarks"></a>Note  
 In genere, questo metodo viene chiamato durante l'attivazione sul posto del controllo.  
  
##  <a name="ccomcompositecontrol"></a>CComCompositeControl::CComCompositeControl  
 Costruttore.  
  
```
CComCompositeControl();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il [CComCompositeControl::m_hbrBackground](#m_hbrbackground) e [CComCompositeControl::m_hWndFocus](#m_hwndfocus) i membri dati NULL.  
  
##  <a name="dtor"></a>CComCompositeControl:: ~ CComCompositeControl  
 Distruttore.  
  
```
~CComCompositeControl();
```  
  
### <a name="remarks"></a>Note  
 Elimina l'oggetto in background, se presente.  
  
##  <a name="createcontrolwindow"></a>CComCompositeControl::CreateControlWindow  
 Chiamare questo metodo per creare la finestra di controllo e informare tutti i controlli ospitati.  
  
```
virtual HWND CreateControlWindow(
    HWND hWndParent,
    RECT& rcPos);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle della finestra padre del controllo.  
  
 `rcPos`  
 Il rettangolo di posizione del controllo composito in client coordina relativo a `hWndParent`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per la finestra di dialogo controllo composito appena creato.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [CComCompositeControl::Create](#create) e [CComCompositeControl](#advisesinkmap).  
  
##  <a name="m_hbrbackground"></a>CComCompositeControl::m_hbrBackground  
 Il pennello di sfondo.  
  
```
HBRUSH m_hbrBackground;
```  
  
##  <a name="m_hwndfocus"></a>CComCompositeControl::m_hWndFocus  
 L'handle della finestra che ha attualmente lo stato attivo.  
  
```
HWND m_hWndFocus;
```  
  
##  <a name="setbackgroundcolorfromambient"></a>CComCompositeControl::SetBackgroundColorFromAmbient  
 Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.  
  
```
HRESULT SetBackgroundColorFromAmbient();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

