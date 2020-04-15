---
title: Classe CLinkCtrl
ms.date: 11/04/2016
f1_keywords:
- CLinkCtrl
- AFXCMN/CLinkCtrl
- AFXCMN/CLinkCtrl::CLinkCtrl
- AFXCMN/CLinkCtrl::Create
- AFXCMN/CLinkCtrl::CreateEx
- AFXCMN/CLinkCtrl::GetIdealHeight
- AFXCMN/CLinkCtrl::GetIdealSize
- AFXCMN/CLinkCtrl::GetItem
- AFXCMN/CLinkCtrl::GetItemID
- AFXCMN/CLinkCtrl::GetItemState
- AFXCMN/CLinkCtrl::GetItemUrl
- AFXCMN/CLinkCtrl::HitTest
- AFXCMN/CLinkCtrl::SetItem
- AFXCMN/CLinkCtrl::SetItemID
- AFXCMN/CLinkCtrl::SetItemState
- AFXCMN/CLinkCtrl::SetItemUrl
helpviewer_keywords:
- CLinkCtrl [MFC], CLinkCtrl
- CLinkCtrl [MFC], Create
- CLinkCtrl [MFC], CreateEx
- CLinkCtrl [MFC], GetIdealHeight
- CLinkCtrl [MFC], GetIdealSize
- CLinkCtrl [MFC], GetItem
- CLinkCtrl [MFC], GetItemID
- CLinkCtrl [MFC], GetItemState
- CLinkCtrl [MFC], GetItemUrl
- CLinkCtrl [MFC], HitTest
- CLinkCtrl [MFC], SetItem
- CLinkCtrl [MFC], SetItemID
- CLinkCtrl [MFC], SetItemState
- CLinkCtrl [MFC], SetItemUrl
ms.assetid: d1cd876a-ecca-42db-8ac4-9cd327df0cd4
ms.openlocfilehash: aa1f630b448c60a0eeb6a905ed6eef6f84a2ff8c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372248"
---
# <a name="clinkctrl-class"></a>Classe CLinkCtrl

Fornisce la funzionalità del controllo SysLink comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CLinkCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CLinkCtrl::CLinkCtrl](#clinkctrl)|Costruisce un oggetto `CLinkCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CLinkCtrl::Crea](#create)|Crea un controllo di collegamento e `CLinkCtrl` lo associa a un oggetto.|
|[CLinkCtrl::CreateEx](#createex)|Crea un controllo di collegamento con stili `CLinkCtrl` estesi e lo associa a un oggetto.|
|[CLinkCtrl::GetIdealHeight](#getidealheight)|Recupera l'altezza ideale del controllo collegamento.|
|[CLinkCtrl::GetIdealSize](#getidealsize)|Calcola l'altezza preferita del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.|
|[CLinkCtrl::GetItem](#getitem)|Recupera gli stati e gli attributi di un elemento di controllo collegamento.|
|[CLinkCtrl::GetItemID](#getitemid)|Recupera l'ID di un elemento del controllo collegamento.|
|[CLinkCtrl::GetItemState](#getitemstate)|Recupera lo stato dell'elemento di controllo collegamento.|
|[CLinkCtrl::GetItemUrl](#getitemurl)|Recupera l'URL rappresentato dall'elemento di controllo collegamento.|
|[CLinkCtrl::HitTest](#hittest)|Determina se l'utente ha fatto clic sul collegamento specificato.|
|[CLinkCtrl::SetItem](#setitem)|Imposta gli stati e gli attributi di un elemento di controllo collegamento.|
|[CLinkCtrl::SetItemID](#setitemid)|Imposta l'ID di un elemento del controllo collegamento.|
|[CLinkCtrl::SetItemState](#setitemstate)|Imposta lo stato dell'elemento di controllo del collegamento.|
|[CLinkCtrl::SetItemUrl](#setitemurl)|Imposta l'URL rappresentato dall'elemento di controllo del collegamento.|

## <a name="remarks"></a>Osservazioni

Un "controllo di collegamento" fornisce un modo pratico per incorporare collegamenti ipertestuali in una finestra. Il controllo effettivo è una finestra che esegue il rendering del testo contrassegnato e avvia le applicazioni appropriate quando l'utente fa clic su un collegamento incorporato. Più collegamenti sono supportati all'interno di un controllo ed è accessibile da un indice in base zero.

Questo controllo (e `CLinkCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows XP e versioni successive.

Per ulteriori informazioni, vedere [Controllo SysLink](/windows/win32/Controls/syslink-overview) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CLinkCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="clinkctrlclinkctrl"></a><a name="clinkctrl"></a>CLinkCtrl::CLinkCtrl

Costruisce un oggetto `CLinkCtrl`.

```
CLinkCtrl();
```

## <a name="clinkctrlcreate"></a><a name="create"></a>CLinkCtrl::Crea

Crea un controllo di collegamento e `CLinkCtrl` lo associa a un oggetto.

```
virtual BOOL Create(
    LPCTSTR lpszLinkMarkup,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);

virtual BOOL Create(DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszLinkMarkup (informazioni in due)*<br/>
Puntatore a una stringa con terminazione zero che contiene il testo contrassegnato da visualizzare. Per ulteriori informazioni, vedere la sezione "Accesso a i commenti e ai collegamenti" nell'argomento [Overview of SysLink Controls](/windows/win32/Controls/syslink-overview).

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili di controllo. Per ulteriori informazioni, `Windows SDK` vedere Stili di controllo [comuni](/windows/win32/Controls/common-control-styles) nella pagina .

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo collegamento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo collegamento.

### <a name="return-value"></a>Valore restituito

TRUESe l'inizializzazione ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Costruire un `CLinkCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CLinkCtrl` il controllo collegamento e lo associa all'oggetto . Se si desidera utilizzare gli stili di finestre estese con il `Create`controllo, chiamare [CLinkCtrl::CreateEx](#createex) anziché .

La seconda forma `Create` del metodo è deprecata. Utilizzare il primo form che specifica il parametro *lpszLinkMarkup.*

### <a name="example"></a>Esempio

Nell'esempio di codice riportato `m_Link1` `m_Link2`di seguito vengono definite due variabili, denominate e , utilizzate per accedere a due controlli collegamento.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#2](../../mfc/reference/codesnippet/cpp/clinkctrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene creato un controllo collegamento in base alla posizione di un altro controllo collegamento. Il caricatore di risorse crea il primo controllo di collegamento all'avvio dell'applicazione. Quando l'applicazione immette il OnInitDialog metodo, si crea il secondo controllo collegamento relativo alla posizione del primo controllo collegamento. Quindi si ridimensiona il secondo controllo di collegamento per adattarsi al testo visualizzato.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#1](../../mfc/reference/codesnippet/cpp/clinkctrl-class_2.cpp)]

## <a name="clinkctrlcreateex"></a><a name="createex"></a>CLinkCtrl::CreateEx

Crea un controllo di collegamento con stili `CLinkCtrl` estesi e lo associa a un oggetto.

```
virtual BOOL CreateEx(
    LPCTSTR lpszLinkMarkup,
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);

virtual BOOL CreateEx(DWORD  dwExStyle,
    DWORD  dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT  nID);
```

### <a name="parameters"></a>Parametri

*lpszLinkMarkup (informazioni in due)*<br/>
Puntatore a una stringa con terminazione zero che contiene il testo contrassegnato da visualizzare. Per ulteriori informazioni, vedere la sezione "Accesso a i commenti e ai collegamenti" nell'argomento [Overview of SysLink Controls](/windows/win32/Controls/syslink-overview).

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo collegamento. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili di controllo. Per altre informazioni, vedere [Stili di controllo comuni](/windows/win32/Controls/common-control-styles) in Windows SDK.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo collegamento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo collegamento.

### <a name="return-value"></a>Valore restituito

TRUESe l'inizializzazione ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` anziché [Crea](#create) per applicare costanti di stile Windows estese.

La seconda forma `CreateEx` del metodo è deprecata. Utilizzare il primo form che specifica il parametro *lpszLinkMarkup.*

## <a name="clinkctrlgetidealheight"></a><a name="getidealheight"></a>CLinkCtrl::GetIdealHeight

Recupera l'altezza ideale del controllo collegamento.

```
int GetIdealHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza ideale del controllo, in pixel.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETIDEALHEIGHT](/windows/win32/Controls/lm-getidealheight), come descritto in Windows SDK.

## <a name="clinkctrlgetidealsize"></a><a name="getidealsize"></a>CLinkCtrl::GetIdealSize

Calcola l'altezza preferita del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.

```
int GetIdealSize(
    int cxMaxWidth,
    SIZE* pSize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*CxMaxWidth (larghezza massima)*|[in] Larghezza massima del collegamento, in pixel.|
|[fuori] \* *pDimensioni*|Puntatore a una struttura [DIMENSIONE di](/windows/win32/api/windef/ns-windef-size) Windows. Quando termina, il *cy* membro cy `SIZE` della struttura contiene l'altezza ideale del testo del collegamento per la larghezza del testo del collegamento specificata da *cxMaxWidth*. Il membro *cx* della struttura contiene la larghezza del testo del collegamento effettivamente necessaria.|

### <a name="return-value"></a>Valore restituito

Altezza preferita del testo del collegamento, in pixel. Il valore restituito è uguale *cy* al valore `SIZE` del membro cy della struttura.

### <a name="remarks"></a>Osservazioni

Per un esempio `GetIdealSize` del metodo, vedere l'esempio in [CLinkCtrl::Create](#create).

Questo metodo invia il messaggio [LM_GETIDEALSIZE,](/windows/win32/Controls/lm-getidealsize) descritto in Windows SDK.

## <a name="clinkctrlgetitem"></a><a name="getitem"></a>CLinkCtrl::GetItem

Recupera gli stati e gli attributi di un elemento di controllo collegamento.

```
BOOL GetItem(PLITEM pItem) const;
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore a una struttura [LITEM](/windows/win32/api/commctrl/ns-commctrl-litem) per ricevere informazioni sull'articolo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETITEM](/windows/win32/Controls/lm-getitem), come descritto in Windows SDK.

## <a name="clinkctrlgetitemid"></a><a name="getitemid"></a>CLinkCtrl::GetItemID

Recupera l'ID di un elemento del controllo collegamento.

```
BOOL GetItemID(
    int iLink,
    CString& strID) const;

BOOL GetItemID(
    int iLink,
    LPWSTR szID,
    UINT cchID) const;
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*strID (strID)*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'ID dell'elemento specificato.

*szID (szID)*<br/>
Stringa con terminazione null contenente l'ID dell'elemento specificato.

*cchID*<br/>
Dimensione in caratteri del buffer *szID.*

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

> [!NOTE]
> Questa funzione restituisce anche FALSE se il buffer di *szID o strID* è minore di MAX_LINKID_TEXT.

### <a name="remarks"></a>Osservazioni

Recupera l'ID di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/win32/Controls/lm-getitem) in Windows SDK.

## <a name="clinkctrlgetitemstate"></a><a name="getitemstate"></a>CLinkCtrl::GetItemState

Recupera lo stato dell'elemento di controllo collegamento.

```
BOOL GetItemState(
    int iLink,
    UINT* pnState,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED) const;
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*pnState*<br/>
Valore dell'elemento di stato specificato.

*maschera di stato*<br/>
Combinazione di flag che descrivono l'elemento di stato da ottenere. Per un elenco di valori, `state` vedere la descrizione del membro nella struttura [LITEM.](/windows/win32/api/commctrl/ns-commctrl-litem) Gli elementi consentiti sono `state`identici a quelli consentiti in .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Recupera il valore dell'elemento di stato specificato di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/win32/Controls/lm-getitem) in Windows SDK.

## <a name="clinkctrlgetitemurl"></a><a name="getitemurl"></a>CLinkCtrl::GetItemUrl

Recupera l'URL rappresentato dall'elemento di controllo collegamento.

```
BOOL GetItemUrl(
    int iLink,
    CString& strUrl) const;

BOOL GetItemUrl(
    int iLink,
    LPWSTR szUrl,
    UINT cchUrl) const;
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*strUrl*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'URL rappresentato dall'elemento specificato

*szUrl (informazioni in base a un url o*<br/>
Stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato

*cchUrl (informazioni in inglese)*<br/>
Dimensione in caratteri del buffer *szURL.*

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

> [!NOTE]
> Questa funzione restituisce anche FALSE se il buffer di *szUrl o strUrl* è più piccolo di MAX_LINKID_TEXT.

### <a name="remarks"></a>Osservazioni

Recupera l'URL rappresentato dall'elemento di controllo collegamento specificato. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/win32/Controls/lm-getitem) in Windows SDK.

## <a name="clinkctrlhittest"></a><a name="hittest"></a>CLinkCtrl::HitTest

Determina se l'utente ha fatto clic sul collegamento specificato.

```
BOOL HitTest(PLHITTESTINFO phti) const;
```

### <a name="parameters"></a>Parametri

*phti*<br/>
Puntatore `LHITTESTINFO` a una struttura contenente informazioni sul collegamento su cui l'utente ha fatto clic.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_HITTEST](/windows/win32/Controls/lm-hittest), come descritto in Windows SDK.

## <a name="clinkctrlsetitem"></a><a name="setitem"></a>CLinkCtrl::SetItem

Imposta gli stati e gli attributi di un elemento di controllo collegamento.

```
BOOL SetItem(PLITEM pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore a una struttura [LITEM](/windows/win32/api/commctrl/ns-commctrl-litem) contenente le informazioni da impostare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_SETITEM](/windows/win32/Controls/lm-setitem), come descritto in Windows SDK.

## <a name="clinkctrlsetitemid"></a><a name="setitemid"></a>CLinkCtrl::SetItemID

Recupera l'ID di un elemento del controllo collegamento.

```
BOOL SetItemID(
    int iLink,
    LPCWSTR szID);
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*szID (szID)*<br/>
Stringa con terminazione null contenente l'ID dell'elemento specificato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Imposta l'ID di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/win32/Controls/lm-setitem) in Windows SDK.

## <a name="clinkctrlsetitemstate"></a><a name="setitemstate"></a>CLinkCtrl::SetItemState

Recupera lo stato dell'elemento di controllo collegamento.

```
BOOL SetItemState(
    int iLink,
    UINT state,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED);
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*pnState*<br/>
Valore dell'elemento di stato specificato da impostare.

*maschera di stato*<br/>
Combinazione di flag che descrivono l'elemento di stato impostato. Per un elenco di valori, `state` vedere la descrizione del membro nella struttura [LITEM.](/windows/win32/api/commctrl/ns-commctrl-litem) Gli elementi consentiti sono `state`identici a quelli consentiti in .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Imposta il valore dell'elemento di stato specificato di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/win32/Controls/lm-setitem) in Windows SDK.

## <a name="clinkctrlsetitemurl"></a><a name="setitemurl"></a>CLinkCtrl::SetItemUrl

Imposta l'URL rappresentato dall'elemento di controllo del collegamento.

```
BOOL SetItemUrl(
    int iLink,
    LPCWSTR szUrl);
```

### <a name="parameters"></a>Parametri

*Ilink*<br/>
Indice di un elemento di controllo collegamento.

*szUrl (informazioni in base a un url o*<br/>
Stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Imposta l'URL rappresentato dall'elemento di controllo del collegamento specificato. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/win32/Controls/lm-setitem) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
