---
description: 'Altre informazioni su: classe CMFCRibbonStatusBar'
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
ms.openlocfilehash: 01436d535b410fd4a6c70f52760908e3547b7af8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264999"
---
# <a name="cmfcribbonstatusbar-class"></a>Classe CMFCRibbonStatusBar

La `CMFCRibbonStatusBar` classe implementa un controllo barra di stato in grado di visualizzare gli elementi della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonStatusBar : public CMFCRibbonBar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonStatusBar:: AddDynamicElement](#adddynamicelement)|Aggiunge un elemento dinamico alla barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: AddElement](#addelement)|Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: AddExtendedElement](#addextendedelement)|Aggiunge un elemento della barra multifunzione all'area estesa della barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: AddSeparator](#addseparator)|Aggiunge un separatore alla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar:: create](#create)|Crea una barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar:: CreateEx](#createex)|Crea una barra di stato della barra multifunzione con uno stile esteso.|
|[CMFCRibbonStatusBar:: FindByID](#findbyid)||
|[CMFCRibbonStatusBar:: FindElement](#findelement)|Restituisce un puntatore all'elemento con l'ID di comando specificato.|
|[CMFCRibbonStatusBar:: GetCount](#getcount)|Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: GetElement](#getelement)|Restituisce un puntatore all'elemento che si trova in corrispondenza di un indice specificato.|
|[CMFCRibbonStatusBar:: GetExCount](#getexcount)|Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: GetExElement](#getexelement)|Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione.|
|[CMFCRibbonStatusBar:: GetExtendedArea](#getextendedarea)||
|[CMFCRibbonStatusBar:: getspace](#getspace)||
|[CMFCRibbonStatusBar:: IsBottomFrame](#isbottomframe)||
|[CMFCRibbonStatusBar:: Estesoelement](#isextendedelement)||
|[CMFCRibbonStatusBar:: IsInformationMode](#isinformationmode)|Determina se è abilitata la modalità informazioni per la barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar:: RecalcLayout](#recalclayout)|Esegue l'override di [CMFCRibbonBar:: RecalcLayout](../../mfc/reference/cmfcribbonbar-class.md#recalclayout).|
|[CMFCRibbonStatusBar:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla barra di stato della barra di stato.|
|[CMFCRibbonStatusBar:: RemoveElement](#removeelement)|Rimuove dall'elemento con un ID di comando specificato dalla barra di stato della barra multifunzione.|
|[CMFCRibbonStatusBar:: Transformations](#setinformation)|Abilita o Disabilita la modalità informazioni per la barra di stato della barra di stato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonStatusBar:: OnDrawInformation](#ondrawinformation)|Consente di visualizzare la stringa di informazioni visualizzata sulla barra di stato della barra multifunzione quando è abilitata la modalità informazioni.|

## <a name="remarks"></a>Commenti

Gli utenti possono modificare la visibilità degli elementi della barra multifunzione sulla barra di stato della barra multifunzione usando il menu di scelta rapida incorporato per la barra di stato della barra multifunzione. È possibile aggiungere o rimuovere elementi in modo dinamico.

Una barra di stato della barra multifunzione è costituita da due aree: un'area principale e un'area estesa. L'area estesa viene visualizzata sul lato destro della barra di stato della barra multifunzione e viene visualizzata in un colore diverso rispetto all'area principale.

In genere, l'area principale della barra di stato Visualizza le notifiche di stato e l'area estesa Visualizza i controlli di visualizzazione. Quando l'utente ridimensiona la barra di stato della barra multifunzione, l'area estesa rimane visibile il più a lungo possibile.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonStatusBar` . Nell'esempio viene illustrato come aggiungere un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione, aggiungere un elemento Ribbon all'area estesa della barra di stato della barra multifunzione, aggiungere un separatore e abilitare la modalità normale per la barra di stato della barra di stato.

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

**Intestazione:** afxribbonstatusbar. h

## <a name="cmfcribbonstatusbaradddynamicelement"></a><a name="adddynamicelement"></a> CMFCRibbonStatusBar:: AddDynamicElement

Aggiunge un elemento dinamico alla barra di stato della barra di stato.

```cpp
void AddDynamicElement(CMFCRibbonBaseElement* pElement);
```

### <a name="parameters"></a>Parametri

*pElement*<br/>
in Puntatore a un elemento dinamico.

### <a name="remarks"></a>Commenti

Diversamente dagli elementi regolari, gli elementi dinamici non sono personalizzabili e il menu Personalizza della barra di stato non li Visualizza.

## <a name="cmfcribbonstatusbaraddelement"></a><a name="addelement"></a> CMFCRibbonStatusBar:: AddElement

Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra di stato.

```cpp
void AddElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*pElement*<br/>
in Puntatore all'elemento aggiunto.

*lpszLabel*<br/>
in Etichetta di testo dell'elemento.

*bIsVisible*<br/>
in TRUE se si desidera aggiungere l'elemento come visibile, FALSE se si desidera aggiungere l'elemento come nascosto.

## <a name="cmfcribbonstatusbaraddextendedelement"></a><a name="addextendedelement"></a> CMFCRibbonStatusBar:: AddExtendedElement

Aggiunge un elemento della barra multifunzione all'area estesa della barra di stato della barra di stato.

```cpp
void AddExtendedElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*pElement*<br/>
in Puntatore all'elemento aggiunto.

*lpszLabel*<br/>
in Etichetta di testo dell'elemento.

*bIsVisible*<br/>
in TRUE se si desidera aggiungere l'elemento come visibile, FALSE se si desidera aggiungere l'elemento come nascosto.

### <a name="remarks"></a>Commenti

L'area estesa si trova a destra della barra di stato.

## <a name="cmfcribbonstatusbaraddseparator"></a><a name="addseparator"></a> CMFCRibbonStatusBar:: AddSeparator

Aggiunge un separatore alla barra di stato della barra multifunzione.

```cpp
void AddSeparator();
```

### <a name="remarks"></a>Commenti

Il Framework aggiunge un separatore dopo il metodo [CMFCRibbonStatusBar:: AddElement](#addelement). inserisce l'ultimo elemento.

## <a name="cmfcribbonstatusbarcreate"></a><a name="create"></a> CMFCRibbonStatusBar:: create

Crea una barra di stato della barra multifunzione.

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
in Puntatore alla finestra padre.

*dwStyle*<br/>
in Combinazione logica o di stili del controllo.

*nID*<br/>
in ID del controllo della barra di stato.

### <a name="return-value"></a>Valore restituito

TRUE se la barra di stato viene creata correttamente; in caso contrario, FALSE.

## <a name="cmfcribbonstatusbarcreateex"></a><a name="createex"></a> CMFCRibbonStatusBar:: CreateEx

Crea una barra di stato della barra multifunzione con stile esteso.

```
BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle=0,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre.

*dwCtrlStyle*<br/>
Combinazione logica o di stili aggiuntivi per la creazione dell'oggetto barra di stato.

*dwStyle*<br/>
Stile del controllo della barra di stato.

*nID*<br/>
ID del controllo della barra di stato.

### <a name="return-value"></a>Valore restituito

TRUE se la barra di stato viene creata correttamente; in caso contrario, FALSE.

## <a name="cmfcribbonstatusbarfindbyid"></a><a name="findbyid"></a> CMFCRibbonStatusBar:: FindByID

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
CMFCRibbonBaseElement* FindByID(UINT uiCmdID, BOOL = TRUE);
```

### <a name="parameters"></a>Parametri

in *uiCmdID*<br/>
in *Bool*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarfindelement"></a><a name="findelement"></a> CMFCRibbonStatusBar:: FindElement

Restituisce un puntatore all'elemento con l'ID di comando specificato.

```
CMFCRibbonBaseElement* FindElement(UINT uiID);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in ID dell'elemento.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento con l'ID di comando specificato. NULL se tale elemento non è presente.

## <a name="cmfcribbonstatusbargetcount"></a><a name="getcount"></a> CMFCRibbonStatusBar:: GetCount

Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra di stato.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi che si trovano nell'area principale della barra di stato della barra di stato.

## <a name="cmfcribbonstatusbargetelement"></a><a name="getelement"></a> CMFCRibbonStatusBar:: GetElement

Restituisce un puntatore all'elemento che si trova in corrispondenza di un indice specificato.

```
CMFCRibbonBaseElement* GetElement(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica un indice in base zero di un elemento che si trova nell'area principale del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento che si trova in corrispondenza dell'indice specificato. NULL se l'indice è negativo o supera il numero di elementi nella barra di stato.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbargetexcount"></a><a name="getexcount"></a> CMFCRibbonStatusBar:: GetExCount

Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra di stato.

```
int GetExCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi che si trovano nell'area estesa della barra di stato della barra di stato.

## <a name="cmfcribbonstatusbargetexelement"></a><a name="getexelement"></a> CMFCRibbonStatusBar:: GetExElement

Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. L'area estesa si trova a destra della barra di stato.

```
CMFCRibbonBaseElement* GetExElement(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice in base zero di un elemento che si trova nell'area estesa del controllo barra di stato.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. NULL se *nIndex* è negativo o supera il numero di elementi nell'area estesa della barra di stato della barra di stato.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbargetextendedarea"></a><a name="getextendedarea"></a> CMFCRibbonStatusBar:: GetExtendedArea

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual BOOL GetExtendedArea(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbargetspace"></a><a name="getspace"></a> CMFCRibbonStatusBar:: getspace

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
int GetSpace() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarisbottomframe"></a><a name="isbottomframe"></a> CMFCRibbonStatusBar:: IsBottomFrame

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
BOOL IsBottomFrame() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarisextendedelement"></a><a name="isextendedelement"></a> CMFCRibbonStatusBar:: Estesoelement

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
BOOL IsExtendedElement(CMFCRibbonBaseElement* pElement) const;
```

### <a name="parameters"></a>Parametri

in *pelement*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarisinformationmode"></a><a name="isinformationmode"></a> CMFCRibbonStatusBar:: IsInformationMode

Determina se è abilitata la modalità informazioni per la barra di stato della barra multifunzione.

```
BOOL IsInformationMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la barra di stato può funzionare in modalità informazioni. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

In modalità informazioni la barra di stato nasconde tutti i riquadri normali e visualizza una stringa di messaggio.

## <a name="cmfcribbonstatusbarondrawinformation"></a><a name="ondrawinformation"></a> CMFCRibbonStatusBar:: OnDrawInformation

Consente di visualizzare la stringa visualizzata sulla barra di stato della barra multifunzione quando è abilitata la modalità informazioni.

```
virtual void OnDrawInformation(
    CDC* pDC,
    CString& strInfo,
    CRect rectInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*strInfo*<br/>
in Stringa di informazioni.

*rectInfo*<br/>
in Rettangolo di delimitazione.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della stringa di informazioni sulla barra di stato. Usare il metodo [CMFCRibbonStatusBar::](#setinformation) SetValue per impostare la barra di stato in modalità informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e visualizza la stringa di informazioni specificata da *strInfo*.

## <a name="cmfcribbonstatusbarrecalclayout"></a><a name="recalclayout"></a> CMFCRibbonStatusBar:: RecalcLayout

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonstatusbarremoveall"></a><a name="removeall"></a> CMFCRibbonStatusBar:: RemoveAll

Rimuove tutti gli elementi dalla barra di stato della barra di stato.

```cpp
void RemoveAll();
```

## <a name="cmfcribbonstatusbarremoveelement"></a><a name="removeelement"></a> CMFCRibbonStatusBar:: RemoveElement

Rimuove dall'elemento con un ID di comando specificato dalla barra di stato della barra multifunzione.

```
BOOL RemoveElement(UINT uiID);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in ID dell'elemento da rimuovere dalla barra di stato.

### <a name="return-value"></a>Valore restituito

TRUE se viene rimosso un elemento con il *uiID* specificato. In caso contrario, FALSE.

## <a name="cmfcribbonstatusbarsetinformation"></a><a name="setinformation"></a> CMFCRibbonStatusBar:: Transformations

Abilita o Disabilita la modalità informazioni per la barra di stato della barra di stato.

```cpp
void SetInformation(LPCTSTR lpszInfo);
```

### <a name="parameters"></a>Parametri

*lpszInfo*<br/>
in Stringa di informazioni.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per posizionare la barra di stato in modalità informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e visualizza la stringa di informazioni specificata da *lpszInfo*.

Quando lpszInfo è NULL, la barra di stato viene ripristinata in modalità normale.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)<br/>
[Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
