---
title: Classe CMFCRibbonComboBox | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ebe013e8ce674efb0782112cc8cbc8b1462ef24
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmfcribboncombobox-class"></a>Classe CMFCRibbonComboBox
Il `CMFCRibbonComboBox` implementa un controllo casella combinata che è possibile aggiungere a una barra multifunzione, un pannello della barra multifunzione o a un menu di scelta rapida della barra multifunzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonComboBox : public CMFCRibbonEdit  
```  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonComboBox::CMFCRibbonComboBox](#cmfcribboncombobox)|Costruisce un oggetto CMFCRibbonComboBox.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonComboBox::AddItem](#additem)|Aggiunge un elemento univoco nella casella di riepilogo.|  
|[CMFCRibbonComboBox::DeleteItem](#deleteitem)|Elimina un elemento specificato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize)|Specifica se la casella di riepilogo puoi modificare dimensioni trascinando verso il basso.|  
|[CMFCRibbonComboBox::FindItem](#finditem)|Restituisce l'indice del primo elemento nella casella di riepilogo che corrisponde a una stringa specificata.|  
|[CMFCRibbonComboBox::GetCount](#getcount)|Restituisce il numero di elementi nella casella di riepilogo.|  
|[CMFCRibbonComboBox::GetCurSel](#getcursel)|Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::GetDropDownHeight](#getdropdownheight)|Ottiene l'altezza della casella di riepilogo quando viene eliminata la casella di riepilogo a discesa.|  
|[CMFCRibbonComboBox::GetIntermediateSize](#getintermediatesize)|Restituisce le dimensioni della casella combinata, come visualizzato in modalità intermedia.|  
|[CMFCRibbonComboBox::GetItem](#getitem)|Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::GetItemData](#getitemdata)|Restituisce i dati associati a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::HasEditBox](#haseditbox)|Indica se il controllo contiene una casella di modifica.|  
|[CMFCRibbonComboBox::IsResizeDropDownList](#isresizedropdownlist)|Indica se la casella di riepilogo può essere ridimensionata.|  
|[CMFCRibbonComboBox::OnSelectItem](#onselectitem)|Chiamato dal framework quando l'utente seleziona un elemento nella casella di riepilogo.|  
|[CMFCRibbonComboBox::RemoveAllItems](#removeallitems)|Elimina tutti gli elementi dalla casella di riepilogo e deseleziona la casella di modifica.|  
|[CMFCRibbonComboBox::SelectItem](#selectitem)|Seleziona un elemento nella casella di riepilogo.|  
|[CMFCRibbonComboBox::SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo quando viene eliminato verso il basso.|  
  
## <a name="remarks"></a>Note  
 Casella combinata della barra multifunzione è costituito da una casella di riepilogo combinata con un'etichetta statica o etichetta che può essere modificato dall'utente. È necessario specificare il tipo desiderato quando si crea la casella combinata della barra multifunzione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCRibbonComboBox` classe, aggiungere un elemento alla casella combinata, selezionare un elemento nella casella combinata e aggiungere una casella combinata a un pannello.  
  
 [!code-cpp[NVC_MFC_RibbonApp#11](../../mfc/reference/codesnippet/cpp/cmfcribboncombobox-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncombobox. h  
  
##  <a name="additem"></a>  CMFCRibbonComboBox::AddItem  
 Aggiunge un elemento univoco nella casella di riepilogo.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszItem`  
 La stringa dell'elemento da aggiungere.  
  
 [in] `dwData`  
 I dati associati con l'elemento da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento aggiunto.  
  
##  <a name="cmfcribboncombobox"></a>  CMFCRibbonComboBox::CMFCRibbonComboBox  
 Costruisce un oggetto `CMFCRibbonComboBox`.  
  
```  
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
 [in] `nID`  
 L'ID della casella combinata.  
  
 [in] `bHasEditBox`  
 `TRUE` Se si desidera che una casella di modifica nel controllo. `FALSE` in caso contrario.  
  
 [in] `nWidth`  
 Larghezza della casella combinata, in pixel. o -1 per la larghezza predefinita.  
  
 [in] `lpszLabel`  
 L'etichetta di visualizzazione della casella combinata.  
  
 [in] `nImage`  
 L'indice dell'immagine di piccole dimensioni della casella combinata.  
  
### <a name="remarks"></a>Note  
 La larghezza predefinita è 108 pixel.  
  
##  <a name="deleteitem"></a>  CMFCRibbonComboBox::DeleteItem  
 Elimina un elemento specificato nella casella di riepilogo.  
  
```  
BOOL DeleteItem(int iIndex);
BOOL DeleteItem(DWORD_PTR dwData);

BOOL DeleteItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero dell'elemento da eliminare.  
  
 [in] `dwData`  
 I dati associati all'elemento da eliminare.  
  
 [in] `lpszText`  
 La stringa dell'elemento da eliminare. Se sono presenti più voci con la stessa stringa, viene eliminato il primo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se l'elemento specificato è stato eliminato, in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabledropdownlistresize"></a>  CMFCRibbonComboBox::EnableDropDownListResize  
 Specifica se la casella di riepilogo puoi modificare dimensioni trascinando verso il basso.  
  
```  
void EnableDropDownListResize(BOOL bEnable=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE` Per abilitare il ridimensionamento; `FALSE` per disabilitare il ridimensionamento.  
  
### <a name="remarks"></a>Note  
 Quando è abilitato il ridimensionamento, la casella di riepilogo viene modificato adatta gli elementi che vengono visualizzati.  
  
##  <a name="finditem"></a>  CMFCRibbonComboBox::FindItem  
 Restituisce l'indice del primo elemento nella casella di riepilogo che corrisponde a una stringa specificata.  
  
```  
int FindItem(LPCTSTR lpszText) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszText`  
 La stringa di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento; oppure -1 se l'elemento non è stato trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcount"></a>  CMFCRibbonComboBox::GetCount  
 Restituisce il numero di elementi nella casella di riepilogo.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo, oppure 0 se la casella di riepilogo non contiene elementi.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcursel"></a>  CMFCRibbonComboBox::GetCurSel  
 Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento attualmente selezionato nella casella di riepilogo. o -1 se è selezionato alcun elemento.  
  
##  <a name="getdropdownheight"></a>  CMFCRibbonComboBox::GetDropDownHeight  
 Ottiene l'altezza della casella di riepilogo quando viene eliminata la casella di riepilogo a discesa.  
  
```  
int GetDropDownHeight();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, della casella di riepilogo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getintermediatesize"></a>  CMFCRibbonComboBox::GetIntermediateSize  
 Restituisce le dimensioni della casella combinata, come visualizzato in modalità intermedia.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per la casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della casella combinata.  
  
### <a name="remarks"></a>Note  
 La dimensione restituita è basata sulle dimensioni della casella combinata durante la visualizzazione di immagini di piccole dimensioni.  
  
##  <a name="getitem"></a>  CMFCRibbonComboBox::GetItem  
 Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.  
  
```  
LPCTSTR GetItem(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa che è associato l'elemento. in caso contrario, `NULL` se il parametro di indice non è valido o se il parametro di indice è -1 e nessun elemento selezionato nella casella combinata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getitemdata"></a>  CMFCRibbonComboBox::GetItemData  
 Restituisce i dati associati a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.  
  
```  
DWORD_PTR GetItemData(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 I dati associati all'elemento. oppure 0 se l'elemento non esiste o se il parametro di indice è -1 e non è selezionato alcun elemento nella casella di riepilogo.  
  
##  <a name="haseditbox"></a>  CMFCRibbonComboBox::HasEditBox  
 Indica se il controllo contiene una casella di modifica.  
  
```  
BOOL HasEditBox() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il controllo contiene una casella di modifica; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isresizedropdownlist"></a>  CMFCRibbonComboBox::IsResizeDropDownList  
 Indica se la casella di riepilogo può essere ridimensionata.  
  
```  
BOOL IsResizeDropDownList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la casella di riepilogo può essere ridimensionata; in caso contrario `FALSE`. [CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize)  
  
### <a name="remarks"></a>Note  
 È possibile abilitare la casella di elenco ridimensionamento tramite il [CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize) metodo.  
  
##  <a name="onselectitem"></a>  CMFCRibbonComboBox::OnSelectItem  
 Chiamato dal framework quando un utente seleziona un elemento nella casella di riepilogo.  
  
```  
virtual void OnSelectItem(int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nItem`  
 Indice dell'elemento selezionato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera elaborare una selezione di input dell'utente.  
  
##  <a name="removeallitems"></a>  CMFCRibbonComboBox::RemoveAllItems  
 Elimina tutti gli elementi dalla casella di riepilogo e deseleziona la casella di modifica.  
  
```  
void RemoveAllItems();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="selectitem"></a>  CMFCRibbonComboBox::SelectItem  
 Seleziona un elemento nella casella di riepilogo.  
  
```  
BOOL SelectItem(int iIndex);
BOOL SelectItem(DWORD_PTR dwData);

BOOL SelectItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
 [in] `dwData`  
 I dati associati a un elemento nella casella di riepilogo.  
  
 [in] `lpszText`  
 La stringa di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdropdownheight"></a>  CMFCRibbonComboBox::SetDropDownHeight  
 Imposta l'altezza della casella di riepilogo quando viene eliminato verso il basso.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHeight`  
 L'altezza, in pixel, della casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 L'altezza predefinita è 150 pixel.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)
