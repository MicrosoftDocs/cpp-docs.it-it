---
title: Classe CComControl
ms.date: 11/04/2016
f1_keywords:
- CComControl
- ATLCTL/ATL::CComControl
- ATLCTL/ATL::CComControl::CComControl
- ATLCTL/ATL::CComControl::ControlQueryInterface
- ATLCTL/ATL::CComControl::CreateControlWindow
- ATLCTL/ATL::CComControl::FireOnChanged
- ATLCTL/ATL::CComControl::FireOnRequestEdit
- ATLCTL/ATL::CComControl::MessageBox
helpviewer_keywords:
- control flags
- CComControlBase class, CComControl class
- stock properties, ATL
- CComControl class
- controls [ATL], control helper functions
- ambient properties
- controls [ATL], properties
ms.assetid: 55368c27-bd16-45a7-b701-edb36157c8e8
ms.openlocfilehash: 3fe01128fc5f0a9d3058df2d6f95a6c038b28062
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644197"
---
# <a name="ccomcontrol-class"></a>Classe CComControl

Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T, class WinBase = CWindowImpl<T>>
class ATL_NO_VTABLE CComControl : public CComControlBase,
    public WinBase;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe di implementazione del controllo.

*WinBase*<br/>
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
|[CComControl::CreateControlWindow](#createcontrolwindow)|Crea una finestra del controllo.|
|[CComControl::FireOnChanged](#fireonchanged)|Notifica al sink del contenitore che una proprietà del controllo è stato modificato.|
|[CComControl::FireOnRequestEdit](#fireonrequestedit)|Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto viene chiesto il sink come procedere.|
|[CComControl::MessageBox](#messagebox)|Chiamare questo metodo per creare, visualizzare e gestire una finestra di messaggio.|

## <a name="remarks"></a>Note

`CComControl` è un set di funzioni di supporto di controllo utile e i membri dati essenziali per i controlli ATL. Quando si crea un controllo standard o un controllo DHTML utilizzando la creazione guidata controllo ATL, la procedura guidata verrà automaticamente derivare la classe da `CComControl`. `CComControl` deriva la maggior parte dei relativi metodi dallo [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).

Per altre informazioni sulla creazione di un controllo, vedere la [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per altre informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

Per una dimostrazione relativa `CComControl` metodi e membri dati, vedere la [CIRC](../../visual-cpp-samples.md) esempio.

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

Chiama il [CComControlBase](ccomcontrolbase-class.md#ccomcontrolbase) costruttore, passando il `m_hWnd` membro dati ereditate tramite [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

##  <a name="controlqueryinterface"></a>  CComControl::ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid, void** ppv);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
[in] Il GUID dell'interfaccia richiesto.

*ppv*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *iid*, oppure NULL se l'interfaccia non viene trovato.

### <a name="remarks"></a>Note

gestisce solo le interfacce nella tabella di mappe COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrol-class_1.cpp)]

##  <a name="createcontrolwindow"></a>  CComControl::CreateControlWindow

Per impostazione predefinita, crea una finestra per il controllo chiamando `CWindowImpl::Create`.

```
virtual HWND CreateControlWindow(HWND hWndParent, RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
[in] Handle per la finestra padre o proprietaria. È necessario specificare un handle della finestra valida. La finestra di controllo è limitata all'area della finestra padre.

*rcPos*<br/>
[in] Le dimensioni iniziali e la posizione della finestra da creare.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo se si desidera eseguire un'operazione diverso da creare una singola finestra, ad esempio, per creare due finestre, uno dei quali diventa una barra degli strumenti per il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#16](../../atl/codesnippet/cpp/ccomcontrol-class_2.cpp)]

##  <a name="fireonchanged"></a>  CComControl::FireOnChanged

Notifica al sink del contenitore che una proprietà del controllo è stato modificato.

```
HRESULT FireOnChanged(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*dispID*<br/>
[in] Identificatore della proprietà che è stato modificato.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent::FireOnChanged](cfirepropnotifyevent-class.md#fireonchanged) per notificare tutti connesso `IPropertyNotifySink` interfacce che dovranno essere il controllo specificato proprietà è stata modificata. Se la classe del controllo non deriva da `IPropertyNotifySink`, questo metodo restituisce S_OK.

Questo metodo è sicuro chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#17](../../atl/codesnippet/cpp/ccomcontrol-class_3.cpp)]

##  <a name="fireonrequestedit"></a>  CComControl::FireOnRequestEdit

Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto viene chiesto il sink come procedere.

```
HRESULT FireOnRequestEdit(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*dispID*<br/>
[in] Identificatore della proprietà per essere modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent::FireOnRequestEdit](cfirepropnotifyevent-class.md#fireonrequestedit) per notificare tutti connesso `IPropertyNotifySink` interfacce che dovranno essere specificati proprietà di un controllo sta per essere modificata. Se la classe del controllo non deriva da `IPropertyNotifySink`, questo metodo restituisce S_OK.

Questo metodo è sicuro chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#18](../../atl/codesnippet/cpp/ccomcontrol-class_4.cpp)]

##  <a name="messagebox"></a>  CComControl::MessageBox

Chiamare questo metodo per creare, visualizzare e gestire una finestra di messaggio.

```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = _T(""),
    UINT nType = MB_OK);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Il testo da visualizzare nella finestra di messaggio.

*lpszCaption*<br/>
Il titolo della finestra di dialogo. Se NULL (predefinito), il titolo viene usato "Error".

*NLE*<br/>
Specifica il contenuto e il comportamento della finestra di dialogo. Vedere le [MessageBox](/windows/desktop/api/winuser/nf-winuser-messagebox) voce nella documentazione di Windows SDK per un elenco delle finestre di messaggio diversi disponibili. L'impostazione predefinita offre un semplice **OK** pulsante.

### <a name="return-value"></a>Valore restituito

Restituisce un valore intero che specifica uno dei valori di voci di menu elencati sotto [MessageBox](/windows/desktop/api/winuser/nf-winuser-messagebox) nella documentazione di Windows SDK.

### <a name="remarks"></a>Note

`MessageBox` è utile durante lo sviluppo e come un modo semplice per visualizzare un messaggio di errore o avviso all'utente.

## <a name="see-also"></a>Vedere anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComControlBase](../../atl/reference/ccomcontrolbase-class.md)<br/>
[Classe CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)
