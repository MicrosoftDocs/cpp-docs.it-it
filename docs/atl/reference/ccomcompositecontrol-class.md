---
title: Classe CComCompositeControl
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
ms.openlocfilehash: f1a9a2d0628b3683f047ce9858d809040438db03
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57302000"
---
# <a name="ccomcompositecontrol-class"></a>Classe CComCompositeControl

Questa classe fornisce i metodi necessari per implementare un controllo composito.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComCompositeControl : public CComControl<T,CAxDialogImpl<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), anche da tutte le altre interfacce desiderate per il supporto per il controllo composito.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::CComCompositeControl](#ccomcompositecontrol)|Costruttore.|
|[CComCompositeControl::~CComCompositeControl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::AdviseSinkMap](#advisesinkmap)|Chiamare questo metodo per inviare o annullare tutti i controlli ospitati dal controllo composito.|
|[CComCompositeControl::CalcExtent](#calcextent)|Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo usata per ospitare il controllo composito.|
|[CComCompositeControl::Create](#create)|Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.|
|[CComCompositeControl::CreateControlWindow](#createcontrolwindow)|Chiamare questo metodo per creare la finestra di controllo e dà alcun Consiglio qualsiasi controllo ospitato.|
|[CComCompositeControl::SetBackgroundColorFromAmbient](#setbackgroundcolorfromambient)|Chiamare questo metodo per impostare il colore di sfondo del controllo composito con colore di sfondo del contenitore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::m_hbrBackground](#m_hbrbackground)|Il pennello di sfondo.|
|[CComCompositeControl::m_hWndFocus](#m_hwndfocus)|L'handle della finestra che attualmente ha lo stato attivo.|

## <a name="remarks"></a>Note

Le classi derivate dalla classe `CComCompositeControl` ereditano le funzionalità di un controllo composito ActiveX. Controlli ActiveX derivati da `CComCompositeControl` ospitati da una finestra di dialogo standard. Questi tipi di controlli vengono chiamati controlli compositi perché sono in grado di ospitare altri controlli (controlli nativi di Windows e i controlli ActiveX).

`CComCompositeControl` Identifica la risorsa finestra di dialogo da utilizzare nella creazione del controllo composito mediante la ricerca di un membro di dati enumerato nella classe figlio. Il membro IDD di questa classe figlio è impostato per l'ID risorsa della risorsa finestra di dialogo che verrà usata come finestra del controllo. Di seguito è riportato un esempio del membro dati che la classe derivata da `CComCompositeControl` deve contenere per identificare la risorsa finestra di dialogo da utilizzare per la finestra di controllo:

[!code-cpp[NVC_ATL_COM#13](../../atl/codesnippet/cpp/ccomcompositecontrol-class_1.h)]

> [!NOTE]
>  I controlli composti sono sempre i controlli con finestra, anche se possono contenere controlli privi di finestra.

Un controllo implementato da un `CComCompositeControl`-classe derivata ha compilato comportamento di tabulazione predefinito. Quando il controllo riceve lo stato attivo da in corso a schede per in un'applicazione che lo contiene, in successione premendo il tasto TAB causerà lo stato attivo si scorre tutti i controlli contenuti del controllo composito, quindi all'esterno del controllo composito e all'elemento successivo di ordine di tabulazione del contenitore. L'ordine di tabulazione dei controlli ospitati è determinato dalla risorsa finestra di dialogo e determina l'ordine in cui la tabulazione si verificano.

> [!NOTE]
>  Affinché gli acceleratori funzionare correttamente con un `CComCompositeControl`, è necessario caricare una tabella di tasti di scelta rapida quando il controllo viene creato, passare l'handle e il numero di tasti di scelta rapida in [IOleControlImpl::GetControlInfo](../../atl/reference/iolecontrolimpl-class.md#getcontrolinfo), e Infine eliminare definitivamente la tabella quando viene rilasciato il controllo.

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#14](../../atl/codesnippet/cpp/ccomcompositecontrol-class_2.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WinBase`

[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)

[CComControl](../../atl/reference/ccomcontrol-class.md)

`CComCompositeControl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="advisesinkmap"></a>  CComCompositeControl::AdviseSinkMap

Chiamare questo metodo per inviare o annullare tutti i controlli ospitati dal controllo composito.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### <a name="parameters"></a>Parametri

*bAdvise*<br/>
True se tutti i controlli sono a cui annunciare; in caso contrario, false.

### <a name="return-value"></a>Valore restituito

|||
|-|-|
|S_OK  |Tutti i controlli in caso di mappa del sink sono stati connesso o disconnesso dalla relativa origine evento completata.|
|E_FAIL  |Non tutti i controlli nel caso in cui mappa sink è stato connesso o disconnesso dalla relativa origine evento completata.|
|E_POINTER  |Questo errore indica in genere un problema con una voce nella mappa del sink di evento del controllo o un problema con un argomento di modello utilizzato in un' `IDispEventImpl` o `IDispEventSimpleImpl` classe di base.|
|CONNECT_E_ADVISELIMIT  |Il punto di connessione ha già raggiunto il limite di connessioni e non è possibile accettarne altre.|
|CONNECT_E_CANNOTCONNECT  |Il sink non supporta l'interfaccia richiesta da questo punto di connessione.|
|CONNECT_E_NOCONNECTION  |Il valore del cookie non rappresenta una connessione valida. Questo errore indica in genere un problema con una voce nella mappa del sink di evento del controllo o un problema con un argomento di modello utilizzato in un' `IDispEventImpl` o `IDispEventSimpleImpl` classe di base.|

### <a name="remarks"></a>Note

L'implementazione di base di questo metodo cerca tramite le voci dell'evento sink mappa. È quindi avvisa o esegue l'Unadvise dei punti di connessione per gli oggetti COM descritti dalle voci di sink della mappa eventi sink. Questo metodo di membro si basa anche sul fatto che la classe derivata eredita da un'istanza di `IDispEventImpl` per ogni controllo nella mappa del sink che deve essere consigliabile o annullare.

##  <a name="calcextent"></a>  CComCompositeControl::CalcExtent

Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo usata per ospitare il controllo composito.

```
BOOL CalcExtent(SIZE& size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Un riferimento a un `SIZE` struttura deve essere compilato da questo metodo.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo è ospitato da una finestra di dialogo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

La dimensione viene restituita nel *dimensioni* parametro.

##  <a name="create"></a>  CComCompositeControl::Create

Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.

```
HWND Create(
    HWND hWndParent,
    RECT& /* rcPos */,
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle alla finestra padre del controllo.

*rcPos*<br/>
Riservato.

*dwInitParam*<br/>
Dati da passare al controllo durante la creazione del controllo. I dati passati come *dwInitParam* verrà visualizzato come il parametro LPARAM del [WM_INITDIALOG](/windows/desktop/dlgbox/wm-initdialog) messaggio, che verrà inviato al controllo composito quando viene creata.

### <a name="return-value"></a>Valore restituito

Handle alla finestra di dialogo controllo composito appena creato.

### <a name="remarks"></a>Note

In genere, questo metodo viene chiamato durante l'attivazione sul posto del controllo.

##  <a name="ccomcompositecontrol"></a>  CComCompositeControl::CComCompositeControl

Costruttore.

```
CComCompositeControl();
```

### <a name="remarks"></a>Note

Inizializza la [CComCompositeControl::m_hbrBackground](#m_hbrbackground) e [CComCompositeControl::m_hWndFocus](#m_hwndfocus) membri dati su NULL.

##  <a name="dtor"></a>  CComCompositeControl::~CComCompositeControl

Distruttore.

```
~CComCompositeControl();
```

### <a name="remarks"></a>Note

Elimina l'oggetto in background, se presente.

##  <a name="createcontrolwindow"></a>  CComCompositeControl::CreateControlWindow

Chiamare questo metodo per creare la finestra di controllo e dà alcun Consiglio a tutti i controlli ospitati.

```
virtual HWND CreateControlWindow(
    HWND hWndParent,
    RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle alla finestra padre del controllo.

*rcPos*<br/>
Coordina il rettangolo di posizione del controllo composito nel client relativo alla *hWndParent*.

### <a name="return-value"></a>Valore restituito

Restituisce un handle alla finestra di dialogo controllo composito appena creato.

### <a name="remarks"></a>Note

Questo metodo chiama [CComCompositeControl::Create](#create) e [CComCompositeControl](#advisesinkmap).

##  <a name="m_hbrbackground"></a>  CComCompositeControl::m_hbrBackground

Il pennello di sfondo.

```
HBRUSH m_hbrBackground;
```

##  <a name="m_hwndfocus"></a>  CComCompositeControl::m_hWndFocus

L'handle della finestra che attualmente ha lo stato attivo.

```
HWND m_hWndFocus;
```

##  <a name="setbackgroundcolorfromambient"></a>  CComCompositeControl::SetBackgroundColorFromAmbient

Chiamare questo metodo per impostare il colore di sfondo del controllo composito con colore di sfondo del contenitore.

```
HRESULT SetBackgroundColorFromAmbient();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
