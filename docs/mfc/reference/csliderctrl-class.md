---
title: CSliderCtrl (classe)
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
ms.openlocfilehash: 0179d69726f49f2df02979264da4966b35178434
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422000"
---
# <a name="csliderctrl-class"></a>CSliderCtrl (classe)

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
|[CSliderCtrl::ClearTics](#cleartics)|Rimuove i segni di graduazione corrente da un controllo dispositivo di scorrimento.|
|[CSliderCtrl::Create](#create)|Crea un controllo dispositivo di scorrimento e la collega a un `CSliderCtrl` oggetto.|
|[CSliderCtrl::CreateEx](#createex)|Crea un controllo dispositivo di scorrimento con gli stili estesi di Windows specificati e lo collega a un `CSliderCtrl` oggetto.|
|[CSliderCtrl::GetBuddy](#getbuddy)|Recupera l'handle di finestra buddy controllo dispositivo di scorrimento in una posizione specificata.|
|[CSliderCtrl::GetChannelRect](#getchannelrect)|Recupera la dimensione del canale del controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetLineSize](#getlinesize)|Recupera la dimensione di riga di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetNumTics](#getnumtics)|Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetPageSize](#getpagesize)|Recupera le dimensioni della pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetPos](#getpos)|Recupera la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl::GetRange](#getrange)|Recupera le posizioni minime e massime per un dispositivo di scorrimento.|
|[CSliderCtrl::GetRangeMax](#getrangemax)|Recupera la posizione massima di un dispositivo di scorrimento.|
|[CSliderCtrl::GetRangeMin](#getrangemin)|Recupera la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl::GetSelection](#getselection)|Recupera l'intervallo della selezione corrente.|
|[CSliderCtrl::GetThumbLength](#getthumblength)|Recupera la lunghezza del dispositivo di scorrimento nel controllo indicatore di avanzamento corrente.|
|[CSliderCtrl::GetThumbRect](#getthumbrect)|Recupera la dimensione del thumb del controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetTic](#gettic)|Recupera la posizione del segno di graduazione specificati.|
|[CSliderCtrl::GetTicArray](#getticarray)|Recupera la matrice di posizioni di contrassegno dei segni di graduazione per un controllo dispositivo di scorrimento.|
|[CSliderCtrl::GetTicPos](#getticpos)|Recupera la posizione del segno di graduazione specificati, nelle coordinate del client.|
|[CSliderCtrl::GetToolTips](#gettooltips)|Recupera l'handle per il controllo tooltip assegnato al controllo dispositivo di scorrimento, se presente.|
|[CSliderCtrl::SetBuddy](#setbuddy)|Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetLineSize](#setlinesize)|Imposta le dimensioni di riga di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetPageSize](#setpagesize)|Imposta le dimensioni della pagina di un controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetPos](#setpos)|Imposta la posizione corrente del dispositivo di scorrimento.|
|[CSliderCtrl::SetRange](#setrange)|Imposta le posizioni minime e massime per un dispositivo di scorrimento.|
|[CSliderCtrl::SetRangeMax](#setrangemax)|Imposta la posizione massima di un dispositivo di scorrimento.|
|[CSliderCtrl::SetRangeMin](#setrangemin)|Imposta la posizione minima per un dispositivo di scorrimento.|
|[CSliderCtrl::SetSelection](#setselection)|Imposta l'intervallo della selezione corrente.|
|[CSliderCtrl::SetThumbLength](#setthumblength)|Imposta la lunghezza del dispositivo di scorrimento nel controllo indicatore di avanzamento corrente.|
|[CSliderCtrl::SetTic](#settic)|Imposta la posizione del segno di graduazione specificati.|
|[CSliderCtrl::SetTicFreq](#setticfreq)|Imposta la frequenza dei segni di graduazione contrassegni per ogni incremento di controllo dispositivo di scorrimento.|
|[CSliderCtrl::SetTipSide](#settipside)|Posizioni di un controllo descrizione comando utilizzata da un controllo indicatore di avanzamento.|
|[CSliderCtrl::SetToolTips](#settooltips)|Assegna un controllo descrizione comandi a un controllo dispositivo di scorrimento.|

## <a name="remarks"></a>Note

Un "controllo dispositivo di scorrimento" (noto anche come indicatore di avanzamento) è una finestra contenente un dispositivo di scorrimento e segni di graduazione facoltativi. Quando l'utente sposta il dispositivo di scorrimento, utilizzando il mouse o i tasti di direzione, il controllo Invia messaggi di notifica per indicare la modifica.

I controlli dispositivo di scorrimento sono utili quando si desidera che l'utente selezioni un valore distinto o un set di valori consecutivi in un intervallo. È ad esempio possibile utilizzare un controllo dispositivo di scorrimento per consentire all'utente di impostare la velocità di ripetizione della tastiera spostando il dispositivo di scorrimento in corrispondenza di uno specifico segno di graduazione.

Questo controllo (e pertanto il `CSliderCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

Consente di spostare il dispositivo di scorrimento in base a incrementi specificato durante la creazione. Ad esempio, se si specifica che il dispositivo di scorrimento deve disporre di un intervallo di cinque, il dispositivo di scorrimento potrà occupare solo sei posizioni: una posizione sul lato sinistro del controllo dispositivo di scorrimento e una posizione per ogni incremento nell'intervallo. In genere, ognuna di queste posizioni è identificata da un segno di graduazione.

Si crea un dispositivo di scorrimento utilizzando il costruttore e il `Create` funzione membro di `CSliderCtrl`. Dopo aver creato un controllo dispositivo di scorrimento, è possibile usare funzioni membro in `CSliderCtrl` modificare molte delle relative proprietà. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento.

Per altre informazioni sull'uso `CSliderCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CSliderCtrl](../../mfc/using-csliderctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSliderCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="clearsel"></a>  CSliderCtrl::ClearSel

Cancella la selezione corrente in un controllo dispositivo di scorrimento.

```
void ClearSel(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Flag di visualizzazione. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo la selezione sia deselezionata. in caso contrario, il dispositivo di scorrimento non viene ridisegnata.

##  <a name="cleartics"></a>  CSliderCtrl::ClearTics

Rimuove i segni di graduazione corrente da un controllo dispositivo di scorrimento.

```
void ClearTics(BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*bRedraw*<br/>
Flag di visualizzazione. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo che i segni di graduazione vengono cancellati; in caso contrario, il dispositivo di scorrimento non viene ridisegnata.

##  <a name="create"></a>  CSliderCtrl::Create

Crea un controllo dispositivo di scorrimento e la collega a un `CSliderCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di [stili del controllo slider](/windows/desktop/Controls/trackbar-control-styles), come descritto nel SDK di Windows, al controllo.

*rect*<br/>
Specifica le dimensioni e la posizione del controllo dispositivo di scorrimento. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura.

*pParentWnd*<br/>
Specifica finestra padre del controllo dispositivo di scorrimento, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo dispositivo di scorrimento

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CSliderCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo dispositivo di scorrimento e lo collega al `CSliderCtrl` oggetto.

A seconda dei valori impostati per *dwStyle*, il controllo dispositivo di scorrimento può avere un orientamento verticale o orizzontale. Può avere i segni di graduazione su entrambi i lati, entrambi i lati, o nessuna delle due. Può anche essere utilizzato per specificare un intervallo di valori consecutivi.

Per applicare stili finestra estesi per il controllo dispositivo di scorrimento, chiamare [CreateEx](#createex) invece di `Create`.

##  <a name="createex"></a>  CSliderCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CSliderCtrl` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di [stili del controllo slider](/windows/desktop/Controls/trackbar-control-styles), come descritto nel SDK di Windows, al controllo.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

##  <a name="csliderctrl"></a>  CSliderCtrl::CSliderCtrl

Costruisce un oggetto `CSliderCtrl`.

```
CSliderCtrl();
```

##  <a name="getbuddy"></a>  CSliderCtrl::GetBuddy

Recupera l'handle di finestra buddy controllo dispositivo di scorrimento in una posizione specificata.

```
CWnd* GetBuddy(BOOL fLocation = TRUE) const;
```

### <a name="parameters"></a>Parametri

*fLocation*<br/>
Valore booleano che indica quale dei due handle di finestra buddy da recuperare. Il valore può essere uno dei seguenti:

- TRUE recupera l'handle per il controllo correlato a sinistra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento Usa lo stile TBS_VERT, il messaggio recupererà il buddy sopra il dispositivo di scorrimento.

- FALSE recupera l'handle per il controllo correlato a destra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento Usa lo stile TBS_VERT, il messaggio recupererà il buddy sotto il dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra buddy in corrispondenza della posizione specificata da *fLocation*, o NULL se non esiste alcuna finestra buddy in quella posizione.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETBUDDY](/windows/desktop/Controls/tbm-getbuddy), come descritto nel SDK di Windows. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](/windows/desktop/Controls/trackbar-control-styles) nel SDK di Windows.

##  <a name="getchannelrect"></a>  CSliderCtrl::GetChannelRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il canale di un controllo dispositivo di scorrimento.

```
void GetChannelRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Un puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le dimensioni e la posizione del canale del rettangolo di delimitazione quando la funzione restituisce.

### <a name="remarks"></a>Note

Il canale è l'area di failover che consente di spostare il dispositivo di scorrimento e che include l'evidenziazione quando viene selezionato un intervallo.

##  <a name="getlinesize"></a>  CSliderCtrl::GetLineSize

Recupera la dimensione della linea per un controllo dispositivo di scorrimento.

```
int GetLineSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni di una riga per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Note

Le dimensioni di riga influisce su quanto il dispositivo di scorrimento viene spostato per ricevere le notifiche TB_LINEUP e TB_LINEDOWN. L'impostazione predefinita per le dimensioni di riga è 1.

##  <a name="getnumtics"></a>  CSliderCtrl::GetNumTics

Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.

```
UINT GetNumTics() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di segni di graduazione del controllo dispositivo di scorrimento.

##  <a name="getpagesize"></a>  CSliderCtrl::GetPageSize

Recupera la dimensione della pagina per un controllo dispositivo di scorrimento.

```
int GetPageSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni di una pagina per il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Note

Le dimensioni della pagina influisce sulla quantità il dispositivo di scorrimento viene spostato per ricevere le notifiche TB_PAGEUP e TB_PAGEDOWN.

##  <a name="getpos"></a>  CSliderCtrl::GetPos

Recupera la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione corrente.

##  <a name="getrange"></a>  CSliderCtrl::GetRange

Recupera le posizioni minime e massime per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void GetRange(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un integer che riceve la minima posizione.

*nMax*<br/>
Riferimento a un integer che riceve la posizione massima.

### <a name="remarks"></a>Note

Questa funzione copia i valori nei numeri interi fa *nMin* e *nMax*.

##  <a name="getrangemax"></a>  CSliderCtrl::GetRangeMax

Recupera la posizione massima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Posizione massima del controllo.

##  <a name="getrangemin"></a>  CSliderCtrl::GetRangeMin

Recupera la posizione minima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Posizione minima del controllo.

##  <a name="getselection"></a>  CSliderCtrl::GetSelection

Recupera le posizioni iniziale e finale della selezione corrente in un controllo dispositivo di scorrimento.

```
void GetSelection(
    int& nMin,
    int& nMax) const;
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Riferimento a un integer che riceve la posizione iniziale della selezione corrente.

*nMax*<br/>
Riferimento a un integer che riceve la posizione finale della selezione corrente.

##  <a name="getthumblength"></a>  CSliderCtrl::GetThumbLength

Recupera la lunghezza del dispositivo di scorrimento nel controllo indicatore di avanzamento corrente.

```
int GetThumbLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza del dispositivo di scorrimento, in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [TBM_GETTHUMBLENGTH](/windows/desktop/Controls/tbm-getthumblength) messaggio, che è descritti nel SDK di Windows.

##  <a name="getthumbrect"></a>  CSliderCtrl::GetThumbRect

Recupera le dimensioni e la posizione del rettangolo di delimitazione per il dispositivo di scorrimento (casella) in un controllo dispositivo di scorrimento.

```
void GetThumbRect(LPRECT lprc) const;
```

### <a name="parameters"></a>Parametri

*lprc*<br/>
Un puntatore a un `CRect` oggetto che contiene il rettangolo di delimitazione per il dispositivo di scorrimento quando la funzione restituisce.

##  <a name="gettic"></a>  CSliderCtrl::GetTic

Recupera la posizione di un segno di spunta in un controllo dispositivo di scorrimento.

```
int GetTic(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di spunta.

### <a name="return-value"></a>Valore restituito

La posizione di graduazione specificato oppure - 1 se *nTic* non specifica un indice valido.

##  <a name="getticarray"></a>  CSliderCtrl::GetTicArray

Recupera l'indirizzo della matrice che contiene le posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.

```
DWORD* GetTicArray() const;
```

### <a name="return-value"></a>Valore restituito

L'indirizzo della matrice che contiene le posizioni degli indicatori dei segni di graduazione per il controllo dispositivo di scorrimento.

##  <a name="getticpos"></a>  CSliderCtrl::GetTicPos

Recupera la posizione fisica corrente di un segno di spunta in un controllo dispositivo di scorrimento.

```
int GetTicPos(int nTic) const;
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Indice in base zero che identifica un segno di spunta.

### <a name="return-value"></a>Valore restituito

La posizione fisica, nelle coordinate client, di graduazione specificato oppure - 1 se *nTic* non specifica un indice valido.

##  <a name="gettooltips"></a>  CSliderCtrl::GetToolTips

Recupera l'handle per il controllo tooltip assegnato al controllo dispositivo di scorrimento, se presente.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) dell'oggetto, o NULL se le descrizioni comandi non sono in uso. Se il controllo dispositivo di scorrimento non utilizza lo stile TBS_TOOLTIPS, il valore restituito è NULL.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETTOOLTIPS](/windows/desktop/Controls/tbm-gettooltips), come descritto nel SDK di Windows. Si noti che questa funzione membro restituisce un `CToolTipCtrl` oggetto anziché un handle a un controllo.

Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](/windows/desktop/Controls/trackbar-control-styles) nel SDK di Windows.

##  <a name="setbuddy"></a>  CSliderCtrl::SetBuddy

Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.

```
CWnd* SetBuddy(
    CWnd* pWndBuddy,
    BOOL fLocation = TRUE);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Un puntatore a un `CWnd` oggetto che verrà impostato come contatto del controllo dispositivo di scorrimento.

*fLocation*<br/>
Valore che specifica la posizione in cui si desidera visualizzare la finestra buddy. Questo valore può essere uno dei seguenti:

- TRUE il contatto verrà visualizzato a sinistra del controllo trackbar se il controllo trackbar utilizza lo stile di stili TBS_HORZ. Se l'indicatore di avanzamento viene utilizzato lo stile TBS_VERT, il contatto viene visualizzato sopra il controllo trackbar.

- FALSE il contatto verrà visualizzato a destra del controllo trackbar se il controllo trackbar utilizza lo stile di stili TBS_HORZ. Se l'indicatore di avanzamento viene utilizzato lo stile TBS_VERT, il contatto viene visualizzato sotto il controllo trackbar.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto assegnato al controllo dispositivo di scorrimento nel percorso specificato in precedenza.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETBUDDY](/windows/desktop/Controls/tbm-setbuddy), come descritto nel SDK di Windows. Si noti che questa funzione membro Usa puntatori a `CWnd` oggetti anziché gli handle di finestra per il valore restituito e parametro.

Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](/windows/desktop/Controls/trackbar-control-styles) nel SDK di Windows.

##  <a name="setlinesize"></a>  CSliderCtrl::SetLineSize

Imposta le dimensioni della linea per un controllo dispositivo di scorrimento.

```
int SetLineSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
La nuova dimensione di riga del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Le dimensioni di riga precedente.

### <a name="remarks"></a>Note

Le dimensioni di riga influisce su quanto il dispositivo di scorrimento viene spostato per ricevere le notifiche TB_LINEUP e TB_LINEDOWN.

##  <a name="setpagesize"></a>  CSliderCtrl::SetPageSize

Imposta le dimensioni della pagina per un controllo dispositivo di scorrimento.

```
int SetPageSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
Le nuove dimensioni di pagina del controllo dispositivo di scorrimento.

### <a name="return-value"></a>Valore restituito

Le dimensioni della pagina precedente.

### <a name="remarks"></a>Note

Le dimensioni della pagina influisce sulla quantità il dispositivo di scorrimento viene spostato per ricevere le notifiche TB_PAGEUP e TB_PAGEDOWN.

##  <a name="setpos"></a>  CSliderCtrl::SetPos

Imposta la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la nuova posizione di scorrimento.

##  <a name="setrange"></a>  CSliderCtrl::SetRange

Imposta l'intervallo (posizioni minima e massima) per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void SetRange(
    int nMin,
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima per il dispositivo di scorrimento.

*nMax*<br/>
Posizione massima per il dispositivo di scorrimento.

*bRedraw*<br/>
Il flag di aggiornamento dello schermo. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnata.

##  <a name="setrangemax"></a>  CSliderCtrl::SetRangeMax

Imposta l'intervallo massimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void SetRangeMax(
    int nMax,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMax*<br/>
Posizione massima per il dispositivo di scorrimento.

*bRedraw*<br/>
Il flag di aggiornamento dello schermo. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnata.

##  <a name="setrangemin"></a>  CSliderCtrl::SetRangeMin

Imposta l'intervallo minimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.

```
void SetRangeMin(
    int nMin,
    BOOL bRedraw = FALSE);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione minima per il dispositivo di scorrimento.

*bRedraw*<br/>
Il flag di aggiornamento dello schermo. Se questo parametro è TRUE, il dispositivo di scorrimento viene ridisegnato dopo l'impostazione dell'intervallo; in caso contrario, il dispositivo di scorrimento non viene ridisegnata.

##  <a name="setselection"></a>  CSliderCtrl::SetSelection

Imposta le posizioni iniziale e finale per la selezione corrente in un controllo dispositivo di scorrimento.

```
void SetSelection(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Posizione iniziale per il dispositivo di scorrimento.

*nMax*<br/>
Posizione finale per il dispositivo di scorrimento.

##  <a name="setthumblength"></a>  CSliderCtrl::SetThumbLength

Imposta la lunghezza del dispositivo di scorrimento nel controllo indicatore di avanzamento corrente.

```
void SetThumbLength(int nLength);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nLength*|[in] Lunghezza del dispositivo di scorrimento, in pixel.|

### <a name="remarks"></a>Note

Questo metodo richiede che il controllo trackbar sia impostata su [TBS_FIXEDLENGTH](/windows/desktop/Controls/trackbar-control-styles) stile.

Questo metodo invia il [TBM_SETTHUMBLENGTH](/windows/desktop/Controls/tbm-setthumblength) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_sliderCtrl`, che viene usato per accedere al controllo indicatore di avanzamento corrente. L'esempio definisce anche una variabile, `thumbLength`, che viene usato per archiviare la lunghezza predefinita del componente casella di scorrimento del controllo indicatore di avanzamento. Queste variabili vengono usate nell'esempio seguente.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#1](../../mfc/reference/codesnippet/cpp/csliderctrl-class_1.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta il componente di cursore del controllo indicatore di avanzamento a due volte la lunghezza predefinita.

[!code-cpp[NVC_MFC_CSliderCtrl_s1#2](../../mfc/reference/codesnippet/cpp/csliderctrl-class_2.cpp)]

##  <a name="settic"></a>  CSliderCtrl::SetTic

Imposta la posizione di un segno di spunta in un controllo dispositivo di scorrimento.

```
BOOL SetTic(int nTic);
```

### <a name="parameters"></a>Parametri

*nTic*<br/>
Posizione del segno di graduazione. Questo parametro è necessario specificare un valore positivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è impostato il segno di spunta; in caso contrario 0.

##  <a name="setticfreq"></a>  CSliderCtrl::SetTicFreq

Imposta la frequenza con cui segni di graduazione vengono visualizzati contrassegni in un dispositivo di scorrimento.

```
void SetTicFreq(int nFreq);
```

### <a name="parameters"></a>Parametri

*nFreq*<br/>
Frequenza dei segni di graduazione.

### <a name="remarks"></a>Note

Ad esempio, se la frequenza è impostata su 2, viene visualizzato un segno di spunta per ogni altro incremento nell'intervallo del dispositivo di scorrimento. L'impostazione predefinita per la frequenza è 1 (vale a dire, ogni incremento nell'intervallo è associato a un segno di spunta).

È necessario creare il controllo con lo stile TBS_AUTOTICKS per utilizzare questa funzione. Per altre informazioni, vedere [CSliderCtrl::Create](#create).

##  <a name="settipside"></a>  CSliderCtrl::SetTipSide

Posizioni di un controllo descrizione comando utilizzata da un controllo indicatore di avanzamento.

```
int SetTipSide(int nLocation);
```

### <a name="parameters"></a>Parametri

*nLocation*<br/>
Valore che rappresenta la posizione in cui visualizzare il controllo tooltip. Per un elenco di valori possibili, vedere il messaggio Win32 [TBM_SETTIPSIDE](/windows/desktop/Controls/tbm-settipside), come descritto nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un valore che rappresenta la posizione precedente del controllo tooltip. Il valore restituito è uguale a uno dei valori possibili per *Nposizione*.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 TBM_SETTIPSIDE, come descritto nel SDK di Windows. I controlli dispositivo di scorrimento che usano lo stile TBS_TOOLTIPS visualizzano descrizioni comandi. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](/windows/desktop/Controls/trackbar-control-styles) nel SDK di Windows.

##  <a name="settooltips"></a>  CSliderCtrl::SetToolTips

Assegna un controllo descrizione comandi a un controllo dispositivo di scorrimento.

```
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip*<br/>
Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto che contiene le descrizioni comandi da usare con il controllo dispositivo di scorrimento.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETTOOLTIPS](/windows/desktop/Controls/tbm-settooltips), come descritto nel SDK di Windows. Quando un dispositivo di scorrimento viene creato con lo stile TBS_TOOLTIPS, viene creato un controllo di descrizione comando predefinita visualizzata accanto al dispositivo di scorrimento, la visualizzazione di posizione corrente del dispositivo di scorrimento. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](/windows/desktop/Controls/trackbar-control-styles) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CProgressCtrl](../../mfc/reference/cprogressctrl-class.md)
