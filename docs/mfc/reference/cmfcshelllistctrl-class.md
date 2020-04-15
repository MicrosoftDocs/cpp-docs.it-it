---
title: CMFCShellListCtrl (classe)
ms.date: 11/04/2016
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
helpviewer_keywords:
- CMFCShellListCtrl [MFC], DisplayFolder
- CMFCShellListCtrl [MFC], DisplayParentFolder
- CMFCShellListCtrl [MFC], EnableShellContextMenu
- CMFCShellListCtrl [MFC], GetCurrentFolder
- CMFCShellListCtrl [MFC], GetCurrentFolderName
- CMFCShellListCtrl [MFC], GetCurrentItemIdList
- CMFCShellListCtrl [MFC], GetCurrentShellFolder
- CMFCShellListCtrl [MFC], GetItemPath
- CMFCShellListCtrl [MFC], GetItemTypes
- CMFCShellListCtrl [MFC], IsDesktop
- CMFCShellListCtrl [MFC], OnCompareItems
- CMFCShellListCtrl [MFC], OnFormatFileDate
- CMFCShellListCtrl [MFC], OnFormatFileSize
- CMFCShellListCtrl [MFC], OnGetItemIcon
- CMFCShellListCtrl [MFC], OnGetItemText
- CMFCShellListCtrl [MFC], OnSetColumns
- CMFCShellListCtrl [MFC], Refresh
- CMFCShellListCtrl [MFC], SetItemTypes
ms.assetid: ad472958-5586-4c50-aadf-1844c30bf6e7
ms.openlocfilehash: d5c987e1d7dbe053a0cff093d1a9113f762cee26
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368786"
---
# <a name="cmfcshelllistctrl-class"></a>CMFCShellListCtrl (classe)

La `CMFCShellListCtrl` classe fornisce funzionalità di controllo elenco di Windows e lo espande includendo la possibilità di visualizzare un elenco di elementi della shell.

## <a name="syntax"></a>Sintassi

```
class CMFCShellListCtrl : public CMFCListCtrl
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCShellListCtrl::D isplayFolder](#displayfolder)|Visualizza un elenco di elementi contenuti in una cartella fornita.|
|[CMFCShellListCtrl::DisplayParentFolder](#displayparentfolder)|Visualizza un elenco di elementi contenuti nella cartella padre della cartella attualmente visualizzata.|
|[CMFCShellListCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Abilita o disabilita il menu di scelta rapida.|
|[CMFCShellListCtrl::GetCurrentFolder](#getcurrentfolder)|Recupera il percorso della cartella corrente.|
|[CMFCShellListCtrl::GetCurrentFolderName](#getcurrentfoldername)|Recupera il nome della cartella corrente.|
|[CMFCShellListCtrl::GetCurrentItemIdList](#getcurrentitemidlist)|Restituisce il valore PIDL dell'elemento del controllo elenco corrente.|
|[CMFCShellListCtrl::GetCurrentShellFolder](#getcurrentshellfolder)|Restituisce un puntatore alla cartella Shell corrente.|
|[CMFCShellListCtrl::GetItemPath](#getitempath)|Restituisce il percorso testuale di un elemento.|
|[CMFCShellListCtrl::GetItemTypes](#getitemtypes)|Restituisce i tipi di elementi Shell visualizzati dal controllo elenco.|
|[CMFCShellListCtrl::IsDesktop](#isdesktop)|Controlla se la cartella attualmente selezionata è la cartella del desktop.|
|[CMFCShellListCtrl::OnCompareItems](#oncompareitems)|Il framework chiama questo metodo quando confronta due elementi. (Esegue l'override [di CMFCListCtrl::OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#oncompareitems).)|
|[CMFCShellListCtrl::OnFormatFileDate](#onformatfiledate)|Chiamato quando il framework recupera la data del file visualizzato dal controllo elenco.|
|[CMFCShellListCtrl::OnFormatFileSize](#onformatfilesize)|Chiamato quando il framework converte le dimensioni del file di un controllo elenco.|
|[CMFCShellListCtrl::OnGetItemIcon](#ongetitemicon)|Chiamato quando il framework recupera l'icona di un elemento di controllo elenco.|
|[CMFCShellListCtrl::OnGetItemText](#ongetitemtext)|Chiamato quando il framework converte il testo di un elemento del controllo elenco.|
|[CMFCShellListCtrl::OnSetColumns](#onsetcolumns)|Chiamato dal framework quando imposta i nomi delle colonne.|
|[CMFCShellListCtrl::Aggiornare](#refresh)|Aggiorna e ridipinge il controllo elenco.|
|[CMFCShellListCtrl::SetItemTypes](#setitemtypes)|Imposta il tipo di elementi visualizzati dal controllo elenco.|

## <a name="remarks"></a>Osservazioni

La `CMFCShellListCtrl` classe estende la funzionalità della [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md) consentendo al programma di elencare gli elementi della shell di Windows. Il formato di visualizzazione utilizzato è simile a quello di una visualizzazione elenco per una finestra di Esplora risorse.

Oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto può `CMFCShellListCtrl` essere associato a un oggetto per creare una finestra completa di Esplora risorse. Quindi, selezionando un `CMFCShellTreeCtrl` elemento in `CMFCShellListCtrl` causerà l'oggetto per elencare il contenuto dell'elemento selezionato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCShellListCtrl` creare un oggetto della classe e come visualizzare la cartella padre della cartella attualmente visualizzata. Questo frammento di codice fa parte [dell'esempio di Explorer](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#1](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#2](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_2.cpp)]
[!code-cpp[NVC_MFC_Explorer#3](../../mfc/reference/codesnippet/cpp/cmfcshelllistctrl-class_3.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListCtrl](../../mfc/reference/clistctrl-class.md)

[CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)

`CMFCShellListCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshelllistCtrl.h

## <a name="cmfcshelllistctrldisplayfolder"></a><a name="displayfolder"></a>CMFCShellListCtrl::D isplayFolder

Visualizza un elenco di elementi contenuti nella cartella fornita.

```
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);
virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```

### <a name="parameters"></a>Parametri

*LpszPath (percorso ipinoso)*<br/>
[in] Stringa contenente il percorso di una cartella.

*lpItemInfo (informazioni in base all'articolo su questo elemento*<br/>
[in] Puntatore a `LPAFX_SHELLITEMINFO` una struttura che descrive una cartella da visualizzare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; E_FAIL contrario.

## <a name="cmfcshelllistctrldisplayparentfolder"></a><a name="displayparentfolder"></a>CMFCShellListCtrl::DisplayParentFolder

Aggiorna il [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto per visualizzare la cartella padre della cartella attualmente visualizzata.

```
virtual HRESULT DisplayParentFolder();
```

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; E_FAIL contrario.

## <a name="cmfcshelllistctrlenableshellcontextmenu"></a><a name="enableshellcontextmenu"></a>CMFCShellListCtrl::EnableShellContextMenu

Attiva il menu di scelta rapida.

```
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Valore Boolean che specifica se il framework abilita il menu di scelta rapida.

## <a name="cmfcshelllistctrlgetcurrentfolder"></a><a name="getcurrentfolder"></a>CMFCShellListCtrl::GetCurrentFolder

Recupera il percorso della cartella attualmente selezionata nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
BOOL GetCurrentFolder(CString& strPath) const;
```

### <a name="parameters"></a>Parametri

*strPath (strPath)*<br/>
[fuori] Un riferimento a un parametro di stringa in cui il metodo scrive il percorso.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo `CMFCShellListCtrl`se non è stata selezionata alcuna cartella nel file .

## <a name="cmfcshelllistctrlgetcurrentfoldername"></a><a name="getcurrentfoldername"></a>CMFCShellListCtrl::GetCurrentFolderName

Recupera il nome della cartella attualmente selezionata nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
BOOL GetCurrentFolderName(CString& strName) const;
```

### <a name="parameters"></a>Parametri

*strName*<br/>
[fuori] Un riferimento a un parametro di stringa in cui il metodo scrive il nome.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo `CMFCShellListCtrl`se non è stata selezionata alcuna cartella nel file .

## <a name="cmfcshelllistctrlgetcurrentitemidlist"></a><a name="getcurrentitemidlist"></a>CMFCShellListCtrl::GetCurrentItemIdList

Restituisce il valore PIDL dell'elemento attualmente selezionato.

```
LPITEMIDLIST GetCurrentItemIdList() const;
```

### <a name="return-value"></a>Valore restituito

Valore PIDL dell'elemento corrente.

## <a name="cmfcshelllistctrlgetcurrentshellfolder"></a><a name="getcurrentshellfolder"></a>CMFCShellListCtrl::GetCurrentShellFolder

Ottiene un puntatore all'elemento attualmente selezionato nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
const IShellFolder* GetCurrentShellFolder() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia [IShellFolder](/windows/win32/api/shobjidl_core/nn-shobjidl_core-ishellfolder) per l'oggetto selezionato.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce NULL se non è attualmente selezionato alcun oggetto.

## <a name="cmfcshelllistctrlgetitempath"></a><a name="getitempath"></a>CMFCShellListCtrl::GetItemPath

Recupera il percorso di un elemento.

```
BOOL GetItemPath(
    CString& strPath,
    int iItem) const;
```

### <a name="parameters"></a>Parametri

*strPath (strPath)*<br/>
[fuori] Riferimento a una stringa che riceve il percorso.

*iItem*<br/>
[in] Indice della voce di elenco.

### <a name="return-value"></a>Valore restituito

TRUE in caso di esito positivo, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

L'indice fornito da *iItem* si basa sugli elementi attualmente visualizzati dal [CMFCShellListCtrl classe](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

## <a name="cmfcshelllistctrlgetitemtypes"></a><a name="getitemtypes"></a>CMFCShellListCtrl::GetItemTypes

Restituisce il tipo di elementi visualizzati dal [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
SHCONTF GetItemTypes() const;
```

### <a name="return-value"></a>Valore restituito

Valore [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf) contenente il tipo di `CMFCShellListCtrl`elementi elencati nel file .

### <a name="remarks"></a>Osservazioni

Per impostare il tipo `CMFCShellListCtrl`di elementi elencati in un oggetto , chiamare [CMFCShellListCtrl::SetItemTypes](#setitemtypes).

## <a name="cmfcshelllistctrlisdesktop"></a><a name="isdesktop"></a>CMFCShellListCtrl::IsDesktop

Determina se la cartella visualizzata nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) è la cartella del desktop.

```
BOOL IsDesktop() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la cartella visualizzata è la cartella del desktop. FALSE in caso contrario.

## <a name="cmfcshelllistctrloncompareitems"></a><a name="oncompareitems"></a>CMFCShellListCtrl::OnCompareItems

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### <a name="parameters"></a>Parametri

[in] *lParam1 (informazioni in* base al taè<br/>
[in] *lParam2 (informazioni in* base al taè<br/>
[in] *iColumn (colonna in stato di modifica*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcshelllistctrlonformatfiledate"></a><a name="onformatfiledate"></a>CMFCShellListCtrl::OnFormatFileDate

Il framework chiama questo metodo quando deve convertire la data associata a un oggetto in una stringa.

```
virtual void OnFormatFileDate(
    const CTime& tmFile,
    CString& str);
```

### <a name="parameters"></a>Parametri

*file tm*<br/>
[in] Data associata a un file.

*Str*<br/>
[fuori] Stringa contenente la data del file formattato.

### <a name="remarks"></a>Osservazioni

Quando un [CMFCShellListCtrl oggetto di classe](../../mfc/reference/cmfcshelllistctrl-class.md) visualizza la data associata a un file, è necessario convertire tale data in un formato stringa. Utilizza `CMFCShellListCtrl` questo metodo per eseguire tale conversione. Per impostazione predefinita, questo metodo utilizza le impostazioni locali correnti per formattare la data in una stringa.

## <a name="cmfcshelllistctrlonformatfilesize"></a><a name="onformatfilesize"></a>CMFCShellListCtrl::OnFormatFileSize

Il framework chiama questo metodo quando converte la dimensione di un oggetto in una stringa.

```
virtual void OnFormatFileSize(
    long lFileSize,
    CString& str);
```

### <a name="parameters"></a>Parametri

*LFileSize (DimensioniFile)*<br/>
[in] Dimensioni del file che verranno visualizzate nel framework.

*Str*<br/>
[fuori] Stringa contenente la dimensione del file formattato.

### <a name="remarks"></a>Osservazioni

Quando un [CMFCShellListCtrl oggetto di classe](../../mfc/reference/cmfcshelllistctrl-class.md) deve visualizzare la dimensione di un file, è necessario convertire le dimensioni del file in un formato di stringa. Utilizza `CMFCShellListCtrl` questo metodo per eseguire tale conversione. Per impostazione predefinita, questo metodo converte la dimensione del file da byte a kilobyte e quindi utilizza le impostazioni locali correnti per formattare la dimensione in stringa.

## <a name="cmfcshelllistctrlongetitemicon"></a><a name="ongetitemicon"></a>CMFCShellListCtrl::OnGetItemIcon

Il framework chiama questo metodo per recuperare l'icona associata a un elemento dell'elenco della shell.

```
virtual int OnGetItemIcon(
    int iItem,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] Indice dell'elemento.

*pItem (elemento)*<br/>
[in] Parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

L'indice dell'immagine dell'icona se ha esito positivo; -1 se la funzione ha esito negativo.

### <a name="remarks"></a>Osservazioni

L'indice dell'immagine dell'icona è basato sull'elenco delle immagini del sistema.

Per impostazione predefinita, questo metodo si basa sul *pItem* parametro. Il valore di *iItem* non viene utilizzato nell'implementazione predefinita. È possibile utilizzare *iItem* per implementare il comportamento personalizzato.

## <a name="cmfcshelllistctrlongetitemtext"></a><a name="ongetitemtext"></a>CMFCShellListCtrl::OnGetItemText

Il framework chiama questo metodo quando è necessario recuperare il testo di un elemento della shell.

```
virtual CString OnGetItemText(
    int iItem,
    int iColumn,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] Indice dell'elemento.

*Icolumn*<br/>
[in] Colonna di interesse.

*pItem (elemento)*<br/>
[in] Parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il testo associato all'elemento.

### <a name="remarks"></a>Osservazioni

Ogni elemento `CMFCShellListCtrl` nell'oggetto può avere testo in una o più colonne. Quando il framework chiama questo metodo, specifica la colonna a cui è interessato. Se si chiama questa funzione manualmente, è necessario specificare anche la colonna a cui si è interessati.

Per impostazione predefinita, questo metodo si basa sul *pItem* parametro per determinare quale elemento da elaborare. Il valore di *iItem* non viene utilizzato nell'implementazione predefinita.

## <a name="cmfcshelllistctrlonsetcolumns"></a><a name="onsetcolumns"></a>CMFCShellListCtrl::OnSetColumns

Il framework chiama questo metodo quando imposta i nomi delle colonne.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il `CMFCShellListCtrl` framework crea quattro colonne in un oggetto. I nomi di queste colonne sono **Nome**, **Dimensione**, **Tipo**e **Modificato**. È possibile eseguire l'override di questo metodo per personalizzare il numero di colonne e i relativi nomi.

## <a name="cmfcshelllistctrlrefresh"></a><a name="refresh"></a>CMFCShellListCtrl::Aggiornare

Aggiorna e ridisegna l'oggetto [CMFCShellListCtrl.](../../mfc/reference/cmfcshelllistctrl-class.md)

```
virtual HRESULT Refresh();
```

### <a name="return-value"></a>Valore restituito

`S_OK`se ha esito positivo; in caso contrario, un valore di errore.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per aggiornare l'elenco di elementi visualizzati dall'oggetto `CMFCShellListCtrl` .

## <a name="cmfcshelllistctrlsetitemtypes"></a><a name="setitemtypes"></a>CMFCShellListCtrl::SetItemTypes

Imposta il tipo di elementi elencati nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
void SetItemTypes(SHCONTF nTypes);
```

### <a name="parameters"></a>Parametri

*nTipi*<br/>
[in] Elenco di tipi di `CMFCShellListCtrl` elemento supportati dall'oggetto.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sull'elenco dei tipi di elemento, vedere [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCListCtrl (classe)](../../mfc/reference/cmfclistctrl-class.md)<br/>
[CMFCShellTreeCtrl (classe)](../../mfc/reference/cmfcshelltreectrl-class.md)
