---
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
ms.openlocfilehash: 1394a1b47a86022e37b11e032b87ee2a2a369862
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752804"
---
# <a name="cmousemanager-class"></a>Classe CMouseManager

Consente a un utente di associare comandi diversi a un particolare [CView](../../mfc/reference/cview-class.md) oggetto quando l'utente fa doppio clic all'interno di tale visualizzazione.

## <a name="syntax"></a>Sintassi

```
class CMouseManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMouseManager::AddView](#addview)|Aggiunge `CView` un oggetto alla finestra di dialogo **Personalizzazione.** La finestra di dialogo **Personalizzazione** consente all'utente di associare un doppio clic a un comando per ciascuna delle viste elencate.|
|[CMouseManager::GetViewDblClickCommand](#getviewdblclickcommand)|Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione fornita.|
|[CMouseManager::GetViewIconId](#getviewiconid)|Restituisce l'icona associata all'ID visualizzazione fornito.|
|[CMouseManager::GetViewIdByName](#getviewidbyname)|Restituisce l'ID visualizzazione associato al nome della visualizzazione specificato.|
|[CMouseManager::GetViewNames](#getviewnames)|Recupera un elenco di tutti i nomi delle viste aggiunte.|
|[CMouseManager::LoadState](#loadstate)|Carica `CMouseManager` lo stato dal Registro di sistema di Windows.|
|[CMouseManager::SaveState](#savestate)|Scrive `CMouseManager` lo stato nel Registro di sistema di Windows.|
|[CMouseManager::SetCommandForDblClk](#setcommandfordblclk)|Associa il comando fornito e la visualizzazione fornita.|

## <a name="remarks"></a>Osservazioni

La `CMouseManager` classe gestisce `CView` una raccolta di oggetti. Ogni vista è identificata da un nome e da un ID. Queste visualizzazioni vengono visualizzate nella finestra di dialogo **Personalizzazione.** L'utente può modificare il comando associato a qualsiasi visualizzazione tramite la finestra di dialogo **Personalizzazione.** Il comando associato viene eseguito quando l'utente fa doppio clic in tale visualizzazione. Per supportare questo dal punto di vista della codifica, è necessario elaborare il messaggio di `CView` WM_LBUTTONDBLCLK e chiamare la funzione CWinAppEx::OnViewDoubleClick nel codice per tale oggetto.To support this from a coding perspective, you must process the message message and call the [CWinAppEx::OnViewDoubleClick](../../mfc/reference/cwinappex-class.md#onviewdoubleclick) function in the code for that object..

Non creare un `CMouseManager` oggetto manualmente. Verrà creato dal framework dell'applicazione. Verrà inoltre eliminato automaticamente quando l'utente esce dall'applicazione. Per ottenere un puntatore al gestore del mouse per l'applicazione, chiamare [CWinAppEx::GetMouseManager](../../mfc/reference/cwinappex-class.md#getmousemanager).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMouseManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmousemanager.h

## <a name="cmousemanageraddview"></a><a name="addview"></a>CMouseManager::AddView

Registra un [CView](../../mfc/reference/cview-class.md) oggetto con il [CMouseManager classe](../../mfc/reference/cmousemanager-class.md) per supportare il comportamento del mouse personalizzato.

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

*iViewId (informazioni in stato in stato in stato*<br/>
[in] Un ID vista.

*UIViewNameResId*<br/>
[in] ID di stringa di risorsa che fa riferimento al nome della visualizzazione.

*uiIconId (informazioni in questo modo)*<br/>
[in] ID dell'icona di visualizzazione.

*Iid*<br/>
[in] Un ID vista.

*lpszViewName (nome di visualizzazione)*<br/>
[in] Un nome di vista.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per supportare il comportamento personalizzato del mouse, `CMouseManager` una vista deve essere registrata con l'oggetto. Qualsiasi oggetto derivato dalla `CView` classe può essere registrato con il gestore del mouse. La stringa e l'icona associate a una vista vengono visualizzate nella scheda **Mouse** della finestra di dialogo **Personalizza.**

È responsabilità del programmatore creare e gestire gli ID di visualizzazione, ad esempio *iViewId* e *iId*.

Per ulteriori informazioni su come fornire un comportamento personalizzato del mouse, vedere [Personalizzazione della tastiera e del mouse](../../mfc/keyboard-and-mouse-customization.md).

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CMouseManager` viene illustrato `CWinAppEx::GetMouseManager` come recuperare `AddView` un `CMouseManager` puntatore a un oggetto utilizzando il metodo e il metodo nella classe . Questo frammento di codice fa parte [dell'esempio di](../../overview/visual-cpp-samples.md)raccolta di stati .

[!code-cpp[NVC_MFC_StateCollection#4](../../mfc/reference/codesnippet/cpp/cmousemanager-class_1.cpp)]

## <a name="cmousemanagergetviewdblclickcommand"></a><a name="getviewdblclickcommand"></a>CMouseManager::GetViewDblClickCommand

Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione fornita.

```
UINT GetViewDblClickCommand(int iId) const;
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] ID visualizzazione.

### <a name="return-value"></a>Valore restituito

Identificatore del comando se la visualizzazione è associata a un comando; in caso contrario 0.

## <a name="cmousemanagergetviewiconid"></a><a name="getviewiconid"></a>CMouseManager::GetViewIconId

Recupera l'icona associata a un ID vista.

```
UINT GetViewIconId(int iViewId) const;
```

### <a name="parameters"></a>Parametri

*iViewId (informazioni in stato in stato in stato*<br/>
[in] ID visualizzazione.

### <a name="return-value"></a>Valore restituito

Un identificatore di risorsa icona se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo avrà esito negativo se la visualizzazione non viene prima registrata utilizzando [CMouseManager::AddView](#addview).

## <a name="cmousemanagergetviewidbyname"></a><a name="getviewidbyname"></a>CMouseManager::GetViewIdByName

Recupera l'ID vista associato a un nome di vista.

```
int GetViewIdByName(LPCTSTR lpszName) const;
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Nome della vista.

### <a name="return-value"></a>Valore restituito

Un ID vista se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue la ricerca nelle visualizzazioni registrate tramite [CMouseManager::AddView](#addview).

## <a name="cmousemanagergetviewnames"></a><a name="getviewnames"></a>CMouseManager::GetViewNames

Recupera un elenco di tutti i nomi delle viste registrate.

```cpp
void GetViewNames(CStringList& listOfNames) const;
```

### <a name="parameters"></a>Parametri

*listOfNomi*<br/>
[fuori] Riferimento all'oggetto. `CStringList`

### <a name="remarks"></a>Osservazioni

Questo metodo riempie `listOfNames` il parametro con i nomi di tutte le viste registrate utilizzando [CMouseManager::AddView](#addview).

## <a name="cmousemanagerloadstate"></a><a name="loadstate"></a>CMouseManager::LoadState

Carica lo stato della [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) dal Registro di sistema.

```
BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le informazioni sullo stato caricate dal Registro di sistema includono le visualizzazioni registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è `CMouseManager` NULL, questa funzione carica i dati dal percorso predefinito del Registro di sistema controllato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di inizializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di inizializzazione dell'area di lavoro, vedere [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate).

## <a name="cmousemanagersavestate"></a><a name="savestate"></a>CMouseManager::SaveState

Scrive lo stato della [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) nel Registro di sistema.

```
BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le informazioni sullo stato scritte nel Registro di sistema includono tutte le visualizzazioni registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è `CMouseManager` NULL, questa funzione scrive i dati nel percorso predefinito del Registro di sistema controllato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di serializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di serializzazione dell'area di lavoro, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

## <a name="cmousemanagersetcommandfordblclk"></a><a name="setcommandfordblclk"></a>CMouseManager::SetCommandForDblClk

Associa un comando personalizzato a una visualizzazione registrata per la prima volta con il gestore del mouse.

```cpp
void SetCommandForDblClk(
    int iViewId,
    UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*iViewId (informazioni in stato in stato in stato*<br/>
[in] Identificatore della visualizzazione.

*uiCmd (informazioni in stato in questo*<br/>
[in] Identificatore del comando.

### <a name="remarks"></a>Osservazioni

Per associare un comando personalizzato a una visualizzazione, è necessario innanzitutto registrare la visualizzazione utilizzando [CMouseManager::AddView](#addview). Il `AddView` metodo richiede un identificatore di visualizzazione come parametro di input. Una volta registrati una vista, è possibile chiamare `CMouseManager::SetCommandForDblClk` con lo `AddView`stesso parametro di input dell'identificatore della vista fornito a . Successivamente, quando l'utente fa doppio clic con il mouse nella visualizzazione registrata, l'applicazione eseguirà il comando indicato da *uiCmd.* Per supportare il comportamento del mouse personalizzato, è inoltre necessario personalizzare la visualizzazione registrata con il gestore del mouse. Per ulteriori informazioni sul comportamento personalizzato del mouse, vedere [Personalizzazione di tastiera e mouse](../keyboard-and-mouse-customization.md).

Se *uiCmd* è impostato su 0, la visualizzazione specificata non è più associata a un comando.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)
