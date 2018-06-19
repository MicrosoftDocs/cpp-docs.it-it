---
title: Classe CComControl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComControl
- ATLCTL/ATL::CComControl
- ATLCTL/ATL::CComControl::CComControl
- ATLCTL/ATL::CComControl::ControlQueryInterface
- ATLCTL/ATL::CComControl::CreateControlWindow
- ATLCTL/ATL::CComControl::FireOnChanged
- ATLCTL/ATL::CComControl::FireOnRequestEdit
- ATLCTL/ATL::CComControl::MessageBox
dev_langs:
- C++
helpviewer_keywords:
- control flags
- CComControlBase class, CComControl class
- stock properties, ATL
- CComControl class
- controls [ATL], control helper functions
- ambient properties
- controls [ATL], properties
ms.assetid: 55368c27-bd16-45a7-b701-edb36157c8e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6017d06715146a0440887a2a2e10828398d5044b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365552"
---
# <a name="ccomcontrol-class"></a>Classe CComControl
Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class WinBase = CWindowImpl<T>>  
class ATL_NO_VTABLE CComControl : public CComControlBase,
    public WinBase;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe che implementa il controllo.  
  
 *WinBase*  
 Classe di base che implementa le funzioni di windowing. Per impostazione predefinita [CWindowImpl](../../atl/reference/cwindowimpl-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControl::CComControl](#ccomcontrol)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControl::ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComControl::CreateControlWindow](#createcontrolwindow)|Crea una finestra per il controllo.|  
|[CComControl::FireOnChanged](#fireonchanged)|Notifica al sink del contenitore che ha modificato una proprietà del controllo.|  
|[CComControl::FireOnRequestEdit](#fireonrequestedit)|Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto richiede il sink come procedere.|  
|[CComControl::MessageBox](#messagebox)|Chiamare questo metodo per creare, visualizzare e utilizzare una finestra di messaggio.|  
  
## <a name="remarks"></a>Note  
 `CComControl` è un set di funzioni di supporto di controllo utile e i membri dati essenziali per i controlli ATL. Quando si crea un controllo standard o un controllo DHTML utilizzando Creazione guidata controllo ATL, la procedura guidata verrà automaticamente derivare la classe da `CComControl`. `CComControl` deriva la maggior parte dei metodi da [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).  
  
 Per ulteriori informazioni sulla creazione di un controllo, vedere il [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
 Per una dimostrazione di `CComControl` metodi e membri di dati, vedere il [CIRC](../../visual-cpp-samples.md) esempio.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `WinBase`  
  
 [CComControlBase](../../atl/reference/ccomcontrolbase-class.md)  
  
 `CComControl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="ccomcontrol"></a>  CComControl::CComControl  
 Costruttore.  
  
```
CComControl();
```  
  
### <a name="remarks"></a>Note  
 Chiamate di [CComControlBase](ccomcontrolbase-class.md#ccomcontrolbase) costruttore, passando il `m_hWnd` membro dati ereditate tramite [CWindowImpl](../../atl/reference/cwindowimpl-class.md).  
  
##  <a name="controlqueryinterface"></a>  CComControl::ControlQueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
virtual HRESULT ControlQueryInterface(const IID& iid, void** ppv);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppv`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="remarks"></a>Note  
 Gestisce solo le interfacce nella tabella di mappe COM.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrol-class_1.cpp)]  
  
##  <a name="createcontrolwindow"></a>  CComControl::CreateControlWindow  
 Per impostazione predefinita, crea una finestra per il controllo chiamando `CWindowImpl::Create`.  
  
```
virtual HWND CreateControlWindow(HWND hWndParent, RECT& rcPos);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle alla finestra padre o proprietaria. È necessario specificare un handle di finestra valido. La finestra di controllo è limitata all'area della finestra padre.  
  
 `rcPos`  
 [in] Le dimensioni iniziali e la posizione della finestra da creare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera eseguire un'operazione diversa da creare una singola finestra, ad esempio, per creare due finestre, tra cui diventa una barra degli strumenti per il controllo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#16](../../atl/codesnippet/cpp/ccomcontrol-class_2.cpp)]  
  
##  <a name="fireonchanged"></a>  CComControl::FireOnChanged  
 Notifica al sink del contenitore che ha modificato una proprietà del controllo.  
  
```
HRESULT FireOnChanged(DISPID dispID);
```  
  
### <a name="parameters"></a>Parametri  
 *dispID*  
 [in] Identificatore della proprietà che è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se la classe del controllo deriva da [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638), questo metodo chiama [CFirePropNotifyEvent::FireOnChanged](cfirepropnotifyevent-class.md#fireonchanged) per notificare tutti connessi `IPropertyNotifySink` interfacce che il controllo specificato proprietà è stata modificata. Se la classe del controllo deriva da `IPropertyNotifySink`, questo metodo restituisce `S_OK`. 
  
 Questo metodo è sicuro chiamare anche se il controllo non supporta i punti di connessione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#17](../../atl/codesnippet/cpp/ccomcontrol-class_3.cpp)]  
  
##  <a name="fireonrequestedit"></a>  CComControl::FireOnRequestEdit  
 Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto richiede il sink come procedere.  
  
```
HRESULT FireOnRequestEdit(DISPID dispID);
```  
  
### <a name="parameters"></a>Parametri  
 *dispID*  
 [in] Identificatore della proprietà sta per essere modificata.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se la classe del controllo deriva da [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638), questo metodo chiama [CFirePropNotifyEvent::FireOnRequestEdit](cfirepropnotifyevent-class.md#fireonrequestedit) per notificare tutti connessi `IPropertyNotifySink` interfacce che l'oggetto specificato proprietà del controllo sta per essere modificata. Se la classe del controllo deriva da `IPropertyNotifySink`, questo metodo restituisce `S_OK`.  

  
 Questo metodo è sicuro chiamare anche se il controllo non supporta i punti di connessione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#18](../../atl/codesnippet/cpp/ccomcontrol-class_4.cpp)]  
  
##  <a name="messagebox"></a>  CComControl::MessageBox  
 Chiamare questo metodo per creare, visualizzare e utilizzare una finestra di messaggio.  
  
```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = _T(""),
    UINT nType = MB_OK);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Il testo da visualizzare nella finestra di messaggio.  
  
 `lpszCaption`  
 Il titolo della finestra di dialogo. Se NULL (impostazione predefinita), il titolo viene utilizzato "Error".  
  
 `nType`  
 Specifica il contenuto e il comportamento della finestra di dialogo. Vedere il [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) voce nella documentazione di Windows SDK per un elenco delle finestre di messaggio diversi disponibili. Il valore predefinito offre un semplice **OK** pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore intero che specifica uno dei valori della voce di menu elencati in [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) nella documentazione di Windows SDK.  
  
### <a name="remarks"></a>Note  
 `MessageBox` è utile durante lo sviluppo e come un modo semplice per visualizzare un messaggio di errore o avviso all'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe di CWindowImpl](../../atl/reference/cwindowimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComControlBase](../../atl/reference/ccomcontrolbase-class.md)   
 [Classe CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)
