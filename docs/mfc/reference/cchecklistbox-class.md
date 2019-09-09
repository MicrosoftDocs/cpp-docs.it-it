---
title: Classe CCheckListBox
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
ms.openlocfilehash: f8c725ea30754a42ce3045f1160b7a09c4481e39
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507355"
---
# <a name="cchecklistbox-class"></a>Classe CCheckListBox

Fornisce la funzionalità di una casella elenco di controllo di Windows.

## <a name="syntax"></a>Sintassi

```
class CCheckListBox : public CListBox
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCheckListBox:: CCheckListBox](#cchecklistbox)|Costruisce un oggetto `CCheckListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCheckListBox:: create](#create)|Crea la casella di controllo di Windows e la collega all' `CCheckListBox` oggetto.|
|[CCheckListBox::D rawItem](#drawitem)|Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella di riepilogo creata dal proprietario.|
|[CCheckListBox::Enable](#enable)|Abilita o Disabilita un elemento della casella di controllo.|
|[CCheckListBox::GetCheck](#getcheck)|Ottiene lo stato della casella di controllo di un elemento.|
|[CCheckListBox::GetCheckStyle](#getcheckstyle)|Ottiene lo stile delle caselle di controllo del controllo.|
|[CCheckListBox::IsEnabled](#isenabled)|Determina se un elemento è abilitato.|
|[CCheckListBox:: MeasureItem](#measureitem)|Chiamata eseguita dal framework quando viene creata una casella di riepilogo con uno stile di creazione del proprietario.|
|[CCheckListBox::OnGetCheckPosition](#ongetcheckposition)|Chiamato dal Framework per ottenere la posizione della casella di controllo di un elemento.|
|[CCheckListBox::SetCheck](#setcheck)|Imposta lo stato della casella di controllo di un elemento.|
|[CCheckListBox::SetCheckStyle](#setcheckstyle)|Imposta lo stile delle caselle di controllo del controllo.|

## <a name="remarks"></a>Note

In una "casella di controllo" viene visualizzato un elenco di elementi, ad esempio i nomi file. Ogni elemento nell'elenco contiene una casella di controllo accanto alla quale l'utente può selezionare o deselezionare.

`CCheckListBox`è solo per i controlli creati dal proprietario perché l'elenco contiene più di stringhe di testo. Al più semplice, una casella di controllo contiene stringhe di testo e caselle di controllo, ma non è necessario disporre di testo. Ad esempio, è possibile avere un elenco di bitmap di piccole dimensioni con una casella di controllo accanto a ogni elemento.

Per creare la propria casella di controllo, è necessario derivare la propria `CCheckListBox`classe da. Per derivare la propria classe, scrivere un costruttore per la classe derivata, quindi `Create`chiamare.

Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore del messaggio alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il formato seguente:

**In\_** _notifica_ **(** _ID_, _memberFxn_ **)**

dove `id` specifica l'ID della finestra figlio del controllo che invia la notifica `memberFxn` e è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione del padre è il seguente:

`afx_msg void memberFxn();`

È disponibile una sola voce della mappa messaggi che riguarda in modo specifico `CCheckListBox` (ma vedere anche le voci della mappa messaggi per [CListBox](../../mfc/reference/clistbox-class.md)):

- ON_CLBN_CHKCHANGE l'utente ha modificato lo stato della casella di controllo di un elemento.

Se la casella di controllo è una casella di controllo predefinita, ovvero un elenco di stringhe con le caselle di controllo di dimensioni predefinite a sinistra di ciascuna di esse, è possibile usare il valore predefinito [CCheckListBox::D rawitem](#drawitem) per creare la casella di controllo. In caso contrario, è necessario eseguire l'override della funzione [CListBox:: CompareItem](../../mfc/reference/clistbox-class.md#compareitem) e delle funzioni [CCheckListBox::D rawitem](#drawitem) e [CCheckListBox:: MeasureItem](#measureitem) .

È possibile creare una casella di controllo da un modello di finestra di dialogo o direttamente nel codice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CCheckListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cchecklistbox"></a>CCheckListBox:: CCheckListBox

Costruisce un oggetto `CCheckListBox`.

```
CCheckListBox();
```

### <a name="remarks"></a>Note

Si costruisce `CCheckListBox` un oggetto in due passaggi. Definire prima di tutto una classe `CCheckListBox`derivata da, `Create`quindi chiamare, che inizializza la casella di controllo di Windows e la `CCheckListBox` collega all'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#60](../../mfc/codesnippet/cpp/cchecklistbox-class_1.cpp)]

##  <a name="create"></a>CCheckListBox:: create

Crea la casella di controllo di Windows e la collega all' `CCheckListBox` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della casella di controllo. Lo stile deve essere LBS_HASSTRINGS e LBS_OWNERDRAWFIXED (tutti gli elementi dell'elenco sono della stessa altezza) o LBS_OWNERDRAWVARIABLE (gli elementi nell'elenco sono di altezze variabili). Questo stile può essere combinato con altri [stili di casella di riepilogo,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) ad eccezione di LBS_USETABSTOPS.

*rect*<br/>
Specifica la posizione e le dimensioni della casella di controllo. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre della casella di controllo (in `CDialog` genere un oggetto). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo della casella di controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce `CCheckListBox` un oggetto in due passaggi. In primo luogo, definire una classe `CcheckListBox` derivata da e `Create`quindi chiamare, che inizializza la casella di controllo di Windows e la `CCheckListBox`collega a. Per un esempio, vedere [CCheckListBox:: CCheckListBox](#cchecklistbox) .

Quando `Create` viene eseguito, Windows invia i messaggi [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) al controllo casella di controllo.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe `CWnd` di base. Per estendere la gestione dei messaggi predefinita, aggiungere una mappa messaggi alla classe derivata ed eseguire l'override delle funzioni membro del gestore di messaggi precedenti. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo casella di controllo:

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_VSCROLL aggiungere una barra di scorrimento verticale

- WS_HSCROLL aggiungere una barra di scorrimento orizzontale

- WS_GROUP per raggruppare i controlli

- WS_TABSTOP per consentire la tabulazione a questo controllo

##  <a name="drawitem"></a>CCheckListBox::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella di controllo creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) contenente informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Note

I `itemAction` membri `itemState` e della`DRAWITEMSTRUCT` struttura definiscono l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione disegna un elenco di caselle di controllo predefinito, costituito da un elenco di stringhe, ognuna con una casella di controllo di dimensioni predefinite a sinistra. La dimensione dell'elenco di caselle di controllo è quella specificata in [Crea](#create).

Eseguire l'override di questa funzione membro per implementare il disegno di caselle di elenco di controllo per il proprietario che non sono l'impostazione predefinita, ad esempio caselle di controllo con elenchi che non sono stringhe, con elementi a altezza variabile o con caselle di controllo che non sono a sinistra. L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

Se gli elementi della casella di controllo non hanno tutte la stessa altezza, lo stile della casella `Create`di controllo (specificato in) deve essere * * LBS_OWNERVARIABLE ed è necessario eseguire l'override della funzione [MeasureItem](#measureitem) .

##  <a name="enable"></a>CCheckListBox:: Enable

Chiamare questa funzione per abilitare o disabilitare un elemento della casella di controllo.

```
void Enable(
    int nIndex,
    BOOL bEnabled = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento della casella di controllo da abilitare.

*bEnabled*<br/>
Specifica se l'elemento è abilitato o disabilitato.

##  <a name="getcheck"></a>CCheckListBox:: GetCheck

Recupera lo stato della casella di controllo specificata.

```
int GetCheck(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di una casella di controllo contenuta nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Stato della casella di controllo specificata. Nella tabella seguente sono elencati i valori possibili.

|Valore|DESCRIZIONE|
|-----------|-----------------|
|BST_CHECKED|La casella di controllo è selezionata.|
|BST_UNCHECKED|La casella di controllo non è selezionata.|
|BST_INDETERMINATE|Lo stato della casella di controllo è indeterminato.|

##  <a name="getcheckstyle"></a>CCheckListBox:: GetCheckStyle

Chiamare questa funzione per ottenere lo stile della casella di controllo.

```
UINT GetCheckStyle();
```

### <a name="return-value"></a>Valore restituito

Stile delle caselle di controllo del controllo.

### <a name="remarks"></a>Note

Per informazioni sugli stili possibili, vedere [SetCheckStyle](#setcheckstyle).

##  <a name="isenabled"></a>CCheckListBox:: IsEnabled

Chiamare questa funzione per determinare se un elemento è abilitato.

```
BOOL IsEnabled(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è abilitato; in caso contrario, 0.

##  <a name="measureitem"></a>CCheckListBox:: MeasureItem

Chiamata eseguita dal framework quando viene creata una casella di controllo con uno stile non predefinito.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Puntatore long a una struttura [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct) .

### <a name="remarks"></a>Note

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e `MEASUREITEMSTRUCT` compilare la struttura per informare le finestre delle dimensioni degli elementi della casella di controllo. Se la casella di controllo viene creata con lo stile [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , il Framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

##  <a name="ongetcheckposition"></a>CCheckListBox:: OnGetCheckPosition

Il Framework chiama questa funzione per ottenere la posizione e le dimensioni della casella di controllo in un elemento.

```
virtual CRect OnGetCheckPosition(
    CRect rectItem,
    CRect rectCheckBox);
```

### <a name="parameters"></a>Parametri

*rectItem*<br/>
Posizione e dimensioni dell'elemento dell'elenco.

*rectCheckBox*<br/>
Posizione e dimensioni predefinite della casella di controllo di un elemento.

### <a name="return-value"></a>Valore restituito

Posizione e dimensioni della casella di controllo di un elemento.

### <a name="remarks"></a>Note

L'implementazione predefinita restituisce solo la posizione e le dimensioni predefinite della casella di controllo`rectCheckBox`(). Per impostazione predefinita, una casella di controllo è allineata nell'angolo superiore sinistro di un elemento ed è la dimensione standard della casella di controllo. Possono verificarsi casi in cui si desiderano le caselle di controllo a destra o si desidera una casella di controllo di dimensioni maggiori o minori. In questi casi, eseguire `OnGetCheckPosition` l'override di per modificare la posizione e le dimensioni della casella di controllo all'interno dell'elemento.

##  <a name="setcheck"></a>CCheckListBox:: secheck

Imposta lo stato della casella di controllo specificata.

```
void SetCheck(
    int nIndex,
    int nCheck);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di una casella di controllo contenuta nella casella di riepilogo.

*nCheck*<br/>
Stato del pulsante per la casella di controllo specificata. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Nella tabella seguente sono elencati i valori possibili per il parametro *nPer* .

|Value|Descrizione|
|-----------|-----------------|
|BST_CHECKED|Consente di selezionare la casella di controllo specificata.|
|BST_UNCHECKED|Deselezionare la casella di controllo specificata.|
|BST_INDETERMINATE|Impostare lo stato della casella di controllo specificata su indeterminato.<br /><br /> Questo stato è disponibile solo se lo stile della casella di controllo è BS_AUTO3STATE o BS_3STATE. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).|

##  <a name="setcheckstyle"></a>CCheckListBox:: SetCheckStyle

Chiamare questa funzione per impostare lo stile delle caselle di controllo nella casella elenco di controllo.

```
void SetCheckStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Determina lo stile delle caselle di controllo nella casella di controllo.

### <a name="remarks"></a>Note

Gli stili validi sono:

- BS_CHECKBOX

- BS_AUTOCHECKBOX

- BS_AUTO3STATE

- BS_3STATE

Per informazioni su questi stili, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).

## <a name="see-also"></a>Vedere anche

[TSTCON di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)
