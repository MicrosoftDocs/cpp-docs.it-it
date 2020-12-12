---
description: 'Altre informazioni su: classe CLinkCtrl'
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
ms.openlocfilehash: a9a106d7511757fac0abfd19194081729a7d4977
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236757"
---
# <a name="clinkctrl-class"></a>Classe CLinkCtrl

Fornisce la funzionalità del controllo SysLink comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CLinkCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CLinkCtrl:: CLinkCtrl](#clinkctrl)|Costruisce un oggetto `CLinkCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CLinkCtrl:: create](#create)|Crea un controllo collegamento e lo collega a un `CLinkCtrl` oggetto.|
|[CLinkCtrl:: CreateEx](#createex)|Crea un controllo collegamento con stili estesi e lo associa a un `CLinkCtrl` oggetto.|
|[CLinkCtrl:: GetIdealHeight](#getidealheight)|Recupera l'altezza ideale del controllo collegamento.|
|[CLinkCtrl:: GetIdealSize](#getidealsize)|Calcola l'altezza preferita del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.|
|[CLinkCtrl:: GetItem](#getitem)|Recupera gli Stati e gli attributi di un elemento di controllo collegamento.|
|[CLinkCtrl:: GetItemID](#getitemid)|Recupera l'ID di un elemento di controllo collegamento.|
|[CLinkCtrl:: GetItemState](#getitemstate)|Recupera lo stato dell'elemento di controllo del collegamento.|
|[CLinkCtrl:: GetItemUrl](#getitemurl)|Recupera l'URL rappresentato dall'elemento di controllo del collegamento.|
|[CLinkCtrl:: HitTest](#hittest)|Determina se l'utente ha fatto clic sul collegamento specificato.|
|[CLinkCtrl:: SetItem](#setitem)|Imposta gli Stati e gli attributi di un elemento di controllo del collegamento.|
|[CLinkCtrl:: seitemid](#setitemid)|Imposta l'ID di un elemento di controllo collegamento.|
|[CLinkCtrl:: SetItemState](#setitemstate)|Imposta lo stato dell'elemento di controllo del collegamento.|
|[CLinkCtrl:: SetItemUrl](#setitemurl)|Imposta l'URL rappresentato dall'elemento di controllo del collegamento.|

## <a name="remarks"></a>Commenti

Un "controllo collegamento" fornisce un modo pratico per incorporare collegamenti ipertestuali in una finestra. Il controllo effettivo è una finestra che esegue il rendering del testo contrassegnato e avvia le applicazioni appropriate quando l'utente fa clic su un collegamento incorporato. All'interno di un controllo sono supportati più collegamenti ed è possibile accedervi tramite un indice in base zero.

Questo controllo (e pertanto la `CLinkCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows XP e versioni successive.

Per ulteriori informazioni, vedere [controllo Syslink](/windows/win32/Controls/syslink-overview) nel Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CLinkCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="clinkctrlclinkctrl"></a><a name="clinkctrl"></a> CLinkCtrl:: CLinkCtrl

Costruisce un oggetto `CLinkCtrl`.

```
CLinkCtrl();
```

## <a name="clinkctrlcreate"></a><a name="create"></a> CLinkCtrl:: create

Crea un controllo collegamento e lo collega a un `CLinkCtrl` oggetto.

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

*lpszLinkMarkup*<br/>
Puntatore a una stringa con terminazione zero che contiene il testo contrassegnato per la visualizzazione. Per ulteriori informazioni, vedere la sezione "markup and Link Access" nell'argomento [Panoramica dei controlli Syslink](/windows/win32/Controls/syslink-overview).

*dwStyle*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [stili di controllo comuni](/windows/win32/Controls/common-control-styles) in `Windows SDK` .

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo di collegamento. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di collegamento.

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Si costruisce un `CLinkCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create` , che crea il controllo collegamento e lo collega all' `CLinkCtrl` oggetto. Se si desidera utilizzare gli stili Windows estesi con il controllo, chiamare [CLinkCtrl:: CreateEx](#createex) anziché `Create` .

Il secondo form del `Create` metodo è deprecato. Usare il primo form che specifica il parametro *lpszLinkMarkup* .

### <a name="example"></a>Esempio

Nell'esempio di codice seguente vengono definite due variabili, denominate `m_Link1` e `m_Link2` , utilizzate per accedere a due controlli di collegamento.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#2](../../mfc/reference/codesnippet/cpp/clinkctrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene creato un controllo Link basato sulla posizione di un altro controllo collegamento. Il caricatore di risorse crea il primo controllo dei collegamenti all'avvio dell'applicazione. Quando l'applicazione immette il metodo OnInitDialog, viene creato il secondo controllo collegamento relativo alla posizione del primo controllo collegamento. Quindi si ridimensiona il secondo controllo collegamento per adattarlo al testo visualizzato.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#1](../../mfc/reference/codesnippet/cpp/clinkctrl-class_2.cpp)]

## <a name="clinkctrlcreateex"></a><a name="createex"></a> CLinkCtrl:: CreateEx

Crea un controllo collegamento con stili estesi e lo associa a un `CLinkCtrl` oggetto.

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

*lpszLinkMarkup*<br/>
Puntatore a una stringa con terminazione zero che contiene il testo contrassegnato per la visualizzazione. Per ulteriori informazioni, vedere la sezione "markup and Link Access" nell'argomento [Panoramica dei controlli Syslink](/windows/win32/Controls/syslink-overview).

*dwExStyle*<br/>
Specifica lo stile esteso del controllo collegamento. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [stili di controllo comuni](/windows/win32/Controls/common-control-styles) nell'Windows SDK.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo di collegamento. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di collegamento.

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Usare `CreateEx` anziché [create](#create) per applicare costanti di stile Windows estese.

Il secondo form del `CreateEx` metodo è deprecato. Usare il primo form che specifica il parametro *lpszLinkMarkup* .

## <a name="clinkctrlgetidealheight"></a><a name="getidealheight"></a> CLinkCtrl:: GetIdealHeight

Recupera l'altezza ideale del controllo collegamento.

```
int GetIdealHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza ideale del controllo, in pixel.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [LM_GETIDEALHEIGHT](/windows/win32/Controls/lm-getidealheight)del messaggio Win32, come descritto nel Windows SDK.

## <a name="clinkctrlgetidealsize"></a><a name="getidealsize"></a> CLinkCtrl:: GetIdealSize

Calcola l'altezza preferita del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.

```
int GetIdealSize(
    int cxMaxWidth,
    SIZE* pSize) const;
```

### <a name="parameters"></a>Parametri

*cxMaxWidth*\
in Larghezza massima del collegamento, in pixel.

*pSize*\
out Puntatore a una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) di Windows. Quando questo metodo viene restituito, il membro *CY* della `SIZE` struttura contiene l'altezza del testo del collegamento ideale per la larghezza del testo del collegamento specificata da *cxMaxWidth*. Il membro *CX* della struttura contiene la larghezza del testo del collegamento effettivamente necessaria.

### <a name="return-value"></a>Valore restituito

Altezza preferita del testo del collegamento, in pixel. Il valore restituito è uguale al valore del membro *CY* della `SIZE` struttura.

### <a name="remarks"></a>Commenti

Per un esempio del `GetIdealSize` metodo, vedere l'esempio in [CLinkCtrl:: create](#create).

Questo metodo invia il messaggio di [LM_GETIDEALSIZE](/windows/win32/Controls/lm-getidealsize) , descritto nel Windows SDK.

## <a name="clinkctrlgetitem"></a><a name="getitem"></a> CLinkCtrl:: GetItem

Recupera gli Stati e gli attributi di un elemento di controllo collegamento.

```
BOOL GetItem(PLITEM pItem) const;
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore a una struttura di [Lite](/windows/win32/api/commctrl/ns-commctrl-litem) per la ricezione di informazioni sugli elementi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [LM_GETITEM](/windows/win32/Controls/lm-getitem)del messaggio Win32, come descritto nel Windows SDK.

## <a name="clinkctrlgetitemid"></a><a name="getitemid"></a> CLinkCtrl:: GetItemID

Recupera l'ID di un elemento di controllo collegamento.

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

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*strID*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'ID dell'elemento specificato.

*szID*<br/>
Stringa con terminazione null che contiene l'ID dell'elemento specificato.

*cchID*<br/>
Dimensioni in caratteri del buffer *szId* .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

> [!NOTE]
> Questa funzione restituisce anche FALSE se il buffer di *szID o Strid* è minore di MAX_LINKID_TEXT.

### <a name="remarks"></a>Commenti

Recupera l'ID di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere la [LM_GETITEM](/windows/win32/Controls/lm-getitem) del messaggio Win32 nella Windows SDK.

## <a name="clinkctrlgetitemstate"></a><a name="getitemstate"></a> CLinkCtrl:: GetItemState

Recupera lo stato dell'elemento di controllo del collegamento.

```
BOOL GetItemState(
    int iLink,
    UINT* pnState,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED) const;
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*pnState*<br/>
Valore dell'elemento di stato specificato.

*stateMask*<br/>
Combinazione di flag che descrivono l'elemento di stato da ottenere. Per un elenco di valori, vedere la descrizione del `state` membro nella struttura [litey](/windows/win32/api/commctrl/ns-commctrl-litem) . Gli elementi consentiti sono identici a quelli consentiti in `state` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Recupera il valore dell'elemento di stato specificato di un elemento di controllo collegamento specifico. Per ulteriori informazioni, vedere la [LM_GETITEM](/windows/win32/Controls/lm-getitem) del messaggio Win32 nella Windows SDK.

## <a name="clinkctrlgetitemurl"></a><a name="getitemurl"></a> CLinkCtrl:: GetItemUrl

Recupera l'URL rappresentato dall'elemento di controllo del collegamento.

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

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*strUrl*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'URL rappresentato dall'elemento specificato.

*szUrl*<br/>
Stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato.

*cchUrl*<br/>
Dimensioni in caratteri del buffer *szURL* .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

> [!NOTE]
> Questa funzione restituisce anche FALSE se il buffer di *szURL o strURL* è minore di MAX_LINKID_TEXT.

### <a name="remarks"></a>Commenti

Recupera l'URL rappresentato dall'elemento di controllo del collegamento specificato. Per ulteriori informazioni, vedere la [LM_GETITEM](/windows/win32/Controls/lm-getitem) del messaggio Win32 nella Windows SDK.

## <a name="clinkctrlhittest"></a><a name="hittest"></a> CLinkCtrl:: HitTest

Determina se l'utente ha fatto clic sul collegamento specificato.

```
BOOL HitTest(PLHITTESTINFO phti) const;
```

### <a name="parameters"></a>Parametri

*phti*<br/>
Puntatore a una `LHITTESTINFO` struttura contenente le informazioni sul collegamento su cui l'utente ha fatto clic.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [LM_HITTEST](/windows/win32/Controls/lm-hittest)del messaggio Win32, come descritto nel Windows SDK.

## <a name="clinkctrlsetitem"></a><a name="setitem"></a> CLinkCtrl:: SetItem

Imposta gli Stati e gli attributi di un elemento di controllo del collegamento.

```
BOOL SetItem(PLITEM pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore a una struttura [litey](/windows/win32/api/commctrl/ns-commctrl-litem) contenente le informazioni da impostare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [LM_SETITEM](/windows/win32/Controls/lm-setitem)del messaggio Win32, come descritto nel Windows SDK.

## <a name="clinkctrlsetitemid"></a><a name="setitemid"></a> CLinkCtrl:: seitemid

Recupera l'ID di un elemento di controllo collegamento.

```
BOOL SetItemID(
    int iLink,
    LPCWSTR szID);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*szID*<br/>
Stringa con terminazione null che contiene l'ID dell'elemento specificato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Imposta l'ID di un elemento di controllo del collegamento specifico. Per ulteriori informazioni, vedere la [LM_SETITEM](/windows/win32/Controls/lm-setitem) del messaggio Win32 nella Windows SDK.

## <a name="clinkctrlsetitemstate"></a><a name="setitemstate"></a> CLinkCtrl:: SetItemState

Recupera lo stato dell'elemento di controllo del collegamento.

```
BOOL SetItemState(
    int iLink,
    UINT state,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*pnState*<br/>
Valore dell'elemento di stato specificato da impostare.

*stateMask*<br/>
Combinazione di flag che descrivono l'elemento di stato da impostare. Per un elenco di valori, vedere la descrizione del `state` membro nella struttura [litey](/windows/win32/api/commctrl/ns-commctrl-litem) . Gli elementi consentiti sono identici a quelli consentiti in `state` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Imposta il valore dell'elemento di stato specificato di un elemento di controllo del collegamento specifico. Per ulteriori informazioni, vedere la [LM_SETITEM](/windows/win32/Controls/lm-setitem) del messaggio Win32 nella Windows SDK.

## <a name="clinkctrlsetitemurl"></a><a name="setitemurl"></a> CLinkCtrl:: SetItemUrl

Imposta l'URL rappresentato dall'elemento di controllo del collegamento.

```
BOOL SetItemUrl(
    int iLink,
    LPCWSTR szUrl);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
Indice di un elemento di controllo del collegamento.

*szUrl*<br/>
Stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Imposta l'URL rappresentato dall'elemento di controllo del collegamento specificato. Per ulteriori informazioni, vedere la [LM_SETITEM](/windows/win32/Controls/lm-setitem) del messaggio Win32 nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
