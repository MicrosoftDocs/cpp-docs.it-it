---
description: 'Altre informazioni su: Classe CShellManager'
title: Classe CShellManager
ms.date: 11/04/2016
f1_keywords:
- CShellManager
- AFXSHELLMANAGER/CShellManager
- AFXSHELLMANAGER/CShellManager::CShellManager
- AFXSHELLMANAGER/CShellManager::BrowseForFolder
- AFXSHELLMANAGER/CShellManager::ConcatenateItem
- AFXSHELLMANAGER/CShellManager::CopyItem
- AFXSHELLMANAGER/CShellManager::CreateItem
- AFXSHELLMANAGER/CShellManager::FreeItem
- AFXSHELLMANAGER/CShellManager::GetItemCount
- AFXSHELLMANAGER/CShellManager::GetItemSize
- AFXSHELLMANAGER/CShellManager::GetNextItem
- AFXSHELLMANAGER/CShellManager::GetParentItem
- AFXSHELLMANAGER/CShellManager::ItemFromPath
helpviewer_keywords:
- CShellManager [MFC], CShellManager
- CShellManager [MFC], BrowseForFolder
- CShellManager [MFC], ConcatenateItem
- CShellManager [MFC], CopyItem
- CShellManager [MFC], CreateItem
- CShellManager [MFC], FreeItem
- CShellManager [MFC], GetItemCount
- CShellManager [MFC], GetItemSize
- CShellManager [MFC], GetNextItem
- CShellManager [MFC], GetParentItem
- CShellManager [MFC], ItemFromPath
ms.assetid: f15c4c1a-6fae-487d-9913-9b7369b33da0
ms.openlocfilehash: 67145782432c11ed62512eb618444fa19a4909ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264648"
---
# <a name="cshellmanager-class"></a>Classe CShellManager

Implementa diversi metodi che consentono di utilizzare puntatori a elenchi di identificatori (PIDL).

## <a name="syntax"></a>Sintassi

```
class CShellManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CShellManager:: CShellManager](#cshellmanager)|Costruisce un oggetto `CShellManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CShellManager:: BrowseForFolder](#browseforfolder)|Visualizza una finestra di dialogo che consente all'utente di selezionare una cartella della shell.|
|[CShellManager:: ConcatenateItem](#concatenateitem)|Concatena due PIDL.|
|[CShellManager:: CopyItem](#copyitem)|Crea un nuovo PIDL e ne copia il PIDL fornito.|
|[CShellManager:: CreateItem](#createitem)|Crea un nuovo PIDL della dimensione specificata.|
|[CShellManager:: FreeItem](#freeitem)|Elimina il PIDL fornito.|
|[CShellManager:: GetItemCount](#getitemcount)|Restituisce il numero di elementi nell'oggetto PIDL fornito.|
|[CShellManager:: GetItemSize](#getitemsize)|Restituisce la dimensione del PIDL fornito.|
|[CShellManager:: GetNextItem](#getnextitem)|Restituisce l'elemento successivo da PIDL.|
|[CShellManager:: GetParentItem](#getparentitem)|Recupera l'elemento padre dell'elemento fornito.|
|[CShellManager:: ItemFromPath](#itemfrompath)|Recupera il PIDL per l'elemento identificato dal percorso fornito.|

## <a name="remarks"></a>Commenti

I metodi della `CShellManager` classe gestiscono tutti PIDL. Un PIDL è un identificatore univoco per un oggetto Shell.

Non è consigliabile creare `CShellManager` manualmente un oggetto. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx:: InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore a gestione Shell per l'applicazione, chiamare [CWinAppEx:: GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CShellManager](../../mfc/reference/cshellmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshellmanager. h

## <a name="cshellmanagerbrowseforfolder"></a><a name="browseforfolder"></a> CShellManager:: BrowseForFolder

Visualizza una finestra di dialogo che consente all'utente di selezionare una cartella della shell.

```
BOOL BrowseForFolder(
    CString& strOutFolder,
    CWnd* pWndParent = NULL,
    LPCTSTR lplszInitialFolder = NULL,
    LPCTSTR lpszTitle = NULL,
    UINT ulFlags = BIF_RETURNONLYFSDIRS,
    LPINT piFolderImage = NULL);
```

### <a name="parameters"></a>Parametri

*strOutFolder*<br/>
out Stringa utilizzata dal metodo per archiviare il percorso della cartella selezionata.

*pWndParent*<br/>
in Puntatore alla finestra padre.

*lplszInitialFolder*<br/>
in Stringa che contiene la cartella selezionata per impostazione predefinita quando viene visualizzata la finestra di dialogo.

*lpszTitle*<br/>
in Titolo della finestra di dialogo.

*ulFlags*<br/>
in Flag che specificano le opzioni per la finestra di dialogo. Per una descrizione dettagliata, vedere [BROWSEINFO](/windows/win32/api/shlobj_core/ns-shlobj_core-browseinfow) .

*piFolderImage*<br/>
out Puntatore al valore integer in cui il metodo scrive l'indice dell'immagine della cartella selezionata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona una cartella dalla finestra di dialogo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Quando si chiama questo metodo, l'applicazione crea e visualizza una finestra di dialogo che consente all'utente di selezionare una cartella. Il metodo scriverà il percorso della cartella nel parametro *strOutFolder* .

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CShellManager` oggetto utilizzando il `CWinAppEx::GetShellManager` metodo e come utilizzare il `BrowseForFolder` metodo. Questo frammento di codice fa parte dell' [esempio di Esplora risorse](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#6](../../mfc/reference/codesnippet/cpp/cshellmanager-class_1.cpp)]

## <a name="cshellmanagerconcatenateitem"></a><a name="concatenateitem"></a> CShellManager:: ConcatenateItem

Crea un nuovo elenco contenente due PIDL.

```
LPITEMIDLIST ConcatenateItem(
    LPCITEMIDLIST pidl1,
    LPCITEMIDLIST pidl2);
```

### <a name="parameters"></a>Parametri

*pidl1*<br/>
in Primo elemento.

*pidl2*<br/>
in Secondo elemento.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo elenco di elementi se la funzione ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Questo metodo crea un nuovo [ID](/windows/win32/api/shtypes/ns-shtypes-itemidlist) oggetto di dimensioni sufficienti per contenere sia *pidl1* che *pidl2*. Quindi, copia *pidl1* e *pidl2* nel nuovo elenco.

## <a name="cshellmanagercopyitem"></a><a name="copyitem"></a> CShellManager:: CopyItem

Copia un elenco di elementi.

```
LPITEMIDLIST CopyItem(LPCITEMIDLIST pidlSource);
```

### <a name="parameters"></a>Parametri

*pidlSource*<br/>
in Elenco di elementi originale.

### <a name="return-value"></a>Valore restituito

Puntatore all'elenco di elementi appena creato in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

L'elenco di elementi appena creato ha le stesse dimensioni dell'elenco di elementi di origine.

## <a name="cshellmanagercreateitem"></a><a name="createitem"></a> CShellManager:: CreateItem

Crea un nuovo PIDL.

```
LPITEMIDLIST CreateItem(UINT cbSize);
```

### <a name="parameters"></a>Parametri

*cbSize*<br/>
in Dimensioni dell'elenco di elementi.

### <a name="return-value"></a>Valore restituito

Puntatore all'elenco di elementi creato in caso di esito positivo; in caso contrario, NULL.

## <a name="cshellmanagercshellmanager"></a><a name="cshellmanager"></a> CShellManager:: CShellManager

Costruisce un oggetto `CShellManager`.

```
CShellManager();
```

### <a name="remarks"></a>Commenti

Nella maggior parte dei casi, non è necessario creare direttamente un oggetto `CShellManager` . Per impostazione predefinita, il Framework ne crea uno. Per ottenere un puntatore a `CShellManager` , chiamare [CWinAppEx:: GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager). Se si crea manualmente un oggetto `CShellManager` , è necessario inizializzarlo con il metodo [CWinAppEx:: InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager).

## <a name="cshellmanagerfreeitem"></a><a name="freeitem"></a> CShellManager:: FreeItem

Elimina un elenco di elementi.

```cpp
void FreeItem(LPITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*PIDL*<br/>
in Elenco di elementi da eliminare.

## <a name="cshellmanagergetitemcount"></a><a name="getitemcount"></a> CShellManager:: GetItemCount

Restituisce il numero di elementi in un elenco di elementi.

```
UINT GetItemCount(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*PIDL*<br/>
in Puntatore a un elenco di elementi.

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco di elementi.

## <a name="cshellmanagergetitemsize"></a><a name="getitemsize"></a> CShellManager:: GetItemSize

Restituisce la dimensione di un elenco di elementi.

```
UINT GetItemSize(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*PIDL*<br/>
in Puntatore a un elenco di elementi.

### <a name="return-value"></a>Valore restituito

Dimensioni dell'elenco di elementi.

## <a name="cshellmanagergetnextitem"></a><a name="getnextitem"></a> CShellManager:: GetNextItem

Recupera l'elemento successivo da un puntatore a un elenco di identificatori di elemento (PIDL).

```
LPITEMIDLIST GetNextItem(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*PIDL*<br/>
in Elenco di elementi da scorrere.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento successivo nell'elenco.

### <a name="remarks"></a>Commenti

Se nell'elenco non sono presenti altri elementi, questo metodo restituisce NULL.

## <a name="cshellmanagergetparentitem"></a><a name="getparentitem"></a> CShellManager:: GetParentItem

Recupera l'elemento padre di un puntatore a un elenco di identificatori di elemento (PIDL).

```
int GetParentItem(
    LPCITEMIDLIST lpidl,
    LPITEMIDLIST& lpidlParent);
```

### <a name="parameters"></a>Parametri

*lpidl*<br/>
in PIDL di cui verrà recuperato il padre.

*lpidlParent*<br/>
out Riferimento a un PIDL in cui il metodo archivia il risultato.

### <a name="return-value"></a>Valore restituito

Livello del PIDL padre.

### <a name="remarks"></a>Commenti

Il livello di un PIDL è relativo al desktop. Il PIDL desktop viene considerato con un livello pari a 0.

## <a name="cshellmanageritemfrompath"></a><a name="itemfrompath"></a> CShellManager:: ItemFromPath

Recupera il puntatore a un elenco di identificatori di elemento (PIDL) dall'elemento identificato da un percorso di stringa.

```
HRESULT ItemFromPath(
    LPCTSTR lpszPath,
    LPITEMIDLIST& pidl);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
in Stringa che specifica il percorso dell'elemento.

*PIDL*<br/>
out Riferimento a un PIDL. Il metodo usa questo PIDL per archiviare il puntatore al relativo valore restituito.

### <a name="return-value"></a>Valore restituito

Restituisce NOERROR se ha esito positivo; valore di errore definito da OLE.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
