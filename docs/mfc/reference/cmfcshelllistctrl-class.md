---
description: 'Altre informazioni su: classe CMFCShellListCtrl'
title: Classe CMFCShellListCtrl
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
ms.openlocfilehash: b5efc8f336c5958ad7a7f510c7f2b69e83ca6bca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339683"
---
# <a name="cmfcshelllistctrl-class"></a>Classe CMFCShellListCtrl

La `CMFCShellListCtrl` classe fornisce la funzionalità di controllo elenco di Windows e la espande includendo la possibilità di visualizzare un elenco di elementi della shell.

## <a name="syntax"></a>Sintassi

```
class CMFCShellListCtrl : public CMFCListCtrl
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCShellListCtrl::D isplayFolder](#displayfolder)|Visualizza un elenco di elementi contenuti in una cartella specificata.|
|[CMFCShellListCtrl::D isplayParentFolder](#displayparentfolder)|Visualizza un elenco di elementi contenuti nella cartella padre della cartella attualmente visualizzata.|
|[CMFCShellListCtrl:: EnableShellContextMenu](#enableshellcontextmenu)|Abilita o Disabilita il menu di scelta rapida.|
|[CMFCShellListCtrl:: GetCurrentFolder](#getcurrentfolder)|Recupera il percorso della cartella corrente.|
|[CMFCShellListCtrl:: GetCurrentFolderName](#getcurrentfoldername)|Recupera il nome della cartella corrente.|
|[CMFCShellListCtrl:: GetCurrentItemIdList](#getcurrentitemidlist)|Restituisce l'PIDL dell'elemento corrente del controllo elenco.|
|[CMFCShellListCtrl:: GetCurrentShellFolder](#getcurrentshellfolder)|Restituisce un puntatore alla cartella della shell corrente.|
|[CMFCShellListCtrl:: GetItemPath](#getitempath)|Restituisce il percorso testuale di un elemento.|
|[CMFCShellListCtrl:: GetItemTypes](#getitemtypes)|Restituisce i tipi di elemento della shell visualizzati dal controllo elenco.|
|[CMFCShellListCtrl:: desktop](#isdesktop)|Controlla se la cartella attualmente selezionata è la cartella desktop.|
|[CMFCShellListCtrl:: OnCompareItems](#oncompareitems)|Il Framework chiama questo metodo quando confronta due elementi. Esegue l'override di [CMFCListCtrl:: OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#oncompareitems).|
|[CMFCShellListCtrl:: OnFormatFileDate](#onformatfiledate)|Chiamato quando il Framework recupera la data del file visualizzata dal controllo elenco.|
|[CMFCShellListCtrl:: OnFormatFileSize](#onformatfilesize)|Chiamato quando il Framework converte le dimensioni del file di un controllo elenco.|
|[CMFCShellListCtrl:: OnGetItemIcon](#ongetitemicon)|Chiamato quando il Framework recupera l'icona di un elemento di controllo elenco.|
|[CMFCShellListCtrl:: OnGetItemText](#ongetitemtext)|Chiamato quando il Framework converte il testo di un elemento di controllo elenco.|
|[CMFCShellListCtrl:: OnSetColumns](#onsetcolumns)|Chiamata eseguita dal framework quando imposta i nomi delle colonne.|
|[CMFCShellListCtrl:: Refresh](#refresh)|Aggiorna e ridisegna il controllo elenco.|
|[CMFCShellListCtrl:: seitemtypes](#setitemtypes)|Imposta il tipo di elementi visualizzati dal controllo elenco.|

## <a name="remarks"></a>Commenti

La `CMFCShellListCtrl` classe estende la funzionalità della [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md) consentendo al programma di elencare gli elementi della shell di Windows. Il formato di visualizzazione usato è simile a quello di una visualizzazione elenco per una finestra di esplorazione.

Un oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) può essere associato a un `CMFCShellListCtrl` oggetto per creare una finestra completa di Esplora risorse. Se quindi si seleziona un elemento in, `CMFCShellTreeCtrl` l' `CMFCShellListCtrl` oggetto elenca il contenuto dell'elemento selezionato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare un oggetto della `CMFCShellListCtrl` classe e come visualizzare la cartella padre della cartella attualmente visualizzata. Questo frammento di codice fa parte dell' [esempio di Esplora risorse](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxshelllistCtrl. h

## <a name="cmfcshelllistctrldisplayfolder"></a><a name="displayfolder"></a> CMFCShellListCtrl::D isplayFolder

Visualizza un elenco di elementi contenuti nella cartella specificata.

```
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);
virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
in Stringa che contiene il percorso di una cartella.

*lpItemInfo*<br/>
in Puntatore a una `LPAFX_SHELLITEMINFO` struttura che descrive una cartella da visualizzare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; In caso contrario E_FAIL.

## <a name="cmfcshelllistctrldisplayparentfolder"></a><a name="displayparentfolder"></a> CMFCShellListCtrl::D isplayParentFolder

Aggiorna l'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) per visualizzare la cartella padre della cartella attualmente visualizzata.

```
virtual HRESULT DisplayParentFolder();
```

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; In caso contrario E_FAIL.

## <a name="cmfcshelllistctrlenableshellcontextmenu"></a><a name="enableshellcontextmenu"></a> CMFCShellListCtrl:: EnableShellContextMenu

Consente di abilitare il menu di scelta rapida.

```cpp
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Valore booleano che specifica se il Framework Abilita il menu di scelta rapida.

## <a name="cmfcshelllistctrlgetcurrentfolder"></a><a name="getcurrentfolder"></a> CMFCShellListCtrl:: GetCurrentFolder

Recupera il percorso della cartella attualmente selezionata nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```
BOOL GetCurrentFolder(CString& strPath) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
out Riferimento a un parametro di stringa in cui il metodo scrive il percorso.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Commenti

Questo metodo ha esito negativo se non è stata selezionata alcuna cartella in `CMFCShellListCtrl` .

## <a name="cmfcshelllistctrlgetcurrentfoldername"></a><a name="getcurrentfoldername"></a> CMFCShellListCtrl:: GetCurrentFolderName

Recupera il nome della cartella attualmente selezionata nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```
BOOL GetCurrentFolderName(CString& strName) const;
```

### <a name="parameters"></a>Parametri

*strName*<br/>
out Riferimento a un parametro di stringa in cui il metodo scrive il nome.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Commenti

Questo metodo ha esito negativo se non è stata selezionata alcuna cartella in `CMFCShellListCtrl` .

## <a name="cmfcshelllistctrlgetcurrentitemidlist"></a><a name="getcurrentitemidlist"></a> CMFCShellListCtrl:: GetCurrentItemIdList

Restituisce l'PIDL dell'elemento attualmente selezionato.

```
LPITEMIDLIST GetCurrentItemIdList() const;
```

### <a name="return-value"></a>Valore restituito

PIDL dell'elemento corrente.

## <a name="cmfcshelllistctrlgetcurrentshellfolder"></a><a name="getcurrentshellfolder"></a> CMFCShellListCtrl:: GetCurrentShellFolder

Ottiene un puntatore all'elemento attualmente selezionato nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```
const IShellFolder* GetCurrentShellFolder() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' [interfaccia IShellFolder](/windows/win32/api/shobjidl_core/nn-shobjidl_core-ishellfolder) per l'oggetto selezionato.

### <a name="remarks"></a>Commenti

Questo metodo restituisce NULL se non è attualmente selezionato alcun oggetto.

## <a name="cmfcshelllistctrlgetitempath"></a><a name="getitempath"></a> CMFCShellListCtrl:: GetItemPath

Recupera il percorso di un elemento.

```
BOOL GetItemPath(
    CString& strPath,
    int iItem) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
out Riferimento a una stringa che riceve il percorso.

*iItem*<br/>
in Indice dell'elemento dell'elenco.

### <a name="return-value"></a>Valore restituito

TRUE in caso di esito positivo, FALSE in caso contrario.

### <a name="remarks"></a>Commenti

L'indice fornito da *iItem* è basato sugli elementi attualmente visualizzati dall'oggetto della [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

## <a name="cmfcshelllistctrlgetitemtypes"></a><a name="getitemtypes"></a> CMFCShellListCtrl:: GetItemTypes

Restituisce il tipo di elementi visualizzati dall'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```
SHCONTF GetItemTypes() const;
```

### <a name="return-value"></a>Valore restituito

Valore [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf) che contiene il tipo di elementi elencati in `CMFCShellListCtrl` .

### <a name="remarks"></a>Commenti

Per impostare il tipo di elementi elencati in un oggetto `CMFCShellListCtrl` , chiamare [CMFCShellListCtrl:: seitemtypes](#setitemtypes).

## <a name="cmfcshelllistctrlisdesktop"></a><a name="isdesktop"></a> CMFCShellListCtrl:: desktop

Determina se la cartella visualizzata nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) è la cartella desktop.

```
BOOL IsDesktop() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la cartella visualizzata è la cartella desktop; In caso contrario, FALSE.

## <a name="cmfcshelllistctrloncompareitems"></a><a name="oncompareitems"></a> CMFCShellListCtrl:: OnCompareItems

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### <a name="parameters"></a>Parametri

in *lParam1*<br/>
in *lParam2*<br/>
in *IColumn*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcshelllistctrlonformatfiledate"></a><a name="onformatfiledate"></a> CMFCShellListCtrl:: OnFormatFileDate

Il Framework chiama questo metodo quando deve convertire la data associata a un oggetto in una stringa.

```
virtual void OnFormatFileDate(
    const CTime& tmFile,
    CString& str);
```

### <a name="parameters"></a>Parametri

*tmFile*<br/>
in Data associata a un file.

*str*<br/>
out Stringa che contiene la data del file formattato.

### <a name="remarks"></a>Commenti

Quando un oggetto della [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) Visualizza la data associata a un file, deve convertire tale data in un formato stringa. `CMFCShellListCtrl`Usa questo metodo per eseguire tale conversione. Per impostazione predefinita, questo metodo usa le impostazioni locali correnti per formattare la data in una stringa.

## <a name="cmfcshelllistctrlonformatfilesize"></a><a name="onformatfilesize"></a> CMFCShellListCtrl:: OnFormatFileSize

Il Framework chiama questo metodo quando converte la dimensione di un oggetto in una stringa.

```
virtual void OnFormatFileSize(
    long lFileSize,
    CString& str);
```

### <a name="parameters"></a>Parametri

*lFileSize*<br/>
in Dimensioni del file che il Framework visualizzerà.

*str*<br/>
out Stringa che contiene le dimensioni del file formattato.

### <a name="remarks"></a>Commenti

Quando un oggetto della [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) deve visualizzare la dimensione di un file, deve convertire le dimensioni del file in un formato stringa. `CMFCShellListCtrl`Usa questo metodo per eseguire tale conversione. Per impostazione predefinita, questo metodo converte le dimensioni del file da byte a kilobyte, quindi usa le impostazioni locali correnti per formattare le dimensioni in stringa.

## <a name="cmfcshelllistctrlongetitemicon"></a><a name="ongetitemicon"></a> CMFCShellListCtrl:: OnGetItemIcon

Il Framework chiama questo metodo per recuperare l'icona associata a un elemento dell'elenco della shell.

```
virtual int OnGetItemIcon(
    int iItem,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
in Indice dell'elemento.

*pItem*<br/>
in Parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

Indice dell'immagine dell'icona in caso di esito positivo; -1 se la funzione ha esito negativo.

### <a name="remarks"></a>Commenti

L'indice dell'immagine dell'icona è basato sull'elenco di immagini del sistema.

Per impostazione predefinita, questo metodo si basa sul parametro *pItem* . Il valore di *iItem* non viene utilizzato nell'implementazione predefinita. È possibile usare *iItem* per implementare un comportamento personalizzato.

## <a name="cmfcshelllistctrlongetitemtext"></a><a name="ongetitemtext"></a> CMFCShellListCtrl:: OnGetItemText

Il Framework chiama questo metodo quando deve recuperare il testo di un elemento della shell.

```
virtual CString OnGetItemText(
    int iItem,
    int iColumn,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
in Indice dell'elemento.

*iColumn*<br/>
in Colonna di interesse.

*pItem*<br/>
in Parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il testo associato all'elemento.

### <a name="remarks"></a>Commenti

Ogni elemento dell' `CMFCShellListCtrl` oggetto può avere testo in una o più colonne. Quando il Framework chiama questo metodo, specifica la colonna a cui è interessato. Se si chiama questa funzione manualmente, è necessario specificare anche la colonna a cui si è interessati.

Per impostazione predefinita, questo metodo si basa sul parametro *pItem* per determinare l'elemento da elaborare. Il valore di *iItem* non viene utilizzato nell'implementazione predefinita.

## <a name="cmfcshelllistctrlonsetcolumns"></a><a name="onsetcolumns"></a> CMFCShellListCtrl:: OnSetColumns

Il Framework chiama questo metodo quando imposta i nomi delle colonne.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il Framework crea quattro colonne in un `CMFCShellListCtrl` oggetto. I nomi delle colonne sono **nome**, **dimensioni**, **tipo** e **modificato**. È possibile eseguire l'override di questo metodo per personalizzare il numero di colonne e i relativi nomi.

## <a name="cmfcshelllistctrlrefresh"></a><a name="refresh"></a> CMFCShellListCtrl:: Refresh

Aggiorna e ridisegna l'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```
virtual HRESULT Refresh();
```

### <a name="return-value"></a>Valore restituito

`S_OK` Se ha esito positivo; in caso contrario, un valore di errore.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per aggiornare l'elenco di elementi visualizzati dall' `CMFCShellListCtrl` oggetto.

## <a name="cmfcshelllistctrlsetitemtypes"></a><a name="setitemtypes"></a> CMFCShellListCtrl:: seitemtypes

Imposta il tipo di elementi elencati nell'oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) .

```cpp
void SetItemTypes(SHCONTF nTypes);
```

### <a name="parameters"></a>Parametri

*nTypes*<br/>
in Elenco di tipi di elementi supportati dall' `CMFCShellListCtrl` oggetto.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sull'elenco dei tipi di elemento, vedere [SHCONTF](/windows/win32/api/shobjidl_core/ne-shobjidl_core-_shcontf).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)<br/>
[Classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)
