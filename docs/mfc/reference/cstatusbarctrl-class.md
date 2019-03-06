---
title: Classe CStatusBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CStatusBarCtrl
- AFXCMN/CStatusBarCtrl
- AFXCMN/CStatusBarCtrl::CStatusBarCtrl
- AFXCMN/CStatusBarCtrl::Create
- AFXCMN/CStatusBarCtrl::CreateEx
- AFXCMN/CStatusBarCtrl::DrawItem
- AFXCMN/CStatusBarCtrl::GetBorders
- AFXCMN/CStatusBarCtrl::GetIcon
- AFXCMN/CStatusBarCtrl::GetParts
- AFXCMN/CStatusBarCtrl::GetRect
- AFXCMN/CStatusBarCtrl::GetText
- AFXCMN/CStatusBarCtrl::GetTextLength
- AFXCMN/CStatusBarCtrl::GetTipText
- AFXCMN/CStatusBarCtrl::IsSimple
- AFXCMN/CStatusBarCtrl::SetBkColor
- AFXCMN/CStatusBarCtrl::SetIcon
- AFXCMN/CStatusBarCtrl::SetMinHeight
- AFXCMN/CStatusBarCtrl::SetParts
- AFXCMN/CStatusBarCtrl::SetSimple
- AFXCMN/CStatusBarCtrl::SetText
- AFXCMN/CStatusBarCtrl::SetTipText
helpviewer_keywords:
- CStatusBarCtrl [MFC], CStatusBarCtrl
- CStatusBarCtrl [MFC], Create
- CStatusBarCtrl [MFC], CreateEx
- CStatusBarCtrl [MFC], DrawItem
- CStatusBarCtrl [MFC], GetBorders
- CStatusBarCtrl [MFC], GetIcon
- CStatusBarCtrl [MFC], GetParts
- CStatusBarCtrl [MFC], GetRect
- CStatusBarCtrl [MFC], GetText
- CStatusBarCtrl [MFC], GetTextLength
- CStatusBarCtrl [MFC], GetTipText
- CStatusBarCtrl [MFC], IsSimple
- CStatusBarCtrl [MFC], SetBkColor
- CStatusBarCtrl [MFC], SetIcon
- CStatusBarCtrl [MFC], SetMinHeight
- CStatusBarCtrl [MFC], SetParts
- CStatusBarCtrl [MFC], SetSimple
- CStatusBarCtrl [MFC], SetText
- CStatusBarCtrl [MFC], SetTipText
ms.assetid: 8504ad38-7b91-4746-aede-ac98886eb47b
ms.openlocfilehash: 8db2be9b14f9d60f2103ce0b63b772962b079bbe
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426134"
---
# <a name="cstatusbarctrl-class"></a>Classe CStatusBarCtrl

Fornisce la funzionalità del controllo barra di stato comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CStatusBarCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatusBarCtrl::CStatusBarCtrl](#cstatusbarctrl)|Costruisce un oggetto `CStatusBarCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatusBarCtrl::Create](#create)|Crea un controllo barra di stato e la collega a un `CStatusBarCtrl` oggetto.|
|[CStatusBarCtrl::CreateEx](#createex)|Crea un controllo barra di stato con gli stili estesi di Windows specificati e lo collega a un `CStatusBarCtrl` oggetto.|
|[CStatusBarCtrl::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un disegno barra controllo di stato.|
|[CStatusBarCtrl::GetBorders](#getborders)|Recupera la larghezza corrente dei bordi verticali e orizzontali di un controllo barra di stato.|
|[CStatusBarCtrl::GetIcon](#geticon)|Recupera l'icona per una parte (noto anche come un riquadro) in cui il controllo barra di stato corrente.|
|[CStatusBarCtrl::GetParts](#getparts)|Recupera un conteggio delle parti in un controllo barra di stato.|
|[CStatusBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione di una parte di un controllo barra di stato.|
|[CStatusBarCtrl::GetText](#gettext)|Recupera il testo da una parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::GetTextLength](#gettextlength)|Recuperare la lunghezza, espressa in caratteri, del testo da una parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::GetTipText](#gettiptext)|Recupera il testo della descrizione comando per un riquadro in una barra di stato.|
|[CStatusBarCtrl::IsSimple](#issimple)|Controlla un controllo di finestra di stato per determinare se è in modalità semplice.|
|[CStatusBarCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo in una barra di stato.|
|[CStatusBarCtrl::SetIcon](#seticon)|Imposta l'icona per un riquadro in una barra di stato.|
|[CStatusBarCtrl::SetMinHeight](#setminheight)|Imposta l'altezza minima di uno stato della barra di area di disegno del controllo.|
|[CStatusBarCtrl::SetParts](#setparts)|Imposta il numero delle parti in uno stato della barra di controllo e la coordinata del bordo destro di ogni parte.|
|[CStatusBarCtrl::SetSimple](#setsimple)|Specifica se un controllo barra di stato consente di visualizzare testo semplice o tutte le parti del controllo impostate da una chiamata precedente a `SetParts`.|
|[CStatusBarCtrl::SetText](#settext)|Imposta il testo nella parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::SetTipText](#settiptext)|Imposta il testo della descrizione comando per un riquadro in una barra di stato.|

## <a name="remarks"></a>Note

Un "controllo al barra di stato" è una finestra orizzontale, in genere visualizzata nella parte inferiore della finestra padre, in cui un'applicazione può visualizzare vari tipi di informazioni sullo stato. Il controllo barra di stato può essere suddivisi in parti per visualizzare più di un tipo di informazioni.

Questo controllo (e pertanto il `CStatusBarCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

Per altre informazioni sull'uso `CStatusBarCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CStatusBarCtrl](../../mfc/using-cstatusbarctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatusBarCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="create"></a>  CStatusBarCtrl::Create

Crea un controllo barra di stato e la collega a un `CStatusBarCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stato della barra degli stili del controllo indicato nel [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel SDK di Windows. Questo parametro deve includere lo stile WS_CHILD. Deve includere inoltre lo stile WS_VISIBLE.

*rect*<br/>
Specifica le dimensioni e la posizione del controllo barra di stato. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura.

*pParentWnd*<br/>
Specifica lo stato della barra di finestra padre del controllo, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo barra di stato

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CStatusBarCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo barra di stato e lo collega al `CStatusBarCtrl` oggetto.

È la posizione predefinita di una finestra di stato nella parte inferiore della finestra padre, ma è possibile specificare lo stile CCS_TOP affinché venga visualizzato nella parte superiore dell'area client della finestra padre. È possibile specificare lo stile SBARS_SIZEGRIP per includere un riquadro di ridimensionamento all'estremità destra della finestra di stato. Combinando gli stili CCS_TOP e SBARS_SIZEGRIP non è consigliabile, perché il riquadro di ridimensionamento non funziona anche se il sistema lo disegna nella finestra di stato.

Per creare una barra di stato con stili finestra estesi, chiamare [CStatusBarCtrl::CreateEx](#createex) invece di `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_1.cpp)]

##  <a name="createex"></a>  CStatusBarCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CStatusBarCtrl` oggetto.

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
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stato della barra degli stili del controllo indicato nel [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel SDK di Windows. Questo parametro deve includere lo stile WS_CHILD. Deve includere inoltre lo stile WS_VISIBLE.

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

##  <a name="cstatusbarctrl"></a>  CStatusBarCtrl::CStatusBarCtrl

Costruisce un oggetto `CStatusBarCtrl`.

```
CStatusBarCtrl();
```

##  <a name="drawitem"></a>  CStatusBarCtrl::DrawItem

Chiamato dal framework quando un aspetto visivo di un disegno barra controllo di stato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore di tipo long a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che contiene informazioni sul tipo di disegno necessaria.

### <a name="remarks"></a>Note

Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CStatusBarCtrl` oggetto.

L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima di questo membro funzione termina.

##  <a name="getborders"></a>  CStatusBarCtrl::GetBorders

Recupera larghezza corrente del controllo barra di stato dei bordi orizzontali e verticali e dello spazio tra i rettangoli.

```
BOOL GetBorders(int* pBorders) const;

BOOL GetBorders(
    int& nHorz,
    int& nVert,
    int& nSpacing) const;
```

### <a name="parameters"></a>Parametri

*pBorders*<br/>
Indirizzo di una matrice di interi con tre elementi. Il primo elemento riceve la larghezza del bordo orizzontale, la seconda riceve la larghezza del bordo verticale e il terzo riceve la larghezza del bordo tra i rettangoli.

*nHorz*<br/>
Riferimento a un integer che riceve la larghezza del bordo orizzontale.

*nVert*<br/>
Riferimento a un integer che riceve la larghezza del bordo verticale.

*nSpacing*<br/>
Riferimento a un integer che riceve la larghezza del bordo tra i rettangoli.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questi bordi determinano la spaziatura tra il bordo esterno del controllo e i rettangoli contenenti testo all'interno del controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_2.cpp)]

##  <a name="geticon"></a>  CStatusBarCtrl::GetIcon

Recupera l'icona per una parte (noto anche come un riquadro) in cui il controllo barra di stato corrente.

```
HICON GetIcon(int iPart) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iPart*|[in] Indice a base zero della parte che contiene l'icona da recuperare. Se questo parametro è -1, si presuppone che la barra di stato da una barra di stato di visualizzazione semplice.|

### <a name="return-value"></a>Valore restituito

L'handle dell'icona se il metodo ha esito positivo. in caso contrario, NULL.

### <a name="remarks"></a>Note

Questo metodo invia il [SB_GETICON](/windows/desktop/Controls/sb-geticon) messaggio, che è descritti nel SDK di Windows.

Un controllo barra di stato è costituito da una riga di riquadri di output di testo, che sono anche noti come parti. Per altre informazioni sulla barra di stato, vedere [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [impostazione della modalità di un oggetto CStatusBarCtrl](../../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce una variabile, `m_statusBar`, che viene usato per accedere il controllo barra di stato corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_3.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente copia un'icona in due riquadri del controllo indicatore di stato corrente. In una sezione dell'esempio di codice precedente abbiamo creato un controllo barra di stato con tre riquadri e quindi aggiungere un'icona per il primo riquadro. In questo esempio recupera l'icona dal primo riquadro e quindi lo aggiunge al secondo e terzo riquadro.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_4.cpp)]

##  <a name="getparts"></a>  CStatusBarCtrl::GetParts

Recupera un conteggio delle parti in un controllo barra di stato.

```
int GetParts(
    int nParts,
    int* pParts) const;
```

### <a name="parameters"></a>Parametri

*nParts*<br/>
Numero di parti per il quale recuperare le coordinate. Se questo parametro è maggiore del numero di parti del controllo, il messaggio recupera coordinate per consentire solo le parti esistenti.

*pParts*<br/>
Indirizzo di una matrice di interi che hanno lo stesso numero di elementi per il numero di parti specificato da *nParts*. Ogni elemento nella matrice riceve le coordinate client del bordo destro della parte corrispondente. Se un elemento viene impostato su - 1, la posizione del bordo destro di tale parte si estende al bordo destro della barra di stato.

### <a name="return-value"></a>Valore restituito

Il numero di parti nel controllo se ha esito positivo o zero in caso contrario.

### <a name="remarks"></a>Note

Questa funzione membro recupera anche la coordinata del bordo destro del numero specificato di parti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#3](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_5.cpp)]

##  <a name="getrect"></a>  CStatusBarCtrl::GetRect

Recupera il rettangolo di delimitazione di una parte di un controllo barra di stato.

```
BOOL GetRect(
    int nPane,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero della parte è necessario recuperare cui rettangolo di delimitazione.

*lpRect*<br/>
Indirizzo di un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che riceve il rettangolo di delimitazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#4](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_6.cpp)]

##  <a name="gettext"></a>  CStatusBarCtrl::GetText

Recupera il testo da una parte specificata di un controllo barra di stato.

```
CString GetText(
    int nPane,
    int* pType = NULL) const;

int GetText(
    LPCTSTR lpszText,
    int nPane,
    int* pType = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Indirizzo del buffer che riceve il testo. Questo parametro è una stringa con terminazione null.

*nPane*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pType*<br/>
Puntatore a un integer che riceve le informazioni sul tipo. Il tipo può essere uno dei valori seguenti:

- **0** il testo viene disegnato con un bordo in basso rispetto al piano della barra di stato.

- SBT_NOBORDERS viene disegnato il testo senza bordi.

- SBT_POPOUT il testo viene disegnato con un bordo in alto rispetto al piano della barra di stato.

- SBT_OWNERDRAW se il testo ha la SBT_OWNERDRAW tipo, di disegno *PDigitare* riceve questo messaggio e restituisce il valore a 32 bit associato con il testo anziché al tipo di lunghezza e l'operazione.

### <a name="return-value"></a>Valore restituito

La lunghezza, espressa in caratteri, del testo o un [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il testo corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#5](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_7.cpp)]

##  <a name="gettextlength"></a>  CStatusBarCtrl::GetTextLength

Recupera la lunghezza, espressa in caratteri, del testo da una parte specificata di un controllo barra di stato.

```
int GetTextLength(
    int nPane,
    int* pType = NULL) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pType*<br/>
Puntatore a un integer che riceve le informazioni sul tipo. Il tipo può essere uno dei valori seguenti:

- **0** il testo viene disegnato con un bordo in basso rispetto al piano della barra di stato.

- SBT_NOBORDERS viene disegnato il testo senza bordi.

- SBT_OWNERDRAW viene disegnato il testo dalla finestra padre.

- SBT_POPOUT il testo viene disegnato con un bordo in alto rispetto al piano della barra di stato.

### <a name="return-value"></a>Valore restituito

La lunghezza in caratteri, del testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#6](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_8.cpp)]

##  <a name="gettiptext"></a>  CStatusBarCtrl::GetTipText

Recupera il testo della descrizione comando per un riquadro in una barra di stato.

```
CString GetTipText(int nPane) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il testo da utilizzare nella descrizione comando.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_GETTIPTEXT](/windows/desktop/Controls/sb-gettiptext), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#7](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_9.cpp)]

##  <a name="issimple"></a>  CStatusBarCtrl::IsSimple

Controlla un controllo di finestra di stato per determinare se è in modalità semplice.

```
BOOL IsSimple() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo di finestra di stato è in modalità semplice. in caso contrario, zero.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_ISSIMPLE](/windows/desktop/Controls/sb-issimple), come descritto nel SDK di Windows.

##  <a name="setbkcolor"></a>  CStatusBarCtrl::SetBkColor

Imposta il colore di sfondo in una barra di stato.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*cr*<br/>
Valore COLORREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per causare la barra di stato da utilizzare sul colore di sfondo predefinito.

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che rappresenta il colore di sfondo predefinito precedente.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETBKCOLOR](/windows/desktop/Controls/sb-setbkcolor), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#8](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_10.cpp)]

##  <a name="seticon"></a>  CStatusBarCtrl::SetIcon

Imposta l'icona per un riquadro in una barra di stato.

```
BOOL SetIcon(
    int nPane,
    HICON hIcon);
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice a base zero del riquadro che riceverà l'icona. Se questo parametro è -1, si presuppone che la barra di stato da una barra di stato semplici.

*hIcon*<br/>
Handle per l'icona da impostare. Se questo valore è NULL, l'icona viene rimossa dalla parte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETICON](/windows/desktop/Controls/sb-seticon), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CStatusBarCtrl::SetBkColor](#setbkcolor).

##  <a name="setminheight"></a>  CStatusBarCtrl::SetMinHeight

Imposta l'altezza minima di uno stato della barra di area di disegno del controllo.

```
void SetMinHeight(int nMin);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Altezza minima, in pixel, del controllo.

### <a name="remarks"></a>Note

L'altezza minima è la somma dei *nMin* e due volte la larghezza, in pixel, del bordo del controllo indicatore di stato verticale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#9](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_11.cpp)]

##  <a name="setparts"></a>  CStatusBarCtrl::SetParts

Imposta il numero delle parti in uno stato della barra di controllo e la coordinata del bordo destro di ogni parte.

```
BOOL SetParts(
    int nParts,
    int* pWidths);
```

### <a name="parameters"></a>Parametri

*nParts*<br/>
Numero di parti da impostare. Il numero di parti non può essere maggiore di 255.

*pWidths*<br/>
Indirizzo di una matrice di interi con lo stesso numero di elementi come parti specificate da *nParts*. Ogni elemento nella matrice specifica la posizione, nelle coordinate client, del bordo destro della parte corrispondente. Se un elemento è - 1, la posizione del bordo destro di tale parte si estende al bordo destro del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#10](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_12.cpp)]

##  <a name="setsimple"></a>  CStatusBarCtrl::SetSimple

Specifica se un controllo barra di stato consente di visualizzare testo semplice o tutte le parti del controllo impostate da una chiamata precedente a [SetParts](#setparts).

```
BOOL SetSimple(BOOL bSimple = TRUE);
```

### <a name="parameters"></a>Parametri

*bSimple*<br/>
[in] Flag di tipo di visualizzazione. Se questo parametro è TRUE, il controllo Visualizza testo semplice; Se il risultato è FALSE, viene visualizzato più parti.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Note

Se l'applicazione passa il controllo barra di stato da non semplice su simple, o viceversa, il sistema ridisegna immediatamente il controllo.

##  <a name="settext"></a>  CStatusBarCtrl::SetText

Imposta il testo nella parte specificata di un controllo barra di stato.

```
BOOL SetText(
    LPCTSTR lpszText,
    int nPane,
    int nType);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Indirizzo di una stringa con terminazione null che specifica il testo da impostare. Se *NLE* SBT_OWNERDRAW, viene *lpszText* rappresenta 32 bit di dati.

*nPane*<br/>
Indice in base zero della parte da impostare. Se questo valore è 255, si presuppone che il controllo barra di stato sia un controllo semplice solo con una parte.

*nType*<br/>
Tipo di operazione di disegno. Visualizzare [messaggio SB_SETTEXT](/windows/desktop/Controls/sb-settext) per un elenco di valori possibili.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il messaggio invalida la parte del controllo che è stato modificato, in modo che venga visualizzato il nuovo testo quando il controllo riceverà il messaggio WM_PAINT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#11](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_13.cpp)]

##  <a name="settiptext"></a>  CStatusBarCtrl::SetTipText

Imposta il testo della descrizione comando per un riquadro in una barra di stato.

```
void SetTipText(
    int nPane,
    LPCTSTR pszTipText);
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

*pszTipText*<br/>
Un puntatore a una stringa contenente il testo della descrizione comando.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETTIPTEXT](/windows/desktop/Controls/sb-settiptext), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#12](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_14.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)
