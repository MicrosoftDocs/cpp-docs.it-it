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
ms.openlocfilehash: 57d040a7efd87d384e0aaa6275593bc91f38cc86
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753042"
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
|[CStatusBarCtrl::Crea](#create)|Crea un controllo barra di stato `CStatusBarCtrl` e lo associa a un oggetto.|
|[CStatusBarCtrl::CreateEx](#createex)|Crea un controllo barra di stato con gli stili `CStatusBarCtrl` estesi di Windows specificati e lo associa a un oggetto.|
|[CStatusBarCtrl::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un controllo barra di stato disegnato dal proprietario viene modificato.|
|[CStatusBarCtrl::GetBorders](#getborders)|Recupera le larghezze correnti dei bordi orizzontale e verticale di un controllo barra di stato.|
|[CStatusBarCtrl::GetIcon](#geticon)|Recupera l'icona per una parte (nota anche come riquadro) nel controllo barra di stato corrente.|
|[CStatusBarCtrl::GetParts](#getparts)|Recupera un conteggio delle parti in un controllo barra di stato.|
|[CStatusBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione di una parte in un controllo barra di stato.|
|[CStatusBarCtrl::GetText](#gettext)|Recupera il testo dalla parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::GetTextLength](#gettextlength)|Recuperare la lunghezza, in caratteri, del testo dalla parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::GetTipText](#gettiptext)|Recupera il testo della descrizione comando per un riquadro in una barra di stato.|
|[CStatusBarCtrl::IsSimple](#issimple)|Controlla un controllo finestra di stato per determinare se è in modalità semplice.|
|[CStatusBarCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo in una barra di stato.|
|[CStatusBarCtrl::SetIcon](#seticon)|Imposta l'icona per un riquadro in una barra di stato.|
|[CStatusBarCtrl::SetMinHeight](#setminheight)|Imposta l'altezza minima dell'area di disegno di un controllo barra di stato.|
|[CStatusBarCtrl::SetParts](#setparts)|Imposta il numero di parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.|
|[CStatusBarCtrl::SetSimple](#setsimple)|Specifica se un controllo barra di stato visualizza testo semplice o `SetParts`tutte le parti del controllo impostate da una precedente chiamata a .|
|[CStatusBarCtrl::SetText](#settext)|Imposta il testo nella parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl::SetTipText](#settiptext)|Imposta il testo della descrizione comando per un riquadro in una barra di stato.|

## <a name="remarks"></a>Osservazioni

Un "controllo barra di stato" è una finestra orizzontale, in genere visualizzata nella parte inferiore di una finestra padre, in cui un'applicazione può visualizzare vari tipi di informazioni sullo stato. Il controllo barra di stato può essere suddiviso in parti per visualizzare più di un tipo di informazioni.

Questo controllo (e `CStatusBarCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Per ulteriori informazioni `CStatusBarCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e Utilizzo di [CStatusBarCtrl](../../mfc/using-cstatusbarctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatusBarCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cstatusbarctrlcreate"></a><a name="create"></a>CStatusBarCtrl::Crea

Crea un controllo barra di stato `CStatusBarCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili di controllo della barra di stato elencati in [Stili di controllo comuni](/windows/win32/Controls/common-control-styles) in Windows SDK. Questo parametro deve includere lo stile WS_CHILD. Dovrebbe anche includere lo stile WS_VISIBLE.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo barra di stato. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo barra `CDialog`di stato, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CStatusBarCtrl` in due passi. Chiamare innanzitutto il costruttore `Create`, quindi chiamare , che crea il `CStatusBarCtrl` controllo barra di stato e lo associa all'oggetto .

La posizione predefinita di una finestra di stato si trova lungo la parte inferiore della finestra padre, ma è possibile specificare lo stile CCS_TOP in modo che venga visualizzato nella parte superiore dell'area client della finestra padre. È possibile specificare lo stile SBARS_SIZEGRIP per includere un riquadro di ridimensionamento all'estremità destra della finestra di stato. La combinazione degli stili CCS_TOP e SBARS_SIZEGRIP non è consigliata, perché il grip di ridimensionamento risultante non è funzionale anche se il sistema lo disegna nella finestra di stato.

Per creare una barra di stato con stili di finestra estesi, chiamare [CStatusBarCtrl::CreateEx](#createex) anziché `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_1.cpp)]

## <a name="cstatusbarctrlcreateex"></a><a name="createex"></a>CStatusBarCtrl::CreateEx

Crea un controllo (una finestra figlio) `CStatusBarCtrl` e lo associa all'oggetto.

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
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili di controllo della barra di stato elencati in [Stili di controllo comuni](/windows/win32/Controls/common-control-styles) in Windows SDK. Questo parametro deve includere lo stile WS_CHILD. Dovrebbe anche includere lo stile WS_VISIBLE.

*Rect*<br/>
Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="cstatusbarctrlcstatusbarctrl"></a><a name="cstatusbarctrl"></a>CStatusBarCtrl::CStatusBarCtrl

Costruisce un oggetto `CStatusBarCtrl`.

```
CStatusBarCtrl();
```

## <a name="cstatusbarctrldrawitem"></a><a name="drawitem"></a>CStatusBarCtrl::DrawItem

Chiamato dal framework quando un aspetto visivo di un controllo barra di stato disegnato dal proprietario viene modificato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione `CStatusBarCtrl` membro per implementare il disegno per un oggetto di disegno del proprietario.

L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro termini.

## <a name="cstatusbarctrlgetborders"></a><a name="getborders"></a>CStatusBarCtrl::GetBorders

Recupera le larghezze correnti del controllo barra di stato dei bordi orizzontale e verticale e dello spazio tra i rettangoli.

```
BOOL GetBorders(int* pBorders) const;

BOOL GetBorders(
    int& nHorz,
    int& nVert,
    int& nSpacing) const;
```

### <a name="parameters"></a>Parametri

*pBordi*<br/>
Indirizzo di una matrice di interi con tre elementi. Il primo elemento riceve la larghezza del bordo orizzontale, il secondo riceve la larghezza del bordo verticale e il terzo riceve la larghezza del bordo tra i rettangoli.

*nHorz*<br/>
Riferimento a un numero intero che riceve la larghezza del bordo orizzontale.

*nVert (in questo modo)*<br/>
Riferimento a un numero intero che riceve la larghezza del bordo verticale.

*nSpaziatura*<br/>
Riferimento a un numero intero che riceve la larghezza del bordo tra i rettangoli.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questi bordi determinano la spaziatura tra il bordo esterno del controllo e i rettangoli all'interno del controllo che contengono testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_2.cpp)]

## <a name="cstatusbarctrlgeticon"></a><a name="geticon"></a>CStatusBarCtrl::GetIcon

Recupera l'icona per una parte (nota anche come riquadro) nel controllo barra di stato corrente.

```
HICON GetIcon(int iPart) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iPart*|[in] Indice in base zero della parte che contiene l'icona da recuperare. Se questo parametro è -1, si presuppone che la barra di stato sia una barra di stato in modalità semplice.|

### <a name="return-value"></a>Valore restituito

Handle dell'icona se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio SB_GETICON,](/windows/win32/Controls/sb-geticon) descritto in Windows SDK.

Un controllo barra di stato è costituito da una riga di riquadri di output di testo, noti anche come parti. Per ulteriori informazioni sulla barra di stato, vedere [Implementazione](../../mfc/status-bar-implementation-in-mfc.md) della barra di stato in MFC e [Impostazione della modalità di un oggetto CStatusBarCtrl](../../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita una variabile, `m_statusBar`, utilizzata per accedere al controllo barra di stato corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_3.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene copiata un'icona in due riquadri del controllo barra di stato corrente. In una sezione precedente dell'esempio di codice è stato creato un controllo barra di stato con tre riquadri e quindi è stata aggiunta un'icona al primo riquadro. In questo esempio l'icona viene recuperata dal primo riquadro e quindi aggiunta al secondo e terzo riquadro.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_4.cpp)]

## <a name="cstatusbarctrlgetparts"></a><a name="getparts"></a>CStatusBarCtrl::GetParts

Recupera un conteggio delle parti in un controllo barra di stato.

```
int GetParts(
    int nParts,
    int* pParts) const;
```

### <a name="parameters"></a>Parametri

*nParti*<br/>
Numero di parti per le quali recuperare le coordinate. Se questo parametro è maggiore del numero di parti nel controllo, il messaggio recupera le coordinate solo per le parti esistenti.

*pParti*<br/>
Indirizzo di una matrice di interi con lo stesso numero di elementi del numero di parti specificato da *nParts*. Ogni elemento nella matrice riceve la coordinata client del bordo destro della parte corrispondente. Se un elemento è impostato su - 1, la posizione del bordo destro della parte si estende fino al bordo destro della barra di stato.

### <a name="return-value"></a>Valore restituito

Numero di parti nel controllo in caso di esito positivo o zero in caso contrario.

### <a name="remarks"></a>Osservazioni

Questa funzione membro recupera anche la coordinata del bordo destro del numero specificato di parti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#3](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_5.cpp)]

## <a name="cstatusbarctrlgetrect"></a><a name="getrect"></a>CStatusBarCtrl::GetRect

Recupera il rettangolo di delimitazione di una parte in un controllo barra di stato.

```
BOOL GetRect(
    int nPane,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nRiquadro*<br/>
Indice in base zero della parte il cui rettangolo di delimitazione deve essere recuperato.

*Lprect*<br/>
Indirizzo di una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che riceve il rettangolo di delimitazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#4](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_6.cpp)]

## <a name="cstatusbarctrlgettext"></a><a name="gettext"></a>CStatusBarCtrl::GetText

Recupera il testo dalla parte specificata di un controllo barra di stato.

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

*nRiquadro*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pTipo*<br/>
Puntatore a un numero intero che riceve le informazioni sul tipo. Il tipo può essere uno dei seguenti valori:

- **0** Il testo viene disegnato con un bordo inferiore al piano della barra di stato.

- SBT_NOBORDERS Il testo viene disegnato senza bordi.

- SBT_POPOUT Il testo viene disegnato con un bordo più alto del piano della barra di stato.

- SBT_OWNERDRAW Se il testo ha il tipo di disegno SBT_OWNERDRAW, *pType* riceve questo messaggio e restituisce il valore a 32 bit associato al testo anziché il tipo di lunghezza e operazione.

### <a name="return-value"></a>Valore restituito

Lunghezza, in caratteri, del testo o di un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il testo corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#5](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_7.cpp)]

## <a name="cstatusbarctrlgettextlength"></a><a name="gettextlength"></a>CStatusBarCtrl::GetTextLength

Recupera la lunghezza, in caratteri, del testo dalla parte specificata di un controllo barra di stato.

```
int GetTextLength(
    int nPane,
    int* pType = NULL) const;
```

### <a name="parameters"></a>Parametri

*nRiquadro*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pTipo*<br/>
Puntatore a un numero intero che riceve le informazioni sul tipo. Il tipo può essere uno dei seguenti valori:

- **0** Il testo viene disegnato con un bordo inferiore al piano della barra di stato.

- SBT_NOBORDERS Il testo viene disegnato senza bordi.

- SBT_OWNERDRAW Il testo viene disegnato dalla finestra padre.

- SBT_POPOUT Il testo viene disegnato con un bordo più alto del piano della barra di stato.

### <a name="return-value"></a>Valore restituito

Lunghezza, in caratteri, del testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#6](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_8.cpp)]

## <a name="cstatusbarctrlgettiptext"></a><a name="gettiptext"></a>CStatusBarCtrl::GetTipText

Recupera il testo della descrizione comando per un riquadro in una barra di stato.

```
CString GetTipText(int nPane) const;
```

### <a name="parameters"></a>Parametri

*nRiquadro*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il testo da utilizzare nella descrizione comando.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_GETTIPTEXT](/windows/win32/Controls/sb-gettiptext), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#7](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_9.cpp)]

## <a name="cstatusbarctrlissimple"></a><a name="issimple"></a>CStatusBarCtrl::IsSimple

Controlla un controllo finestra di stato per determinare se è in modalità semplice.

```
BOOL IsSimple() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo finestra di stato è in modalità semplice; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_ISSIMPLE](/windows/win32/Controls/sb-issimple), come descritto in Windows SDK.

## <a name="cstatusbarctrlsetbkcolor"></a><a name="setbkcolor"></a>CStatusBarCtrl::SetBkColor

Imposta il colore di sfondo in una barra di stato.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*Cr*<br/>
ColorREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per fare in modo che la barra di stato utilizzi il colore di sfondo predefinito.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo predefinito precedente.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETBKCOLOR](/windows/win32/Controls/sb-setbkcolor), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#8](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_10.cpp)]

## <a name="cstatusbarctrlseticon"></a><a name="seticon"></a>CStatusBarCtrl::SetIcon

Imposta l'icona per un riquadro in una barra di stato.

```
BOOL SetIcon(
    int nPane,
    HICON hIcon);
```

### <a name="parameters"></a>Parametri

*nRiquadro*<br/>
Indice in base zero del riquadro che riceverà l'icona. Se questo parametro è -1, si presuppone che la barra di stato sia una barra di stato semplice.

*hIcon*<br/>
Gestire l'icona da impostare. Se questo valore è NULL, l'icona viene rimossa dalla parte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETICON](/windows/win32/Controls/sb-seticon), come descritto in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CStatusBarCtrl::SetBkColor](#setbkcolor).

## <a name="cstatusbarctrlsetminheight"></a><a name="setminheight"></a>CStatusBarCtrl::SetMinHeight

Imposta l'altezza minima dell'area di disegno di un controllo barra di stato.

```cpp
void SetMinHeight(int nMin);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Altezza minima, in pixel, del controllo.

### <a name="remarks"></a>Osservazioni

L'altezza minima è la somma di *nMin* e due volte la larghezza, in pixel, del bordo verticale del controllo barra di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#9](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_11.cpp)]

## <a name="cstatusbarctrlsetparts"></a><a name="setparts"></a>CStatusBarCtrl::SetParts

Imposta il numero di parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.

```
BOOL SetParts(
    int nParts,
    int* pWidths);
```

### <a name="parameters"></a>Parametri

*nParti*<br/>
Numero di parti da impostare. Il numero di parti non può essere maggiore di 255.

*pLarghezze*<br/>
Indirizzo di una matrice di interi con lo stesso numero di elementi delle parti specificate da *nParts*. Ogni elemento nella matrice specifica la posizione, in coordinate client, del bordo destro della parte corrispondente. Se un elemento è - 1, la posizione del bordo destro per tale parte si estende fino al bordo destro del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#10](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_12.cpp)]

## <a name="cstatusbarctrlsetsimple"></a><a name="setsimple"></a>CStatusBarCtrl::SetSimple

Specifica se un controllo barra di stato visualizza testo semplice o tutte le parti del controllo impostate da una precedente chiamata a [SetParts](#setparts).

```
BOOL SetSimple(BOOL bSimple = TRUE);
```

### <a name="parameters"></a>Parametri

*bSemplice*<br/>
[in] Flag di tipo di visualizzazione. Se questo parametro è TRUE, il controllo visualizza testo semplice; se è FALSE, visualizza più parti.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Osservazioni

Se l'applicazione modifica il controllo barra di stato da non semplice a semplice o viceversa, il sistema ridisegna immediatamente il controllo.

## <a name="cstatusbarctrlsettext"></a><a name="settext"></a>CStatusBarCtrl::SetText

Imposta il testo nella parte specificata di un controllo barra di stato.

```
BOOL SetText(
    LPCTSTR lpszText,
    int nPane,
    int nType);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Indirizzo di una stringa con terminazione null che specifica il testo da impostare. Se *nType* è SBT_OWNERDRAW, *lpszText* rappresenta 32 bit di dati.

*nRiquadro*<br/>
Indice in base zero della parte da impostare. Se questo valore è 255, si presuppone che il controllo barra di stato sia un controllo semplice solo con una parte.

*nType*<br/>
Tipo di operazione di disegno. Vedere [SB_SETTEXT messaggio](/windows/win32/Controls/sb-settext) per un elenco dei valori possibili.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il messaggio invalida la parte del controllo che è stata modificata, facendo in modo che visualizzi il nuovo testo alla successiva ricezione del messaggio WM_PAINT del controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#11](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_13.cpp)]

## <a name="cstatusbarctrlsettiptext"></a><a name="settiptext"></a>CStatusBarCtrl::SetTipText

Imposta il testo della descrizione comando per un riquadro in una barra di stato.

```cpp
void SetTipText(
    int nPane,
    LPCTSTR pszTipText);
```

### <a name="parameters"></a>Parametri

*nRiquadro*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

*pszTipText (testo pszTipText)*<br/>
Puntatore a una stringa contenente il testo della descrizione comando.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETTIPTEXT](/windows/win32/Controls/sb-settiptext), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#12](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_14.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)
