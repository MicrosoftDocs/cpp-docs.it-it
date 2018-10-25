---
title: Classe CMouseManager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d430ab70818dafb883e405b082f60c86689853cb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50081040"
---
# <a name="cmousemanager-class"></a>Classe CMouseManager

Consente agli utenti di associare comandi diversi a un determinato [CView](../../mfc/reference/cview-class.md) quando l'utente fa doppio clic all'interno della visualizzazione dell'oggetto.

## <a name="syntax"></a>Sintassi

```
class CMouseManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMouseManager::AddView](#addview)|Aggiunge un `CView` dell'oggetto per il **personalizzazione** nella finestra di dialogo. Il **personalizzazione** nella finestra di dialogo consente all'utente di associare un doppio clic un comando per ognuna delle viste elencate.|
|[CMouseManager::GetViewDblClickCommand](#getviewdblclickcommand)|Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.|
|[CMouseManager::GetViewIconId](#getviewiconid)|Restituisce l'icona associata all'ID vista specificato.|
|[CMouseManager::GetViewIdByName](#getviewidbyname)|Restituisce l'ID della vista associata con il nome della visualizzazione specificato.|
|[CMouseManager::GetViewNames](#getviewnames)|Recupera un elenco di tutti i nomi di vista aggiunto.|
|[CMouseManager::LoadState](#loadstate)|Carica il `CMouseManager` dello stato dal Registro di sistema Windows.|
|[CMouseManager::SaveState](#savestate)|Scrive il `CMouseManager` dello stato nel Registro di sistema di Windows.|
|[CMouseManager::SetCommandForDblClk](#setcommandfordblclk)|Associa il comando specificato e la visualizzazione specificata.|

## <a name="remarks"></a>Note

Il `CMouseManager` classe mantiene una raccolta di `CView` oggetti. Ogni visualizzazione è identificato da un nome e da un ID. Tali viste vengono visualizzate nei **personalizzazione** nella finestra di dialogo. L'utente può modificare il comando associato a qualsiasi visualizzazione tramite il **personalizzazione** nella finestra di dialogo. Quando l'utente fa doppio clic in tale visualizzazione, viene eseguito il comando associato. Per supportare questo scenario dal punto di vista della scrittura di codice, è necessario elaborare il messaggio di WM_LBUTTONDBLCLK e chiamano il [CWinAppEx::OnViewDoubleClick](../../mfc/reference/cwinappex-class.md#onviewdoubleclick) funzione nel codice per cui `CView` oggetto...

Non è necessario creare un `CMouseManager` oggetto manualmente. Verrà creato dal framework dell'applicazione. Verrà inoltre quindi eliminato automaticamente quando l'utente chiude l'applicazione. Per ottenere un puntatore al gestore del mouse per l'applicazione, chiamare [CWinAppEx::GetMouseManager](../../mfc/reference/cwinappex-class.md#getmousemanager).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMouseManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmousemanager.h

##  <a name="addview"></a>  CMouseManager::AddView

Registra una [CView](../../mfc/reference/cview-class.md) dell'oggetto con il [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) per supportare il comportamento personalizzato del mouse.

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
[in] Un ID di vista.

*uiViewNameResId*<br/>
[in] Un ID di stringa di risorsa che fa riferimento il nome della visualizzazione.

*uiIconId*<br/>
[in] Un ID icona di visualizzazione.

*iId*<br/>
[in] Un ID di vista.

*lpszViewName*<br/>
[in] Un nome di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Per supportare il comportamento personalizzato del mouse, una vista deve essere registrata con il `CMouseManager` oggetto. Qualsiasi oggetto derivato dal `CView` classe può essere registrata con il gestore del mouse. La stringa e l'icona associata a una vista vengono visualizzati nei **Mouse** scheda della finestra di **Personalizza** nella finestra di dialogo.

È compito del programmatore di creare e gestire, ad esempio visualizzare gli ID *iViewId* e *iId*.

Per altre informazioni su come fornire comportamento personalizzato del mouse, vedere [personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMouseManager` oggetto utilizzando il `CWinAppEx::GetMouseManager` metodo e il `AddView` metodo nel `CMouseManager` classe. Questo frammento di codice fa parte il [campione raccolta stato](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StateCollection#4](../../mfc/reference/codesnippet/cpp/cmousemanager-class_1.cpp)]

##  <a name="getviewdblclickcommand"></a>  CMouseManager::GetViewDblClickCommand

Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.

```
UINT GetViewDblClickCommand(int iId) const;
```

### <a name="parameters"></a>Parametri

*iId*<br/>
[in] L'ID di vista.

### <a name="return-value"></a>Valore restituito

Se la visualizzazione è associata a un comando; l'identificatore di comando in caso contrario 0.

##  <a name="getviewiconid"></a>  CMouseManager::GetViewIconId

Recupera l'icona associata a un ID di vista.

```
UINT GetViewIconId(int iViewId) const;
```

### <a name="parameters"></a>Parametri

*iViewId*<br/>
[in] L'ID di vista.

### <a name="return-value"></a>Valore restituito

Un identificatore di risorsa icona se ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo avrà esito negativo se la vista non viene inizialmente registrata mediante [CMouseManager::AddView](#addview).

##  <a name="getviewidbyname"></a>  CMouseManager::GetViewIdByName

Recupera l'ID della vista associata a un nome di visualizzazione.

```
int GetViewIdByName(LPCTSTR lpszName) const;
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Il nome della visualizzazione.

### <a name="return-value"></a>Valore restituito

Un ID di vista se ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo esegue la ricerca tramite le viste registrate mediante [CMouseManager::AddView](#addview).

##  <a name="getviewnames"></a>  CMouseManager::GetViewNames

Recupera un elenco di tutti i nomi di visualizzazione registrati.

```
void GetViewNames(CStringList& listOfNames) const;
```

### <a name="parameters"></a>Parametri

*listOfNames*<br/>
[out] Un riferimento a `CStringList` oggetto.

### <a name="remarks"></a>Note

Questo metodo inserisce il parametro `listOfNames` con i nomi di tutte le visualizzazioni registrate mediante [CMouseManager::AddView](#addview).

##  <a name="loadstate"></a>  CMouseManager::LoadState

Carica lo stato del [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) dal Registro di sistema.

```
BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Un percorso di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Le informazioni sullo state caricate dal Registro di sistema includono le viste registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è NULL, questa funzione viene caricata la `CMouseManager` i dati dalla posizione predefinita del Registro di sistema controllata dal [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di inizializzazione dell'area di lavoro. Per altre informazioni sul processo di inizializzazione dell'area di lavoro, vedere [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate).

##  <a name="savestate"></a>  CMouseManager::SaveState

Scrive lo stato del [classe CMouseManager](../../mfc/reference/cmousemanager-class.md) nel Registro di sistema.

```
BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Un percorso di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Le informazioni sullo stato scritte nel Registro di sistema includono registrate tutte le viste, gli identificatori di visualizzazione e i comandi associati. Se il parametro *lpszProfileName* è NULL, questa funzione scrive il `CMouseManager` i dati nel percorso del Registro di sistema predefinito controllata dal [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di serializzazione dell'area di lavoro. Per altre informazioni sul processo di serializzazione dell'area di lavoro, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

##  <a name="setcommandfordblclk"></a>  CMouseManager::SetCommandForDblClk

Associa un comando personalizzato a una vista che viene inizialmente registrata con il gestore del mouse.

```
void SetCommandForDblClk(
    int iViewId,
    UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*iViewId*<br/>
[in] L'identificatore della vista.

*uiCmd*<br/>
[in] Identificatore di comando.

### <a name="remarks"></a>Note

Per associare un comando personalizzato a una vista, è innanzitutto necessario registrare la visualizzazione usando [CMouseManager::AddView](#addview). Il `AddView` metodo richiede un identificatore della vista come parametro di input. Dopo aver registrato una vista, è possibile chiamare `CMouseManager::SetCommandForDblClk` con il parametro di input di stessa visualizzazione identificatore fornito per `AddView`. Successivamente, quando l'utente fa doppio clic con il mouse nella visualizzazione registrato, l'applicazione eseguirà il comando indicato da *uiCmd.* Per supportare il comportamento del mouse personalizzato, è necessario anche personalizzare la visualizzazione registrata con il gestore del mouse. Per altre informazioni sul comportamento del mouse personalizzato, vedere [personalizzazione di tastiera e Mouse](../keyboard-and-mouse-customization.md).

Se *uiCmd* è impostato su 0, la visualizzazione specificata non è più associata a un comando.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)

