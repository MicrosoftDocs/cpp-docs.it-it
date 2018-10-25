---
title: Classe CLinkCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b760cd1f548fc4d5dd2c4ce78cb0e16bca64474
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50070270"
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
|[CLinkCtrl::Create](#create)|Crea un controllo di collegamento e lo collega a un `CLinkCtrl` oggetto.|
|[CLinkCtrl::CreateEx](#createex)|Crea un controllo di collegamento con stili estesi e lo collega a un `CLinkCtrl` oggetto.|
|[CLinkCtrl::GetIdealHeight](#getidealheight)|Recupera l'altezza ideale del controllo collegamento.|
|[CLinkCtrl::GetIdealSize](#getidealsize)|Calcola l'altezza preferenziale del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.|
|[CLinkCtrl::GetItem](#getitem)|Recupera gli Stati e gli attributi di un elemento di controllo di collegamento.|
|[CLinkCtrl::GetItemID](#getitemid)|Recupera l'ID di un elemento di controllo di collegamento.|
|[CLinkCtrl::GetItemState](#getitemstate)|Recupera lo stato dell'elemento del controllo collegamento.|
|[CLinkCtrl::GetItemUrl](#getitemurl)|Recupera l'URL rappresentata dall'elemento di controllo di collegamento.|
|[CLinkCtrl::HitTest](#hittest)|Determina se l'utente fa clic sul collegamento specificato.|
|[CLinkCtrl::SetItem](#setitem)|Imposta gli Stati e gli attributi di un elemento di controllo di collegamento.|
|[CLinkCtrl::SetItemID](#setitemid)|Imposta l'ID di un elemento di controllo di collegamento.|
|[CLinkCtrl::SetItemState](#setitemstate)|Imposta lo stato dell'elemento del controllo collegamento.|
|[CLinkCtrl::SetItemUrl](#setitemurl)|Imposta l'URL rappresentata dall'elemento di controllo di collegamento.|

## <a name="remarks"></a>Note

Un "controllo link" fornisce un modo pratico per incorporare collegamenti ipertestuali in una finestra. Il controllo effettivo è una finestra che esegue il rendering di testo contrassegnate-up e avvia le applicazioni appropriate quando l'utente fa clic su un collegamento incorporato. Più collegamenti sono supportati all'interno di un controllo e sono accessibili da un indice in base zero.

Questo controllo (e pertanto il `CLinkCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows XP e versioni successive.

Per altre informazioni, vedere [controllo SysLink](/windows/desktop/Controls/syslink-overview) nel SDK di Windows.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CLinkCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="clinkctrl"></a>  CLinkCtrl::CLinkCtrl

Costruisce un oggetto `CLinkCtrl`.

```
CLinkCtrl();
```

##  <a name="create"></a>  CLinkCtrl::Create

Crea un controllo di collegamento e lo collega a un `CLinkCtrl` oggetto.

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
Puntatore a una stringa con terminazione zero contenente il contrassegnata il testo da visualizzare. Per altre informazioni, vedere la sezione "Markup e collegamento di accesso" nell'argomento [panoramica dei controlli SysLink](/windows/desktop/Controls/syslink-overview).

*dwStyle*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili del controllo. Visualizzare [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel `Windows SDK` per altre informazioni.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo collegamento. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](../../mfc/reference/rect-structure1.md) struttura.

*pParentWnd*<br/>
Finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica ID. del controllo collegamento

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Si costruisce un `CLinkCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo di collegamento e lo collega al `CLinkCtrl` oggetto. Se si desidera utilizzare gli stili estesi di windows con il controllo, chiamare [CLinkCtrl::CreateEx](#createex) invece di `Create`.

La seconda forma del `Create` metodo è deprecato. Eseguire il primo che specifica la *lpszLinkMarkup* parametro.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce due variabili, denominate `m_Link1` e `m_Link2`, che consentono di accedere alle due controlli dei collegamenti.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#2](../../mfc/reference/codesnippet/cpp/clinkctrl-class_1.h)]

### <a name="example"></a>Esempio

L'esempio di codice seguente crea un controllo di collegamento, in base alla posizione di un altro controllo di collegamento. Il caricatore di risorse consente di creare il primo controllo di collegamento all'avvio dell'applicazione. Quando l'applicazione immette OnInitDialog (metodo), si crea il secondo controllo collegamento rispetto alla posizione del primo controllo collegamento. Quindi ridimensionare il secondo controllo di collegamento per adattarsi al testo visualizzato.

[!code-cpp[NVC_MFC_CLinkCtrl_s1#1](../../mfc/reference/codesnippet/cpp/clinkctrl-class_2.cpp)]

##  <a name="createex"></a>  CLinkCtrl::CreateEx

Crea un controllo di collegamento con stili estesi e lo collega a un `CLinkCtrl` oggetto.

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
Puntatore a una stringa con terminazione zero contenente il contrassegnata il testo da visualizzare. Per altre informazioni, vedere la sezione "Markup e collegamento di accesso" nell'argomento [panoramica dei controlli SysLink](/windows/desktop/Controls/syslink-overview).

*dwExStyle*<br/>
Specifica lo stile esteso del controllo collegamento. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile del controllo collegamento. Applicare qualsiasi combinazione di stili del controllo. Per altre informazioni, vedere [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) nel SDK di Windows.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo collegamento. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](../../mfc/reference/rect-structure1.md) struttura.

*pParentWnd*<br/>
Finestra padre del controllo collegamento. Non deve essere NULL.

*nID*<br/>
Specifica ID. del controllo collegamento

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare le costanti di stile estese Windows.

La seconda forma del `CreateEx` metodo è deprecato. Eseguire il primo che specifica la *lpszLinkMarkup* parametro.

##  <a name="getidealheight"></a>  CLinkCtrl::GetIdealHeight

Recupera l'altezza ideale del controllo collegamento.

```
int GetIdealHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza ideale del controllo, in pixel.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETIDEALHEIGHT](/windows/desktop/Controls/lm-getidealheight), come descritto nel SDK di Windows.

##  <a name="getidealsize"></a>  CLinkCtrl::GetIdealSize

Calcola l'altezza preferenziale del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.

```
int GetIdealSize(
    int cxMaxWidth,
    SIZE* pSize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*cxMaxWidth*|[in] La larghezza massima del collegamento, in pixel.|
|[out] \* *pSize*|Un puntatore a un Windows [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura. Quando termina, questo metodo il *cy* membro delle `SIZE` struttura contiene l'altezza del testo collegamento ideale per la larghezza di testo di collegamento specificato dal *cxMaxWidth*. Il *cx* membro della struttura contiene la larghezza di testo di collegamento che è effettivamente necessario.|

### <a name="return-value"></a>Valore restituito

L'altezza preferenziale del testo del collegamento, in pixel. Il valore restituito è identico al valore della *cy* membro del `SIZE` struttura.

### <a name="remarks"></a>Note

Per un esempio del `GetIdealSize` metodo, vedere l'esempio nella [CLinkCtrl::Create](#create).

Questo metodo invia il [LM_GETIDEALSIZE](/windows/desktop/Controls/lm-getidealsize) messaggio, che è descritti nel SDK di Windows.

##  <a name="getitem"></a>  CLinkCtrl::GetItem

Recupera gli Stati e gli attributi di un elemento di controllo di collegamento.

```
BOOL GetItem(PLITEM pItem) const;
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Un puntatore a un [LITEM](/windows/desktop/api/commctrl/ns-commctrl-taglitem) struttura per ricevere informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETITEM](/windows/desktop/Controls/lm-getitem), come descritto nel SDK di Windows.

##  <a name="getitemid"></a>  CLinkCtrl::GetItemID

Recupera l'ID di un elemento di controllo di collegamento.

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
L'indice di un elemento di controllo di collegamento.

*strID*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene l'ID dell'elemento specificato.

*IDdm*<br/>
Una stringa con terminazione null che contiene l'ID dell'elemento specificato.

*cchID*<br/>
La dimensione in caratteri del *IDdm* buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

> [!NOTE]
>  Questa funzione restituisce FALSE anche se il buffer del *IDdm o strID* è inferiore a MAX_LINKID_TEXT.

### <a name="remarks"></a>Note

Recupera l'ID di un elemento del controllo collegamento specifico. Per altre informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/desktop/Controls/lm-getitem) nel SDK di Windows.

##  <a name="getitemstate"></a>  CLinkCtrl::GetItemState

Recupera lo stato dell'elemento del controllo collegamento.

```
BOOL GetItemState(
    int iLink,
    UINT* pnState,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED) const;
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
L'indice di un elemento di controllo di collegamento.

*pnState*<br/>
Il valore dell'elemento di stato specificato.

*stateMask*<br/>
Combinazione di flag che descrivono quale elemento di stato da ottenere. Per un elenco di valori, vedere la descrizione del `state` membro nel [LITEM](/windows/desktop/api/commctrl/ns-commctrl-taglitem) struttura. Elementi consentiti sono identici a quelle consentite in `state`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Recupera il valore dell'elemento di stato specificato un collegamento specifico dell'elemento del controllo. Per altre informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/desktop/Controls/lm-getitem) nel SDK di Windows.

##  <a name="getitemurl"></a>  CLinkCtrl::GetItemUrl

Recupera l'URL rappresentata dall'elemento di controllo di collegamento.

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
L'indice di un elemento di controllo di collegamento.

*strUrl*<br/>
Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'URL rappresentato dall'elemento specificato

*szUrl*<br/>
Una stringa con terminazione null che contiene l'URL rappresentato dall'elemento specificato

*cchUrl*<br/>
La dimensione in caratteri del *szURL* buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

> [!NOTE]
>  Questa funzione restituisce FALSE anche se il buffer del *szUrl o strUrl* è inferiore a MAX_LINKID_TEXT.

### <a name="remarks"></a>Note

Recupera l'URL rappresentata dall'elemento di controllo di collegamento specificato. Per altre informazioni, vedere il messaggio Win32 [LM_GETITEM](/windows/desktop/Controls/lm-getitem) nel SDK di Windows.

##  <a name="hittest"></a>  CLinkCtrl::HitTest

Determina se l'utente fa clic sul collegamento specificato.

```
BOOL HitTest(PLHITTESTINFO phti) const;
```

### <a name="parameters"></a>Parametri

*phti*<br/>
Puntatore a un `LHITTESTINFO` struttura che contiene le informazioni relative al collegamento selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_HITTEST](/windows/desktop/Controls/lm-hittest), come descritto nel SDK di Windows.

##  <a name="setitem"></a>  CLinkCtrl::SetItem

Imposta gli Stati e gli attributi di un elemento di controllo di collegamento.

```
BOOL SetItem(PLITEM pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Un puntatore a un [LITEM](/windows/desktop/api/commctrl/ns-commctrl-taglitem) struttura contenente le informazioni da impostare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [LM_SETITEM](/windows/desktop/Controls/lm-setitem), come descritto nel SDK di Windows.

##  <a name="setitemid"></a>  CLinkCtrl::SetItemID

Recupera l'ID di un elemento di controllo di collegamento.

```
BOOL SetItemID(
    int iLink,
    LPCWSTR szID);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
L'indice di un elemento di controllo di collegamento.

*IDdm*<br/>
Una stringa con terminazione null che contiene l'ID dell'elemento specificato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Imposta l'ID di un elemento del controllo collegamento specifico. Per altre informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/desktop/Controls/lm-setitem) nel SDK di Windows.

##  <a name="setitemstate"></a>  CLinkCtrl::SetItemState

Recupera lo stato dell'elemento del controllo collegamento.

```
BOOL SetItemState(
    int iLink,
    UINT state,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
L'indice di un elemento di controllo di collegamento.

*pnState*<br/>
Il valore dell'elemento di stato specificato da impostare.

*stateMask*<br/>
Combinazione di flag che descrivono l'elemento di stato da impostare. Per un elenco di valori, vedere la descrizione del `state` membro nel [LITEM](/windows/desktop/api/commctrl/ns-commctrl-taglitem) struttura. Elementi consentiti sono identici a quelle consentite in `state`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Imposta il valore dell'elemento di stato specificato un collegamento specifico dell'elemento del controllo. Per altre informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/desktop/Controls/lm-setitem) nel SDK di Windows.

##  <a name="setitemurl"></a>  CLinkCtrl::SetItemUrl

Imposta l'URL rappresentata dall'elemento di controllo di collegamento.

```
BOOL SetItemUrl(
    int iLink,
    LPCWSTR szUrl);
```

### <a name="parameters"></a>Parametri

*iLink*<br/>
L'indice di un elemento di controllo di collegamento.

*szUrl*<br/>
Una stringa con terminazione null che contiene l'URL rappresentato dall'elemento specificato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Imposta l'URL rappresentata dall'elemento di controllo di collegamento specificato. Per altre informazioni, vedere il messaggio Win32 [LM_SETITEM](/windows/desktop/Controls/lm-setitem) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
