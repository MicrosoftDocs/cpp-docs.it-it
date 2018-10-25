---
title: Classe CMFCShellListCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c2fcd07f831133ff478dcccb4272ef24496e3cac
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066487"
---
# <a name="cmfcshelllistctrl-class"></a>Classe CMFCShellListCtrl

Il `CMFCShellListCtrl` classe fornisce funzionalità di controllo di elenco di Windows e la espande includendo la possibilità di visualizzare un elenco di elementi della shell.

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
|[CMFCShellListCtrl::GetCurrentItemIdList](#getcurrentitemidlist)|Restituisce il PIDL dell'elemento controllo elenco corrente.|
|[CMFCShellListCtrl::GetCurrentShellFolder](#getcurrentshellfolder)|Restituisce un puntatore alla cartella della Shell corrente.|
|[CMFCShellListCtrl::GetItemPath](#getitempath)|Restituisce il percorso di un elemento testuale.|
|[CMFCShellListCtrl::GetItemTypes](#getitemtypes)|Restituisce i tipi di elementi della Shell che vengono visualizzati dal controllo elenco.|
|[CMFCShellListCtrl::IsDesktop](#isdesktop)|Controlla se la cartella attualmente selezionata è la cartella desktop.|
|[CMFCShellListCtrl::OnCompareItems](#oncompareitems)|Il framework chiama questo metodo quando vengono confrontati due elementi. (Esegue l'override [CMFCListCtrl::OnCompareItems](../../mfc/reference/cmfclistctrl-class.md#oncompareitems).)|
|[CMFCShellListCtrl::OnFormatFileDate](#onformatfiledate)|Chiamato quando il framework recupera la data del file visualizzata dal controllo elenco.|
|[CMFCShellListCtrl::OnFormatFileSize](#onformatfilesize)|Chiamato quando il framework converte le dimensioni del file di un controllo elenco.|
|[CMFCShellListCtrl::OnGetItemIcon](#ongetitemicon)|Chiamato quando il framework recupera l'icona di un elemento controllo elenco.|
|[CMFCShellListCtrl::OnGetItemText](#ongetitemtext)|Chiamato quando il framework converte il testo di un elemento controllo elenco.|
|[CMFCShellListCtrl::OnSetColumns](#onsetcolumns)|Chiamato dal framework quando si imposta i nomi delle colonne.|
|[CMFCShellListCtrl::Refresh](#refresh)|Viene aggiornato e ridisegna il controllo elenco.|
|[CMFCShellListCtrl::SetItemTypes](#setitemtypes)|Imposta il tipo di elementi visualizzato dal controllo elenco.|

## <a name="remarks"></a>Note

Il `CMFCShellListCtrl` classe estende la funzionalità del [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md) abilitando il programma elencare gli elementi della shell di Windows. Il formato di visualizzazione utilizzato è simile a quella di una visualizzazione elenco per una finestra di esplorazione.

Oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto può essere associato un `CMFCShellListCtrl` oggetto per creare una finestra di Esplora completata. Quindi, selezionare un elemento nel `CMFCShellTreeCtrl` causerà la `CMFCShellListCtrl` oggetto per elencare il contenuto dell'elemento selezionato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare un oggetto del `CMFCShellListCtrl` classe e su come visualizzare la cartella padre della cartella attualmente visualizzata. Questo frammento di codice fa parte di [esempio di Esplora risorse](../../visual-cpp-samples.md).

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

##  <a name="displayfolder"></a>  CMFCShellListCtrl::DisplayFolder

Visualizza un elenco di elementi contenuti nella cartella specificata.

```
virtual HRESULT DisplayFolder(LPCTSTR lpszPath);
virtual HRESULT DisplayFolder(LPAFX_SHELLITEMINFO lpItemInfo);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
[in] Stringa che contiene il percorso di una cartella.

*lpItemInfo*<br/>
[in] Un puntatore a un `LPAFX_SHELLITEMINFO` struttura che descrive una cartella da visualizzare.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. In caso contrario, E_FAIL.

##  <a name="displayparentfolder"></a>  CMFCShellListCtrl::DisplayParentFolder

Gli aggiornamenti di [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto per visualizzare la cartella padre della cartella attualmente visualizzata.

```
virtual HRESULT DisplayParentFolder();
```

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. In caso contrario, E_FAIL.

##  <a name="enableshellcontextmenu"></a>  CMFCShellListCtrl::EnableShellContextMenu

Abilita il menu di scelta rapida.

```
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bAttivare il*<br/>
[in] Valore booleano che specifica se il framework Abilita menu di scelta rapida.

##  <a name="getcurrentfolder"></a>  CMFCShellListCtrl::GetCurrentFolder

Recupera il percorso della cartella attualmente selezionata nella finestra di [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
BOOL GetCurrentFolder(CString& strPath) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
[out] Un riferimento a un parametro di stringa in cui il metodo scrive il percorso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo ha esito negativo se non è presente alcuna cartella selezionata nella `CMFCShellListCtrl`.

##  <a name="getcurrentfoldername"></a>  CMFCShellListCtrl::GetCurrentFolderName

Recupera il nome della cartella attualmente selezionata nella finestra di [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
BOOL GetCurrentFolderName(CString& strName) const;
```

### <a name="parameters"></a>Parametri

*strName*<br/>
[out] Un riferimento a un parametro di stringa in cui il metodo scrive il nome.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo ha esito negativo se non è presente alcuna cartella selezionata nella `CMFCShellListCtrl`.

##  <a name="getcurrentitemidlist"></a>  CMFCShellListCtrl::GetCurrentItemIdList

Restituisce il PIDL dell'elemento attualmente selezionato.

```
LPITEMIDLIST GetCurrentItemIdList() const;
```

### <a name="return-value"></a>Valore restituito

PIDL dell'elemento corrente.

##  <a name="getcurrentshellfolder"></a>  CMFCShellListCtrl::GetCurrentShellFolder

Ottiene un puntatore all'elemento attualmente selezionato nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
const IShellFolder* GetCurrentShellFolder() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il [IShellFolder interfaccia](https://msdn.microsoft.com/library/windows/desktop/bb775075) per l'oggetto selezionato.

### <a name="remarks"></a>Note

Questo metodo restituisce NULL se nessun oggetto attualmente selezionato.

##  <a name="getitempath"></a>  CMFCShellListCtrl::GetItemPath

Recupera il percorso di un elemento.

```
BOOL GetItemPath(
    CString& strPath,
    int iItem) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
[out] Un riferimento a una stringa che riceve il percorso.

*iItem*<br/>
[in] L'indice dell'elemento dell'elenco.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo. FALSE in caso contrario.

### <a name="remarks"></a>Note

L'indice fornito dal *iItem* si basa su elementi attualmente visualizzati dal controllo la [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

##  <a name="getitemtypes"></a>  CMFCShellListCtrl::GetItemTypes

Restituisce il tipo di elementi visualizzati dal [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
SHCONTF GetItemTypes() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [SHCONTF](/windows/desktop/api/shobjidl_core/ne-shobjidl_core-_shcontf) che contiene il tipo degli elementi elencati nel valore di `CMFCShellListCtrl`.

### <a name="remarks"></a>Note

Per impostare il tipo degli elementi elencati una `CMFCShellListCtrl`, chiamare [CMFCShellListCtrl::SetItemTypes](#setitemtypes).

##  <a name="isdesktop"></a>  CMFCShellListCtrl::IsDesktop

Determina se la cartella che viene visualizzato nei [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto è la cartella desktop.

```
BOOL IsDesktop() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la cartella visualizzata è la cartella desktop; FALSE in caso contrario.

##  <a name="oncompareitems"></a>  CMFCShellListCtrl::OnCompareItems

Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### <a name="parameters"></a>Parametri

[in] *lParam1*<br/>
[in] *lParam2*<br/>
[in] *iColumn*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onformatfiledate"></a>  CMFCShellListCtrl::OnFormatFileDate

Il framework chiama questo metodo quando è necessario convertire la data associata all'oggetto specificato in una stringa.

```
virtual void OnFormatFileDate(
    const CTime& tmFile,
    CString& str);
```

### <a name="parameters"></a>Parametri

*tmFile*<br/>
[in] La data è associata a un file.

*str*<br/>
[out] Stringa che contiene il file in formato Data.

### <a name="remarks"></a>Note

Quando un [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto visualizza la data associata a un file, è necessario convertire tale data in un formato di stringa. Il `CMFCShellListCtrl` Usa questo metodo per assicurarsi che la conversione. Per impostazione predefinita, questo metodo Usa le impostazioni locali correnti per formattare la data in una stringa.

##  <a name="onformatfilesize"></a>  CMFCShellListCtrl::OnFormatFileSize

Il framework chiama questo metodo quando si convertono le dimensioni di un oggetto in una stringa.

```
virtual void OnFormatFileSize(
    long lFileSize,
    CString& str);
```

### <a name="parameters"></a>Parametri

*lFileSize*<br/>
[in] Le dimensioni del file che verrà visualizzato il framework.

*str*<br/>
[out] Stringa che contiene la dimensione di file in formato.

### <a name="remarks"></a>Note

Quando un [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto necessarie per visualizzare le dimensioni di un file, è necessario convertire le dimensioni del file in un formato di stringa. Il `CMFCShellListCtrl` Usa questo metodo per assicurarsi che la conversione. Per impostazione predefinita, questo metodo converte le dimensioni del file da byte in kilobyte e quindi Usa le impostazioni locali correnti per formattare le dimensioni in stringa.

##  <a name="ongetitemicon"></a>  CMFCShellListCtrl::OnGetItemIcon

Il framework chiama questo metodo per recuperare l'icona associata a un elemento di elenco della shell.

```
virtual int OnGetItemIcon(
    int iItem,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] L'indice dell'elemento.

*pItem*<br/>
[in] Un parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

L'indice dell'immagine dell'icona se ha esito positivo. -1 se la funzione ha esito negativo.

### <a name="remarks"></a>Note

L'indice di immagine dell'icona è basato sull'elenco di immagini del sistema.

Per impostazione predefinita, questo metodo si basa sul *pItem* parametro. Il valore di *iItem* non viene utilizzato nell'implementazione predefinita. È possibile usare *iItem* per implementare il comportamento personalizzato.

##  <a name="ongetitemtext"></a>  CMFCShellListCtrl::OnGetItemText

Il framework chiama questo metodo quando è necessario recuperare il testo di un elemento della shell.

```
virtual CString OnGetItemText(
    int iItem,
    int iColumn,
    LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] L'indice dell'elemento.

*iColumn*<br/>
[in] La colonna di interesse.

*pItem*<br/>
[in] Un parametro LPAFX_SHELLITEMINFO che descrive l'elemento.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il testo associato all'elemento.

### <a name="remarks"></a>Note

Ogni elemento di `CMFCShellListCtrl` oggetto può avere il testo in una o più colonne. Quando il framework chiama questo metodo, specifica la colonna che è interessato. Se si chiama questa funzione manualmente, è necessario specificare anche la colonna che si è interessati.

Per impostazione predefinita, questo metodo si basa sul *pItem* parametro per determinare quale elemento al processo. Il valore di *iItem* non viene utilizzato nell'implementazione predefinita.

##  <a name="onsetcolumns"></a>  CMFCShellListCtrl::OnSetColumns

Il framework chiama questo metodo quando si imposta i nomi delle colonne.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, il framework crea quattro colonne in un `CMFCShellListCtrl` oggetto. I nomi di tali colonne vengono **Name**, **Size**, **tipo**, e **Modified**. È possibile eseguire l'override di questo metodo per personalizzare il numero di colonne e i relativi nomi.

##  <a name="refresh"></a>  CMFCShellListCtrl::Refresh

Consente di aggiornare e ridisegna il [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
virtual HRESULT Refresh();
```

### <a name="return-value"></a>Valore restituito

`S_OK` Se ha esito positivo. in caso contrario, un valore di errore.

### <a name="remarks"></a>Note

Chiamare questo metodo per aggiornare l'elenco di elementi visualizzati dal `CMFCShellListCtrl` oggetto.

##  <a name="setitemtypes"></a>  CMFCShellListCtrl::SetItemTypes

Imposta il tipo degli elementi elencati nel [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto.

```
void SetItemTypes(SHCONTF nTypes);
```

### <a name="parameters"></a>Parametri

*nTypes*<br/>
[in] Tipi di un elenco di elementi di `CMFCShellListCtrl` supporta dell'oggetto.

### <a name="remarks"></a>Note

Per altre informazioni sull'elenco dei tipi di elemento, vedere [SHCONTF](/windows/desktop/api/shobjidl_core/ne-shobjidl_core-_shcontf).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)<br/>
[Classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)
