---
title: Classe CMFCToolBarComboBoxButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::AddItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::AddSortedItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::Compare
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::CreateEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::DeleteItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::FindItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetByCmd
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetComboBox
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCount
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCountAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCurSel
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCurSelAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetEditCtrl
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemData
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemDataAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemDataPtrAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetText
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetTextAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::IsCenterVert
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::IsFlatMode
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::RemoveAllItems
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SelectItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SelectItemAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetCenterVert
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetDropDownHeight
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetFlatMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolBarComboBoxButton class
ms.assetid: 32fa39f7-8e4e-4f0a-a31d-7b540d969a6c
caps.latest.revision: 30
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 43369e8869f9dd58543016bd74547b24fbe183a5
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctoolbarcomboboxbutton-class"></a>Classe CMFCToolBarComboBoxButton
Un pulsante della barra degli strumenti contenente un controllo casella combinata ( [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarComboBoxButton : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton](#cmfctoolbarcomboboxbutton)|Costruisce un oggetto `CMFCToolBarComboBoxButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::AddItem](#additem)|Aggiunge un elemento alla fine dell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::AddSortedItem](#addsorteditem)|Aggiunge un elemento all'elenco della casella combinata. L'ordine degli elementi nell'elenco è specificato da `Compare`.|  
|[CMFCToolBarComboBoxButton::Compare](#compare)|Confronta due elementi. Chiamato per ordinare gli elementi che `AddSortedItems` aggiunge all'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica per il pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::DeleteItem](#deleteitem)|Elimina un elemento dall'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::FindItem](#finditem)|Restituisce l'indice dell'elemento che contiene una stringa specificata.|  
|[CMFCToolBarComboBoxButton::GetByCmd](#getbycmd)|Restituisce un puntatore al pulsante casella combinata con un ID di comando specificato.|  
|[CMFCToolBarComboBoxButton::GetComboBox](#getcombobox)|Restituisce un puntatore per il controllo casella combinata che è incorporato nel pulsante casella combinata.|  
|[CMFCToolBarComboBoxButton::GetCount](#getcount)|Restituisce il numero di elementi nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetCountAll](#getcountall)|Trova la casella combinata pulsante della casella con un ID di comando specificato. Restituisce il numero di elementi nella casella combinata elenco della casella del pulsante.|  
|[CMFCToolBarComboBoxButton::GetCurSel](#getcursel)|Restituisce l'indice dell'elemento selezionato nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetCurSelAll](#getcurselall)|Trova la casella combinata pulsante casella che presenta un ID di comando specificato e restituisce l'indice dell'elemento selezionato nella casella combinata elenco della casella del pulsante.|  
|[CMFCToolBarComboBoxButton::GetEditCtrl](#geteditctrl)|Restituisce un puntatore al controllo di modifica che viene incorporato nel pulsante casella combinata.|  
|[CMFCToolBarComboBoxButton::GetItem](#getitem)|Restituisce la stringa associata a un indice specificato nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetItemAll](#getitemall)|Trova la casella combinata pulsante casella con un ID di comando specificato e restituisce la stringa associata a un indice nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemData](#getitemdata)|Restituisce il valore a 32 bit che è associato a un indice specificato nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetItemDataAll](#getitemdataall)|Trova la casella combinata pulsante casella che presenta un ID di comando specificato e restituisce il valore a 32 bit che è associato a un indice nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](#getitemdataptrall)|Trova la casella combinata pulsante della casella con un ID di comando specificato. Recupera il valore a 32 bit che è associato un indice nell'elenco della casella combinata di tale pulsante e restituisce il valore di 32 bit come un puntatore.|  
|[CMFCToolBarComboBoxButton::GetText](#gettext)|Restituisce il testo dal controllo di modifica della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetTextAll](#gettextall)|Trova la casella combinata pulsante casella con un ID di comando specificato e restituisce il testo dal controllo di modifica del pulsante.|  
|[CMFCToolBarComboBoxButton::IsCenterVert](#iscentervert)|Determina se i pulsanti della casella combinata nell'applicazione sono centrati o allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella combinata nell'applicazione hanno un aspetto bidimensionale.|  
|[CMFCToolBarComboBoxButton::RemoveAllItems](#removeallitems)|Rimuove tutti gli elementi dall'elenco e modificare controllo della casella combinata.|  
|[CMFCToolBarComboBoxButton::SelectItem](#selectitem)|Seleziona un elemento nella casella combinata in base al relativo indice, un valore a 32 bit o una stringa e il controllo casella combinata sulla selezione di notifica.|  
|[CMFCToolBarComboBoxButton::SelectItemAll](#selectitemall)|Trova la casella combinata pulsante della casella con un ID di comando specificato. Chiamate `SelectItem` per selezionare un elemento nella casella combinata del pulsante in base alla relativa stringa, un indice o un valore a 32 bit.|  
|[CMFCToolBarComboBoxButton::SetCenterVert](#setcentervert)|Specifica se i pulsanti della casella combinata nell'applicazione sono centrati verticalmente o allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo a discesa.|  
|[CMFCToolBarComboBoxButton::SetFlatMode](#setflatmode)|Specifica se i pulsanti della casella combinata nell'applicazione hanno un aspetto bidimensionale.|  
  
## <a name="remarks"></a>Note  
 Per aggiungere un pulsante della casella combinata a una barra degli strumenti, attenersi alla procedura seguente:  
  
 1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  
  
 2. Costruire un `CMFCToolBarComboBoxButton` oggetto.  
  
 3. Nel gestore di messaggi che elabora il `AFX_WM_RESETTOOLBAR` del messaggio, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
 Per ulteriori informazioni, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md). Per un esempio di un pulsante della barra degli strumenti della casella combinata, vedere il progetto di esempio VisualStudioDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCToolBarComboBoxButton` (classe). Nell'esempio viene illustrato come attivare le caselle di modifica e combinata, impostare la posizione verticale della casella combinata i pulsanti della casella dell'applicazione, impostare l'altezza della casella di riepilogo quando viene eliminato, impostare l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione e impostare il testo nella casella di testo del pulsante casella combinata. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#36;](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo&#37;](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarcomboboxbutton.h  
  
##  <a name="additem"></a>CMFCToolBarComboBoxButton::AddItem  
 Aggiunge un elemento univoco nella casella di riepilogo.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszItem`  
 Il testo dell'elemento da aggiungere alla casella di riepilogo.  
  
 [in] `dwData`  
 I dati associati all'elemento da aggiungere alla casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'ultimo elemento nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo metodo quando lo stile elenco viene ordinato.  
  
 Se il testo dell'elemento è già nella casella di riepilogo, i nuovi dati vengono archiviati con l'elemento esistente. La ricerca per l'elemento viene fatta distinzione tra maiuscole e minuscole.  
  
##  <a name="addsorteditem"></a>CMFCToolBarComboBoxButton::AddSortedItem  
 Aggiunge un elemento alla casella di riepilogo nell'ordine in cui è definito per il [confrontare](#compare) metodo.  
  
```  
virtual INT_PTR AddSortedItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszItem`  
 Il testo dell'elemento da aggiungere alla casella di riepilogo.  
  
 [in] `dwData`  
 I dati associati all'elemento da aggiungere alla casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento che è stato aggiunto alla casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere elementi alla casella di riepilogo in un ordine specifico.  
  
##  <a name="canbestretched"></a>CMFCToolBarComboBoxButton::CanBeStretched  
 Indica se è possono modificare le dimensioni di pulsante casella combinata.  
  
```  
virtual BOOL CanBeStretched() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE`.  
  
##  <a name="cmfctoolbarcomboboxbutton"></a>CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton  
 Costruisce un [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) oggetto.  
  
```  
CMFCToolBarComboBoxButton(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=CBS_DROPDOWNLIST,  
    int iWidth=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 L'ID di comando del pulsante nuovo.  
  
 [in] `iImage`  
 Indice dell'immagine dell'immagine associata al pulsante nuovo.  
  
 [in] `dwStyle`  
 Stile del pulsante nuovo.  
  
 [in] `iWidth`  
 La larghezza, in pixel, del nuovo pulsante.  
  
### <a name="remarks"></a>Note  
 La larghezza predefinita è 150 pixel.  
  
 Per un elenco di stili dei pulsanti della barra degli strumenti vedere [stili del controllo ToolBar](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="cleardata"></a>CMFCToolBarComboBoxButton::ClearData  
 Elimina i dati definiti dall'utente.  
  
```  
virtual void ClearData();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera eliminare tutti i dati definiti dall'utente.  
  
##  <a name="compare"></a>CMFCToolBarComboBoxButton::Compare  
 Confronta due stringhe.  
  
```  
virtual int Compare(
    LPCTSTR lpszItem1,  
    LPCTSTR lpszItem2);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszItem1`  
 Prima stringa da confrontare.  
  
 [in] `lpszItem2`  
 Seconda stringa da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica la relazione tra maiuscole e minuscole lessicografico tra le stringhe. Nella tabella seguente sono elencati i valori possibili:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|\<0|La prima stringa è minore del secondo.|  
|0|Il secondo è uguale a prima stringa.|  
|>0|La prima stringa è maggiore del secondo.|  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per modificare l'ordinamento degli elementi nella casella di riepilogo.  
  
 Il confronto è tra maiuscole e minuscole.  
  
 Questo metodo viene chiamato solo dalla [AddSortedItem](#addsorteditem) metodo.  
  
##  <a name="copyfrom"></a>CMFCToolBarComboBoxButton::CopyFrom  
 Copia lo stato dell'oggetto specificato `CMFCToolBarComboBoxButton` all'oggetto corrente.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Oggetto `CMFCToolBarComboBoxButton` di origine.  
  
##  <a name="createcombo"></a>CMFCToolBarComboBoxButton::CreateCombo  
 Crea una nuova casella combinata per il pulsante della casella combinata.  
  
```  
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre del pulsante.  
  
 [in] `rect`  
 Rettangolo di delimitazione della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova casella combinata se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
##  <a name="createedit"></a>CMFCToolBarComboBoxButton::CreateEdit  
 Crea una nuova casella di modifica per il pulsante della casella combinata.  
  
```  
virtual CMFCToolBarComboBoxEdit* CreateEdit(
    CWnd* pWndParent,  
    const CRect& rect,  
    DWORD dwEditStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre del pulsante.  
  
 [in] `rect`  
 Rettangolo di delimitazione della nuova casella di modifica.  
  
 [in] `dwEditStyle`  
 Stile del controllo della nuova casella di modifica.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per la nuova casella di modifica se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando crea una nuova casella di modifica per un pulsante della casella combinata. Eseguire l'override di questo metodo per modificare la modalità [CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md) viene creato.  
  
##  <a name="deleteitem"></a>CMFCToolBarComboBoxButton::DeleteItem  
 Elimina un elemento specificato dalla casella di riepilogo.  
  
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
 Il testo dell'elemento da eliminare. Se sono presenti più elementi con lo stesso testo, il primo elemento viene eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'elemento è stato disponibile ed eliminato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="duplicatedata"></a>CMFCToolBarComboBoxButton::DuplicateData  
 Dati definiti dall'utente duplicati.  
  
```  
virtual void DuplicateData();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera copiare i dati definiti dall'utente.  
  
##  <a name="enablewindow"></a>CMFCToolBarComboBoxButton::EnableWindow  
 Abilita o disabilita le caselle di modifica e combinata.  
  
```  
virtual void EnableWindow(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per attivare le caselle combinate e modifica. `FALSE` per disabilitare le caselle di modifica e combinata.  
  
### <a name="remarks"></a>Note  
 Se disabilitato, i controlli non possono diventare attivi e non possono accettare l'input dell'utente.  
  
##  <a name="exporttomenubutton"></a>CMFCToolBarComboBoxButton::ExportToMenuButton  
 ID di copie di una stringa dalla tabella delle stringhe dell'applicazione al menu specificato utilizzando il comando di pulsante casella combinata.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `menuButton`  
 Riferimento a un pulsante di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE`.  
  
##  <a name="finditem"></a>CMFCToolBarComboBoxButton::FindItem  
 Restituisce l'indice del primo elemento nella casella di riepilogo che contiene una stringa specificata.  
  
```  
int FindItem(LPCTSTR lpszText) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszText`  
 Il testo da cercare nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento; o `CB_ERR` se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getbycmd"></a>CMFCToolBarComboBoxButton::GetByCmd  
 Ottiene un puntatore al pulsante casella combinata con un ID di comando specificato.  
  
```  
static CMFCToolBarComboBoxButton* GetByCmd(
    UINT uiCmd,  
    BOOL bIsFocus=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata.  
  
 [in] `bIsFocus`  
 `TRUE`Per eseguire la ricerca solo concentrati sui pulsanti. `FALSE` per cercare tutti i pulsanti.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un pulsante della casella combinata; o `NULL` se il pulsante non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcombobox"></a>CMFCToolBarComboBoxButton::GetComboBox  
 Restituisce un puntatore alla casella combinata nella casella combinata pulsante della casella.  
  
```  
CComboBox* GetComboBox() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CComboBox (classe)](../../mfc/reference/ccombobox-class.md) oggetto se il metodo è stata completata; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcontextmenuid"></a>CMFCToolBarComboBoxButton::GetContextMenuID  
 Ottiene l'ID di risorsa di menu di scelta rapida per il pulsante della casella combinata.  
  
```  
UINT GetContextMenuID();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di risorsa menu di scelta rapida.  
  
##  <a name="getcount"></a>CMFCToolBarComboBoxButton::GetCount  
 Restituisce il numero di elementi nella casella di riepilogo.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcountall"></a>CMFCToolBarComboBoxButton::GetCountAll  
 Ottiene il numero di elementi nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static int GetCountAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo. in caso contrario, `CB_ERR` se non viene trovato il pulsante della casella combinata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcursel"></a>CMFCToolBarComboBoxButton::GetCurSel  
 Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento attualmente selezionato nella casella di riepilogo. o `CB_ERR` se è selezionato alcun elemento.  
  
### <a name="remarks"></a>Note  
 L'indice di casella di elenco è in base zero.  
  
##  <a name="getcurselall"></a>CMFCToolBarComboBoxButton::GetCurSelAll  
 Restituisce l'indice dell'elemento attualmente selezionato nella casella di riepilogo di una casella combinata con pulsante della casella con un ID di comando specificato.  
  
```  
static int GetCurSelAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento attualmente selezionato nella casella di riepilogo. in caso contrario, `CB_ERR` se è selezionato alcun elemento o un pulsante della casella combinata non viene trovato.  
  
### <a name="remarks"></a>Note  
 L'indice di casella di elenco è in base zero.  
  
##  <a name="geteditctrl"></a>CMFCToolBarComboBoxButton::GetEditCtrl  
 Restituisce un puntatore alla casella di testo nella casella combinata pulsante della casella.  
  
```  
virtual CEdit* GetEditCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una casella di modifica se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethwnd"></a>CMFCToolBarComboBoxButton::GetHwnd  
 Restituisce l'handle di finestra per la casella combinata.  
  
```  
virtual HWND GetHwnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di finestra o `NULL` se la casella combinata non è associata a un oggetto finestra.  
  
##  <a name="getitem"></a>CMFCToolBarComboBoxButton::GetItem  
 Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.  
  
```  
LPCTSTR GetItem(int iIndex=-1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa che è associato l'elemento. in caso contrario, `NULL` se il parametro di indice non è valido o se il parametro di indice è -1 e non è selezionato alcun elemento nella casella combinata.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice di -1 restituisce la stringa dell'elemento attualmente selezionato.  
  
##  <a name="getitemall"></a>CMFCToolBarComboBoxButton::GetItemAll  
 Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static LPCTSTR GetItemAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata.  
  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore di stringa dell'elemento se il metodo ha esito positivo; in caso contrario, `NULL` se l'indice non è valido, non è un pulsante della casella combinata viene trovato, o se l'indice è -1 e non è selezionato alcun elemento nella casella combinata.  
  
### <a name="remarks"></a>Note  
 Un valore di indice di -1 restituisce la stringa dell'elemento attualmente selezionato.  
  
##  <a name="getitemdata"></a>CMFCToolBarComboBoxButton::GetItemData  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo.  
  
```  
DWORD_PTR GetItemData(int iIndex=-1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 I dati associati all'elemento. oppure 0 se l'elemento non esiste.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice di -1 restituisce i dati associati all'elemento attualmente selezionato.  
  
##  <a name="getitemdataall"></a>CMFCToolBarComboBoxButton::GetItemDataAll  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico.  
  
```  
static DWORD_PTR GetItemDataAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata.  
  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 I dati associati all'elemento se il metodo ha esito positivo; in caso contrario, 0 se l'indice specificato non è valido o CB_ERR se la casella combinata casella pulsante non viene trovato.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice di -1 restituisce i dati associati all'elemento attualmente selezionato.  
  
##  <a name="getitemdataptrall"></a>CMFCToolBarComboBoxButton::GetItemDataPtrAll  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico. Questi dati vengono restituiti come un puntatore.  
  
```  
static void* GetItemDataPtrAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando del pulsante casella combinata.  
  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore associato all'elemento se il metodo ha esito positivo; in caso contrario, -1 se si verifica un errore, o `NULL` se non viene trovato il pulsante della casella combinata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getprompt"></a>CMFCToolBarComboBoxButton::GetPrompt  
 Restituisce la stringa di richiesta per la casella combinata pulsante della casella.  
  
```  
virtual CString GetPrompt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di richiesta.  
  
### <a name="remarks"></a>Note  
 Questo metodo non è attualmente implementato.  
  
##  <a name="gettext"></a>CMFCToolBarComboBoxButton::GetText  
 Ottiene il testo nella casella di modifica.  
  
```  
LPCTSTR GetText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il testo nella casella di modifica.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettextall"></a>CMFCToolBarComboBoxButton::GetTextAll  
 Ottiene il testo nella casella di modifica di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static LPCTSTR GetTextAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando di un pulsante della casella combinata specifica.  
  
### <a name="return-value"></a>Valore restituito  
 Il testo nella casella di modifica se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hasfocus"></a>CMFCToolBarComboBoxButton::HasFocus  
 Indica se la casella combinata ha attualmente lo stato attivo.  
  
```  
virtual BOOL HasFocus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la casella combinata è attualmente attivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce anche `TRUE` se qualsiasi finestra figlio della casella combinata è attualmente attivo.  
  
##  <a name="iscentervert"></a>CMFCToolBarComboBoxButton::IsCenterVert  
 Restituisce la posizione verticale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static BOOL IsCenterVert();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se i pulsanti sono incentrati; `FALSE` se i pulsanti sono allineati nella parte superiore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isflatmode"></a>CMFCToolBarComboBoxButton::IsFlatMode  
 Restituisce l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static BOOL IsFlatMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se i pulsanti hanno uno stile flat; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Lo stile flat predefinito per i pulsanti della casella combinata`FALSE.`  
  
##  <a name="isownerof"></a>CMFCToolBarComboBoxButton::IsOwnerOf  
 Indica se l'handle specificato è associato con il pulsante della casella combinata o uno dei relativi figli.  
  
```  
virtual BOOL IsOwnerOf(HWND hwnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hwnd`  
 Un handle di finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'handle è associata con il pulsante della casella combinata o uno dei relativi elementi figlio; in caso contrario, `FALSE`.  
  
##  <a name="isribbonbutton"></a>CMFCToolBarComboBoxButton::IsRibbonButton  
 Indica se il pulsante della casella combinata risiede in un pannello della barra multifunzione.  
  
```  
BOOL IsRibbonButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre `FALSE`, ovvero la casella combinata pulsante casella non viene mai visualizzato in un pannello della barra multifunzione.  
  
##  <a name="iswindowvisible"></a>CMFCToolBarComboBoxButton::IsWindowVisible  
 Restituisce lo stato di visibilità della casella combinata pulsante della casella.  
  
```  
virtual BOOL IsWindowVisible();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato di visibilità del pulsante casella combinata.  
  
##  <a name="notifycommand"></a>CMFCToolBarComboBoxButton::NotifyCommand  
 Indica se il pulsante della casella combinata elabora il messaggio.  
  
```  
virtual BOOL NotifyCommand(int iNotifyCode);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iNotifyCode`  
 Il messaggio di notifica che viene associato al comando.  
  
### <a name="return-value"></a>Valore restituito  
 Se il pulsante della casella combinata elabora il messaggio.  
  
##  <a name="onaddtocustomizepage"></a>CMFCToolBarComboBoxButton::OnAddToCustomizePage  
 Chiamato dal framework quando si aggiunge il pulsante di **Personalizza** la finestra di dialogo.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
##  <a name="oncalculatesize"></a>CMFCToolBarComboBoxButton::OnCalculateSize  
 Chiamato dal framework per calcolare le dimensioni del pulsante.  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che consente di visualizzare il pulsante della casella combinata.  
  
 [in] `sizeDefault`  
 Le dimensioni predefinite del pulsante casella combinata.  
  
 [in] `bHorz`  
 Lo stato di ancoraggio della barra degli strumenti padre. `TRUE`Quando la barra degli strumenti è ancorata in senso orizzontale e `FALSE` quando la barra degli strumenti è ancorata in senso verticale.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `SIZE` struttura che contiene le dimensioni del pulsante casella combinata, in pixel.  
  
##  <a name="onchangeparentwnd"></a>CMFCToolBarComboBoxButton::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante della casella combinata viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla nuova barra degli strumenti padre.  
  
##  <a name="onclick"></a>CMFCToolBarComboBoxButton::OnClick  
 Chiamato dal framework quando l'utente fa clic sul pulsante casella combinata.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore alla finestra padre del pulsante casella combinata.  
  
 [in] `bDelay`  
 Riservato per l'utilizzo in una classe derivata.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo gestisce l'evento. in caso contrario, `FALSE`.  
  
##  <a name="onctlcolor"></a>CMFCToolBarComboBoxButton::OnCtlColor  
 Chiamato dal framework quando l'utente modifica il colore della barra degli strumenti principale per impostare colore del pulsante casella combinata.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che consente di visualizzare il pulsante della casella combinata.  
  
 [in] `nCtlColor`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il pennello che il framework utilizza per disegnare lo sfondo del pulsante casella combinata.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta inoltre il colore del testo pulsante casella combinata.  
  
##  <a name="ondraw"></a>CMFCToolBarComboBoxButton::OnDraw  
 Chiamato dal framework per disegnare il pulsante della casella combinata utilizzando gli stili specificati e le opzioni.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz = TRUE,  
    BOOL bCustomizeMode = FALSE,  
    BOOL bHighlight = FALSE,  
    BOOL bDrawBorder = TRUE,  
    BOOL bGrayDisabledButtons = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Pdc`  
 Il contesto di dispositivo che viene visualizzato il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante.  
  
 [in] `pImages`  
 La raccolta di immagini che è associata al pulsante.  
  
 [in] `bHorz`  
 Lo stato di ancoraggio della barra degli strumenti padre. `TRUE`Quando la barra degli strumenti è ancorata in senso orizzontale e `FALSE` quando la barra degli strumenti è ancorata in senso verticale.  
  
 [in] `bCustomizeMode`  
 Se l'applicazione è in modalità di personalizzazione.  
  
 [in] `bHighlight`  
 Se si desidera disegnare il pulsante della casella combinata evidenziato.  
  
 [in] `bDrawBorder`  
 Se si desidera disegnare il pulsante della casella combinata con un bordo.  
  
 [in] `bGrayDisabledButtons`  
 `TRUE`Per creare pulsanti disabilitati ombreggiati; `FALSE` utilizzare disabili raccolta immagini.  
  
##  <a name="ondrawoncustomizelist"></a>CMFCToolBarComboBoxButton::OnDrawOnCustomizeList  
 Chiamato dal framework per disegnare il pulsante casella combinata di **comandi** riquadro del **Personalizza** la finestra di dialogo.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che consente di visualizzare il pulsante della casella combinata.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante casella combinata.  
  
 [in] `bSelected`  
 `TRUE`Se la casella combinata casella pulsante è selezionato. in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza, in pixel, del pulsante casella combinata.  
  
##  <a name="onglobalfontschanged"></a>CMFCToolBarComboBoxButton::OnGlobalFontsChanged  
 Chiamato dal framework per impostare la casella combinata casella pulsante carattere quando cambia il tipo di carattere dell'applicazione.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
##  <a name="onmove"></a>CMFCToolBarComboBoxButton::OnMove  
 Chiamato dal framework per modificare la posizione del pulsante casella combinata quando si sposta la barra degli strumenti padre.  
  
```  
virtual void OnMove();
```  
  
##  <a name="onshow"></a>CMFCToolBarComboBoxButton::OnShow  
 Chiamato dal framework quando il pulsante della casella combinata è nascosto o visualizzato.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 Se si desidera nascondere o visualizzare il pulsante della casella combinata.  
  
##  <a name="onsize"></a>CMFCToolBarComboBoxButton::OnSize  
 Chiamato dal framework di modificare le dimensioni del pulsante casella combinata quando la barra degli strumenti padre cambia dimensioni.  
  
```  
virtual void OnSize(int iSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iSize`  
 La nuova larghezza del pulsante casella combinata.  
  
##  <a name="onupdatetooltip"></a>CMFCToolBarComboBoxButton::OnUpdateToolTip  
 Chiamato dal framework quando l'utente modifica la descrizione comando per il pulsante della casella combinata.  
  
```  
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,  
    int iButtonIndex,  
    CToolTipCtrl& wndToolTip,  
    CString& str);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre per il pulsante della casella combinata.  
  
 [in] `iButtonIndex`  
 ID del pulsante casella combinata.  
  
 [in] `wndToolTip`  
 La descrizione comando da associare con il pulsante della casella combinata.  
  
 [in] `str`  
 Il testo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo gestisce l'evento. in caso contrario, `FALSE`.  
  
##  <a name="removeallitems"></a>CMFCToolBarComboBoxButton::RemoveAllItems  
 Elimina tutti gli elementi dalle finestre di elenco e modifica.  
  
```  
void RemoveAllItems();
```  
  
### <a name="remarks"></a>Note  
 Rimuove tutti gli elementi dall'elenco e modificare controllo di una casella combinata.  
  
##  <a name="selectitem"></a>CMFCToolBarComboBoxButton::SelectItem  
 Seleziona un elemento nella casella di riepilogo.  
  
```  
BOOL SelectItem(
    int iIndex,  
    BOOL bNotify=TRUE);  
  
BOOL SelectItem(DWORD_PTR dwData);  
BOOL SelectItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento nella casella di riepilogo.  
  
 [in] `bNotify`  
 `TRUE`per notificare il pulsante della casella combinata della selezione. in caso contrario `FALSE`.  
  
 [in] `dwData`  
 I dati associati a un elemento nella casella di riepilogo.  
  
 [in] `lpszText`  
 Il testo di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="selectitemall"></a>CMFCToolBarComboBoxButton::SelectItemAll  
 Seleziona un elemento nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static BOOL SelectItemAll(
    UINT uiCmd,  
    int iIndex);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    DWORD_PTR dwData);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando del pulsante casella combinata che contiene la casella di riepilogo.  
  
 [in] `iIndex`  
 Indice in base zero dell'elemento nella casella di riepilogo. Il valore-1 rimuove qualsiasi selezione corrente nella casella di riepilogo e deseleziona la casella di modifica.  
  
 [in] `dwData`  
 I dati di un elemento nella casella di riepilogo.  
  
 [in] `lpszText`  
 Il testo di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="serialize"></a>CMFCToolBarComboBoxButton::Serialize  
 Legge l'oggetto da un archivio o scrive in un archivio.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `ar`  
 Il `CArchive` oggetto da serializzare.  
  
### <a name="remarks"></a>Note  
 Impostazioni di `CArchive` oggetto determinare se questo metodo legge o scrive nell'archivio.  
  
##  <a name="setaccdata"></a>CMFCToolBarComboBoxButton::SetACCData  
 Popola l'oggetto `CAccessibilityData` oggetto utilizzando i dati di accesso facilitato dal pulsante casella combinata.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParent`  
 La finestra padre del pulsante casella combinata.  
  
 [out] `data`  
 Oggetto `CAccessibilityData` oggetto che riceve i dati di accesso facilitato dal pulsante casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
##  <a name="setcentervert"></a>CMFCToolBarComboBoxButton::SetCenterVert  
 Imposta la posizione verticale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static void SetCenterVert(BOOL bCenterVert=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bCenterVert`  
 `TRUE`Per centrare il pulsante della casella combinata nella barra degli strumenti; `FALSE` per allineare il pulsante della casella combinata nella parte superiore della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i pulsanti della casella combinata sono allineati nella parte superiore.  
  
##  <a name="setcontextmenuid"></a>CMFCToolBarComboBoxButton::SetContextMenuID  
 Imposta l'ID di risorsa di menu di scelta rapida per la casella combinata pulsante della casella.  
  
```  
void SetContextMenuID(UINT uiResID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiResID`  
 L'ID di risorsa menu di scelta rapida.  
  
##  <a name="setdropdownheight"></a>CMFCToolBarComboBoxButton::SetDropDownHeight  
 Imposta l'altezza della casella di riepilogo quando viene eliminato verso il basso.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHeight`  
 L'altezza, in pixel, della casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 L'altezza predefinita è 150 pixel.  
  
##  <a name="setflatmode"></a>CMFCToolBarComboBoxButton::SetFlatMode  
 Imposta l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static void SetFlatMode(BOOL bFlat=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bFlat`  
 `TRUE`Per ottenere un aspetto bidimensionale; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Lo stile flat predefinito per i pulsanti della casella combinata è `FALSE`.  
  
##  <a name="setstyle"></a>CMFCToolBarComboBoxButton::SetStyle  
 Imposta lo stile specificato per la casella combinata pulsante casella e ridisegna il controllo se non è disabilitato.  
  
```  
virtual void SetStyle(UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nStyle`  
 Combinazione bit per bit (OR) di stili della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Per un elenco di stili dei pulsanti della barra degli strumenti vedere [stili del controllo ToolBar](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="settext"></a>CMFCToolBarComboBoxButton::SetText  
 Imposta il testo nella casella di modifica della casella combinata pulsante della casella.  
  
```  
void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszText`  
 Puntatore a una stringa contenente il testo per la casella di modifica.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)




