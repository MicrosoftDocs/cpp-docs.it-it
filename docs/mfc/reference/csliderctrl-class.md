---
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
ms.openlocfilehash: 24e1cb18f979d1144f15cf6ffedc6cace5f5361e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318219"
---
# <a name="csliderctrl-class"></a>Classe CSliderCtrl

Fornisce la funzionalità del controllo dispositivo di scorrimento comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CSliderCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSliderCtrl::CSliderCtrl](#csliderctrl)|Costruisce un oggetto `CSliderCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSliderCtrl::ClearSel](#clearsel)|Cancella la selezione corrente in un controllo dispositivo di scorrimento.|
|[CSliderCtrl::ClearTics](#cleartics)|Rimuove i segni di graduazione correnti da un controllo dispositivo di scorrimento.|
|[CSliderCtrl::Creare](#create)|Crea un controllo dispositivo di scorrimento `CSliderCtrl` e lo associa a un oggetto.|
|[CSliderCtrl::CreateEx](#createex)|Crea un controllo dispositivo di scorrimento con gli stili `CSliderCtrl` estesi di Windows specificati e lo associa a un oggetto.|
|[CSliderCtrl::GetBuddy](#getbuddy)|Recupera l'handle a una finestra buddy di controllo dispositivo di scorrimento in una posizione specificata.|
|[CSliderCtrl::GetChannelRect](#getchannelrect)|Recupera le dimensioni del canale del dispositivo di scorrimento.|
|[CSliderCtrl::GetLineSize](#getlinesize)|Recupera le dimensioni della linea di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetNumTics](#getnumtics)|Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetPageSize](#getpagesize)|Recupera le dimensioni della pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetPos](#getpos)|Recupera la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl::GetRange](#getrange)|Recupera le posizioni minima e massima per un dispositivo di scorrimento.|
|[CSliderCtrl::GetRangeMax](#getrangemax)|Recupera la posizione massima per un dispositivo di scorrimento.|
|[CSliderCtrl::GetRangeMin](#getrangemin)|Recupera la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl::GetSelection](#getselection)|Recupera l'intervallo della selezione corrente.|
|[CSliderCtrl::GetThumbLength](#getthumblength)|Recupera la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|
|[CSliderCtrl::GetThumbRect](#getthumbrect)|Recupera le dimensioni della casella di scorrimento del dispositivo di scorrimento.|
|[CSliderCtrl::GetTic](#gettic)|Recupera la posizione del segno di graduazione specificato.|
|[CSliderCtrl::GetTicArray](#getticarray)|Recupera la matrice di posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetTicPos](#getticpos)|Recupera la posizione del segno di graduazione specificato, nelle coordinate client.|
|[CSliderCtrl::GetToolTips](#gettooltips)|Recupera l'handle per il controllo descrizione comandi assegnato al controllo dispositivo di scorrimento, se presente.|
|[CSliderCtrl::SetBuddy](#setbuddy)|Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetLineSize](#setlinesize)|Imposta la dimensione della linea di un dispositivo di scorrimento.|
|[CSliderCtrl::SetPageSize](#setpagesize)|Imposta le dimensioni della pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetPos](#setpos)|Imposta la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl::SetRange](#setrange)|Imposta le posizioni minima e massima per un dispositivo di scorrimento.|
|[CSliderCtrl::SetRangeMax](#setrangemax)|Imposta la posizione massima per un dispositivo di scorrimento.|
|[CSliderCtrl::SetRangeMin](#setrangemin)|Imposta la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl::SetSelection](#setselection)|Imposta l'intervallo della selezione corrente.|
|[CSliderCtrl::SetThumbLength](#setthumblength)|Imposta la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|
|[CSliderCtrl::SetTic](#settic)|Imposta la posizione del segno di graduazione specificato.|
|[CSliderCtrl::SetTicFreq](#setticfreq)|Imposta la frequenza dei segni di graduazione per incremento del controllo del dispositivo di scorrimento.|
|[CSliderCtrl::SetTipSide](#settipside)|Posiziona un controllo descrizione comando utilizzato da un controllo trackbar.|
|[CSliderCtrl::SetToolTips](#settooltips)|Assegna un controllo descrizione comando a un controllo dispositivo di scorrimento.|

## <a name="remarks"></a>Osservazioni

Un "controllo scorre", noto anche come trackbar, è una finestra contenente un dispositivo di scorrimento e segni di graduazione facoltativi. Quando l'utente sposta il dispositivo di scorrimento, utilizzando il mouse o i tasti di direzione, il controllo invia messaggi di notifica per indicare la modifica.

I controlli dispositivo di scorrimento sono utili quando si desidera che l'utente selezioni un valore distinto o un set di valori consecutivi in un intervallo. È ad esempio possibile utilizzare un controllo dispositivo di scorrimento per consentire all'utente di impostare la velocità di ripetizione della tastiera spostando il dispositivo di scorrimento in corrispondenza di uno specifico segno di graduazione.

Questo controllo (e `CSliderCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Il dispositivo di scorrimento si sposta in incrementi specificati al momento della creazione. Ad esempio, se si specifica che il dispositivo di scorrimento deve avere un intervallo di cinque, il dispositivo di scorrimento può occupare solo sei posizioni: una posizione sul lato sinistro del dispositivo di scorrimento e una posizione per ogni incremento nell'intervallo. In genere, ognuna di queste posizioni è identificata da un segno di graduazione.

Per creare un dispositivo di `Create` scorrimento, `CSliderCtrl`utilizzare il costruttore e la funzione membro di . Dopo aver creato un controllo dispositivo di `CSliderCtrl` scorrimento, è possibile utilizzare le funzioni membro in per modificare molte delle relative proprietà. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento.

Per ulteriori informazioni `CSliderCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzo di CSliderCtrl](../../mfc/using-csliderctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSliderCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="csliderctrlclearsel"></a><a name="clearsel"></a>CSliderCtrl::ClearSel

Cancella la selezione corrente in un controllo dispositivo di scorrimento.

```
void ClearSel(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Bandiera di ridisegno. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo la selezione viene cancellata; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlcleartics"></a><a name="cleartics"></a>CSliderCtrl::ClearTics

Rimuove i segni di graduazione correnti da un controllo dispositivo di scorrimento.

```
void ClearTics(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Bandiera di ridisegno. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo la cancellazione dei segni di graduazione; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlcreate"></a><a name="create"></a>CSliderCtrl::Creare

Crea un controllo dispositivo di scorrimento `CSliderCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di stili di [controllo dispositivo](/windows/win32/Controls/trackbar-control-styles)di scorrimento , descritta in Windows SDK, al controllo.

*Rect*<br/>
Specifica le dimensioni e la posizione del dispositivo di scorrimento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo `CDialog`dispositivo di scorrimento, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CSliderCtrl` in due passi. Chiamare innanzitutto il costruttore `Create`, quindi chiamare , che crea `CSliderCtrl` il dispositivo di scorrimento e lo associa all'oggetto .

A seconda dei valori impostati per *dwStyle*, il controllo dispositivo di scorrimento può avere un orientamento verticale o orizzontale. Può avere segni di graduazione su entrambi i lati, entrambi i lati o nessuno dei due. Può essere utilizzato anche per specificare un intervallo di valori consecutivi.

Per applicare gli stili di finestra estesi al `Create`controllo dispositivo di scorrimento, chiamare [CreateEx](#createex) anziché .

## <a name="csliderctrlcreateex"></a><a name="createex"></a>CSliderCtrl::CreateEx

Crea un controllo (una finestra figlio) `CSliderCtrl` e lo associa all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di stili di [controllo dispositivo](/windows/win32/Controls/trackbar-control-styles)di scorrimento , descritta in Windows SDK, al controllo.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="csliderctrlcsliderctrl"></a><a name="csliderctrl"></a>CSliderCtrl::CSliderCtrl

Costruisce un oggetto `CSliderCtrl`.

```
CSliderCtrl();
```

## <a name="csliderctrlgetbuddy"></a><a name="getbuddy"></a>CSliderCtrl::GetBuddy

Recupera l'handle a una finestra buddy di controllo dispositivo di scorrimento in una posizione specificata.

```
CWnd* GetBuddy(BOOL fLocation = TRUE) const;
```

### <a name="parameters"></a>Parametri

*fLocation*<br/>
Valore booleano che indica quale dei due handle della finestra buddy eseguire il recupero. I possibili valori sono i seguenti:

- TRUE Recupera l'handle per l'amico a sinistra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza lo stile di TBS_VERT, il messaggio recupererà l'amico sopra il dispositivo di scorrimento.

- FALSE Recupera l'handle per l'amico a destra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza lo stile di TBS_VERT, il messaggio recupererà l'amico sotto il dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che è la finestra buddy nella posizione specificata da *fLocation*o NULL se in tale posizione non esiste alcuna finestra buddy.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETBUDDY](/windows/win32/Controls/tbm-getbuddy), come descritto in Windows SDK. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [Stili di controllo Trackbar](/windows/win32/Controls/trackbar-control-styles) in Windows SDK.

## <a name="csliderctrlgetchannelrect"></a><a name="getchannelrect"></a>CSliderCtrl::GetChannelRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il canale di un controllo dispositivo di scorrimento.

```
void GetChannelRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le dimensioni e la posizione del rettangolo di delimitazione del canale quando la funzione restituisce.

### <a name="remarks"></a>Osservazioni

Il canale è l'area su cui si sposta il dispositivo di scorrimento e che contiene l'evidenziazione quando viene selezionato un intervallo.

## <a name="csliderctrlgetlinesize"></a><a name="getlinesize"></a>CSliderCtrl::GetLineSize

Recupera le dimensioni della linea per un controllo dispositivo di scorrimento.

```
int GetLineSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni di una linea per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Osservazioni

La dimensione della linea influisce sulla quantità di spostamento del dispositivo di scorrimento per le notifiche di TB_LINEUP e TB_LINEDOWN. L'impostazione predefinita per la dimensione della linea è 1.

## <a name="csliderctrlgetnumtics"></a><a name="getnumtics"></a>CSliderCtrl::GetNumTics

Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.

```
UINT GetNumTics() const;
```

### <a name="return-value"></a>Valore restituito

Numero di segni di graduazione nel controllo dispositivo di scorrimento.

## <a name="csliderctrlgetpagesize"></a><a name="getpagesize"></a>CSliderCtrl::GetPageSize

Recupera le dimensioni della pagina per un controllo dispositivo di scorrimento.

```
int GetPageSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni di una pagina per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Osservazioni

Le dimensioni della pagina influiscono sul tempo di spostamento del dispositivo di scorrimento per il TB_PAGEUP e TB_PAGEDOWN le notifiche.

## <a name="csliderctrlgetpos"></a><a name="getpos"></a>CSliderCtrl::GetPos

Recupera la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione corrente.

## <a name="csliderctrlgetrange"></a><a name="getrange"></a>CSliderCtrl::GetRange

Recupera le posizioni massima e minima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void GetRange(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un numero intero che riceve la posizione minima.

*Nmax*<br/>
Riferimento a un numero intero che riceve la posizione massima.

### <a name="remarks"></a>Osservazioni

Questa funzione copia i valori negli interi a cui fanno riferimento *nMin* e *nMax*.

## <a name="csliderctrlgetrangemax"></a><a name="getrangemax"></a>CSliderCtrl::GetRangeMax

Recupera la posizione massima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Posizione massima del controllo.

## <a name="csliderctrlgetrangemin"></a><a name="getrangemin"></a>CSliderCtrl::GetRangeMin

Recupera la posizione minima per il dispositivo di scorrimento in un dispositivo di scorrimento.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Posizione minima del controllo.

## <a name="csliderctrlgetselection"></a><a name="getselection"></a>CSliderCtrl::GetSelection

Recupera le posizioni iniziale e finale della selezione corrente in un controllo dispositivo di scorrimento.

```
void GetSelection(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un numero intero che riceve la posizione iniziale della selezione corrente.

*Nmax*<br/>
Riferimento a un numero intero che riceve la posizione finale della selezione corrente.

## <a name="csliderctrlgetthumblength"></a><a name="getthumblength"></a>CSliderCtrl::GetThumbLength

Recupera la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.

```
int GetThumbLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del dispositivo di scorrimento, in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio TBM_GETTHUMBLENGTH,](/windows/win32/Controls/tbm-getthumblength) descritto in Windows SDK.

## <a name="csliderctrlgetthumbrect"></a><a name="getthumbrect"></a>CSliderCtrl::GetThumbRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il dispositivo di scorrimento (pollice) in un controllo dispositivo di scorrimento.

```
void GetThumbRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Puntatore a `CRect` un oggetto che contiene il rettangolo di delimitazione per il dispositivo di scorrimento quando la funzione restituisce .

## <a name="csliderctrlgettic"></a><a name="gettic"></a>CSliderCtrl::GetTic

Recupera la posizione di un segno di graduazione in un controllo dispositivo di scorrimento.

```
int GetTic(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di graduazione.

### <a name="return-value"></a>Valore restituito

La posizione del segno di graduazione specificato o - 1 se *nTic* non specifica un indice valido.

## <a name="csliderctrlgetticarray"></a><a name="getticarray"></a>CSliderCtrl::GetTicArray

Recupera l'indirizzo della matrice contenente le posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.

```
DWORD* GetTicArray() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo della matrice contenente le posizioni dei segni di graduazione per il dispositivo di scorrimento.

## <a name="csliderctrlgetticpos"></a><a name="getticpos"></a>CSliderCtrl::GetTicPos

Recupera la posizione fisica corrente di un segno di graduazione in un controllo dispositivo di scorrimento.

```
int GetTicPos(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di graduazione.

### <a name="return-value"></a>Valore restituito

La posizione fisica, in coordinate client, del segno di graduazione specificato o - 1 se *nTic* non specifica un indice valido.

## <a name="csliderctrlgettooltips"></a><a name="gettooltips"></a>CSliderCtrl::GetToolTips

Recupera l'handle per il controllo descrizione comandi assegnato al controllo dispositivo di scorrimento, se presente.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto o NULL se le descrizioni comandi non sono in uso. Se il controllo dispositivo di scorrimento non utilizza lo stile di TBS_TOOLTIPS, il valore restituito è NULL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETTOOLTIPS](/windows/win32/Controls/tbm-gettooltips), come descritto in Windows SDK. Si noti che `CToolTipCtrl` questa funzione membro restituisce un oggetto anziché un handle per un controllo.

Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [Stili di controllo Trackbar](/windows/win32/Controls/trackbar-control-styles) in Windows SDK.

## <a name="csliderctrlsetbuddy"></a><a name="setbuddy"></a>CSliderCtrl::SetBuddy

Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.

```
CWnd* SetBuddy(
    CWnd* pWndBuddy,
    BOOL fLocation = TRUE);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Puntatore a `CWnd` un oggetto che verrà impostato come amico del controllo dispositivo di scorrimento.

*fLocation*<br/>
Valore che specifica la posizione in cui visualizzare la finestra buddy. I valori validi sono i seguenti:

- TRUE L'amico apparirà a sinistra della trackbar se il controllo trackbar utilizza lo stile TBS_HORZ. Se il trackbar utilizza lo stile TBS_VERT, l'amico viene visualizzato sopra il controllo trackbar.

- FALSE L'amico apparirà a destra della trackbar se il controllo trackbar utilizza lo stile TBS_HORZ. Se la trackbar utilizza lo stile TBS_VERT, l'amico viene visualizzato sotto il controllo trackbar.

### <a name="return-value"></a>Valore restituito

Puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è stato precedentemente assegnato al controllo dispositivo di scorrimento in tale posizione.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETBUDDY](/windows/win32/Controls/tbm-setbuddy), come descritto in Windows SDK. Si noti che questa `CWnd` funzione membro utilizza puntatori a oggetti, anziché handle di finestra per il valore restituito e il parametro.

Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [Stili di controllo Trackbar](/windows/win32/Controls/trackbar-control-styles) in Windows SDK.

## <a name="csliderctrlsetlinesize"></a><a name="setlinesize"></a>CSliderCtrl::SetLineSize

Imposta le dimensioni della linea per un dispositivo di scorrimento.

```
int SetLineSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
Nuova dimensione della linea del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Dimensione della riga precedente.

### <a name="remarks"></a>Osservazioni

La dimensione della linea influisce sulla quantità di spostamento del dispositivo di scorrimento per le notifiche di TB_LINEUP e TB_LINEDOWN.

## <a name="csliderctrlsetpagesize"></a><a name="setpagesize"></a>CSliderCtrl::SetPageSize

Imposta le dimensioni della pagina per un controllo dispositivo di scorrimento.

```
int SetPageSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
Nuova dimensione della pagina del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Dimensioni della pagina precedente.

### <a name="remarks"></a>Osservazioni

Le dimensioni della pagina influiscono sul tempo di spostamento del dispositivo di scorrimento per il TB_PAGEUP e TB_PAGEDOWN le notifiche.

## <a name="csliderctrlsetpos"></a><a name="setpos"></a>CSliderCtrl::SetPos

Imposta la posizione corrente del dispositivo di scorrimento in un dispositivo di scorrimento.

```
void SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica la nuova posizione del cursore.

## <a name="csliderctrlsetrange"></a><a name="setrange"></a>CSliderCtrl::SetRange

Imposta l'intervallo (posizioni minima e massima) per il dispositivo di scorrimento in un dispositivo di scorrimento.

```
void SetRange(
    int nMin,
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima per il dispositivo di scorrimento.

*Nmax*<br/>
Posizione massima per il dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ridisegno. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetrangemax"></a><a name="setrangemax"></a>CSliderCtrl::SetRangeMax

Imposta l'intervallo massimo per il dispositivo di scorrimento in un dispositivo di scorrimento.

```
void SetRangeMax(
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*Nmax*<br/>
Posizione massima per il dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ridisegno. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetrangemin"></a><a name="setrangemin"></a>CSliderCtrl::SetRangeMin

Imposta l'intervallo minimo per il dispositivo di scorrimento in un dispositivo di scorrimento.

```
void SetRangeMin(
    int nMin,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima per il dispositivo di scorrimento.

*bRedraw*<br/>
Flag di ridisegno. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnato.

## <a name="csliderctrlsetselection"></a><a name="setselection"></a>CSliderCtrl::SetSelection

Imposta le posizioni iniziale e finale per la selezione corrente in un dispositivo di scorrimento.

```
void SetSelection(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione iniziale per il dispositivo di scorrimento.

*Nmax*<br/>
Posizione finale per il dispositivo di scorrimento.

## <a name="csliderctrlsetthumblength"></a><a name="setthumblength"></a>CSliderCtrl::SetThumbLength

Imposta la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.

```
void SetThumbLength(int nLength);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nLunghezza*|[in] Lunghezza del dispositivo di scorrimento, in pixel.|

### <a name="remarks"></a>Osservazioni

Questo metodo richiede che il controllo trackbar sia impostato sullo stile [TBS_FIXEDLENGTH.](/windows/win32/Controls/trackbar-control-styles)

Questo metodo invia il [messaggio TBM_SETTHUMBLENGTH,](/windows/win32/Controls/tbm-setthumblength) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_sliderCtrl`, utilizzata per accedere al controllo trackbar corrente. Nell'esempio viene inoltre `thumbLength`definita una variabile, , utilizzata per archiviare la lunghezza predefinita del componente thumb del controllo trackbar. Queste variabili vengono utilizzate nell'esempio successivo.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#1](../../mfc/reference/codesnippet/cpp/csliderctrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato come impostare il componente thumb del controllo trackbar su una lunghezza doppia per il valore predefinito.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#2](../../mfc/reference/codesnippet/cpp/csliderctrl-class_2.cpp)]

## <a name="csliderctrlsettic"></a><a name="settic"></a>CSliderCtrl::SetTic

Imposta la posizione di un segno di graduazione in un dispositivo di scorrimento.

```
BOOL SetTic(int nTic);
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Posizione del segno di graduazione. Questo parametro deve specificare un valore positivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il segno di graduazione è impostato; in caso contrario 0.

## <a name="csliderctrlsetticfreq"></a><a name="setticfreq"></a>CSliderCtrl::SetTicFreq

Imposta la frequenza con cui i segni di graduazione vengono visualizzati in un dispositivo di scorrimento.

```
void SetTicFreq(int nFreq);
```

### <a name="parameters"></a>Parametri

*nFreq (in modo infuso)*<br/>
Frequenza dei segni di graduazione.

### <a name="remarks"></a>Osservazioni

Ad esempio, se la frequenza è impostata su 2, viene visualizzato un segno di graduazione per ogni altro incremento nell'intervallo del dispositivo di scorrimento. L'impostazione predefinita per la frequenza è 1 (ovvero, ogni incremento nell'intervallo è associato a un segno di graduazione).

Per utilizzare questa funzione, è necessario creare il controllo con lo stile TBS_AUTOTICKS. Per ulteriori informazioni, vedere [CSliderCtrl::Create](#create).

## <a name="csliderctrlsettipside"></a><a name="settipside"></a>CSliderCtrl::SetTipSide

Posiziona un controllo descrizione comando utilizzato da un controllo trackbar.

```
int SetTipSide(int nLocation);
```

### <a name="parameters"></a>Parametri

*nPosizione*<br/>
Valore che rappresenta la posizione in cui visualizzare il controllo descrizione comandi. Per un elenco dei valori possibili, vedere il messaggio Win32 [TBM_SETTIPSIDE](/windows/win32/Controls/tbm-settipside), come descritto in Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore che rappresenta la posizione precedente del controllo descrizione comandi. Il valore restituito è uguale a uno dei valori possibili per *nLocation*.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 TBM_SETTIPSIDE, come descritto in Windows SDK. I controlli Slider che utilizzano le descrizioni comandi di visualizzazione dello stile TBS_TOOLTIPS. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [Stili di controllo Trackbar](/windows/win32/Controls/trackbar-control-styles) in Windows SDK.

## <a name="csliderctrlsettooltips"></a><a name="settooltips"></a>CSliderCtrl::SetToolTips

Assegna un controllo descrizione comando a un controllo dispositivo di scorrimento.

```
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip (suggerimento)*<br/>
Puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto contenente le descrizioni comandi da utilizzare con il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETTOOLTIPS](/windows/win32/Controls/tbm-settooltips), come descritto in Windows SDK. Quando un controllo dispositivo di scorrimento viene creato con lo stile TBS_TOOLTIPS, crea un controllo descrizione comando predefinito che viene visualizzato accanto al dispositivo di scorrimento, visualizzando la posizione corrente del dispositivo di scorrimento. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [Stili di controllo Trackbar](/windows/win32/Controls/trackbar-control-styles) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CProgressCtrl](../../mfc/reference/cprogressctrl-class.md)
