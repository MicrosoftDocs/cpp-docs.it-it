---
description: 'Altre informazioni su: classe CMouseManager'
title: Classe CMouseManager
ms.date: 11/04/2016
f1_keywords:
- CMouseManager
- AFXMOUSEMANAGER/CMouseManager
- AFXMOUSEMANAGER/CMouseManager::AddView
- AFXMOUSEMANAGER/CMouseManager::GetViewDblClickCommand
- AFXMOUSEMANAGER/CMouseManager::GetViewIconId
- AFXMOUSEMANAGER/CMouseManager::GetViewIdByName
- AFXMOUSEMANAGER/CMouseManager::GetViewNames
- AFXMOUSEMANAGER/CMouseManager::LoadState
- AFXMOUSEMANAGER/CMouseManager::SaveState
- AFXMOUSEMANAGER/CMouseManager::SetCommandForDblClk
helpviewer_keywords:
- CMouseManager [MFC], AddView
- CMouseManager [MFC], GetViewDblClickCommand
- CMouseManager [MFC], GetViewIconId
- CMouseManager [MFC], GetViewIdByName
- CMouseManager [MFC], GetViewNames
- CMouseManager [MFC], LoadState
- CMouseManager [MFC], SaveState
- CMouseManager [MFC], SetCommandForDblClk
ms.assetid: a4d05017-4e44-4a40-8b57-4ece0de20481
ms.openlocfilehash: 9816583aa9d05b76f97f1be1487898b5827fbcae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331561"
---
# <a name="cmousemanager-class"></a>Classe CMouseManager

Consente a un utente di associare comandi diversi a un particolare oggetto [CView](../../mfc/reference/cview-class.md) quando l'utente fa doppio clic all'interno di tale visualizzazione.

## <a name="syntax"></a>Sintassi

```
class CMouseManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMouseManager:: AddView](#addview)|Aggiunge un `CView` oggetto alla finestra di dialogo di **personalizzazione** . La finestra di dialogo **personalizzazione** consente all'utente di associare un doppio clic con un comando per ognuna delle visualizzazioni elencate.|
|[CMouseManager:: GetViewDblClickCommand](#getviewdblclickcommand)|Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.|
|[CMouseManager:: GetViewIconId](#getviewiconid)|Restituisce l'icona associata all'ID della visualizzazione fornito.|
|[CMouseManager:: GetViewIdByName](#getviewidbyname)|Restituisce l'ID della visualizzazione associato al nome della visualizzazione fornito.|
|[CMouseManager:: GetViewNames](#getviewnames)|Recupera un elenco di tutti i nomi di visualizzazione aggiunti.|
|[CMouseManager:: LoadState](#loadstate)|Carica lo `CMouseManager` stato dal registro di sistema di Windows.|
|[CMouseManager:: SaveState](#savestate)|Scrive lo `CMouseManager` stato nel registro di sistema di Windows.|
|[CMouseManager:: SetCommandForDblClk](#setcommandfordblclk)|Associa il comando fornito e la visualizzazione fornita.|

## <a name="remarks"></a>Commenti

La `CMouseManager` classe gestisce una raccolta di `CView` oggetti. Ogni visualizzazione è identificata da un nome e da un ID. Queste viste vengono visualizzate nella finestra di dialogo **personalizzazione** . L'utente può modificare il comando associato a qualsiasi visualizzazione tramite la finestra di dialogo di **personalizzazione** . Il comando associato viene eseguito quando l'utente fa doppio clic in tale visualizzazione. Per supportare questa operazione dal punto di vista del codice, è necessario elaborare il messaggio di WM_LBUTTONDBLCLK e chiamare la funzione [CWinAppEx:: OnViewDoubleClick](../../mfc/reference/cwinappex-class.md#onviewdoubleclick) nel codice per l' `CView` oggetto.

Non è consigliabile creare `CMouseManager` manualmente un oggetto. Verrà creato dal framework dell'applicazione. Viene inoltre eliminato automaticamente quando l'utente esce dall'applicazione. Per ottenere un puntatore al gestore del mouse per l'applicazione, chiamare [CWinAppEx:: GetMouseManager](../../mfc/reference/cwinappex-class.md#getmousemanager).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMouseManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmousemanager. h

## <a name="cmousemanageraddview"></a><a name="addview"></a> CMouseManager:: AddView

Registra un oggetto [CView](../../mfc/reference/cview-class.md) con la [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) per supportare il comportamento del mouse personalizzato.

```
BOOL AddView(
    int iViewId,
    UINT uiViewNameResId,
    UINT uiIconId = 0);

BOOL AddView(
    int iId,
    LPCTSTR lpszViewName,
    UINT uiIconId = 0);
```

### <a name="parameters"></a>Parametri

*iViewId*<br/>
in ID della vista.

*uiViewNameResId*<br/>
in ID della stringa di risorsa che fa riferimento al nome della vista.

*uiIconId*<br/>
in ID icona della visualizzazione.

*iId*<br/>
in ID della vista.

*lpszViewName*<br/>
in Nome della visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Per supportare il comportamento del mouse personalizzato, è necessario registrare una vista con l' `CMouseManager` oggetto. Qualsiasi oggetto derivato dalla `CView` classe può essere registrato con il gestore del mouse. La stringa e l'icona associate a una visualizzazione vengono visualizzate nella scheda del **mouse** della finestra di dialogo **Personalizza** .

Il programmatore è responsabile della creazione e della gestione degli ID di visualizzazione, ad esempio *iViewId* ed *IID*.

Per ulteriori informazioni su come fornire il comportamento del mouse personalizzato, vedere [personalizzazione della tastiera e del mouse](../../mfc/keyboard-and-mouse-customization.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMouseManager` oggetto utilizzando il `CWinAppEx::GetMouseManager` metodo e il `AddView` metodo nella `CMouseManager` classe. Questo frammento di codice fa parte dell' [esempio di raccolta di stati](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StateCollection#4](../../mfc/reference/codesnippet/cpp/cmousemanager-class_1.cpp)]

## <a name="cmousemanagergetviewdblclickcommand"></a><a name="getviewdblclickcommand"></a> CMouseManager:: GetViewDblClickCommand

Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.

```
UINT GetViewDblClickCommand(int iId) const;
```

### <a name="parameters"></a>Parametri

*iId*<br/>
in ID della vista.

### <a name="return-value"></a>Valore restituito

Identificatore del comando se la visualizzazione è associata a un comando. in caso contrario, 0.

## <a name="cmousemanagergetviewiconid"></a><a name="getviewiconid"></a> CMouseManager:: GetViewIconId

Recupera l'icona associata a un ID di visualizzazione.

```
UINT GetViewIconId(int iViewId) const;
```

### <a name="parameters"></a>Parametri

*iViewId*<br/>
in ID della vista.

### <a name="return-value"></a>Valore restituito

Identificatore di risorsa dell'icona in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo avrà esito negativo se la vista non viene registrata per la prima volta tramite [CMouseManager:: AddView](#addview).

## <a name="cmousemanagergetviewidbyname"></a><a name="getviewidbyname"></a> CMouseManager:: GetViewIdByName

Recupera l'ID di visualizzazione associato a un nome di visualizzazione.

```
int GetViewIdByName(LPCTSTR lpszName) const;
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Nome della visualizzazione.

### <a name="return-value"></a>Valore restituito

ID di visualizzazione in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo esegue la ricerca nelle viste registrate usando [CMouseManager:: AddView](#addview).

## <a name="cmousemanagergetviewnames"></a><a name="getviewnames"></a> CMouseManager:: GetViewNames

Recupera un elenco di tutti i nomi delle visualizzazioni registrate.

```cpp
void GetViewNames(CStringList& listOfNames) const;
```

### <a name="parameters"></a>Parametri

*listOfNames*<br/>
out Riferimento all' `CStringList` oggetto.

### <a name="remarks"></a>Commenti

Questo metodo compila il parametro `listOfNames` con i nomi di tutte le viste registrate usando [CMouseManager:: AddView](#addview).

## <a name="cmousemanagerloadstate"></a><a name="loadstate"></a> CMouseManager:: LoadState

Carica lo stato della [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) dal registro di sistema.

```
BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso di una chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Le informazioni sullo stato caricate dal registro di sistema includono le visualizzazioni registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è null, questa funzione carica i `CMouseManager` dati dal percorso del registro di sistema predefinito controllato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di inizializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di inizializzazione dell'area di lavoro, vedere [CWinAppEx:: LoadState](../../mfc/reference/cwinappex-class.md#loadstate).

## <a name="cmousemanagersavestate"></a><a name="savestate"></a> CMouseManager:: SaveState

Scrive lo stato della [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) nel registro di sistema.

```
BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso di una chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Le informazioni sullo stato scritte nel registro di sistema includono tutte le visualizzazioni registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è null, questa funzione scrive i `CMouseManager` dati nel percorso del registro di sistema predefinito controllato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di serializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di serializzazione dell'area di lavoro, vedere [CWinAppEx:: SaveState](../../mfc/reference/cwinappex-class.md#savestate).

## <a name="cmousemanagersetcommandfordblclk"></a><a name="setcommandfordblclk"></a> CMouseManager:: SetCommandForDblClk

Associa un comando personalizzato a una visualizzazione registrata per la prima volta con gestione mouse.

```cpp
void SetCommandForDblClk(
    int iViewId,
    UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*iViewId*<br/>
in Identificatore della visualizzazione.

*uiCmd*<br/>
[in] Identificatore del comando.

### <a name="remarks"></a>Commenti

Per associare un comando personalizzato a una visualizzazione, è innanzitutto necessario registrare la vista utilizzando [CMouseManager:: AddView](#addview). Il `AddView` metodo richiede un identificatore di visualizzazione come parametro di input. Una volta registrata una vista, è possibile chiamare `CMouseManager::SetCommandForDblClk` con lo stesso parametro di input dell'identificatore di visualizzazione fornito a `AddView` . Successivamente, quando l'utente fa doppio clic con il mouse nella visualizzazione registrata, l'applicazione eseguirà il comando indicato da *uiCmd.* Per supportare il comportamento del mouse personalizzato, è necessario personalizzare anche la visualizzazione registrata con il gestore del mouse. Per ulteriori informazioni sul comportamento del mouse personalizzato, vedere [personalizzazione della tastiera e del mouse](../keyboard-and-mouse-customization.md).

Se *uiCmd* è impostato su 0, la visualizzazione specificata non è più associata a un comando.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)
