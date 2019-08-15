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
ms.openlocfilehash: b57eaf105bfca1a49d53b5e5e99969b0fa2fc82f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497328"
---
# <a name="ccomcompositecontrol-class"></a>Classe CComCompositeControl

Questa classe fornisce i metodi necessari per implementare un controllo composito.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComCompositeControl : public CComControl<T,CAxDialogImpl<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare per il controllo composito.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::CComCompositeControl](#ccomcompositecontrol)|Costruttore.|
|[CComCompositeControl:: ~ CComCompositeControl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCompositeControl::AdviseSinkMap](#advisesinkmap)|Chiamare questo metodo per consigliare o annullare la notifica a tutti i controlli ospitati dal controllo composito.|
|[CComCompositeControl::CalcExtent](#calcextent)|Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.|
|[CComCompositeControl::Create](#create)|Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.|
|[CComCompositeControl::CreateControlWindow](#createcontrolwindow)|Chiamare questo metodo per creare la finestra di controllo e consigliare qualsiasi controllo ospitato.|
|[CComCompositeControl::SetBackgroundColorFromAmbient](#setbackgroundcolorfromambient)|Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CComCompositeControl::m_hbrBackground](#m_hbrbackground)|Pennello di sfondo.|
|[CComCompositeControl::m_hWndFocus](#m_hwndfocus)|Handle della finestra che attualmente ha lo stato attivo.|

## <a name="remarks"></a>Note

Le classi derivate dalla classe `CComCompositeControl` ereditano la funzionalità di un controllo composito ActiveX. I controlli ActiveX derivati da `CComCompositeControl` sono ospitati da una finestra di dialogo standard. Questi tipi di controlli sono denominati controlli compositi perché sono in grado di ospitare altri controlli (controlli Windows nativi e controlli ActiveX).

`CComCompositeControl`identifica la risorsa della finestra di dialogo da utilizzare per la creazione del controllo composito cercando un membro dati enumerato nella classe figlio. Il membro IDD di questa classe figlio viene impostato sull'ID risorsa della risorsa finestra di dialogo che verrà utilizzata come finestra del controllo. Di seguito è riportato un esempio del membro dati che la classe derivata da `CComCompositeControl` deve contenere per identificare la risorsa finestra di dialogo da utilizzare per la finestra del controllo:

[!code-cpp[NVC_ATL_COM#13](../../atl/codesnippet/cpp/ccomcompositecontrol-class_1.h)]

> [!NOTE]
>  I controlli composti sono sempre controlli a finestra, anche se possono contenere controlli privi di finestra.

Un controllo implementato da una `CComCompositeControl`classe derivata da dispone di un comportamento di tabulazione predefinito incorporato. Quando il controllo riceve lo stato attivo a schede in un'applicazione che lo contiene, premendo successivamente il tasto TAB lo stato attivo viene ciclito attraverso tutti i controlli contenuti del controllo composito, quindi fuori dal controllo composito e dall'elemento successivo nel ordine di tabulazione del contenitore. L'ordine di tabulazione dei controlli ospitati è determinato dalla risorsa finestra di dialogo e determina l'ordine in cui si verificherà la tabulazione.

> [!NOTE]
>  Affinché gli acceleratori funzionino correttamente con un `CComCompositeControl`, è necessario caricare una tabella dei tasti di scelta rapida mentre viene creato il controllo, passare l'handle e il numero di acceleratori in [IOleControlImpl:: GetControlInfo](../../atl/reference/iolecontrolimpl-class.md#getcontrolinfo)e infine eliminare definitivamente la tabella. Quando viene rilasciato il controllo.

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

Chiamare questo metodo per consigliare o annullare la notifica a tutti i controlli ospitati dal controllo composito.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### <a name="parameters"></a>Parametri

*bAdvise*<br/>
True se è necessario consigliare tutti i controlli; in caso contrario, false.

### <a name="return-value"></a>Valore restituito

|||
|-|-|
|S_OK  |Tutti i controlli nella mappa di sink di evento sono stati connessi o disconnessi correttamente dall'origine evento.|
|E_FAIL  |Non tutti i controlli nella mappa di sink di evento potrebbero essere connessi o disconnessi correttamente dall'origine eventi.|
|E_POINTER  |Questo errore indica in genere un problema con una voce nella mappa sink di eventi del controllo o un problema con un argomento di modello usato `IDispEventImpl` in `IDispEventSimpleImpl` una classe di base o.|
|CONNECT_E_ADVISELIMIT  |Il punto di connessione ha già raggiunto il limite di connessioni e non può accettare altro.|
|CONNECT_E_CANNOTCONNECT  |Il sink non supporta l'interfaccia richiesta da questo punto di connessione.|
|CONNECT_E_NOCONNECTION  |Il valore del cookie non rappresenta una connessione valida. Questo errore indica in genere un problema con una voce nella mappa sink di eventi del controllo o un problema con un argomento di modello usato `IDispEventImpl` in `IDispEventSimpleImpl` una classe di base o.|

### <a name="remarks"></a>Note

L'implementazione di base di questo metodo esegue la ricerca nelle voci della mappa di sink di evento. Informa quindi o Annulla la notifica dei punti di connessione agli oggetti COM descritti dalle voci di sink della mappa di sink di evento. Questo metodo del membro si basa anche sul fatto che la classe derivata eredita da un'istanza di `IDispEventImpl` per ogni controllo della mappa di sink che deve essere consigliato o non consigliato.

##  <a name="calcextent"></a>CComCompositeControl:: CalcExtent

Chiamare questo metodo per calcolare le dimensioni in unità HIMETRIC della risorsa finestra di dialogo utilizzata per ospitare il controllo composito.

```
BOOL CalcExtent(SIZE& size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Riferimento a una `SIZE` struttura che deve essere riempita da questo metodo.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo è ospitato da una finestra di dialogo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

La dimensione viene restituita nel parametro *size* .

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
Handle per la finestra padre del controllo.

*rcPos*<br/>
Riservato.

*dwInitParam*<br/>
Dati da passare al controllo durante la creazione del controllo. I dati passati come *dwInitParam* verranno visualizzati come parametro lParam del messaggio [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) , che verrà inviato al controllo composito quando viene creato.

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo del controllo composito appena creato.

### <a name="remarks"></a>Note

Questo metodo viene in genere chiamato durante l'attivazione sul posto del controllo.

##  <a name="ccomcompositecontrol"></a>  CComCompositeControl::CComCompositeControl

Costruttore.

```
CComCompositeControl();
```

### <a name="remarks"></a>Note

Inizializza i membri dati [CComCompositeControl:: m_hbrBackground](#m_hbrbackground) e [CComCompositeControl:: m_hWndFocus](#m_hwndfocus) in null.

##  <a name="dtor"></a>CComCompositeControl:: ~ CComCompositeControl

Distruttore.

```
~CComCompositeControl();
```

### <a name="remarks"></a>Note

Elimina l'oggetto in background, se esistente.

##  <a name="createcontrolwindow"></a>CComCompositeControl:: CreateControlWindow

Chiamare questo metodo per creare la finestra di controllo e consigliare tutti i controlli ospitati.

```
virtual HWND CreateControlWindow(
    HWND hWndParent,
    RECT& rcPos);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la finestra padre del controllo.

*rcPos*<br/>
Il rettangolo di posizione del controllo composito nelle coordinate del client rispetto a *hwndParent*.

### <a name="return-value"></a>Valore restituito

Restituisce un handle per la finestra di dialogo del controllo composito appena creato.

### <a name="remarks"></a>Note

Questo metodo chiama [CComCompositeControl:: create](#create) e [CComCompositeControl:: AdviseSinkMap](#advisesinkmap).

##  <a name="m_hbrbackground"></a>  CComCompositeControl::m_hbrBackground

Pennello di sfondo.

```
HBRUSH m_hbrBackground;
```

##  <a name="m_hwndfocus"></a>  CComCompositeControl::m_hWndFocus

Handle della finestra che attualmente ha lo stato attivo.

```
HWND m_hWndFocus;
```

##  <a name="setbackgroundcolorfromambient"></a>  CComCompositeControl::SetBackgroundColorFromAmbient

Chiamare questo metodo per impostare il colore di sfondo del controllo composito utilizzando il colore di sfondo del contenitore.

```
HRESULT SetBackgroundColorFromAmbient();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
