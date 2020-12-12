---
description: 'Altre informazioni su: classe CMFCRibbonComboBox'
title: Classe CMFCRibbonComboBox
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::AddItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::DeleteItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::EnableDropDownListResize
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::FindItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetCount
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetCurSel
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetDropDownHeight
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetIntermediateSize
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetItemData
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::HasEditBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::IsResizeDropDownList
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::OnSelectItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::RemoveAllItems
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::SelectItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::SetDropDownHeight
helpviewer_keywords:
- CMFCRibbonComboBox [MFC], CMFCRibbonComboBox
- CMFCRibbonComboBox [MFC], AddItem
- CMFCRibbonComboBox [MFC], DeleteItem
- CMFCRibbonComboBox [MFC], EnableDropDownListResize
- CMFCRibbonComboBox [MFC], FindItem
- CMFCRibbonComboBox [MFC], GetCount
- CMFCRibbonComboBox [MFC], GetCurSel
- CMFCRibbonComboBox [MFC], GetDropDownHeight
- CMFCRibbonComboBox [MFC], GetIntermediateSize
- CMFCRibbonComboBox [MFC], GetItem
- CMFCRibbonComboBox [MFC], GetItemData
- CMFCRibbonComboBox [MFC], HasEditBox
- CMFCRibbonComboBox [MFC], IsResizeDropDownList
- CMFCRibbonComboBox [MFC], OnSelectItem
- CMFCRibbonComboBox [MFC], RemoveAllItems
- CMFCRibbonComboBox [MFC], SelectItem
- CMFCRibbonComboBox [MFC], SetDropDownHeight
ms.assetid: 9b29a6a4-cf17-4152-9b13-0bf90784b30d
ms.openlocfilehash: be4078145817d06fafddb76f2cefbd0df0083503
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293666"
---
# <a name="cmfcribboncombobox-class"></a>Classe CMFCRibbonComboBox

La `CMFCRibbonComboBox` classe implementa un controllo casella combinata che è possibile aggiungere a una barra multifunzione, a un pannello della barra multifunzione o a un menu di scelta rapida della barra multifunzione.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCRibbonComboBox : public CMFCRibbonEdit
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonComboBox:: CMFCRibbonComboBox](#cmfcribboncombobox)|Costruisce un oggetto CMFCRibbonComboBox.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonComboBox:: AddItem](#additem)|Accoda un elemento univoco alla casella di riepilogo.|
|[CMFCRibbonComboBox::D eleteItem](#deleteitem)|Elimina un elemento specificato dalla casella di riepilogo.|
|[CMFCRibbonComboBox:: EnableDropDownListResize](#enabledropdownlistresize)|Specifica se è possibile modificare le dimensioni della casella di riepilogo quando scende.|
|[CMFCRibbonComboBox:: FindItem](#finditem)|Restituisce l'indice del primo elemento nella casella di riepilogo che corrisponde a una stringa specificata.|
|[CMFCRibbonComboBox:: GetCount](#getcount)|Restituisce il numero di elementi nella casella di riepilogo.|
|[CMFCRibbonComboBox:: GetCurSel](#getcursel)|Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.|
|[CMFCRibbonComboBox:: GetDropDownHeight](#getdropdownheight)|Ottiene l'altezza della casella di riepilogo quando viene rilasciata la casella di riepilogo.|
|[CMFCRibbonComboBox:: GetIntermediateSize](#getintermediatesize)|Restituisce la dimensione della casella combinata visualizzata in modalità intermedia.|
|[CMFCRibbonComboBox:: GetItem](#getitem)|Restituisce la stringa associata a un elemento in corrispondenza di un indice specificato nella casella di riepilogo.|
|[CMFCRibbonComboBox:: GetItemData](#getitemdata)|Restituisce i dati associati a un elemento in corrispondenza di un indice specificato nella casella di riepilogo.|
|[CMFCRibbonComboBox:: HasEditBox](#haseditbox)|Indica se il controllo contiene una casella di modifica.|
|[CMFCRibbonComboBox:: IsResizeDropDownList](#isresizedropdownlist)|Indica se è possibile ridimensionare la casella di riepilogo.|
|[CMFCRibbonComboBox:: OnSelectItem](#onselectitem)|Chiamata eseguita dal framework quando l'utente seleziona un elemento nella casella di riepilogo.|
|[CMFCRibbonComboBox:: RemoveAllItems](#removeallitems)|Elimina tutti gli elementi dalla casella di riepilogo e cancella la casella di modifica.|
|[CMFCRibbonComboBox:: SelectItem](#selectitem)|Seleziona un elemento nella casella di riepilogo.|
|[CMFCRibbonComboBox:: SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo quando viene rilasciata.|

## <a name="remarks"></a>Commenti

La casella combinata della barra multifunzione è costituita da una casella di riepilogo combinata con un'etichetta o un'etichetta statica che può essere modificata dall'utente. È necessario specificare il tipo desiderato quando si crea la casella combinata della barra multifunzione.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCRibbonComboBox` classe, aggiungere un elemento alla casella combinata, selezionare un elemento nella casella combinata e aggiungere una casella combinata a un pannello.

[!code-cpp[NVC_MFC_RibbonApp#11](../../mfc/reference/codesnippet/cpp/cmfcribboncombobox-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)

[CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncombobox. h

## <a name="cmfcribboncomboboxadditem"></a><a name="additem"></a> CMFCRibbonComboBox:: AddItem

Accoda un elemento univoco alla casella di riepilogo.

```cpp
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*lpszItem*<br/>
in Stringa dell'elemento da aggiungere.

*dwData*<br/>
in Dati associati all'elemento da aggiungere.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento accodato.

## <a name="cmfcribboncomboboxcmfcribboncombobox"></a><a name="cmfcribboncombobox"></a> CMFCRibbonComboBox:: CMFCRibbonComboBox

Costruisce un oggetto `CMFCRibbonComboBox`.

```cpp
public:
CMFCRibbonComboBox(
    UINT nID,
    BOOL bHasEditBox=TRUE,
    Int nWidth=-1,
    LPCTSTR lpszLabel=NULL,
    Int nImage=-1);

protected:
CMFCRibbonComboBox();
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in ID della casella combinata.

*bHasEditBox*<br/>
in TRUE se si desidera una casella di modifica all'interno del controllo; In caso contrario, FALSE.

*nWidth*<br/>
in Larghezza della casella combinata in pixel; oppure-1 per la larghezza predefinita.

*lpszLabel*<br/>
in Etichetta di visualizzazione della casella combinata.

*nImage*<br/>
in Indice di immagine piccola della casella combinata.

### <a name="remarks"></a>Commenti

La larghezza predefinita è 108 pixel.

## <a name="cmfcribboncomboboxdeleteitem"></a><a name="deleteitem"></a> CMFCRibbonComboBox::D eleteItem

Elimina un elemento specificato dalla casella di riepilogo.

```cpp
BOOL DeleteItem(int iIndex);
BOOL DeleteItem(DWORD_PTR dwData);

BOOL DeleteItem(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero dell'elemento da eliminare.

*dwData*<br/>
in Dati associati all'elemento da eliminare.

*lpszText*<br/>
in Stringa dell'elemento da eliminare. Se sono presenti più elementi con la stessa stringa, il primo elemento viene eliminato.

### <a name="return-value"></a>Valore restituito

TRUE se l'elemento specificato è stato eliminato. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxenabledropdownlistresize"></a><a name="enabledropdownlistresize"></a> CMFCRibbonComboBox:: EnableDropDownListResize

Specifica se è possibile modificare le dimensioni della casella di riepilogo quando scende.

```cpp
void EnableDropDownListResize(BOOL bEnable=FALSE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare il ridimensionamento. FALSE per disabilitare il ridimensionamento.

### <a name="remarks"></a>Commenti

Quando il ridimensionamento è abilitato, le dimensioni della casella di riepilogo cambiano per adattarsi agli elementi visualizzati.

## <a name="cmfcribboncomboboxfinditem"></a><a name="finditem"></a> CMFCRibbonComboBox:: FindItem

Restituisce l'indice del primo elemento nella casella di riepilogo che corrisponde a una stringa specificata.

```cpp
int FindItem(LPCTSTR lpszText) const;
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
in Stringa di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento; oppure-1 se l'elemento non viene trovato.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxgetcount"></a><a name="getcount"></a> CMFCRibbonComboBox:: GetCount

Restituisce il numero di elementi nella casella di riepilogo.

```cpp
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella casella di riepilogo oppure 0 se la casella di riepilogo non contiene elementi.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxgetcursel"></a><a name="getcursel"></a> CMFCRibbonComboBox:: GetCurSel

Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.

```cpp
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento attualmente selezionato nella casella di riepilogo. oppure-1 se non è selezionato alcun elemento.

## <a name="cmfcribboncomboboxgetdropdownheight"></a><a name="getdropdownheight"></a> CMFCRibbonComboBox:: GetDropDownHeight

Ottiene l'altezza della casella di riepilogo quando viene rilasciata la casella di riepilogo.

```cpp
int GetDropDownHeight();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, della casella di riepilogo.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxgetintermediatesize"></a><a name="getintermediatesize"></a> CMFCRibbonComboBox:: GetIntermediateSize

Restituisce la dimensione della casella combinata visualizzata in modalità intermedia.

```cpp
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per la casella combinata.

### <a name="return-value"></a>Valore restituito

Dimensione della casella combinata.

### <a name="remarks"></a>Commenti

Le dimensioni restituite sono basate sulle dimensioni della casella combinata quando vengono visualizzate immagini piccole.

## <a name="cmfcribboncomboboxgetitem"></a><a name="getitem"></a> CMFCRibbonComboBox:: GetItem

Restituisce la stringa associata a un elemento in corrispondenza di un indice specificato nella casella di riepilogo.

```cpp
LPCTSTR GetItem(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore alla stringa associata all'elemento. in caso contrario, NULL se il parametro di indice non è valido o se il parametro di indice è-1 e non è selezionato alcun elemento nella casella combinata.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxgetitemdata"></a><a name="getitemdata"></a> CMFCRibbonComboBox:: GetItemData

Restituisce i dati associati a un elemento in corrispondenza di un indice specificato nella casella di riepilogo.

```cpp
DWORD_PTR GetItemData(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Dati associati all'elemento; oppure 0 se l'elemento non esiste o se il parametro di indice è-1 e non è presente alcun elemento selezionato nella casella di riepilogo.

## <a name="cmfcribboncomboboxhaseditbox"></a><a name="haseditbox"></a> CMFCRibbonComboBox:: HasEditBox

Indica se il controllo contiene una casella di modifica.

```cpp
BOOL HasEditBox() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il controllo contiene una casella di modifica; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxisresizedropdownlist"></a><a name="isresizedropdownlist"></a> CMFCRibbonComboBox:: IsResizeDropDownList

Indica se è possibile ridimensionare la casella di riepilogo.

```cpp
BOOL IsResizeDropDownList() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella di riepilogo può essere ridimensionata. in caso contrario, FALSE. [CMFCRibbonComboBox:: EnableDropDownListResize](#enabledropdownlistresize)

### <a name="remarks"></a>Commenti

È possibile abilitare il ridimensionamento della casella di riepilogo usando il metodo [CMFCRibbonComboBox:: EnableDropDownListResize](#enabledropdownlistresize) .

## <a name="cmfcribboncomboboxonselectitem"></a><a name="onselectitem"></a> CMFCRibbonComboBox:: OnSelectItem

Chiamata eseguita dal framework quando un utente seleziona un elemento nella casella di riepilogo.

```cpp
virtual void OnSelectItem(int nItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
in Indice dell'elemento selezionato.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo se si desidera elaborare una selezione di input dell'utente.

## <a name="cmfcribboncomboboxremoveallitems"></a><a name="removeallitems"></a> CMFCRibbonComboBox:: RemoveAllItems

Elimina tutti gli elementi dalla casella di riepilogo e cancella la casella di modifica.

```cpp
void RemoveAllItems();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxselectitem"></a><a name="selectitem"></a> CMFCRibbonComboBox:: SelectItem

Seleziona un elemento nella casella di riepilogo.

```cpp
BOOL SelectItem(int iIndex);
BOOL SelectItem(DWORD_PTR dwData);

BOOL SelectItem(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

*dwData*<br/>
in Dati associati a un elemento nella casella di riepilogo.

*lpszText*<br/>
in Stringa di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcribboncomboboxsetdropdownheight"></a><a name="setdropdownheight"></a> CMFCRibbonComboBox:: SetDropDownHeight

Imposta l'altezza della casella di riepilogo quando viene rilasciata.

```cpp
void SetDropDownHeight(int nHeight);
```

### <a name="parameters"></a>Parametri

*nHeight*<br/>
in Altezza, in pixel, della casella di riepilogo.

### <a name="remarks"></a>Commenti

L'altezza predefinita è 150 pixel.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)
