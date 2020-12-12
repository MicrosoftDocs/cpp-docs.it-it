---
description: 'Altre informazioni su: classe CComControl'
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
ms.openlocfilehash: 3fbd0f3483c61993a575b0817538f759b06c11d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146744"
---
# <a name="ccomcontrol-class"></a>Classe CComControl

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class WinBase = CWindowImpl<T>>
class ATL_NO_VTABLE CComControl : public CComControlBase,
    public WinBase;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe che implementa il controllo.

*WinBase*<br/>
Classe base che implementa le funzioni di windowing. Il valore predefinito è [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComControl:: CComControl](#ccomcontrol)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComControl:: ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComControl:: CreateControlWindow](#createcontrolwindow)|Crea una finestra per il controllo.|
|[CComControl:: FireOnChanged](#fireonchanged)|Notifica al sink del contenitore che una proprietà del controllo è stata modificata.|
|[CComControl:: FireOnRequestEdit](#fireonrequestedit)|Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto chiede al sink come continuare.|
|[CComControl:: MessageBox](#messagebox)|Chiamare questo metodo per creare, visualizzare e utilizzare una finestra di messaggio.|

## <a name="remarks"></a>Commenti

`CComControl` è un set di funzioni di supporto del controllo utili e membri dati essenziali per i controlli ATL. Quando si crea un controllo standard o un controllo DHTML mediante la creazione guidata controllo ATL, la procedura guidata deriverà automaticamente la classe da `CComControl` . `CComControl` deriva la maggior parte dei metodi da [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).

Per ulteriori informazioni sulla creazione di un controllo, vedere l' [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

Per una dimostrazione di `CComControl` metodi e membri dati, vedere l'esempio [circ](../../overview/visual-cpp-samples.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WinBase`

[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)

`CComControl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ccomcontrolccomcontrol"></a><a name="ccomcontrol"></a> CComControl:: CComControl

Costruttore.

```
CComControl();
```

### <a name="remarks"></a>Commenti

Chiama il costruttore [CComControlBase](ccomcontrolbase-class.md#ccomcontrolbase) , passando il `m_hWnd` membro dati ereditato tramite [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## <a name="ccomcontrolcontrolqueryinterface"></a><a name="controlqueryinterface"></a> CComControl:: ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid, void** ppv);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia richiesta.

*PPV*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID* oppure null se l'interfaccia non viene trovata.

### <a name="remarks"></a>Commenti

Gestisce solo le interfacce nella tabella della mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrol-class_1.cpp)]

## <a name="ccomcontrolcreatecontrolwindow"></a><a name="createcontrolwindow"></a> CComControl:: CreateControlWindow

Per impostazione predefinita, crea una finestra per il controllo chiamando `CWindowImpl::Create` .

```
virtual HWND CreateControlWindow(HWND hWndParent, RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
in Handle per la finestra padre o proprietario. È necessario specificare un handle di finestra valido. La finestra di controllo è confinata all'area della relativa finestra padre.

*rcPos*<br/>
in Dimensioni e posizione iniziali della finestra da creare.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo se si desidera eseguire un'operazione diversa da creare una singola finestra, ad esempio per creare due finestre, una delle quali diventa una barra degli strumenti per il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#16](../../atl/codesnippet/cpp/ccomcontrol-class_2.cpp)]

## <a name="ccomcontrolfireonchanged"></a><a name="fireonchanged"></a> CComControl:: FireOnChanged

Notifica al sink del contenitore che una proprietà del controllo è stata modificata.

```
HRESULT FireOnChanged(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*dispID*<br/>
in Identificatore della proprietà modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent:: FireOnChanged](cfirepropnotifyevent-class.md#fireonchanged) per notificare a tutte le `IPropertyNotifySink` interfacce connesse che la proprietà del controllo specificata è stata modificata. Se la classe del controllo non deriva da `IPropertyNotifySink` , questo metodo restituisce S_OK.

Questo metodo è sicuro da chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#17](../../atl/codesnippet/cpp/ccomcontrol-class_3.cpp)]

## <a name="ccomcontrolfireonrequestedit"></a><a name="fireonrequestedit"></a> CComControl:: FireOnRequestEdit

Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata e che l'oggetto chiede al sink come continuare.

```
HRESULT FireOnRequestEdit(DISPID dispID);
```

### <a name="parameters"></a>Parametri

*dispID*<br/>
in Identificatore della proprietà da modificare.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Se la classe del controllo deriva da [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), questo metodo chiama [CFirePropNotifyEvent:: FireOnRequestEdit](cfirepropnotifyevent-class.md#fireonrequestedit) per inviare una notifica a tutte le `IPropertyNotifySink` interfacce connesse che la proprietà del controllo specificata sta per cambiare. Se la classe del controllo non deriva da `IPropertyNotifySink` , questo metodo restituisce S_OK.

Questo metodo è sicuro da chiamare anche se il controllo non supporta i punti di connessione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#18](../../atl/codesnippet/cpp/ccomcontrol-class_4.cpp)]

## <a name="ccomcontrolmessagebox"></a><a name="messagebox"></a> CComControl:: MessageBox

Chiamare questo metodo per creare, visualizzare e utilizzare una finestra di messaggio.

```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = _T(""),
    UINT nType = MB_OK);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Testo da visualizzare nella finestra di messaggio.

*lpszCaption*<br/>
Titolo della finestra di dialogo. Se NULL (impostazione predefinita), viene usato il titolo "Error".

*nType*<br/>
Specifica il contenuto e il comportamento della finestra di dialogo. Per un elenco delle diverse finestre di messaggio disponibili, vedere la voce relativa al [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) nella documentazione Windows SDK. Il valore predefinito fornisce un semplice pulsante **OK** .

### <a name="return-value"></a>Valore restituito

Restituisce un valore intero che specifica uno dei valori delle voci di menu elencate in [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) nella documentazione Windows SDK.

### <a name="remarks"></a>Commenti

`MessageBox` è utile sia durante lo sviluppo sia come metodo semplice per visualizzare un messaggio di errore o di avviso all'utente.

## <a name="see-also"></a>Vedi anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComControlBase](../../atl/reference/ccomcontrolbase-class.md)<br/>
[Classe CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)
