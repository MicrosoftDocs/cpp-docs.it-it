---
title: CCheckListBox (classe)
ms.date: 11/04/2016
f1_keywords:
- CCheckListBox
- AFXWIN/CCheckListBox
- AFXWIN/CCheckListBox::CCheckListBox
- AFXWIN/CCheckListBox::Create
- AFXWIN/CCheckListBox::DrawItem
- AFXWIN/CCheckListBox::Enable
- AFXWIN/CCheckListBox::GetCheck
- AFXWIN/CCheckListBox::GetCheckStyle
- AFXWIN/CCheckListBox::IsEnabled
- AFXWIN/CCheckListBox::MeasureItem
- AFXWIN/CCheckListBox::OnGetCheckPosition
- AFXWIN/CCheckListBox::SetCheck
- AFXWIN/CCheckListBox::SetCheckStyle
helpviewer_keywords:
- CCheckListBox [MFC], CCheckListBox
- CCheckListBox [MFC], Create
- CCheckListBox [MFC], DrawItem
- CCheckListBox [MFC], Enable
- CCheckListBox [MFC], GetCheck
- CCheckListBox [MFC], GetCheckStyle
- CCheckListBox [MFC], IsEnabled
- CCheckListBox [MFC], MeasureItem
- CCheckListBox [MFC], OnGetCheckPosition
- CCheckListBox [MFC], SetCheck
- CCheckListBox [MFC], SetCheckStyle
ms.assetid: 1dd78438-00e8-441c-b36f-9c4f9ac0d019
ms.openlocfilehash: dc0e80e80d61104a4d8cb5f1cfd4e26a64c42249
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752736"
---
# <a name="cchecklistbox-class"></a>CCheckListBox (classe)

Fornisce la funzionalità di una casella elenco di controllo di Windows.

## <a name="syntax"></a>Sintassi

```
class CCheckListBox : public CListBox
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCheckListBox::CCheckListBox](#cchecklistbox)|Costruisce un oggetto `CCheckListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCheckListBox::Creare](#create)|Crea la casella di controllo di `CCheckListBox` Windows e la associa all'oggetto.|
|[CCheckListBox::DrawItem](#drawitem)|Chiamato dal framework quando viene modificato un aspetto visivo di una casella di riepilogo disegnata dal proprietario.|
|[CCheckListBox::Abilitare](#enable)|Abilita o disabilita un elemento della casella dell'elenco di controllo.|
|[CCheckListBox::GetCheck](#getcheck)|Ottiene lo stato della casella di controllo di un elemento.|
|[CCheckListBox::GetCheckStyle](#getcheckstyle)|Ottiene lo stile delle caselle di controllo del controllo.|
|[CCheckListBox::IsEnabled](#isenabled)|Determina se un elemento è abilitato.|
|[CCheckListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno del proprietario.|
|[CCheckListBox::OnGetCheckPosition](#ongetcheckposition)|Chiamato dal framework per ottenere la posizione della casella di controllo di un elemento.|
|[CCheckListBox::SetCheck](#setcheck)|Imposta lo stato della casella di controllo di un elemento.|
|[CCheckListBox::SetCheckStyle](#setcheckstyle)|Imposta lo stile delle caselle di controllo del controllo.|

## <a name="remarks"></a>Osservazioni

Una "casella di controllo" visualizza un elenco di elementi, ad esempio i nomi di file. Ogni elemento dell'elenco ha una casella di controllo accanto ad esso che l'utente può selezionare o deselezionare.

`CCheckListBox`è solo per i controlli disegnati dal proprietario perché l'elenco contiene più di stringhe di testo. Nella sua forma più semplice, una casella di controllo contiene stringhe di testo e caselle di controllo, ma non è necessario disporre di testo. Ad esempio, è possibile avere un elenco di piccole bitmap con una casella di controllo accanto a ogni elemento.

Per creare una casella di controllo personalizzata, è necessario derivare la propria classe da `CCheckListBox`. Per derivare la propria classe, scrivere un `Create`costruttore per la classe derivata, quindi chiamare .

Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo all'elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore messaggi alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il seguente formato:

_Notifica_ **ON\_** **(** _id_, _memberFxn_ **)**

dove `id` specifica l'ID di finestra figlio `memberFxn` del controllo che invia la notifica ed è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione dell'elemento padre è il seguente:

`afx_msg void memberFxn();`

Esiste una sola voce della mappa messaggi che `CCheckListBox` riguarda specificamente (ma vedere anche le voci della mappa messaggi per [CListBox](../../mfc/reference/clistbox-class.md)):

- ON_CLBN_CHKCHANGE L'utente ha modificato lo stato della casella di controllo di un elemento.

Se la casella di controllo è una casella di controllo predefinita (un elenco di stringhe con le caselle di controllo di dimensioni predefinite a sinistra di ogni), è possibile utilizzare il valore predefinito [CCheckListBox::DrawItem](#drawitem) per disegnare la casella di controllo. In caso contrario, è necessario eseguire l'override di [CListBox::CompareItem (funzione)](../../mfc/reference/clistbox-class.md#compareitem) e [CCheckListBox::DrawItem](#drawitem) e [CCheckListBox::MeasureItem](#measureitem) ( ).

È possibile creare una casella di controllo da un modello di finestra di dialogo o direttamente nel codice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CCheckListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cchecklistboxcchecklistbox"></a><a name="cchecklistbox"></a>CCheckListBox::CCheckListBox

Costruisce un oggetto `CCheckListBox`.

```
CCheckListBox();
```

### <a name="remarks"></a>Osservazioni

Costruire un `CCheckListBox` oggetto in due passaggi. Definire innanzitutto una `CCheckListBox`classe `Create`derivata da , quindi chiamare , che `CCheckListBox` inizializza la casella di controllo di Windows e la associa all'oggetto .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#60](../../mfc/codesnippet/cpp/cchecklistbox-class_1.cpp)]

## <a name="cchecklistboxcreate"></a><a name="create"></a>CCheckListBox::Creare

Crea la casella di controllo di `CCheckListBox` Windows e la associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della casella dell'elenco di controllo. Lo stile deve essere LBS_HASSTRINGS e LBS_OWNERDRAWFIXED (tutti gli elementi dell'elenco hanno la stessa altezza) o LBS_OWNERDRAWVARIABLE (gli elementi nell'elenco sono di altezza variabile). Questo stile può essere combinato con altri stili di [casella di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) ad eccezione di LBS_USETABSTOPS.

*Rect*<br/>
Specifica le dimensioni e la posizione della casella di controllo. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre della casella `CDialog` di controllo (in genere un oggetto). Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo della casella di controllo dell'elenco di controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CCheckListBox` oggetto in due passaggi. Definire innanzitutto una `CcheckListBox` classe derivata da e quindi chiamare `Create`, che inizializza `CCheckListBox`la casella dell'elenco di controllo di Windows e la associa all'oggetto . Vedere [CCheckListBox::CCheckListBox](#cchecklistbox) per un esempio.

Quando `Create` viene eseguito, Windows invia i messaggi [di WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) al controllo casella di controllo.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), `CWnd` [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe base. Per estendere la gestione dei messaggi predefinita, aggiungere una mappa messaggi alla classe derivata ed eseguire l'override delle funzioni membro del gestore messaggi precedenti. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare i seguenti stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo casella di controllo:

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

- WS_VSCROLL Per aggiungere una barra di scorrimento verticale

- WS_HSCROLL Per aggiungere una barra di scorrimento orizzontale

- WS_GROUP A raggruppare i controlli

- WS_TABSTOP Per consentire la tabulazione a questo controllo

## <a name="cchecklistboxdrawitem"></a><a name="drawitem"></a>CCheckListBox::DrawItem

Chiamato dal framework quando viene modificato un aspetto visivo di una casella di controllo disegnata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

I `itemAction` `itemState` membri e `DRAWITEMSTRUCT` della struttura definiscono l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione disegna un elenco di caselle di controllo predefinite, costituito da un elenco di stringhe ognuna con una casella di controllo di dimensioni predefinite a sinistra. La dimensione dell'elenco di caselle di controllo è quella specificata in [Crea](#create).

Eseguire l'override di questa funzione membro per implementare il disegno di caselle di controllo di disegno del proprietario che non sono l'impostazione predefinita, ad esempio caselle di controllo con elenchi che non sono stringhe, con elementi a altezza variabile o con caselle di controllo che non sono a sinistra. L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

Se gli elementi della casella di controllo non hanno `Create`tutti la stessa altezza, lo stile della casella dell'elenco di controllo (specificato in ) deve essere **LBS_OWNERVARIABLE**ed è necessario eseguire l'override della funzione [MeasureItem](#measureitem) .

## <a name="cchecklistboxenable"></a><a name="enable"></a>CCheckListBox::Abilitare

Chiamare questa funzione per abilitare o disabilitare un elemento della casella di controllo.

```cpp
void Enable(
    int nIndex,
    BOOL bEnabled = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento della casella dell'elenco di controllo da abilitare.

*bAbilitato*<br/>
Specifica se l'elemento è abilitato o disabilitato.

## <a name="cchecklistboxgetcheck"></a><a name="getcheck"></a>CCheckListBox::GetCheck

Recupera lo stato della casella di controllo specificata.

```
int GetCheck(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di una casella di controllo contenuta nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Stato della casella di controllo specificata. Nella tabella seguente sono elencati i valori possibili.

|valore|Descrizione|
|-----------|-----------------|
|BST_CHECKED|La casella di controllo è selezionata.|
|BST_UNCHECKED|La casella di controllo non è selezionata.|
|BST_INDETERMINATE|Lo stato della casella di controllo è indeterminato.|

## <a name="cchecklistboxgetcheckstyle"></a><a name="getcheckstyle"></a>CCheckListBox::GetCheckStyle

Chiamare questa funzione per ottenere lo stile della casella di controllo.

```
UINT GetCheckStyle();
```

### <a name="return-value"></a>Valore restituito

Stile delle caselle di controllo del controllo.

### <a name="remarks"></a>Osservazioni

Per informazioni sui possibili stili, consultate [SetCheckStyle.](#setcheckstyle)

## <a name="cchecklistboxisenabled"></a><a name="isenabled"></a>CCheckListBox::IsEnabled

Chiamare questa funzione per determinare se un elemento è abilitato.

```
BOOL IsEnabled(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è abilitato; in caso contrario 0.

## <a name="cchecklistboxmeasureitem"></a><a name="measureitem"></a>CCheckListBox::MeasureItem

Chiamato dal framework quando viene creata una casella di controllo con uno stile non predefinito.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct (oggetto LpMeasureItemStruct)*<br/>
Puntatore lungo a una struttura [MEASUREITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-measureitemstruct)

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di `MEASUREITEMSTRUCT` questa funzione membro e compilare la struttura per informare Windows delle dimensioni degli elementi della casella di controllo. Se la casella di controllo viene creata con lo stile [di LBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

## <a name="cchecklistboxongetcheckposition"></a><a name="ongetcheckposition"></a>CCheckListBox::OnGetCheckPosition

Il framework chiama questa funzione per ottenere la posizione e le dimensioni della casella di controllo in un elemento.

```
virtual CRect OnGetCheckPosition(
    CRect rectItem,
    CRect rectCheckBox);
```

### <a name="parameters"></a>Parametri

*RectItem (elemento rectItem)*<br/>
Posizione e dimensione della voce di elenco.

*RectCheckBox (Casella di controllo Rect)*<br/>
La posizione e le dimensioni predefinite della casella di controllo di un elemento.

### <a name="return-value"></a>Valore restituito

La posizione e le dimensioni della casella di controllo di un elemento.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce solo la posizione`rectCheckBox`e le dimensioni predefinite della casella di controllo ( ). Per impostazione predefinita, una casella di controllo è allineata nell'angolo superiore sinistro di un elemento ed è la dimensione standard della casella di controllo. In alcuni casi è possibile che le caselle di controllo a destra siano selezionate o una casella di controllo più grande o più piccola. In questi casi, eseguire l'override `OnGetCheckPosition` per modificare la posizione e le dimensioni della casella di controllo all'interno dell'elemento.

## <a name="cchecklistboxsetcheck"></a><a name="setcheck"></a>CCheckListBox::SetCheck

Imposta lo stato della casella di controllo specificata.

```cpp
void SetCheck(
    int nIndex,
    int nCheck);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di una casella di controllo contenuta nella casella di riepilogo.

*nControllare*<br/>
Lo stato del pulsante per la casella di controllo specificata. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Osservazioni

Nella tabella seguente sono elencati i valori possibili per il parametro *nCheck.*

|valore|Descrizione|
|-----------|-----------------|
|BST_CHECKED|Selezionare la casella di controllo specificata.|
|BST_UNCHECKED|Deselezionare la casella di controllo specificata.|
|BST_INDETERMINATE|Impostare lo stato della casella di controllo specificato su indeterminato.<br /><br /> Questo stato è disponibile solo se lo stile della casella di controllo è BS_AUTO3STATE o BS_3STATE. Per ulteriori informazioni, consultate [Stili dei pulsanti.](../../mfc/reference/styles-used-by-mfc.md#button-styles)|

## <a name="cchecklistboxsetcheckstyle"></a><a name="setcheckstyle"></a>CCheckListBox::SetCheckStyle

Chiamare questa funzione per impostare lo stile delle caselle di controllo nella casella dell'elenco di controllo.

```cpp
void SetCheckStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Determina lo stile delle caselle di controllo nella casella dell'elenco di controllo.

### <a name="remarks"></a>Osservazioni

Gli stili validi sono:

- BS_CHECKBOX

- BS_AUTOCHECKBOX

- BS_AUTO3STATE

- BS_3STATE

Per informazioni su questi stili, vedere [Stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).

## <a name="see-also"></a>Vedere anche

[TSTCON di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)
