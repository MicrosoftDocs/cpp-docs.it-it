---
title: Classe CShellManager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 35f186822e00f74552e3bf8d52950f3c4bbe5b45
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43207392"
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
|[CShellManager::CopyItem](#copyitem)|Crea un nuovo PIDL e copia il PIDL fornito ad esso.|  
|[CShellManager::CreateItem](#createitem)|Crea un nuovo PIDL della dimensione specificata.|  
|[CShellManager::FreeItem](#freeitem)|Elimina il PIDL fornito.|  
|[CShellManager::GetItemCount](#getitemcount)|Restituisce il numero di elementi nel PIDL fornito.|  
|[CShellManager::GetItemSize](#getitemsize)|Restituisce le dimensioni della finestra di PIDL fornito.|  
|[CShellManager::GetNextItem](#getnextitem)|Restituisce l'elemento successivo dal PIDL.|  
|[CShellManager::GetParentItem](#getparentitem)|Recupera l'elemento padre dell'elemento fornito.|  
|[CShellManager::ItemFromPath](#itemfrompath)|Recupera il PIDL per l'elemento identificato dal percorso specificato.|  
  
## <a name="remarks"></a>Note  
 I metodi del `CShellManager` classe PIDL ad affrontare tutti. Un PIDL è un identificatore univoco per un oggetto shell.  
  
 Non è necessario creare un `CShellManager` oggetto manualmente. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore per il gestore della shell per l'applicazione, chiamare [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CShellManager](../../mfc/reference/cshellmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxshellmanager. h  
  
##  <a name="browseforfolder"></a>  CShellManager::BrowseForFolder  
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
 [out] *strOutFolder*  
 La stringa utilizzata dal metodo per archiviare il percorso della cartella selezionata.  
  
 [in] *pWndParent*  
 Puntatore alla finestra padre.  
  
 [in] *lplszInitialFolder*  
 Stringa che contiene la cartella selezionata per impostazione predefinita quando viene visualizzata la finestra di dialogo.  
  
 [in] *lpszTitle*  
 Il titolo della finestra di dialogo.  
  
 [in] *ulFlags*  
 Flag che specificano le opzioni per la finestra di dialogo. Visualizzare [BROWSEINFO](/windows/desktop/api/shlobj_core/ns-shlobj_core-_browseinfoa) per una descrizione dettagliata.  
  
 [out] *piFolderImage*  
 Puntatore al valore integer in cui il metodo scrive l'indice dell'immagine della cartella selezionata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente seleziona una cartella nella finestra di dialogo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando si chiama questo metodo, l'applicazione crea e visualizza una finestra di dialogo che consente all'utente di selezionare una cartella. Il metodo verrà scritto il percorso della cartella nel *strOutFolder* parametro.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CShellManager` utilizzando il `CWinAppEx::GetShellManager` (metodo) e come usare il `BrowseForFolder` (metodo). Questo frammento di codice fa parte di [esempio di Esplora risorse](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#6](../../mfc/reference/codesnippet/cpp/cshellmanager-class_1.cpp)]  
  
##  <a name="concatenateitem"></a>  CShellManager::ConcatenateItem  
 Crea un nuovo elenco contenente due PIDL.  
  
```  
LPITEMIDLIST ConcatenateItem(
    LPCITEMIDLIST pidl1,  
    LPCITEMIDLIST pidl2);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidl1*  
 Il primo elemento.  
  
 [in] *pidl2*  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al nuovo elenco di elementi se la funzione ha esito positivo, in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un nuovo [ITEMIDLIST](/windows/desktop/api/shtypes/ns-shtypes-_itemidlist) abbastanza grande per contenere entrambi *pidl1* e *pidl2*. Viene quindi copiata *pidl1* e *pidl2* nel nuovo elenco.  
  
##  <a name="copyitem"></a>  CShellManager::CopyItem  
 Copia un elenco di elementi.  
  
```  
LPITEMIDLIST CopyItem(LPCITEMIDLIST pidlSource);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidlSource*  
 L'elenco di elementi originale.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento appena creato elenco se ha esito positivo. in caso contrario NULL.  
  
### <a name="remarks"></a>Note  
 L'elenco di elementi appena creato ha le stesse dimensioni di elenco di elementi di origine.  
  
##  <a name="createitem"></a>  CShellManager::CreateItem  
 Crea un nuovo PIDL.  
  
```  
LPITEMIDLIST CreateItem(UINT cbSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *cbSize*  
 Le dimensioni dell'elenco di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per l'elenco di elementi creati se ha esito positivo. in caso contrario NULL.  
  
##  <a name="cshellmanager"></a>  CShellManager::CShellManager  
 Costruisce un oggetto `CShellManager`.  
  
```  
CShellManager();
```  
  
### <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non è necessario creare un `CShellManager` direttamente. Per impostazione predefinita, il framework crea uno automaticamente. Per ottenere un puntatore per il `CShellManager`, chiamare [CWinAppEx::GetShellManager](../../mfc/reference/cwinappex-class.md#getshellmanager). Se si crea una `CShellManager` manualmente, è necessario inizializzarlo con il metodo [CWinAppEx::InitShellManager](../../mfc/reference/cwinappex-class.md#initshellmanager).  
  
##  <a name="freeitem"></a>  CShellManager::FreeItem  
 Elimina un elenco di elementi.  
  
```  
void FreeItem(LPITEMIDLIST pidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidl*  
 Un elenco di elementi da eliminare.  
  
##  <a name="getitemcount"></a>  CShellManager::GetItemCount  
 Restituisce il numero di elementi in un elenco di elementi.  
  
```  
UINT GetItemCount(LPCITEMIDLIST pidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidl*  
 Puntatore a un elenco di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nell'elenco di elementi.  
  
##  <a name="getitemsize"></a>  CShellManager::GetItemSize  
 Restituisce le dimensioni di un elenco di elementi.  
  
```  
UINT GetItemSize(LPCITEMIDLIST pidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidl*  
 Puntatore a un elenco di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni dell'elenco di elementi.  
  
##  <a name="getnextitem"></a>  CShellManager::GetNextItem  
 Recupera l'elemento successivo da un puntatore a un elenco di identificatori (PIDL) di elemento.  
  
```  
LPITEMIDLIST GetNextItem(LPCITEMIDLIST pidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pidl*  
 L'elenco di elementi da scorrere.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento successivo nell'elenco.  
  
### <a name="remarks"></a>Note  
 Se non sono disponibili altri elementi nell'elenco, questo metodo restituisce NULL.  
  
##  <a name="getparentitem"></a>  CShellManager::GetParentItem  
 Recupera l'elemento padre di un puntatore a un elenco di identificatori (PIDL) di elemento.  
  
```  
int GetParentItem(
    LPCITEMIDLIST lpidl,  
    LPITEMIDLIST& lpidlParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpidl*  
 PIDL verrà recuperato il cui elemento padre.  
  
 [out] *lpidlParent*  
 Un riferimento a un PIDL in cui il metodo archivierà il risultato.  
  
### <a name="return-value"></a>Valore restituito  
 Il livello dell'elemento padre PIDL.  
  
### <a name="remarks"></a>Note  
 Il livello di un PIDL è relative al desktop. Il desktop PIDL viene considerato per avere un livello pari a 0.  
  
##  <a name="itemfrompath"></a>  CShellManager::ItemFromPath  
 Recupera il puntatore a un elenco di identificatori (PIDL) elemento dall'elemento identificato da un percorso di stringa.  
  
```  
HRESULT ItemFromPath(
    LPCTSTR lpszPath,  
    LPITEMIDLIST& pidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszPath*  
 Stringa che specifica il percorso per l'elemento.  
  
 [out] *pidl*  
 Un riferimento a un PIDL. Il metodo Usa questo PIDL per archiviare il puntatore al relativo valore restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce NOERROR se ha esito positivo. un valore di errore definiti dall'OLE.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
