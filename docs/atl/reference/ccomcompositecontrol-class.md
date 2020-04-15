---
title: CComCompositeControl (classe)
ms.date: 11/04/2016
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
helpviewer_keywords:
- CComCompositeControl class
- composite controls, CComCompositeControl class
ms.assetid: 1304b931-27e8-4fbc-be8e-bb226ad887fb
ms.openlocfilehash: 700a8047ab1fa9df85c8e6530eb3eed5f29bd3d3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320799"
---
# <a name="ccomcompositecontrol-class"></a>CComCompositeControl (classe)

Questa classe fornisce i metodi necessari per implementare un controllo composito.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComCompositeControl : public CComControl<T,CAxDialogImpl<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare per il controllo composito.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::CComCompositeControl](#ccomcompositecontrol)|Costruttore.|
|[CComCompositeControl:: CComCompositeControl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::AdviseSinkMap](#advisesinkmap)|Chiamare questo metodo per consigliare o annullare la decisione di tutti i controlli ospitati dal controllo composito.|
|[CComCompositeControl::CalcExtent](#calcextent)|Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.|
|[CComCompositeControl::Create](#create)|Questo metodo viene chiamato per creare la finestra del controllo per il controllo composito.|
|[CComCompositeControl::CreateControlWindow](#createcontrolwindow)|Chiamare questo metodo per creare la finestra di controllo e consigliare qualsiasi controllo ospitato.|
|[CComCompositeControl::SetBackgroundColorFromAmbient](#setbackgroundcolorfromambient)|Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::m_hbrBackground](#m_hbrbackground)|Pennello per lo sfondo.|
|[CComCompositeControl::m_hWndFocus](#m_hwndfocus)|Handle della finestra che ha attualmente lo stato attivo.|

## <a name="remarks"></a>Osservazioni

Le classi `CComCompositeControl` derivate dalla classe ereditano la funzionalità di un controllo composito ActiveX. I controlli ActiveX derivati da `CComCompositeControl` sono ospitati da una finestra di dialogo standard. Questi tipi di controlli sono denominati controlli compositi perché sono in grado di ospitare altri controlli (controlli Windows nativi e controlli ActiveX).

`CComCompositeControl`identifica la risorsa finestra di dialogo da utilizzare nella creazione del controllo composito cercando un membro dati enumerato nella classe figlio. Il membro IDD di questa classe figlio è impostato sull'ID risorsa della risorsa finestra di dialogo che verrà utilizzata come finestra del controllo. Di seguito è riportato un esempio del `CComCompositeControl` membro dati da cui deve contenere la classe derivata per identificare la risorsa finestra di dialogo da utilizzare per la finestra del controllo:

[!code-cpp[NVC_ATL_COM#13](../../atl/codesnippet/cpp/ccomcompositecontrol-class_1.h)]

> [!NOTE]
> I controlli compositi sono sempre controlli con finestra, anche se possono contenere controlli senza finestra.

Un controllo implementato `CComCompositeControl`da una classe derivata da una classe derivata dispone di un comportamento di tabulazione predefinito incorporato. Quando il controllo riceve lo stato attivo da essere a schede in un'applicazione contenitore, premendo successivamente il tasto TAB causerà lo stato attivo da scorrere tutti i controlli contenuti del controllo composito, quindi fuori dal controllo composito e all'elemento successivo nell'ordine di tabulazione del contenitore. L'ordine di tabulazione dei controlli ospitati è determinato dalla risorsa finestra di dialogo e determina l'ordine in cui verrà eseguita la tabulazione.

> [!NOTE]
> Affinché i tasti di scelta `CComCompositeControl`rapida funzionino correttamente con un oggetto , è necessario caricare una tabella dei tasti di scelta rapida durante la creazione del controllo, passare l'handle e il numero di tasti di scelta rapida in [IOleControlImpl::GetControlInfo](../../atl/reference/iolecontrolimpl-class.md#getcontrolinfo)e infine eliminare la tabella quando il controllo viene rilasciato.

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#14](../../atl/codesnippet/cpp/ccomcompositecontrol-class_2.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WinBase`

[CComControlBase (informazioni in base alla proprietà del pulsante)](../../atl/reference/ccomcontrolbase-class.md)

[Controllo CComControl](../../atl/reference/ccomcontrol-class.md)

`CComCompositeControl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ccomcompositecontroladvisesinkmap"></a><a name="advisesinkmap"></a>CComCompositeControl::AdviseSinkMap

Chiamare questo metodo per consigliare o annullare la decisione di tutti i controlli ospitati dal controllo composito.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### <a name="parameters"></a>Parametri

*bConsigli*<br/>
True se tutti i controlli devono essere avvisati; in caso contrario false.

### <a name="return-value"></a>Valore restituito

|||
|-|-|
|S_OK  |Tutti i controlli nella mappa del sink di evento sono stati connessi o disconnessi correttamente dall'origine eventi.|
|E_FAIL  |Non tutti i controlli nella mappa del sink di evento potrebbero essere connessi o disconnessi correttamente dall'origine eventi.|
|E_POINTER  |Questo errore indica in genere un problema con una voce nella mappa del sink `IDispEventImpl` di `IDispEventSimpleImpl` evento del controllo o un problema con un argomento di modello utilizzato in una classe base o .|
|CONNECT_E_ADVISELIMIT  |Il punto di connessione ha già raggiunto il limite di connessioni e non è in grado di accettarne altre.|
|CONNECT_E_CANNOTCONNECT  |Il sink non supporta l'interfaccia richiesta da questo punto di connessione.|
|CONNECT_E_NOCONNECTION  |Il valore del cookie non rappresenta una connessione valida. Questo errore indica in genere un problema con una voce nella mappa del sink `IDispEventImpl` di `IDispEventSimpleImpl` evento del controllo o un problema con un argomento di modello utilizzato in una classe base o .|

### <a name="remarks"></a>Osservazioni

L'implementazione di base di questo metodo esegue la ricerca nelle voci nella mappa del sink di evento. Fornisce quindi o annulla la visualizzazione dei punti di connessione agli oggetti COM descritti dalle voci sink della mappa del sink di evento. Questo metodo membro si basa anche sul fatto che la `IDispEventImpl` classe derivata eredita da un'istanza di per ogni controllo nella mappa del sink che deve essere consigliato o non consigliato.

## <a name="ccomcompositecontrolcalcextent"></a><a name="calcextent"></a>CComCompositeControl::CalcExtent

Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.

```
BOOL CalcExtent(SIZE& size);
```

### <a name="parameters"></a>Parametri

*Dimensione*<br/>
Riferimento a `SIZE` una struttura che deve essere riempita da questo metodo.

### <a name="return-value"></a>Valore restituito

TRUESe il controllo è ospitato da una finestra di dialogo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La dimensione viene restituita nel parametro *size.*

## <a name="ccomcompositecontrolcreate"></a><a name="create"></a>CComCompositeControl::Create

Questo metodo viene chiamato per creare la finestra del controllo per il controllo composito.

```
HWND Create(
    HWND hWndParent,
    RECT& /* rcPos */,
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
Handle per la finestra padre del controllo.

*RcPos*<br/>
Riservato.

*dwInitParam*<br/>
Dati da passare al controllo durante la creazione del controllo. I dati passati come *dwInitParam* verranno visualizzati come parametro LPARAM del messaggio [di WM_INITDIALOG,](/windows/win32/dlgbox/wm-initdialog) che verrà inviato al controllo composito quando viene creato.

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo del controllo composito appena creata.

### <a name="remarks"></a>Osservazioni

Questo metodo viene in genere chiamato durante l'attivazione sul posto del controllo.

## <a name="ccomcompositecontrolccomcompositecontrol"></a><a name="ccomcompositecontrol"></a>CComCompositeControl::CComCompositeControl

Costruttore.

```
CComCompositeControl();
```

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati [CComCompositeControl::m_hbrBackground](#m_hbrbackground) e [CComCompositeControl::m_hWndFocus](#m_hwndfocus) su NULL.

## <a name="ccomcompositecontrolccomcompositecontrol"></a><a name="dtor"></a>CComCompositeControl:: CComCompositeControl

Distruttore.

```
~CComCompositeControl();
```

### <a name="remarks"></a>Osservazioni

Elimina l'oggetto di sfondo, se esistente.

## <a name="ccomcompositecontrolcreatecontrolwindow"></a><a name="createcontrolwindow"></a>CComCompositeControl::CreateControlWindow

Chiamare questo metodo per creare la finestra di controllo e consigliare i controlli ospitati.

```
virtual HWND CreateControlWindow(
    HWND hWndParent,
    RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
Handle per la finestra padre del controllo.

*RcPos*<br/>
Rettangolo di posizione del controllo composito nelle coordinate client rispetto a *hWndParent*.

### <a name="return-value"></a>Valore restituito

Restituisce un handle per la finestra di dialogo del controllo composito appena creata.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [CComCompositeControl::Create](#create) e [CComCompositeControl::AdviseSinkMap](#advisesinkmap).

## <a name="ccomcompositecontrolm_hbrbackground"></a><a name="m_hbrbackground"></a>CComCompositeControl::m_hbrBackground

Pennello per lo sfondo.

```
HBRUSH m_hbrBackground;
```

## <a name="ccomcompositecontrolm_hwndfocus"></a><a name="m_hwndfocus"></a>CComCompositeControl::m_hWndFocus

Handle della finestra che ha attualmente lo stato attivo.

```
HWND m_hWndFocus;
```

## <a name="ccomcompositecontrolsetbackgroundcolorfromambient"></a><a name="setbackgroundcolorfromambient"></a>CComCompositeControl::SetBackgroundColorFromAmbient

Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.

```
HRESULT SetBackgroundColorFromAmbient();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
