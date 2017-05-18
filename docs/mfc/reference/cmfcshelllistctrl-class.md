---
title: Classe di oggetto CMFCShellListCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCShellListCtrl
- AFXSHELLLISTCTRL/CMFCShellListCtrl
- AFXSHELLLISTCTRL/CMFCShellListCtrl::DisplayFolder
- AFXSHELLLISTCTRL/CMFCShellListCtrl::DisplayParentFolder
- AFXSHELLLISTCTRL/CMFCShellListCtrl::EnableShellContextMenu
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentFolder
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentFolderName
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentItemIdList
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetCurrentShellFolder
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetItemPath
- AFXSHELLLISTCTRL/CMFCShellListCtrl::GetItemTypes
- AFXSHELLLISTCTRL/CMFCShellListCtrl::IsDesktop
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnCompareItems
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnFormatFileDate
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnFormatFileSize
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnGetItemIcon
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnGetItemText
- AFXSHELLLISTCTRL/CMFCShellListCtrl::OnSetColumns
- AFXSHELLLISTCTRL/CMFCShellListCtrl::Refresh
- AFXSHELLLISTCTRL/CMFCShellListCtrl::SetItemTypes
dev_langs:
- C++
helpviewer_keywords:
- CMFCShellListCtrl class
ms.assetid: ad472958-5586-4c50-aadf-1844c30bf6e7
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
ms.openlocfilehash: 8adac043d30d7555522c05165ffd3856c5999872
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcshelllistctrl-class"></a>Oggetto CMFCShellListCtrl (classe)
La `CMFCShellListCtrl` classe fornisce funzionalità di controllo di elenco di Windows e si espande, inclusa la possibilità di visualizzare un elenco degli elementi della shell.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCShellListCtrl : public CMFCListCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCShellListCtrl::DisplayFolder](#displayfolder)|Visualizza un elenco di elementi contenuti in una cartella specificata.|  
|[CMFCShellListCtrl::DisplayParentFolder](#displayparentfolder)|Visualizza un elenco di elementi contenuti nella cartella padre della cartella attualmente visualizzata.|  
|[CMFCShellListCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Abilita o disabilita il menu di scelta rapida.|  
|[CMFCShellListCtrl::GetCurrentFolder](#getcurrentfolder)|Recupera il percorso della cartella corrente.|  
|[CMFCShellListCtrl::GetCurrentFolderName](#getcurrentfoldername)|Recupera il nome della cartella corrente.|  
|[CMFCShellListCtrl::GetCurrentItemIdList](#getcurrentitemidlist)|Restituisce il PIDL dell'elemento del controllo elenco corrente.|  
|[CMFCShellListCtrl::GetCurrentShellFolder](#getcurrentshellfolder)|Restituisce un puntatore alla cartella della Shell corrente.|  
|[CMFCShellListCtrl::GetItemPath](#getitempath)|Restituisce il percorso testuale di un elemento.|  
|[CMFCShellListCtrl::GetItemTypes](#getitemtypes)|Restituisce i tipi di elemento di Shell che vengono visualizzati dal controllo elenco.|  
|[CMFCShellListCtrl::IsDesktop](#isdesktop)|Controlla se la cartella attualmente selezionata è la cartella desktop.|  
|[CMFCShellListCtrl::OnCompareItems](#oncompareitems)|Il framework chiama questo metodo quando vengono confrontati due elementi. (Esegue l'override di [CMFCListCtrl::OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#oncompareitems).)|  
|[CMFCShellListCtrl::OnFormatFileDate](#onformatfiledate)|Chiamato quando il framework recupera la data del file visualizzata dal controllo elenco.|  
|[CMFCShellListCtrl::OnFormatFileSize](#onformatfilesize)|Chiamato quando il framework converte le dimensioni del file di un controllo elenco.|  
|[CMFCShellListCtrl::OnGetItemIcon](#ongetitemicon)|Chiamato quando il framework recupera l'icona di un elemento controllo elenco.|  
|[CMFCShellListCtrl::OnGetItemText](#ongetitemtext)|Chiamato quando il framework converte il testo di un elemento controllo elenco.|  
|[CMFCShellListCtrl::OnSetColumns](#onsetcolumns)|Chiamato dal framework quando vengono impostati i nomi delle colonne.|  
|[CMFCShellListCtrl::Refresh](#refresh)|Aggiorna e ridisegna il controllo elenco.|  
|[CMFCShellListCtrl::SetItemTypes](#setitemtypes)|Imposta il tipo di elementi visualizzati dal controllo elenco.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCShellListCtrl` classe estende la funzionalità di [CMFCListCtrl classe](../../mfc/reference/cmfclistctrl-class.md) abilitando il programma elencare gli elementi della shell di Windows. Il formato di visualizzazione utilizzato è simile a quella di una visualizzazione elenco per una finestra di esplorazione.  
  
 Oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto può essere associato a un `CMFCShellListCtrl` oggetto per creare una finestra Explorer completezza. Selezionando un elemento di `CMFCShellTreeCtrl` causerà la `CMFCShellListCtrl` oggetto per elencare il contenuto dell'elemento selezionato.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare un oggetto della `CMFCShellListCtrl` classe e come visualizzare la cartella padre della cartella visualizzata. Questo frammento di codice fa parte di [esempio Explorer](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer n.&1;](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer n.&2;](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_2.cpp)]  
[!code-cpp[NVC_MFC_Explorer n.&3;](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_3.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListCtrl](../../mfc/reference/clistctrl-class.md)  
  
 [CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)  
  
 `CMFCShellListCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxshelllistCtrl.h  
  
##  <a name="displayfolder"></a>CMFCShellListCtrl::DisplayFolder  
 Visualizza un elenco di elementi contenuti nella cartella specificata.  
  
```  
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);
virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPath`  
 Stringa che contiene il percorso di una cartella.  
  
 [in] `lpItemInfo`  
 Un puntatore a un `LPAFX_SHELLITEMINFO` struttura che descrive una cartella da visualizzare.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo. `E_FAIL` in caso contrario.  
  
##  <a name="displayparentfolder"></a>CMFCShellListCtrl::DisplayParentFolder  
 Gli aggiornamenti di [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto per visualizzare la cartella padre della cartella attualmente visualizzata.  
  
```  
virtual HRESULT DisplayParentFolder();
```  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo. `E_FAIL` in caso contrario.  
  
##  <a name="enableshellcontextmenu"></a>CMFCShellListCtrl::EnableShellContextMenu  
 Abilita il menu di scelta rapida.  
  
```  
void EnableShellContextMenu(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Valore booleano che specifica se il framework consente il menu di scelta rapida.  
  
##  <a name="getcurrentfolder"></a>CMFCShellListCtrl::GetCurrentFolder  
 Recupera il percorso della cartella attualmente selezionata nella finestra di [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
BOOL GetCurrentFolder(CString& strPath) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `strPath`  
 Un riferimento a un parametro di stringa in cui il metodo scrive il percorso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo ha esito negativo se non è presente alcuna cartella selezionata nel `CMFCShellListCtrl`.  
  
##  <a name="getcurrentfoldername"></a>CMFCShellListCtrl::GetCurrentFolderName  
 Recupera il nome della cartella attualmente selezionata nella finestra di [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
BOOL GetCurrentFolderName(CString& strName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `strName`  
 Un riferimento a un parametro di stringa in cui il metodo scrive il nome.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo ha esito negativo se non è presente alcuna cartella selezionata nel `CMFCShellListCtrl`.  
  
##  <a name="getcurrentitemidlist"></a>CMFCShellListCtrl::GetCurrentItemIdList  
 Restituisce il PIDL dell'elemento attualmente selezionato.  
  
```  
LPITEMIDLIST GetCurrentItemIdList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 PIDL dell'elemento corrente.  
  
##  <a name="getcurrentshellfolder"></a>CMFCShellListCtrl::GetCurrentShellFolder  
 Ottiene un puntatore all'elemento attualmente selezionato nel [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
const IShellFolder* GetCurrentShellFolder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [interfaccia IShellFolder](http://msdn.microsoft.com/library/windows/desktop/bb775075) per l'oggetto selezionato.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce `NULL` se è attualmente selezionato alcun oggetto.  
  
##  <a name="getitempath"></a>CMFCShellListCtrl::GetItemPath  
 Recupera il percorso per un elemento.  
  
```  
BOOL GetItemPath(
    CString& strPath,  
    int iItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `strPath`  
 Un riferimento a una stringa che riceve il percorso.  
  
 [in] `iItem`  
 L'indice dell'elemento dell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 L'indice fornito da `iItem` si basa su elementi attualmente visualizzati dal controllo il [classe oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
##  <a name="getitemtypes"></a>CMFCShellListCtrl::GetItemTypes  
 Restituisce il tipo di elementi visualizzati per il [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
SHCONTF GetItemTypes() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [SHCONTF](http://msdn.microsoft.com/library/windows/desktop/bb762539) che contiene il tipo degli elementi elencati nel valore di `CMFCShellListCtrl`.  
  
### <a name="remarks"></a>Note  
 Per impostare il tipo degli elementi elencati un `CMFCShellListCtrl`, chiamare [CMFCShellListCtrl::SetItemTypes](#setitemtypes).  
  
##  <a name="isdesktop"></a>CMFCShellListCtrl::IsDesktop  
 Determina se la cartella che viene visualizzato nel [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto si trova la cartella desktop.  
  
```  
BOOL IsDesktop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la cartella visualizzata è la cartella desktop; `FALSE` in caso contrario.  
  
##  <a name="oncompareitems"></a>CMFCShellListCtrl::OnCompareItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnCompareItems(
    LPARAM lParam1,  
    LPARAM lParam2,  
    int iColumn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lParam1`  
 [in] `lParam2`  
 [in] `iColumn`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onformatfiledate"></a>CMFCShellListCtrl::OnFormatFileDate  
 Il framework chiama questo metodo quando è necessario convertire la data associata a un oggetto in una stringa.  
  
```  
virtual void OnFormatFileDate(
    const CTime& tmFile,  
    CString& str);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `tmFile`  
 Data associata a un file.  
  
 [out] `str`  
 Stringa che contiene il file in formato Data.  
  
### <a name="remarks"></a>Note  
 Quando un [classe oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto visualizza la data associata a un file, è necessario convertire tale data in un formato di stringa. Il `CMFCShellListCtrl` utilizza questo metodo per assicurarsi che la conversione. Per impostazione predefinita, questo metodo utilizza le impostazioni locali correnti per formattare la data in una stringa.  
  
##  <a name="onformatfilesize"></a>CMFCShellListCtrl::OnFormatFileSize  
 Il framework chiama questo metodo quando si convertono le dimensioni di un oggetto in una stringa.  
  
```  
virtual void OnFormatFileSize(
    long lFileSize,  
    CString& str);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lFileSize`  
 Le dimensioni del file che verrà visualizzato il framework.  
  
 [out] `str`  
 Stringa che contiene le dimensioni del file formattato.  
  
### <a name="remarks"></a>Note  
 Quando un [classe oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto deve essere possibile visualizzare le dimensioni di un file, è necessario convertire le dimensioni del file in un formato di stringa. Il `CMFCShellListCtrl` utilizza questo metodo per assicurarsi che la conversione. Per impostazione predefinita, questo metodo converte le dimensioni del file da byte in kilobyte e quindi utilizza le impostazioni locali correnti per formattare le dimensioni in stringa.  
  
##  <a name="ongetitemicon"></a>CMFCShellListCtrl::OnGetItemIcon  
 Il framework chiama questo metodo per recuperare l'icona associata a un elemento di elenco della shell.  
  
```  
virtual int OnGetItemIcon(
    int iItem,  
    LPAFX_SHELLITEMINFO pItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iItem`  
 L'indice dell'elemento.  
  
 [in] `pItem`  
 Oggetto `LPAFX_SHELLITEMINFO` parametro che descrive l'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'immagine dell'icona se ha esito positivo. -1 se la funzione ha esito negativo.  
  
### <a name="remarks"></a>Note  
 L'indice dell'immagine icona è basato sull'elenco di immagini del sistema.  
  
 Per impostazione predefinita, questo metodo si basa sul `pItem` parametro. Il valore di `iItem` non viene utilizzato nell'implementazione predefinita. È possibile utilizzare `iItem` per implementare un comportamento personalizzato.  
  
##  <a name="ongetitemtext"></a>CMFCShellListCtrl::OnGetItemText  
 Il framework chiama questo metodo quando è necessario recuperare il testo di un elemento di shell.  
  
```  
virtual CString OnGetItemText(
    int iItem,  
    int iColumn,  
    LPAFX_SHELLITEMINFO pItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iItem`  
 L'indice dell'elemento.  
  
 [in] `iColumn`  
 La colonna di interesse.  
  
 [in] `pItem`  
 Oggetto `LPAFX_SHELLITEMINFO` parametro che descrive l'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il testo associato all'elemento.  
  
### <a name="remarks"></a>Note  
 Ogni elemento di `CMFCShellListCtrl` potrebbe contenere testo in una o più colonne. Quando il framework chiama questo metodo, specifica la colonna che è interessato. Se si chiama questa funzione manualmente, è necessario specificare anche la colonna che si è interessati.  
  
 Per impostazione predefinita, questo metodo si basa sul `pItem` parametro per determinare quale elemento al processo. Il valore di `iItem` non viene utilizzato nell'implementazione predefinita.  
  
##  <a name="onsetcolumns"></a>CMFCShellListCtrl::OnSetColumns  
 Il framework chiama questo metodo quando imposta i nomi delle colonne.  
  
```  
virtual void OnSetColumns();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework crea quattro colonne in un `CMFCShellListCtrl` oggetto. I nomi di queste colonne sono `Name`, `Size`, `Type`, e `Modified`. È possibile eseguire l'override di questo metodo per personalizzare il numero di colonne e i relativi nomi.  
  
##  <a name="refresh"></a>CMFCShellListCtrl::Refresh  
 Aggiorna e ridisegna il [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
virtual HRESULT Refresh();
```  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo. in caso contrario un valore di errore.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiornare l'elenco di elementi visualizzati per il `CMFCShellListCtrl` oggetto.  
  
##  <a name="setitemtypes"></a>CMFCShellListCtrl::SetItemTypes  
 Imposta il tipo degli elementi elencati nel [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.  
  
```  
void SetItemTypes(SHCONTF nTypes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTypes`  
 Tipi di un elenco di elementi di `CMFCShellListCtrl` supporta dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'elenco dei tipi di elemento, vedere [SHCONTF](http://msdn.microsoft.com/library/windows/desktop/bb762539).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)   
 [Classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)

