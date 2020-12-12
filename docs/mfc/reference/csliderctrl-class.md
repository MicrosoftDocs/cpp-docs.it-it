---
description: 'Altre informazioni su: classe CSliderCtrl'
title: Classe CSliderCtrl
ms.date: 11/04/2016
f1_keywords:
- CSliderCtrl
- AFXCMN/CSliderCtrl
- AFXCMN/CSliderCtrl::CSliderCtrl
- AFXCMN/CSliderCtrl::ClearSel
- AFXCMN/CSliderCtrl::ClearTics
- AFXCMN/CSliderCtrl::Create
- AFXCMN/CSliderCtrl::CreateEx
- AFXCMN/CSliderCtrl::GetBuddy
- AFXCMN/CSliderCtrl::GetChannelRect
- AFXCMN/CSliderCtrl::GetLineSize
- AFXCMN/CSliderCtrl::GetNumTics
- AFXCMN/CSliderCtrl::GetPageSize
- AFXCMN/CSliderCtrl::GetPos
- AFXCMN/CSliderCtrl::GetRange
- AFXCMN/CSliderCtrl::GetRangeMax
- AFXCMN/CSliderCtrl::GetRangeMin
- AFXCMN/CSliderCtrl::GetSelection
- AFXCMN/CSliderCtrl::GetThumbLength
- AFXCMN/CSliderCtrl::GetThumbRect
- AFXCMN/CSliderCtrl::GetTic
- AFXCMN/CSliderCtrl::GetTicArray
- AFXCMN/CSliderCtrl::GetTicPos
- AFXCMN/CSliderCtrl::GetToolTips
- AFXCMN/CSliderCtrl::SetBuddy
- AFXCMN/CSliderCtrl::SetLineSize
- AFXCMN/CSliderCtrl::SetPageSize
- AFXCMN/CSliderCtrl::SetPos
- AFXCMN/CSliderCtrl::SetRange
- AFXCMN/CSliderCtrl::SetRangeMax
- AFXCMN/CSliderCtrl::SetRangeMin
- AFXCMN/CSliderCtrl::SetSelection
- AFXCMN/CSliderCtrl::SetThumbLength
- AFXCMN/CSliderCtrl::SetTic
- AFXCMN/CSliderCtrl::SetTicFreq
- AFXCMN/CSliderCtrl::SetTipSide
- AFXCMN/CSliderCtrl::SetToolTips
helpviewer_keywords:
- CSliderCtrl [MFC], CSliderCtrl
- CSliderCtrl [MFC], ClearSel
- CSliderCtrl [MFC], ClearTics
- CSliderCtrl [MFC], Create
- CSliderCtrl [MFC], CreateEx
- CSliderCtrl [MFC], GetBuddy
- CSliderCtrl [MFC], GetChannelRect
- CSliderCtrl [MFC], GetLineSize
- CSliderCtrl [MFC], GetNumTics
- CSliderCtrl [MFC], GetPageSize
- CSliderCtrl [MFC], GetPos
- CSliderCtrl [MFC], GetRange
- CSliderCtrl [MFC], GetRangeMax
- CSliderCtrl [MFC], GetRangeMin
- CSliderCtrl [MFC], GetSelection
- CSliderCtrl [MFC], GetThumbLength
- CSliderCtrl [MFC], GetThumbRect
- CSliderCtrl [MFC], GetTic
- CSliderCtrl [MFC], GetTicArray
- CSliderCtrl [MFC], GetTicPos
- CSliderCtrl [MFC], GetToolTips
- CSliderCtrl [MFC], SetBuddy
- CSliderCtrl [MFC], SetLineSize
- CSliderCtrl [MFC], SetPageSize
- CSliderCtrl [MFC], SetPos
- CSliderCtrl [MFC], SetRange
- CSliderCtrl [MFC], SetRangeMax
- CSliderCtrl [MFC], SetRangeMin
- CSliderCtrl [MFC], SetSelection
- CSliderCtrl [MFC], SetThumbLength
- CSliderCtrl [MFC], SetTic
- CSliderCtrl [MFC], SetTicFreq
- CSliderCtrl [MFC], SetTipSide
- CSliderCtrl [MFC], SetToolTips
ms.assetid: dd12b084-4eda-4550-a810-8f3cfb06b871
ms.openlocfilehash: 556366f429b39344f4ae2f20acd3c20fd9760552
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264544"
---
# <a name="csliderctrl-class"></a>Classe CSliderCtrl

Fornisce la funzionalità del controllo dispositivo di scorrimento comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CSliderCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSliderCtrl:: CSliderCtrl](#csliderctrl)|Costruisce un oggetto `CSliderCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSliderCtrl:: ClearSel](#clearsel)|Cancella la selezione corrente in un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: ClearTics](#cleartics)|Rimuove i segni di graduazione correnti da un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: create](#create)|Crea un controllo dispositivo di scorrimento e lo collega a un `CSliderCtrl` oggetto.|
|[CSliderCtrl:: CreateEx](#createex)|Crea un controllo dispositivo di scorrimento con gli stili estesi di Windows specificati e lo collega a un `CSliderCtrl` oggetto.|
|[CSliderCtrl:: GetBuddy](#getbuddy)|Recupera l'handle di una finestra di controllo dispositivo di scorrimento in una posizione specificata.|
|[CSliderCtrl:: GetChannelRect](#getchannelrect)|Recupera la dimensione del canale del controllo dispositivo di scorrimento.|
|[CSliderCtrl:: GetLineSize](#getlinesize)|Recupera le dimensioni di riga di un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: GetNumTics](#getnumtics)|Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: GetPageSize](#getpagesize)|Recupera le dimensioni di pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: GetPos](#getpos)|Recupera la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl:: GetRange](#getrange)|Recupera le posizioni minime e massime per un dispositivo di scorrimento.|
|[CSliderCtrl:: GetRangeMax](#getrangemax)|Recupera la posizione massima per un dispositivo di scorrimento.|
|[CSliderCtrl:: GetRangeMin](#getrangemin)|Recupera la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl:: GetSelection](#getselection)|Recupera l'intervallo della selezione corrente.|
|[CSliderCtrl:: GetThumbLength](#getthumblength)|Recupera la lunghezza del dispositivo di scorrimento nel controllo TrackBar corrente.|
|[CSliderCtrl:: GetThumbRect](#getthumbrect)|Recupera la dimensione del Thumb del controllo dispositivo di scorrimento.|
|[CSliderCtrl:: Getter](#gettic)|Recupera la posizione del segno di graduazione specificato.|
|[CSliderCtrl:: GetTicArray](#getticarray)|Recupera la matrice di posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: GetTicPos](#getticpos)|Recupera la posizione del segno di graduazione specificato nelle coordinate del client.|
|[CSliderCtrl:: GetToolTips](#gettooltips)|Recupera l'handle per il controllo ToolTip assegnato al controllo dispositivo di scorrimento, se disponibile.|
|[CSliderCtrl:: seBuddy](#setbuddy)|Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: SetLineSize](#setlinesize)|Imposta la dimensione della riga di un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: sepagesize](#setpagesize)|Imposta la dimensione di pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl:: SetPos](#setpos)|Imposta la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl:: SetRange](#setrange)|Imposta le posizioni minime e massime per un dispositivo di scorrimento.|
|[CSliderCtrl:: SetRangeMax](#setrangemax)|Imposta la posizione massima per un dispositivo di scorrimento.|
|[CSliderCtrl:: SetRangeMin](#setrangemin)|Imposta la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl:: seselection](#setselection)|Imposta l'intervallo della selezione corrente.|
|[CSliderCtrl:: SetThumbLength](#setthumblength)|Imposta la lunghezza del dispositivo di scorrimento nel controllo TrackBar corrente.|
|[CSliderCtrl:: SetTic](#settic)|Imposta la posizione del segno di graduazione specificato.|
|[CSliderCtrl:: SetTicFreq](#setticfreq)|Imposta la frequenza dei segni di graduazione per incremento del controllo dispositivo di scorrimento.|
|[CSliderCtrl:: SetTipSide](#settipside)|Posiziona un controllo ToolTip utilizzato da un controllo TrackBar.|
|[CSliderCtrl:: setooltips](#settooltips)|Assegna un controllo ToolTip a un controllo dispositivo di scorrimento.|

## <a name="remarks"></a>Commenti

Un "controllo dispositivo di scorrimento" (noto anche come TrackBar) è una finestra contenente un dispositivo di scorrimento e segni di graduazione facoltativi. Quando l'utente sposta il dispositivo di scorrimento usando il mouse o i tasti di direzione, il controllo Invia messaggi di notifica per indicare la modifica.

I controlli dispositivo di scorrimento sono utili quando si desidera che l'utente selezioni un valore distinto o un set di valori consecutivi in un intervallo. È ad esempio possibile utilizzare un controllo dispositivo di scorrimento per consentire all'utente di impostare la velocità di ripetizione della tastiera spostando il dispositivo di scorrimento in corrispondenza di uno specifico segno di graduazione.

Questo controllo (e pertanto la `CSliderCtrl` classe) è disponibile solo per i programmi in esecuzione in windows 95/98 e Windows NT versione 3,51 e successive.

Il dispositivo di scorrimento si sposta in incrementi specificati al momento della creazione. Ad esempio, se si specifica che il dispositivo di scorrimento deve avere un intervallo di cinque, il dispositivo di scorrimento può occupare solo sei posizioni: una posizione sul lato sinistro del controllo dispositivo di scorrimento e una posizione per ogni incremento nell'intervallo. In genere, ognuna di queste posizioni è identificata da un segno di graduazione.

È possibile creare un dispositivo di scorrimento usando il costruttore e la `Create` funzione membro di `CSliderCtrl` . Una volta creato un controllo dispositivo di scorrimento, è possibile utilizzare le funzioni membro in `CSliderCtrl` per modificare molte delle relative proprietà. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento.

Per altre informazioni sull'uso di `CSliderCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [uso di CSliderCtrl](../../mfc/using-csliderctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSliderCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="csliderctrlclearsel"></a><a name="clearsel"></a> CSliderCtrl:: ClearSel

Cancella la selezione corrente in un controllo dispositivo di scorrimento.

```cpp
void ClearSel(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Ridisegni flag. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo la cancellazione della selezione; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlcleartics"></a><a name="cleartics"></a> CSliderCtrl:: ClearTics

Rimuove i segni di graduazione correnti da un controllo dispositivo di scorrimento.

```cpp
void ClearTics(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Ridisegni flag. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo la cancellazione dei segni di graduazione. in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlcreate"></a><a name="create"></a> CSliderCtrl:: create

Crea un controllo dispositivo di scorrimento e lo collega a un `CSliderCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo Slider. Applicare qualsiasi combinazione di [stili del controllo Slider](/windows/win32/Controls/trackbar-control-styles), descritti nella Windows SDK, al controllo.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo dispositivo di scorrimento. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo dispositivo di scorrimento, in genere un `CDialog` . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Si costruisce un `CSliderCtrl` in due passaggi. In primo luogo, chiamare il costruttore, quindi chiamare `Create` , che crea il controllo dispositivo di scorrimento e lo collega all' `CSliderCtrl` oggetto.

A seconda dei valori impostati per *dwStyle*, il controllo dispositivo di scorrimento può avere un orientamento verticale o orizzontale. Può avere segni di graduazione su entrambi i lati, entrambi i lati o nessuno. Può anche essere usato per specificare un intervallo di valori consecutivi.

Per applicare gli stili della finestra estesa al controllo dispositivo di scorrimento, chiamare [CreateEx](#createex) anziché `Create` .

## <a name="csliderctrlcreateex"></a><a name="createex"></a> CSliderCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all' `CSliderCtrl` oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Specifica lo stile del controllo Slider. Applicare qualsiasi combinazione di [stili del controllo Slider](/windows/win32/Controls/trackbar-control-styles), descritti nella Windows SDK, al controllo.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

## <a name="csliderctrlcsliderctrl"></a><a name="csliderctrl"></a> CSliderCtrl:: CSliderCtrl

Costruisce un oggetto `CSliderCtrl`.

```
CSliderCtrl();
```

## <a name="csliderctrlgetbuddy"></a><a name="getbuddy"></a> CSliderCtrl:: GetBuddy

Recupera l'handle di una finestra di controllo dispositivo di scorrimento in una posizione specificata.

```
CWnd* GetBuddy(BOOL fLocation = TRUE) const;
```

### <a name="parameters"></a>Parametri

*fLocation*<br/>
Valore booleano che indica quale dei due handle della finestra di Buddy recuperare. I possibili valori sono i seguenti:

- TRUE Recupera l'handle per l'oggetto Buddy a sinistra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza lo stile TBS_VERT, il messaggio recupererà l'oggetto Buddy sopra il dispositivo di scorrimento.

- FALSE Recupera l'handle all'oggetto Buddy a destra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza lo stile TBS_VERT, il messaggio recupererà l'oggetto Buddy sotto il dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che corrisponde alla finestra di Buddy nella posizione specificata da *fLocation* oppure null se non esiste alcuna finestra di Buddy in quel percorso.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TBM_GETBUDDY](/windows/win32/Controls/tbm-getbuddy)del messaggio Win32, come descritto nel Windows SDK. Per una descrizione degli stili del controllo Slider, vedere gli [stili dei controlli TrackBar](/windows/win32/Controls/trackbar-control-styles) nel Windows SDK.

## <a name="csliderctrlgetchannelrect"></a><a name="getchannelrect"></a> CSliderCtrl:: GetChannelRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il canale di un controllo dispositivo di scorrimento.

```cpp
void GetChannelRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*LPRC*<br/>
Puntatore a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che contiene le dimensioni e la posizione del rettangolo di delimitazione del canale quando la funzione restituisce un valore.

### <a name="remarks"></a>Commenti

Il canale è l'area in cui viene spostato il dispositivo di scorrimento e che contiene l'evidenziazione quando viene selezionato un intervallo.

## <a name="csliderctrlgetlinesize"></a><a name="getlinesize"></a> CSliderCtrl:: GetLineSize

Recupera la dimensione della linea per un controllo dispositivo di scorrimento.

```
int GetLineSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni di una linea per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Commenti

Le dimensioni della riga influiscono sul modo in cui viene spostato il dispositivo di scorrimento per le notifiche TB_LINEUP e TB_LINEDOWN. L'impostazione predefinita per le dimensioni della riga è 1.

## <a name="csliderctrlgetnumtics"></a><a name="getnumtics"></a> CSliderCtrl:: GetNumTics

Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.

```
UINT GetNumTics() const;
```

### <a name="return-value"></a>Valore restituito

Numero di segni di graduazione nel controllo dispositivo di scorrimento.

## <a name="csliderctrlgetpagesize"></a><a name="getpagesize"></a> CSliderCtrl:: GetPageSize

Recupera le dimensioni della pagina per un controllo dispositivo di scorrimento.

```
int GetPageSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni di una pagina per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Commenti

Le dimensioni della pagina influiscono sul modo in cui viene spostato il dispositivo di scorrimento per le notifiche TB_PAGEUP e TB_PAGEDOWN.

## <a name="csliderctrlgetpos"></a><a name="getpos"></a> CSliderCtrl:: GetPos

Recupera la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione corrente.

## <a name="csliderctrlgetrange"></a><a name="getrange"></a> CSliderCtrl:: GetRange

Recupera le posizioni massime e minime per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```cpp
void GetRange(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un intero che riceve la posizione minima.

*nMax*<br/>
Riferimento a un Integer che riceve la posizione massima.

### <a name="remarks"></a>Commenti

Questa funzione copia i valori negli Integer a cui fa riferimento *nmin* e *nmax*.

## <a name="csliderctrlgetrangemax"></a><a name="getrangemax"></a> CSliderCtrl:: GetRangeMax

Recupera la posizione massima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Posizione massima del controllo.

## <a name="csliderctrlgetrangemin"></a><a name="getrangemin"></a> CSliderCtrl:: GetRangeMin

Recupera la posizione minima del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Posizione minima del controllo.

## <a name="csliderctrlgetselection"></a><a name="getselection"></a> CSliderCtrl:: GetSelection

Recupera le posizioni iniziale e finale della selezione corrente in un controllo dispositivo di scorrimento.

```cpp
void GetSelection(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un Integer che riceve la posizione iniziale della selezione corrente.

*nMax*<br/>
Riferimento a un Integer che riceve la posizione finale della selezione corrente.

## <a name="csliderctrlgetthumblength"></a><a name="getthumblength"></a> CSliderCtrl:: GetThumbLength

Recupera la lunghezza del dispositivo di scorrimento nel controllo TrackBar corrente.

```
int GetThumbLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del dispositivo di scorrimento, in pixel.

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [TBM_GETTHUMBLENGTH](/windows/win32/Controls/tbm-getthumblength) , descritto nel Windows SDK.

## <a name="csliderctrlgetthumbrect"></a><a name="getthumbrect"></a> CSliderCtrl:: GetThumbRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il dispositivo di scorrimento (Thumb) in un controllo dispositivo di scorrimento.

```cpp
void GetThumbRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*LPRC*<br/>
Puntatore a un `CRect` oggetto che contiene il rettangolo di delimitazione per il dispositivo di scorrimento quando la funzione restituisce.

## <a name="csliderctrlgettic"></a><a name="gettic"></a> CSliderCtrl:: Getter

Recupera la posizione di un segno di graduazione in un controllo dispositivo di scorrimento.

```
int GetTic(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di graduazione.

### <a name="return-value"></a>Valore restituito

Posizione del segno di graduazione specificato oppure-1 se *NTIC* non specifica un indice valido.

## <a name="csliderctrlgetticarray"></a><a name="getticarray"></a> CSliderCtrl:: GetTicArray

Recupera l'indirizzo della matrice contenente le posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.

```
DWORD* GetTicArray() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo della matrice contenente le posizioni dei segni di graduazione per il controllo dispositivo di scorrimento.

## <a name="csliderctrlgetticpos"></a><a name="getticpos"></a> CSliderCtrl:: GetTicPos

Recupera la posizione fisica corrente di un segno di graduazione in un controllo dispositivo di scorrimento.

```
int GetTicPos(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di graduazione.

### <a name="return-value"></a>Valore restituito

Posizione fisica, in coordinate client, del segno di graduazione specificato o-1 se *NTIC* non specifica un indice valido.

## <a name="csliderctrlgettooltips"></a><a name="gettooltips"></a> CSliderCtrl:: GetToolTips

Recupera l'handle per il controllo ToolTip assegnato al controllo dispositivo di scorrimento, se disponibile.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) o null se le descrizioni comandi non sono in uso. Se il controllo dispositivo di scorrimento non usa lo stile TBS_TOOLTIPS, il valore restituito è NULL.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TBM_GETTOOLTIPS](/windows/win32/Controls/tbm-gettooltips)del messaggio Win32, come descritto nel Windows SDK. Si noti che questa funzione membro restituisce un `CToolTipCtrl` oggetto invece di un handle a un controllo.

Per una descrizione degli stili del controllo Slider, vedere gli [stili dei controlli TrackBar](/windows/win32/Controls/trackbar-control-styles) nel Windows SDK.

## <a name="csliderctrlsetbuddy"></a><a name="setbuddy"></a> CSliderCtrl:: seBuddy

Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.

```
CWnd* SetBuddy(
    CWnd* pWndBuddy,
    BOOL fLocation = TRUE);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Puntatore a un `CWnd` oggetto che verrà impostato come Buddy del controllo dispositivo di scorrimento.

*fLocation*<br/>
Valore che specifica la posizione in cui visualizzare la finestra di Buddy. I valori validi sono i seguenti:

- TRUE l'oggetto Buddy verrà visualizzato a sinistra del controllo TrackBar se il controllo TrackBar utilizza lo stile TBS_HORZ. Se il controllo TrackBar utilizza lo stile TBS_VERT, l'oggetto Buddy viene visualizzato sopra il controllo TrackBar.

- FALSE l'oggetto Buddy verrà visualizzato a destra del controllo TrackBar se il controllo TrackBar usa lo stile TBS_HORZ. Se il controllo TrackBar utilizza lo stile TBS_VERT, l'oggetto Buddy viene visualizzato sotto il controllo TrackBar.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) assegnato in precedenza al controllo Slider in tale posizione.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TBM_SETBUDDY](/windows/win32/Controls/tbm-setbuddy)del messaggio Win32, come descritto nel Windows SDK. Si noti che questa funzione membro utilizza i puntatori agli `CWnd` oggetti, anziché gli handle di finestra sia per il valore restituito che per il parametro.

Per una descrizione degli stili del controllo Slider, vedere gli [stili dei controlli TrackBar](/windows/win32/Controls/trackbar-control-styles) nel Windows SDK.

## <a name="csliderctrlsetlinesize"></a><a name="setlinesize"></a> CSliderCtrl:: SetLineSize

Imposta la dimensione della linea per un controllo dispositivo di scorrimento.

```
int SetLineSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
Nuova dimensione della riga del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Dimensioni della riga precedente.

### <a name="remarks"></a>Commenti

Le dimensioni della riga influiscono sul modo in cui viene spostato il dispositivo di scorrimento per le notifiche TB_LINEUP e TB_LINEDOWN.

## <a name="csliderctrlsetpagesize"></a><a name="setpagesize"></a> CSliderCtrl:: sepagesize

Imposta la dimensione della pagina per un controllo dispositivo di scorrimento.

```
int SetPageSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
Nuova dimensione della pagina del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Dimensioni di pagina precedenti.

### <a name="remarks"></a>Commenti

Le dimensioni della pagina influiscono sul modo in cui viene spostato il dispositivo di scorrimento per le notifiche TB_PAGEUP e TB_PAGEDOWN.

## <a name="csliderctrlsetpos"></a><a name="setpos"></a> CSliderCtrl:: SetPos

Imposta la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```cpp
void SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la nuova posizione del dispositivo di scorrimento.

## <a name="csliderctrlsetrange"></a><a name="setrange"></a> CSliderCtrl:: SetRange

Imposta l'intervallo (posizioni minime e massime) per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```cpp
void SetRange(
    int nMin,
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima del dispositivo di scorrimento.

*nMax*<br/>
Posizione massima del dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ritraccia. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetrangemax"></a><a name="setrangemax"></a> CSliderCtrl:: SetRangeMax

Imposta l'intervallo massimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```cpp
void SetRangeMax(
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMax*<br/>
Posizione massima del dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ritraccia. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetrangemin"></a><a name="setrangemin"></a> CSliderCtrl:: SetRangeMin

Imposta l'intervallo minimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```cpp
void SetRangeMin(
    int nMin,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima del dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ritraccia. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetselection"></a><a name="setselection"></a> CSliderCtrl:: seselection

Imposta le posizioni iniziale e finale per la selezione corrente in un controllo dispositivo di scorrimento.

```cpp
void SetSelection(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione iniziale del dispositivo di scorrimento.

*nMax*<br/>
Posizione finale per il dispositivo di scorrimento.

## <a name="csliderctrlsetthumblength"></a><a name="setthumblength"></a> CSliderCtrl:: SetThumbLength

Imposta la lunghezza del dispositivo di scorrimento nel controllo TrackBar corrente.

```cpp
void SetThumbLength(int nLength);
```

### <a name="parameters"></a>Parametri

*nLength*\
in Lunghezza del dispositivo di scorrimento, in pixel.

### <a name="remarks"></a>Commenti

Questo metodo richiede che il controllo TrackBar sia impostato su [TBS_FIXEDLENGTH](/windows/win32/Controls/trackbar-control-styles) stile.

Questo metodo invia il messaggio di [TBM_SETTHUMBLENGTH](/windows/win32/Controls/tbm-setthumblength) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_sliderCtrl` , utilizzata per accedere al controllo TrackBar corrente. Nell'esempio viene inoltre definita una variabile, `thumbLength` , utilizzata per archiviare la lunghezza predefinita del componente Thumb del controllo TrackBar. Queste variabili vengono usate nell'esempio successivo.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#1](../../mfc/reference/codesnippet/cpp/csliderctrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente il componente Thumb del controllo TrackBar viene impostato su due volte la lunghezza predefinita.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#2](../../mfc/reference/codesnippet/cpp/csliderctrl-class_2.cpp)]

## <a name="csliderctrlsettic"></a><a name="settic"></a> CSliderCtrl:: SetTic

Imposta la posizione di un segno di graduazione in un controllo dispositivo di scorrimento.

```
BOOL SetTic(int nTic);
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Posizione del segno di graduazione. Questo parametro deve specificare un valore positivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il segno di graduazione è impostato; in caso contrario, 0.

## <a name="csliderctrlsetticfreq"></a><a name="setticfreq"></a> CSliderCtrl:: SetTicFreq

Imposta la frequenza con cui vengono visualizzati i segni di graduazione in un dispositivo di scorrimento.

```cpp
void SetTicFreq(int nFreq);
```

### <a name="parameters"></a>Parametri

*nFreq*<br/>
Frequenza dei segni di graduazione.

### <a name="remarks"></a>Commenti

Se, ad esempio, la frequenza è impostata su 2, viene visualizzato un segno di graduazione per ogni altro incremento nell'intervallo del dispositivo di scorrimento. L'impostazione predefinita per la frequenza è 1 (ovvero ogni incremento dell'intervallo è associato a un segno di graduazione).

Per usare questa funzione, è necessario creare il controllo con lo stile TBS_AUTOTICKS. Per ulteriori informazioni, vedere [CSliderCtrl:: create](#create).

## <a name="csliderctrlsettipside"></a><a name="settipside"></a> CSliderCtrl:: SetTipSide

Posiziona un controllo ToolTip utilizzato da un controllo TrackBar.

```
int SetTipSide(int nLocation);
```

### <a name="parameters"></a>Parametri

*nPosizione*<br/>
Valore che rappresenta la posizione in cui visualizzare il controllo ToolTip. Per un elenco di valori possibili, vedere la [TBM_SETTIPSIDE](/windows/win32/Controls/tbm-settipside)del messaggio Win32, come descritto nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore che rappresenta la posizione precedente del controllo ToolTip. Il valore restituito è uguale a uno dei valori possibili per *nPosizione*.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del TBM_SETTIPSIDE del messaggio Win32, come descritto nel Windows SDK. Dispositivi di scorrimento che usano lo stile TBS_TOOLTIPS Visualizza le descrizioni comandi. Per una descrizione degli stili del controllo Slider, vedere gli [stili dei controlli TrackBar](/windows/win32/Controls/trackbar-control-styles) nel Windows SDK.

## <a name="csliderctrlsettooltips"></a><a name="settooltips"></a> CSliderCtrl:: setooltips

Assegna un controllo ToolTip a un controllo dispositivo di scorrimento.

```cpp
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip*<br/>
Puntatore a un oggetto [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) contenente le descrizioni comandi da usare con il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TBM_SETTOOLTIPS](/windows/win32/Controls/tbm-settooltips)del messaggio Win32, come descritto nel Windows SDK. Quando viene creato un controllo dispositivo di scorrimento con lo stile TBS_TOOLTIPS, viene creato un controllo ToolTip predefinito visualizzato accanto al dispositivo di scorrimento, che visualizza la posizione corrente del dispositivo di scorrimento. Per una descrizione degli stili del controllo Slider, vedere gli [stili dei controlli TrackBar](/windows/win32/Controls/trackbar-control-styles) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CProgressCtrl](../../mfc/reference/cprogressctrl-class.md)
