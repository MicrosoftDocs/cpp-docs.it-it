---
title: Classe CVSListBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CVSListBox
- AFXVSLISTBOX/CVSListBox
- AFXVSLISTBOX/CVSListBox::CVSListBox
- AFXVSLISTBOX/CVSListBox::AddItem
- AFXVSLISTBOX/CVSListBox::EditItem
- AFXVSLISTBOX/CVSListBox::GetCount
- AFXVSLISTBOX/CVSListBox::GetItemData
- AFXVSLISTBOX/CVSListBox::GetItemText
- AFXVSLISTBOX/CVSListBox::GetSelItem
- AFXVSLISTBOX/CVSListBox::RemoveItem
- AFXVSLISTBOX/CVSListBox::SelectItem
- AFXVSLISTBOX/CVSListBox::SetItemData
- AFXVSLISTBOX/CVSListBox::GetListHwnd
dev_langs:
- C++
helpviewer_keywords:
- CVSListBox::PreTranslateMessage method
- CVSListBox class
ms.assetid: c79be7b4-46ed-4af8-a41e-68962782d8ef
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4527249fc1a22a1db0623ea46954065fcbd071f4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cvslistbox-class"></a>Classe CVSListBox
La `CVSListBox` classe supporta un controllo elenco modificabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CVSListBox : public CVSListBoxBase  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::CVSListBox](#cvslistbox)|Costruisce un oggetto `CVSListBox`.|  
|`CVSListBox::~CVSListBox`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::AddItem](#additem)|Aggiunge una stringa a un controllo elenco. Esegue l'override di `CVSListBoxBase::AddItem`.|  
|[CVSListBox::EditItem](#edititem)|Avvia un'operazione di modifica del testo di un elemento controllo elenco. Esegue l'override di `CVSListBoxBase::EditItem`.|  
|[CVSListBox::GetCount](#getcount)|Recupera il numero di stringhe in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetCount`.|  
|[CVSListBox::GetItemData](#getitemdata)|Recupera un valore a 32 bit specifiche dell'applicazione associata a un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemData`.|  
|[CVSListBox::GetItemText](#getitemtext)|Recupera il testo di un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemText`.|  
|[CVSListBox::GetSelItem](#getselitem)|Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetSelItem`.|  
|`CVSListBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Per ulteriori informazioni e la sintassi del metodo, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CVSListBoxBase::PreTranslateMessage`.|  
|[CVSListBox::RemoveItem](#removeitem)|Rimuove un elemento da un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::RemoveItem`.|  
|[CVSListBox::SelectItem](#selectitem)|Seleziona una stringa di controllo di elenco modificabile. Esegue l'override di `CVSListBoxBase::SelectItem`.|  
|[CVSListBox::SetItemData](#setitemdata)|Associa un valore a 32 bit specifiche dell'applicazione a un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SetItemData`.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::GetListHwnd](#getlisthwnd)|Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.|  
  
## <a name="remarks"></a>Note  
 La `CVSListBox` classe fornisce un insieme di pulsanti di modifica che consente all'utente di creare, modificare, eliminare o riordinare gli elementi in un controllo elenco.  
  
 Di seguito è un'immagine del controllo elenco modificabile. La seconda voce di elenco, è denominata "Item2", è selezionata per la modifica.  
  
 ![Controllo CVSListBox](../../mfc/reference/media/cvslistbox.png "cvslistbox")  
  
 Se si utilizza l'editor risorse per aggiungere un controllo elenco modificabile, si noti che il **della casella degli strumenti** riquadro dell'editor non fornisce un controllo elenco modificabile predefinito. Al contrario, aggiungere un controllo statico, ad esempio il **casella di gruppo** controllo. Il framework utilizza il controllo statico come segnaposto per specificare le dimensioni e posizione del controllo elenco modificabile.  
  
 Per utilizzare un controllo elenco modificabile in un modello di finestra di dialogo, dichiarare un `CVSListBox` variabile nella classe finestra di dialogo. Per supportare lo scambio di dati tra la variabile e il controllo, definire un `DDX_Control` voce macro di `DoDataExchange` metodo nella finestra di dialogo. Per impostazione predefinita, viene creato il controllo elenco modificabile senza pulsanti di modifica. Utilizzare il metodo CVSListBoxBase::SetStandardButtons ereditato per abilitare i pulsanti di modifica.  
  
 Per ulteriori informazioni, vedere directory degli esempi, il `New Controls` di esempio, i file Page3.cpp e Page3.h.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CStatic](../../mfc/reference/cstatic-class.md)  
  
 `CVSListBoxBase`  
  
 [CVSListBox](../../mfc/reference/cvslistbox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxvslistbox.h  
  
##  <a name="additem"></a>CVSListBox::AddItem  
 Aggiunge una stringa a un controllo elenco.  
  
```  
virtual int AddItem(
    const CString& strIext,  
    DWORD_PTR dwData=0,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strIext`  
 Un riferimento a una stringa.  
  
 [in] `dwData`  
 Valore a 32 bit specifiche dell'applicazione che è associato alla stringa. Il valore predefinito è 0.  
  
 [in] `iIndex`  
 Indice in base zero della posizione che conterrà la stringa. Se il `iIndex` parametro è -1, la stringa viene aggiunta alla fine dell'elenco. Il valore predefinito è -1.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della posizione della stringa nel controllo elenco.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CVSListBox::GetItemData](#getitemdata) metodo per recuperare il valore specificato per il `dwData` parametro. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore ad altri dati.  
  
##  <a name="cvslistbox"></a>CVSListBox::CVSListBox  
 Costruisce un oggetto `CVSListBox`.  
  
```  
CVSListBox();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="edititem"></a>CVSListBox::EditItem  
 Avvia un'operazione di modifica del testo di un elemento controllo elenco.  
  
```  
virtual BOOL EditItem(int iIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento controllo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'operazione di modifica viene avviato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'utente inizia un'operazione di modifica facendo doppio clic sull'etichetta di un elemento o premendo il **F2** o **barra spaziatrice** chiave quando un elemento ha lo stato attivo.  
  
##  <a name="getcount"></a>CVSListBox::GetCount  
 Recupera il numero di stringhe in un controllo elenco modificabile.  
  
```  
virtual int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nel controllo elenco.  
  
### <a name="remarks"></a>Note  
 Si noti che il conteggio è maggiore del valore di indice dell'ultimo elemento in quanto l'indice in base zero.  
  
##  <a name="getitemdata"></a>CVSListBox::GetItemData  
 Recupera un valore a 32 bit specifiche dell'applicazione associata a un elemento controllo elenco modificabile.  
  
```  
virtual DWORD_PTR GetItemData(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento controllo elenco modificabile.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore a 32 bit che è associato l'elemento specificato.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CVSListBox::SetItemData](#setitemdata) o [CVSListBox::AddItem](#additem) metodo per associare il valore a 32 bit con l'elemento del controllo elenco. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore ad altri dati.  
  
##  <a name="getitemtext"></a>CVSListBox::GetItemText  
 Recupera il testo di un elemento controllo elenco modificabile.  
  
```  
virtual CString GetItemText(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento controllo elenco modificabile.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene il testo dell'elemento specificato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getlisthwnd"></a>CVSListBox::GetListHwnd  
 Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.  
  
```  
virtual HWND GetListHwnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il controllo visualizzazione elenco incorporato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per recuperare un handle del controllo visualizzazione elenco incorporato che supporta la `CVSListBox` classe.  
  
##  <a name="getselitem"></a>CVSListBox::GetSelItem  
 Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile.  
  
```  
virtual int GetSelItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se questo metodo dà esito positivo, l'indice in base zero dell'elemento attualmente selezionato; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
  
##  <a name="removeitem"></a>CVSListBox::RemoveItem  
 Rimuove un elemento da un controllo elenco modificabile.  
  
```  
virtual BOOL RemoveItem(int iIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento controllo elenco modificabile.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene rimosso l'elemento specificato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="selectitem"></a>CVSListBox::SelectItem  
 Seleziona una stringa di controllo di elenco modificabile.  
  
```  
virtual BOOL SelectItem(int iItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iItem`  
 Indice in base zero di un elemento controllo elenco modificabile.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di selezionare l'elemento specificato e se necessario, scorrerà l'elemento nella visualizzazione.  
  
##  <a name="setitemdata"></a>CVSListBox::SetItemData  
 Associa un valore a 32 bit specifiche dell'applicazione a un elemento controllo elenco modificabile.  
  
```  
virtual void SetItemData(
    int iIndex,  
    DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Indice in base zero di un elemento controllo elenco modificabile.  
  
 [in] `dwData`  
 Un valore a 32 bit. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore ad altri dati.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

