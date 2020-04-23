---
title: Classe CMFCRibbonStatusBar
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonStatusBar
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddDynamicElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddExtendedElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddSeparator
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::Create
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::CreateEx
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindByID
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetCount
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExCount
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExtendedArea
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetSpace
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsBottomFrame
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsExtendedElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsInformationMode
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RecalcLayout
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveAll
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::SetInformation
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::OnDrawInformation
helpviewer_keywords:
- CMFCRibbonStatusBar [MFC], AddDynamicElement
- CMFCRibbonStatusBar [MFC], AddElement
- CMFCRibbonStatusBar [MFC], AddExtendedElement
- CMFCRibbonStatusBar [MFC], AddSeparator
- CMFCRibbonStatusBar [MFC], Create
- CMFCRibbonStatusBar [MFC], CreateEx
- CMFCRibbonStatusBar [MFC], FindByID
- CMFCRibbonStatusBar [MFC], FindElement
- CMFCRibbonStatusBar [MFC], GetCount
- CMFCRibbonStatusBar [MFC], GetElement
- CMFCRibbonStatusBar [MFC], GetExCount
- CMFCRibbonStatusBar [MFC], GetExElement
- CMFCRibbonStatusBar [MFC], GetExtendedArea
- CMFCRibbonStatusBar [MFC], GetSpace
- CMFCRibbonStatusBar [MFC], IsBottomFrame
- CMFCRibbonStatusBar [MFC], IsExtendedElement
- CMFCRibbonStatusBar [MFC], IsInformationMode
- CMFCRibbonStatusBar [MFC], RecalcLayout
- CMFCRibbonStatusBar [MFC], RemoveAll
- CMFCRibbonStatusBar [MFC], RemoveElement
- CMFCRibbonStatusBar [MFC], SetInformation
- CMFCRibbonStatusBar [MFC], OnDrawInformation
ms.assetid: 921eb57f-3b40-49fa-a38c-3f2fb6dc2893
ms.openlocfilehash: 8d90e01db022c33edd654e83af05e9986799f2b9
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754049"
---
# <a name="cmfcribbonstatusbar-class"></a>Classe CMFCRibbonStatusBar

La `CMFCRibbonStatusBar` classe implementa un controllo barra di stato che può visualizzare gli elementi della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonStatusBar : public CMFCRibbonBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBar::AddDynamicElement](#adddynamicelement)|Aggiunge un elemento dinamico alla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::AddElement](#addelement)|Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::AddExtendedElement](#addextendedelement)|Aggiunge un elemento della barra multifunzione all'area estesa della barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::AddSeparator](#addseparator)|Aggiunge un separatore alla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::Create](#create)|Crea una barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::CreateEx](#createex)|Crea una barra di stato della barra multifunzione con uno stile esteso.|
|[CMFCRibbonStatusBar::FindByID](#findbyid)||
|[CMFCRibbonStatusBar::FindElement](#findelement)|Restituisce un puntatore all'elemento con l'ID di comando specificato.|
|[CMFCRibbonStatusBar::GetCount](#getcount)|Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::GetElement](#getelement)|Restituisce un puntatore all'elemento che si trova in corrispondenza di un indice specificato.|
|[CMFCRibbonStatusBar::GetExCount](#getexcount)|Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::GetExElement](#getexelement)|Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione.|
|[CMFCRibbonStatusBar::GetExtendedArea](#getextendedarea)||
|[CMFCRibbonStatusBar::GetSpace](#getspace)||
|[CMFCRibbonStatusBar::IsBottomFrame](#isbottomframe)||
|[CMFCRibbonStatusBar::IsExtendedElement](#isextendedelement)||
|[CMFCRibbonStatusBar::IsInformationMode](#isinformationmode)|Determina se la modalità informazioni è abilitata per la barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::RecalcLayout](#recalclayout)|(Esegue l'override [di CMFCRibbonBar::RecalcLayout](../../mfc/reference/cmfcribbonbar-class.md#recalclayout).)|
|[CMFCRibbonStatusBar::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::RemoveElement](#removeelement)|Rimuove l'elemento con un ID di comando specificato dalla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar::SetInformation](#setinformation)|Abilita o disabilita la modalità di informazioni per la barra di stato della barra multifunzione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonStatusBar::OnDrawInformation](#ondrawinformation)|Visualizza la stringa di informazioni visualizzata sulla barra di stato della barra multifunzione quando la modalità informazioni è abilitata.|

## <a name="remarks"></a>Osservazioni

Gli utenti possono modificare la visibilità degli elementi della barra multifunzione in una barra di stato della barra multifunzione utilizzando il menu di scelta rapida incorporato per la barra di stato della barra multifunzione. È possibile aggiungere o rimuovere elementi in modo dinamico.

Una barra di stato della barra multifunzione ha due aree: un'area principale e un'area estesa. L'area estesa viene visualizzata sul lato destro della barra di stato della barra multifunzione e viene visualizzata in un colore diverso rispetto all'area principale.

In genere, nell'area principale della barra di stato vengono visualizzate le notifiche di stato e nell'area estesa vengono visualizzati i controlli di visualizzazione. L'area estesa rimane visibile il più a lungo possibile quando l'utente ridimensiona la barra di stato della barra multifunzione.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonStatusBar` . Nell'esempio viene illustrato come aggiungere un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione, aggiungere un elemento della barra multifunzione all'area estesa della barra di stato della barra multifunzione, aggiungere un separatore e abilitare la modalità normale per la barra di stato della barra multifunzione.

[!code-cpp[NVC_MFC_RibbonApp#15](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_1.cpp)]
[!code-cpp[NVC_MFC_RibbonApp#16](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)

[CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonstatusbar.h

## <a name="cmfcribbonstatusbaradddynamicelement"></a><a name="adddynamicelement"></a>CMFCRibbonStatusBar::AddDynamicElement

Aggiunge un elemento dinamico alla barra di stato della barra multifunzione.

```cpp
void AddDynamicElement(CMFCRibbonBaseElement* pElement);
```

### <a name="parameters"></a>Parametri

*pElemento*<br/>
[in] Puntatore a un elemento dinamico.

### <a name="remarks"></a>Osservazioni

A differenza degli elementi normali, gli elementi dinamici non sono personalizzabili e il menu Personalizza della barra di stato non li visualizza.

## <a name="cmfcribbonstatusbaraddelement"></a><a name="addelement"></a>CMFCRibbonStatusBar::AddElement

Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione.

```cpp
void AddElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*pElemento*<br/>
[in] Puntatore all'elemento aggiunto.

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta di testo dell'elemento.

*bIsVisibile*<br/>
[in] TRUEse si desidera aggiungere l'elemento come visibile, FALSE se si desidera aggiungere l'elemento come nascosto.

## <a name="cmfcribbonstatusbaraddextendedelement"></a><a name="addextendedelement"></a>CMFCRibbonStatusBar::AddExtendedElement

Aggiunge un elemento della barra multifunzione all'area estesa della barra di stato della barra multifunzione.

```cpp
void AddExtendedElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*pElemento*<br/>
[in] Puntatore all'elemento aggiunto.

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta di testo dell'elemento.

*bIsVisibile*<br/>
[in] TRUEse si desidera aggiungere l'elemento come visibile, FALSE se si desidera aggiungere l'elemento come nascosto.

### <a name="remarks"></a>Osservazioni

L'area estesa si trova a destra della barra di stato.

## <a name="cmfcribbonstatusbaraddseparator"></a><a name="addseparator"></a>CMFCRibbonStatusBar::AddSeparator

Aggiunge un separatore alla barra di stato della barra multifunzione.

```cpp
void AddSeparator();
```

### <a name="remarks"></a>Osservazioni

Il framework aggiunge un separatore dopo il metodo [CMFCRibbonStatusBar::AddElement](#addelement). inserisce l'ultimo elemento.

## <a name="cmfcribbonstatusbarcreate"></a><a name="create"></a>CMFCRibbonStatusBar::Create

Crea una barra di stato della barra multifunzione.

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre.

*DwStyle (in stile dwStyle)*<br/>
[in] Combinazione logica OR di stili di controllo.

*nID*<br/>
[in] ID di controllo della barra di stato.

### <a name="return-value"></a>Valore restituito

TRUESe la barra di stato viene creata correttamente, FALSE in caso contrario.

## <a name="cmfcribbonstatusbarcreateex"></a><a name="createex"></a>CMFCRibbonStatusBar::CreateEx

Crea una barra di stato della barra multifunzione con uno stile esteso.

```
BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle=0,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre.

*dwCtrlStyle*<br/>
Combinazione logica OR di stili aggiuntivi per la creazione dell'oggetto barra di stato.

*DwStyle (in stile dwStyle)*<br/>
Stile di controllo della barra di stato.

*nID*<br/>
ID di controllo della barra di stato.

### <a name="return-value"></a>Valore restituito

TRUESe la barra di stato viene creata correttamente, FALSE in caso contrario.

## <a name="cmfcribbonstatusbarfindbyid"></a><a name="findbyid"></a>CMFCRibbonStatusBar::FindByID

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
CMFCRibbonBaseElement* FindByID(UINT uiCmdID, BOOL = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *uiCmdID (informazioni in questo icomando)*<br/>
[in] *BOOL*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarfindelement"></a><a name="findelement"></a>CMFCRibbonStatusBar::FindElement

Restituisce un puntatore all'elemento con l'ID di comando specificato.

```
CMFCRibbonBaseElement* FindElement(UINT uiID);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] ID dell'elemento.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento con l'ID di comando specificato. NULL se non è presente alcun elemento di questo tipo.

## <a name="cmfcribbonstatusbargetcount"></a><a name="getcount"></a>CMFCRibbonStatusBar::GetCount

Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.

## <a name="cmfcribbonstatusbargetelement"></a><a name="getelement"></a>CMFCRibbonStatusBar::GetElement

Restituisce un puntatore all'elemento che si trova in corrispondenza di un indice specificato.

```
CMFCRibbonBaseElement* GetElement(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica un indice in base zero di un elemento che si trova nell'area principale del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento che si trova in corrispondenza dell'indice specificato. NULL se l'indice è negativo o supera il numero di elementi nella barra di stato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbargetexcount"></a><a name="getexcount"></a>CMFCRibbonStatusBar::GetExCount

Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.

```
int GetExCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.

## <a name="cmfcribbonstatusbargetexelement"></a><a name="getexelement"></a>CMFCRibbonStatusBar::GetExElement

Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. L'area estesa si trova a destra della barra di stato.

```
CMFCRibbonBaseElement* GetExElement(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice in base zero di un elemento che si trova nell'area estesa del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. NULL se *nIndex* è negativo o supera il numero di elementi nell'area estesa della barra di stato della barra multifunzione.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbargetextendedarea"></a><a name="getextendedarea"></a>CMFCRibbonStatusBar::GetExtendedArea

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual BOOL GetExtendedArea(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbargetspace"></a><a name="getspace"></a>CMFCRibbonStatusBar::GetSpace

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
int GetSpace() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarisbottomframe"></a><a name="isbottomframe"></a>CMFCRibbonStatusBar::IsBottomFrame

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
BOOL IsBottomFrame() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarisextendedelement"></a><a name="isextendedelement"></a>CMFCRibbonStatusBar::IsExtendedElement

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
BOOL IsExtendedElement(CMFCRibbonBaseElement* pElement) const;
```

### <a name="parameters"></a>Parametri

[in] *pElemento*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarisinformationmode"></a><a name="isinformationmode"></a>CMFCRibbonStatusBar::IsInformationMode

Determina se la modalità informazioni è abilitata per la barra di stato della barra multifunzione.

```
BOOL IsInformationMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la barra di stato può funzionare in modalità informazioni. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In modalità informazioni, la barra di stato nasconde tutti i riquadri normali e visualizza una stringa di messaggio.

## <a name="cmfcribbonstatusbarondrawinformation"></a><a name="ondrawinformation"></a>CMFCRibbonStatusBar::OnDrawInformation

Visualizza la stringa visualizzata sulla barra di stato della barra multifunzione quando è attivata la modalità informazioni.

```
virtual void OnDrawInformation(
    CDC* pDC,
    CString& strInfo,
    CRect rectInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*strInfo*<br/>
[in] Stringa di informazioni.

*rectInfo (Informazioni in rect)*<br/>
[in] Rettangolo di delimitazione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della stringa di informazioni sulla barra di stato. Utilizzare il [CMFCRibbonStatusBar::SetInformation](#setinformation) metodo per impostare la barra di stato in modalità informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e visualizza la stringa di informazioni specificata da *strInfo*.

## <a name="cmfcribbonstatusbarrecalclayout"></a><a name="recalclayout"></a>CMFCRibbonStatusBar::RecalcLayout

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonstatusbarremoveall"></a><a name="removeall"></a>CMFCRibbonStatusBar::RemoveAll

Rimuove tutti gli elementi dalla barra di stato della barra multifunzione.

```cpp
void RemoveAll();
```

## <a name="cmfcribbonstatusbarremoveelement"></a><a name="removeelement"></a>CMFCRibbonStatusBar::RemoveElement

Rimuove l'elemento con un ID di comando specificato dalla barra di stato della barra multifunzione.

```
BOOL RemoveElement(UINT uiID);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] ID dell'elemento da rimuovere dalla barra di stato.

### <a name="return-value"></a>Valore restituito

TRUESe un elemento con *l'uiID* specificato viene rimosso. In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarsetinformation"></a><a name="setinformation"></a>CMFCRibbonStatusBar::SetInformation

Abilita o disabilita la modalità di informazioni per la barra di stato della barra multifunzione.

```cpp
void SetInformation(LPCTSTR lpszInfo);
```

### <a name="parameters"></a>Parametri

*lpszInfo (informazioni in base alle informazioni in stato di in*<br/>
[in] Stringa di informazioni.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per mettere la barra di stato in modalità informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e visualizza la stringa di informazioni specificata da *lpszInfo*.

Quando lpszInfo è NULL, la barra di stato torna alla modalità normale.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)<br/>
[CMFCRibbonBaseElement (classe)](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
