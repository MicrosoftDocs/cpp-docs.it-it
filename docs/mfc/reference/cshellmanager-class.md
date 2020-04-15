---
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
ms.openlocfilehash: cc8aa9216fd0d4dcc169830fb745134ceb5c65fa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318407"
---
# <a name="cshellmanager-class"></a>Classe CShellManager

Implementa diversi metodi che consentono di utilizzare puntatori a elenchi di identificatori (PIDL).

## <a name="syntax"></a>Sintassi

```
class CShellManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CShellManager::CShellManager](#cshellmanager)|Costruisce un oggetto `CShellManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CShellManager::BrowseForFolder](#browseforfolder)|Visualizza una finestra di dialogo che consente all'utente di selezionare una cartella della shell.|
|[CShellManager::ConcatenateItem](#concatenateitem)|Concatena due PIDL.|
|[CShellManager::CopiaElemento](#copyitem)|Crea un nuovo valore PIDL e vi copia il valore PIDL fornito.|
|[CShellManager::CreateItem](#createitem)|Crea un nuovo valore PIDL della dimensione specificata.|
|[CShellManager::FreeItem](#freeitem)|Elimina il formato PIDL fornito.|
|[CShellManager::GetItemCount](#getitemcount)|Restituisce il numero di elementi nel formato PIDL fornito.|
|[CShellManager::GetItemSize](#getitemsize)|Restituisce la dimensione del formato PIDL fornito.|
|[CShellManager::GetNextItem](#getnextitem)|Restituisce l'elemento successivo dal formato PIDL.|
|[CShellManager::GetParentItem](#getparentitem)|Recupera l'elemento padre dell'elemento fornito.|
|[CShellManager::ItemFromPath](#itemfrompath)|Recupera il valore PIDL per l'elemento identificato dal percorso fornito.|

## <a name="remarks"></a>Osservazioni

I metodi `CShellManager` della classe riguardano tutti i PIDL. Un valore PIDL è un identificatore univoco per un oggetto shell.

Non creare un `CShellManager` oggetto manualmente. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore al gestore della shell per l'applicazione, chiamare [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CShellManager](../../mfc/reference/cshellmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshellmanager.h

## <a name="cshellmanagerbrowseforfolder"></a><a name="browseforfolder"></a>CShellManager::BrowseForFolder

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

*strOutFolder (cartelle di instacono*<br/>
[fuori] Stringa utilizzata dal metodo per archiviare il percorso della cartella selezionata.

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre.

*lplszInitialFolder (cartella iniziale)*<br/>
[in] Stringa contenente la cartella selezionata per impostazione predefinita quando viene visualizzata la finestra di dialogo.

*LpszTitle (Titolo)*<br/>
[in] Titolo della finestra di dialogo.

*ulFlags*<br/>
[in] Flag che specificano le opzioni per la finestra di dialogo. Vedere [BROWSEINFO](/windows/win32/api/shlobj_core/ns-shlobj_core-browseinfow) per la descrizione dettagliata.

*PiFolderImage (Immagine di PiFolder)*<br/>
[fuori] Puntatore al valore intero in cui il metodo scrive l'indice dell'immagine della cartella selezionata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona una cartella dalla finestra di dialogo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Quando si chiama questo metodo, l'applicazione crea e visualizza una finestra di dialogo che consente all'utente di selezionare una cartella. Il metodo scriverà il percorso della cartella nel parametro *strOutFolder.*

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CShellManager` viene illustrato `CWinAppEx::GetShellManager` come recuperare un `BrowseForFolder` riferimento a un oggetto utilizzando il metodo e come utilizzare il metodo . Questo frammento di codice fa parte [dell'esempio di Explorer](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#6](../../mfc/reference/codesnippet/cpp/cshellmanager-class_1.cpp)]

## <a name="cshellmanagerconcatenateitem"></a><a name="concatenateitem"></a>CShellManager::ConcatenateItem

Crea un nuovo elenco contenente due PIDL.

```
LPITEMIDLIST ConcatenateItem(
    LPCITEMIDLIST pidl1,
    LPCITEMIDLIST pidl2);
```

### <a name="parameters"></a>Parametri

*pidl1*<br/>
[in] Il primo elemento.

*pidl2*<br/>
[in] Secondo elemento.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo elenco di elementi se la funzione ha esito positivo, in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un nuovo [ITEMIDLIST](/windows/win32/api/shtypes/ns-shtypes-itemidlist) sufficientemente grande da contenere sia *pidl1* che *pidl2*. Copia quindi *pidl1* e *pidl2* nella nuova lista.

## <a name="cshellmanagercopyitem"></a><a name="copyitem"></a>CShellManager::CopiaElemento

Copia un elenco di elementi.

```
LPITEMIDLIST CopyItem(LPCITEMIDLIST pidlSource);
```

### <a name="parameters"></a>Parametri

*pidlSource (origine pidlSource)*<br/>
[in] Elenco di elementi originali.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elenco di elementi appena creato se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

L'elenco di elementi appena creato ha le stesse dimensioni dell'elenco di elementi di origine.

## <a name="cshellmanagercreateitem"></a><a name="createitem"></a>CShellManager::CreateItem

Crea un nuovo valore PIDL.

```
LPITEMIDLIST CreateItem(UINT cbSize);
```

### <a name="parameters"></a>Parametri

*Dimensioni cb*<br/>
[in] Dimensione dell'elenco di elementi.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elenco di elementi creato se ha esito positivo; in caso contrario NULL.

## <a name="cshellmanagercshellmanager"></a><a name="cshellmanager"></a>CShellManager::CShellManager

Costruisce un oggetto `CShellManager`.

```
CShellManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, `CShellManager` non è necessario creare direttamente un oggetto . Per impostazione predefinita, il framework ne crea uno automaticamente. Per ottenere un `CShellManager`puntatore a , chiamare [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager). Se si crea `CShellManager` un oggetto manualmente, è necessario inizializzarlo con il metodo [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager).

## <a name="cshellmanagerfreeitem"></a><a name="freeitem"></a>CShellManager::FreeItem

Elimina un elenco di elementi.

```
void FreeItem(LPITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*pidl*<br/>
[in] Elenco di elementi da eliminare.

## <a name="cshellmanagergetitemcount"></a><a name="getitemcount"></a>CShellManager::GetItemCount

Restituisce il numero di elementi in un elenco di elementi.

```
UINT GetItemCount(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*pidl*<br/>
[in] Puntatore a un elenco di elementi.

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco di elementi.

## <a name="cshellmanagergetitemsize"></a><a name="getitemsize"></a>CShellManager::GetItemSize

Restituisce le dimensioni di un elenco di elementi.

```
UINT GetItemSize(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*pidl*<br/>
[in] Puntatore a un elenco di elementi.

### <a name="return-value"></a>Valore restituito

Dimensione dell'elenco di elementi.

## <a name="cshellmanagergetnextitem"></a><a name="getnextitem"></a>CShellManager::GetNextItem

Recupera l'elemento successivo da un puntatore a un elenco di identificatori di elemento (PIDL).

```
LPITEMIDLIST GetNextItem(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*pidl*<br/>
[in] Elenco di elementi da scorrere.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento successivo nell'elenco.

### <a name="remarks"></a>Osservazioni

Se non sono presenti altri elementi nell'elenco, questo metodo restituisce NULL.

## <a name="cshellmanagergetparentitem"></a><a name="getparentitem"></a>CShellManager::GetParentItem

Recupera l'elemento padre di un puntatore a un elenco di identificatori di elemento (PIDL).

```
int GetParentItem(
    LPCITEMIDLIST lpidl,
    LPITEMIDLIST& lpidlParent);
```

### <a name="parameters"></a>Parametri

*lpidl*<br/>
[in] Un file PIDL di cui verrà recuperato l'elemento padre.

*lpidlParent*<br/>
[fuori] Un riferimento a un valore PIDL in cui il metodo memorizzerà il risultato.

### <a name="return-value"></a>Valore restituito

Livello del formato PIDL padre.

### <a name="remarks"></a>Osservazioni

Il livello di un valore PIDL è relativo al desktop. Il PIDL del desktop è considerato un livello pari a 0.

## <a name="cshellmanageritemfrompath"></a><a name="itemfrompath"></a>CShellManager::ItemFromPath

Recupera il puntatore a un elenco di identificatori di elemento (PIDL) dall'elemento identificato da un percorso di stringa.

```
HRESULT ItemFromPath(
    LPCTSTR lpszPath,
    LPITEMIDLIST& pidl);
```

### <a name="parameters"></a>Parametri

*LpszPath (percorso ipinoso)*<br/>
[in] Stringa che specifica il percorso dell'elemento.

*pidl*<br/>
[fuori] Riferimento a un file PIDL. Il metodo utilizza questo valore PIDL per archiviare il puntatore al relativo valore restituito.

### <a name="return-value"></a>Valore restituito

Restituisce NOERROR se ha esito positivo; un valore di errore definito da OLE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
