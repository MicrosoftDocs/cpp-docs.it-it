---
description: 'Altre informazioni su: classe CStatusBarCtrl'
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
ms.openlocfilehash: 424edbd2d78fc82c7c78315dea1d430c6ea9459d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342634"
---
# <a name="cstatusbarctrl-class"></a>Classe CStatusBarCtrl

Fornisce la funzionalità del controllo barra di stato comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CStatusBarCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CStatusBarCtrl:: CStatusBarCtrl](#cstatusbarctrl)|Costruisce un oggetto `CStatusBarCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CStatusBarCtrl:: create](#create)|Crea un controllo barra di stato e lo collega a un `CStatusBarCtrl` oggetto.|
|[CStatusBarCtrl:: CreateEx](#createex)|Crea un controllo barra di stato con gli stili estesi di Windows specificati e lo collega a un `CStatusBarCtrl` oggetto.|
|[CStatusBarCtrl::D rawItem](#drawitem)|Viene chiamato quando viene modificato un aspetto visivo di un controllo della barra di stato del disegnatore del proprietario.|
|[CStatusBarCtrl:: GetBorders](#getborders)|Recupera le larghezze correnti dei bordi orizzontali e verticali di un controllo barra di stato.|
|[CStatusBarCtrl:: GetIcon](#geticon)|Recupera l'icona per una parte, nota anche come riquadro, nel controllo barra di stato corrente.|
|[CStatusBarCtrl:: GetParts](#getparts)|Recupera un conteggio delle parti in un controllo barra di stato.|
|[CStatusBarCtrl:: GetRect](#getrect)|Recupera il rettangolo di delimitazione di una parte in un controllo barra di stato.|
|[CStatusBarCtrl:: GetText](#gettext)|Recupera il testo dalla parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl:: GetTextLength](#gettextlength)|Recuperare la lunghezza, in caratteri, del testo dalla parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl:: GetTipText](#gettiptext)|Recupera il testo della descrizione comando per un riquadro in una barra di stato.|
|[CStatusBarCtrl:: Simple](#issimple)|Controlla un controllo della finestra di stato per determinare se è in modalità semplice.|
|[CStatusBarCtrl:: SetBkColor](#setbkcolor)|Imposta il colore di sfondo di una barra di stato.|
|[CStatusBarCtrl:: seicon](#seticon)|Imposta l'icona per un riquadro in una barra di stato.|
|[CStatusBarCtrl:: SetMinHeight](#setminheight)|Imposta l'altezza minima dell'area di disegno di un controllo barra di stato.|
|[CStatusBarCtrl:: separts](#setparts)|Imposta il numero di parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.|
|[CStatusBarCtrl:: sesimple](#setsimple)|Specifica se un controllo barra di stato Visualizza testo semplice o Visualizza tutte le parti di controllo impostate da una chiamata precedente a `SetParts` .|
|[CStatusBarCtrl:: SetText](#settext)|Imposta il testo nella parte specificata di un controllo barra di stato.|
|[CStatusBarCtrl:: SetTipText](#settiptext)|Imposta il testo della descrizione comando per un riquadro in una barra di stato.|

## <a name="remarks"></a>Commenti

Un "controllo barra di stato" è una finestra orizzontale, in genere visualizzata nella parte inferiore di una finestra padre, in cui un'applicazione può visualizzare vari tipi di informazioni sullo stato. Il controllo barra di stato può essere diviso in parti per visualizzare più di un tipo di informazioni.

Questo controllo (e pertanto la `CStatusBarCtrl` classe) è disponibile solo per i programmi in esecuzione in windows 95/98 e Windows NT versione 3,51 e successive.

Per altre informazioni sull'uso di `CStatusBarCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [uso di CStatusBarCtrl](../../mfc/using-cstatusbarctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatusBarCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cstatusbarctrlcreate"></a><a name="create"></a> CStatusBarCtrl:: create

Crea un controllo barra di stato e lo collega a un `CStatusBarCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili di controllo barra di stato elencati negli [stili dei controlli comuni](/windows/win32/Controls/common-control-styles) nell'Windows SDK. Questo parametro deve includere lo stile del WS_CHILD. Deve inoltre includere lo stile WS_VISIBLE.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo barra di stato. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo barra di stato, in genere un `CDialog` . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Si costruisce un `CStatusBarCtrl` in due passaggi. Chiamare innanzitutto il costruttore, quindi chiamare `Create` , che crea il controllo barra di stato e lo collega all' `CStatusBarCtrl` oggetto.

La posizione predefinita di una finestra di stato si trova lungo la parte inferiore della finestra padre, ma è possibile specificare lo stile CCS_TOP per visualizzarlo nella parte superiore dell'area client della finestra padre. È possibile specificare lo stile SBARS_SIZEGRIP per includere un riquadro di ridimensionamento all'estremità destra della finestra di stato. Non è consigliabile combinare gli stili CCS_TOP e SBARS_SIZEGRIP, perché il riquadro di ridimensionamento risultante non è funzionale anche se il sistema lo disegna nella finestra di stato.

Per creare una barra di stato con gli stili estesi della finestra, chiamare [CStatusBarCtrl:: CreateEx](#createex) anziché `Create` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_1.cpp)]

## <a name="cstatusbarctrlcreateex"></a><a name="createex"></a> CStatusBarCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all' `CStatusBarCtrl` oggetto.

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
Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili di controllo barra di stato elencati negli [stili dei controlli comuni](/windows/win32/Controls/common-control-styles) nell'Windows SDK. Questo parametro deve includere lo stile del WS_CHILD. Deve inoltre includere lo stile WS_VISIBLE.

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

## <a name="cstatusbarctrlcstatusbarctrl"></a><a name="cstatusbarctrl"></a> CStatusBarCtrl:: CStatusBarCtrl

Costruisce un oggetto `CStatusBarCtrl`.

```
CStatusBarCtrl();
```

## <a name="cstatusbarctrldrawitem"></a><a name="drawitem"></a> CStatusBarCtrl::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un controllo barra di stato del proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) contenente informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Commenti

Il `itemAction` membro della `DRAWITEMSTRUCT` struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto disegnato dal proprietario `CStatusBarCtrl` .

L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro venga terminata.

## <a name="cstatusbarctrlgetborders"></a><a name="getborders"></a> CStatusBarCtrl:: GetBorders

Recupera le larghezze correnti del controllo barra di stato dei bordi orizzontale e verticale e dello spazio tra i rettangoli.

```
BOOL GetBorders(int* pBorders) const;

BOOL GetBorders(
    int& nHorz,
    int& nVert,
    int& nSpacing) const;
```

### <a name="parameters"></a>Parametri

*pBorders*<br/>
Indirizzo di una matrice di interi con tre elementi. Il primo elemento riceve la larghezza del bordo orizzontale, il secondo riceve la larghezza del bordo verticale e il terzo riceve la larghezza del bordo tra i rettangoli.

*nHorz*<br/>
Riferimento a un intero che riceve la larghezza del bordo orizzontale.

*nverti*<br/>
Riferimento a un intero che riceve la larghezza del bordo verticale.

*nSpacing*<br/>
Riferimento a un intero che riceve la larghezza del bordo tra i rettangoli.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questi bordi determinano la spaziatura tra il bordo esterno del controllo e i rettangoli all'interno del controllo che contengono testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_2.cpp)]

## <a name="cstatusbarctrlgeticon"></a><a name="geticon"></a> CStatusBarCtrl:: GetIcon

Recupera l'icona per una parte, nota anche come riquadro, nel controllo barra di stato corrente.

```
HICON GetIcon(int iPart) const;
```

### <a name="parameters"></a>Parametri

*iPart*\
in Indice in base zero della parte che contiene l'icona da recuperare. Se questo parametro è-1, si presuppone che la barra di stato sia una barra di stato in modalità semplice.

### <a name="return-value"></a>Valore restituito

Handle per l'icona se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [SB_GETICON](/windows/win32/Controls/sb-geticon) , descritto nel Windows SDK.

Un controllo barra di stato è costituito da una riga di riquadri di output di testo, noti anche come parti. Per ulteriori informazioni sulla barra di stato, vedere [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [impostazione della modalità di un oggetto CStatusBarCtrl](../../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita una variabile, `m_statusBar` , che viene utilizzata per accedere al controllo barra di stato corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_3.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene copiata un'icona in due riquadri del controllo barra di stato corrente. In una sezione precedente dell'esempio di codice è stato creato un controllo barra di stato con tre riquadri, quindi è stata aggiunta un'icona al primo riquadro. In questo esempio viene recuperata l'icona dal primo riquadro, quindi viene aggiunta al secondo e al terzo riquadro.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_4.cpp)]

## <a name="cstatusbarctrlgetparts"></a><a name="getparts"></a> CStatusBarCtrl:: GetParts

Recupera un conteggio delle parti in un controllo barra di stato.

```
int GetParts(
    int nParts,
    int* pParts) const;
```

### <a name="parameters"></a>Parametri

*nParts*<br/>
Numero di parti per le quali recuperare le coordinate. Se questo parametro è maggiore del numero di parti del controllo, il messaggio recupera le coordinate solo per le parti esistenti.

*pParts*<br/>
Indirizzo di una matrice di interi con lo stesso numero di elementi del numero di parti specificato da *nParts*. Ogni elemento nella matrice riceve la coordinata client del bordo destro della parte corrispondente. Se un elemento è impostato su-1, la posizione del bordo destro della parte viene estesa al bordo destro della barra di stato.

### <a name="return-value"></a>Valore restituito

Numero di parti nel controllo in caso di esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Questa funzione membro recupera anche la coordinata del bordo destro del numero specificato di parti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#3](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_5.cpp)]

## <a name="cstatusbarctrlgetrect"></a><a name="getrect"></a> CStatusBarCtrl:: GetRect

Recupera il rettangolo di delimitazione di una parte in un controllo barra di stato.

```
BOOL GetRect(
    int nPane,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero della parte di cui deve essere recuperato il rettangolo di delimitazione.

*lpRect*<br/>
Indirizzo di una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che riceve il rettangolo di delimitazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#4](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_6.cpp)]

## <a name="cstatusbarctrlgettext"></a><a name="gettext"></a> CStatusBarCtrl:: GetText

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

*nPane*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pType*<br/>
Puntatore a un intero che riceve le informazioni sul tipo. Il tipo può essere uno di questi valori:

- **0** il testo viene disegnato con un bordo da visualizzare più in basso rispetto al piano della barra di stato.

- SBT_NOBORDERS il testo viene disegnato senza bordi.

- SBT_POPOUT il testo viene disegnato con un bordo da visualizzare più in alto rispetto al piano della barra di stato.

- SBT_OWNERDRAW se il testo presenta il tipo di disegno SBT_OWNERDRAW, *pType* riceve questo messaggio e restituisce il valore a 32 bit associato al testo anziché la lunghezza e il tipo di operazione.

### <a name="return-value"></a>Valore restituito

Lunghezza, in caratteri, del testo o di un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il testo corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#5](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_7.cpp)]

## <a name="cstatusbarctrlgettextlength"></a><a name="gettextlength"></a> CStatusBarCtrl:: GetTextLength

Recupera la lunghezza, in caratteri, del testo dalla parte specificata di un controllo barra di stato.

```
int GetTextLength(
    int nPane,
    int* pType = NULL) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero della parte da cui recuperare il testo.

*pType*<br/>
Puntatore a un intero che riceve le informazioni sul tipo. Il tipo può essere uno di questi valori:

- **0** il testo viene disegnato con un bordo da visualizzare più in basso rispetto al piano della barra di stato.

- SBT_NOBORDERS il testo viene disegnato senza bordi.

- SBT_OWNERDRAW il testo viene disegnato dalla finestra padre.

- SBT_POPOUT il testo viene disegnato con un bordo da visualizzare più in alto rispetto al piano della barra di stato.

### <a name="return-value"></a>Valore restituito

Lunghezza, in caratteri, del testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#6](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_8.cpp)]

## <a name="cstatusbarctrlgettiptext"></a><a name="gettiptext"></a> CStatusBarCtrl:: GetTipText

Recupera il testo della descrizione comando per un riquadro in una barra di stato.

```
CString GetTipText(int nPane) const;
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il testo da utilizzare nella descrizione comando.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [SB_GETTIPTEXT](/windows/win32/Controls/sb-gettiptext)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#7](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_9.cpp)]

## <a name="cstatusbarctrlissimple"></a><a name="issimple"></a> CStatusBarCtrl:: Simple

Controlla un controllo della finestra di stato per determinare se è in modalità semplice.

```
BOOL IsSimple() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo della finestra di stato è in modalità semplice; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [SB_ISSIMPLE](/windows/win32/Controls/sb-issimple)del messaggio Win32, come descritto nel Windows SDK.

## <a name="cstatusbarctrlsetbkcolor"></a><a name="setbkcolor"></a> CStatusBarCtrl:: SetBkColor

Imposta il colore di sfondo di una barra di stato.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*CR*<br/>
Valore COLORREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per fare in modo che la barra di stato usi il colore di sfondo predefinito.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo predefinito precedente.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [SB_SETBKCOLOR](/windows/win32/Controls/sb-setbkcolor)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#8](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_10.cpp)]

## <a name="cstatusbarctrlseticon"></a><a name="seticon"></a> CStatusBarCtrl:: seicon

Imposta l'icona per un riquadro in una barra di stato.

```
BOOL SetIcon(
    int nPane,
    HICON hIcon);
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero del riquadro che riceverà l'icona. Se questo parametro è-1, si presuppone che la barra di stato sia una barra di stato semplice.

*hIcon*<br/>
Handle per l'icona da impostare. Se questo valore è NULL, l'icona viene rimossa dalla parte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [SB_SETICON](/windows/win32/Controls/sb-seticon)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CStatusBarCtrl:: SetBkColor](#setbkcolor).

## <a name="cstatusbarctrlsetminheight"></a><a name="setminheight"></a> CStatusBarCtrl:: SetMinHeight

Imposta l'altezza minima dell'area di disegno di un controllo barra di stato.

```cpp
void SetMinHeight(int nMin);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
Altezza minima, in pixel, del controllo.

### <a name="remarks"></a>Commenti

L'altezza minima è la somma di *nmin* e il doppio della larghezza, in pixel, del bordo verticale del controllo barra di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#9](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_11.cpp)]

## <a name="cstatusbarctrlsetparts"></a><a name="setparts"></a> CStatusBarCtrl:: separts

Imposta il numero di parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.

```
BOOL SetParts(
    int nParts,
    int* pWidths);
```

### <a name="parameters"></a>Parametri

*nParts*<br/>
Numero di parti da impostare. Il numero di parti non può essere maggiore di 255.

*pWidths*<br/>
Indirizzo di una matrice di interi con lo stesso numero di elementi delle parti specificate da *nParts*. Ogni elemento nella matrice specifica la posizione, in coordinate client, del bordo destro della parte corrispondente. Se un elemento è-1, la posizione del bordo destro per tale parte si estende al bordo destro del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#10](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_12.cpp)]

## <a name="cstatusbarctrlsetsimple"></a><a name="setsimple"></a> CStatusBarCtrl:: sesimple

Specifica se un controllo barra di stato Visualizza testo semplice o Visualizza tutte le parti di controllo impostate da una chiamata precedente a [Separts](#setparts).

```
BOOL SetSimple(BOOL bSimple = TRUE);
```

### <a name="parameters"></a>Parametri

*bSimple*<br/>
in Flag di tipo di visualizzazione. Se questo parametro è TRUE, il controllo Visualizza un testo semplice; Se è FALSE, vengono visualizzate più parti.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Commenti

Se l'applicazione modifica il controllo della barra di stato da non semplice a semplice o viceversa, il sistema riestrae immediatamente il controllo.

## <a name="cstatusbarctrlsettext"></a><a name="settext"></a> CStatusBarCtrl:: SetText

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

*nPane*<br/>
Indice in base zero della parte da impostare. Se questo valore è 255, si presuppone che il controllo barra di stato sia un controllo semplice solo con una parte.

*nType*<br/>
Tipo di operazione di disegno. Per un elenco di valori possibili, vedere [SB_SETTEXT messaggio](/windows/win32/Controls/sb-settext) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il messaggio invalida la parte del controllo che è stata modificata, causando la visualizzazione del nuovo testo quando il controllo riceve il messaggio di WM_PAINT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#11](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_13.cpp)]

## <a name="cstatusbarctrlsettiptext"></a><a name="settiptext"></a> CStatusBarCtrl:: SetTipText

Imposta il testo della descrizione comando per un riquadro in una barra di stato.

```cpp
void SetTipText(
    int nPane,
    LPCTSTR pszTipText);
```

### <a name="parameters"></a>Parametri

*nPane*<br/>
Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.

*pszTipText*<br/>
Puntatore a una stringa contenente il testo della descrizione comando.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [SB_SETTIPTEXT](/windows/win32/Controls/sb-settiptext)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatusBarCtrl#12](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_14.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)
