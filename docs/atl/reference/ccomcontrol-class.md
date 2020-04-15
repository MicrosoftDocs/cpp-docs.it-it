---
title: CComControl (classe)
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
ms.openlocfilehash: 3518de3596748fa284c1f898b69d1576903e9510
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320763"
---
# <a name="ccomcontrol-class"></a>CComControl (classe)

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class WinBase = CWindowImpl<T>>
class ATL_NO_VTABLE CComControl : public CComControlBase,
    public WinBase;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe che implementa il controllo.

*WinBase (informazioni in base alla proprietà*<br/>
Classe base che implementa le funzioni di windowing. Il valore predefinito è [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CComControl::CComControl](#ccomcontrol)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControl::ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComControl::CreateControlWindow](#createcontrolwindow)|Crea una finestra per il controllo.|
|[CComControl::FireOnChanged](#fireonchanged)|Notifica al sink del contenitore che una proprietà del controllo è stata modificata.|
|[Controllo CComControl::FireOnRequestModifica](#fireonrequestedit)|Notifica al sink del contenitore che una proprietà del controllo sta per cambiare e che l'oggetto sta chiedendo al sink come procedere.|
|[CComControl::MessageBox](#messagebox)|Chiamare questo metodo per creare, visualizzare e gestire una finestra di messaggio.|

## <a name="remarks"></a>Osservazioni

`CComControl`è un set di funzioni di supporto di controllo utili e membri dati essenziali per i controlli ATL. Quando si crea un controllo standard o un controllo DHTML utilizzando la Creazione `CComControl`guidata controllo ATL, la procedura guidata deriverà automaticamente la classe da . `CComControl`deriva la maggior parte dei relativi metodi da [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).

Per ulteriori informazioni sulla creazione di un controllo, vedere [l'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla Creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

Per una `CComControl` dimostrazione dei metodi e dei membri dati, vedere l'esempio [CIRC.](../../overview/visual-cpp-samples.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WinBase`

[CComControlBase (informazioni in base alla proprietà del pulsante)](../../atl/reference/ccomcontrolbase-class.md)

`CComControl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ccomcontrolccomcontrol"></a><a name="ccomcontrol"></a>Controllo CComControl::CComControl

Costruttore.

```
CComControl();
```

### <a name="remarks"></a>Osservazioni

Chiama il costruttore [CComControlBase](ccomcontrolbase-class.md#ccomcontrolbase) , passando il `m_hWnd` membro dati ereditato tramite [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## <a name="ccomcontrolcontrolqueryinterface"></a><a name="controlqueryinterface"></a>CComControl::ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid, void** ppv);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*o NULL se l'interfaccia non viene trovata.

### <a name="remarks"></a>Osservazioni

Gestisce solo le interfacce nella tabella della mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrol-class_1.cpp)]

## <a name="ccomcontrolcreatecontrolwindow"></a><a name="createcontrolwindow"></a>CComControl::CreateControlWindow

Per impostazione predefinita, crea una `CWindowImpl::Create`finestra per il controllo chiamando .

```
virtual HWND CreateControlWindow(HWND hWndParent, RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
[in] Handle per la finestra padre o proprietario. È necessario fornire un handle di finestra valido. La finestra di controllo è limitata all'area della finestra padre.

*RcPos*<br/>
[in] Dimensioni iniziali e posizione della finestra da creare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo se si desidera eseguire un'operazione diversa dalla creazione di una singola finestra, ad esempio, per creare due finestre, una delle quali diventa una barra degli strumenti per il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#16](../../atl/codesnippet/cpp/ccomcontrol-class_2.cpp)]

## <a name="ccomcontrolfireonchanged"></a><a name="fireonchanged"></a>CComControl::FireOnChanged

Notifica al sink del contenitore che una proprietà del controllo è stata modificata.

```
HRESULT FireOnChanged(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
[in] Identificatore della proprietà modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent::FireOnChanged](cfirepropnotifyevent-class.md#fireonchanged) per notificare a tutte le interfacce connesse `IPropertyNotifySink` che la proprietà del controllo specificata è stata modificata. Se la classe del `IPropertyNotifySink`controllo non deriva da , questo metodo restituisce S_OK.

Questo metodo è sicuro da chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#17](../../atl/codesnippet/cpp/ccomcontrol-class_3.cpp)]

## <a name="ccomcontrolfireonrequestedit"></a><a name="fireonrequestedit"></a>Controllo CComControl::FireOnRequestModifica

Notifica al sink del contenitore che una proprietà del controllo sta per cambiare e che l'oggetto sta chiedendo al sink come procedere.

```
HRESULT FireOnRequestEdit(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
[in] Identificatore della proprietà in esisimi di modifiche.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent::FireOnRequestEdit](cfirepropnotifyevent-class.md#fireonrequestedit) per notificare a tutte le interfacce connesse `IPropertyNotifySink` che la proprietà del controllo specificata sta per essere modificata. Se la classe del `IPropertyNotifySink`controllo non deriva da , questo metodo restituisce S_OK.

Questo metodo è sicuro da chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#18](../../atl/codesnippet/cpp/ccomcontrol-class_4.cpp)]

## <a name="ccomcontrolmessagebox"></a><a name="messagebox"></a>CComControl::MessageBox

Chiamare questo metodo per creare, visualizzare e gestire una finestra di messaggio.

```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = _T(""),
    UINT nType = MB_OK);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Testo da visualizzare nella finestra di messaggio.

*didascalia di lpsz*<br/>
Titolo della finestra di dialogo. Se NULL (impostazione predefinita), viene utilizzato il titolo "Error".

*nType*<br/>
Specifica il contenuto e il comportamento della finestra di dialogo. Vedere la voce [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) nella documentazione di Windows SDK per un elenco delle diverse finestre di messaggio disponibili. L'impostazione predefinita fornisce un semplice pulsante **OK.**

### <a name="return-value"></a>Valore restituito

Restituisce un valore intero che specifica uno dei valori delle voci di menu elencati in [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) nella documentazione di Windows SDK.

### <a name="remarks"></a>Osservazioni

`MessageBox`è utile sia durante lo sviluppo che come un modo semplice per visualizzare un messaggio di errore o di avviso all'utente.

## <a name="see-also"></a>Vedere anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[CComControlBase (classe)](../../atl/reference/ccomcontrolbase-class.md)<br/>
[CComCompositeControl (classe)](../../atl/reference/ccomcompositecontrol-class.md)
