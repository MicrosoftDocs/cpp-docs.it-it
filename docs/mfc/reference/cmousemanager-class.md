---
title: Classe CMouseManager | Documenti Microsoft
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
ms.openlocfilehash: c58469086089dafe2447446723e06d6aa20a845c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369752"
---
# <a name="cmousemanager-class"></a>Classe CMouseManager
Consente di associare comandi diversi a un particolare [CView](../../mfc/reference/cview-class.md) quando l'utente fa doppio clic all'interno della visualizzazione dell'oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMouseManager : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMouseManager::AddView](#addview)|Aggiunge un `CView` dell'oggetto per il **personalizzazione** la finestra di dialogo. Il **personalizzazione** la finestra di dialogo consente all'utente di associare un doppio clic su un comando per ognuna delle viste elencate.|  
|[CMouseManager::GetViewDblClickCommand](#getviewdblclickcommand)|Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.|  
|[CMouseManager::GetViewIconId](#getviewiconid)|Restituisce l'icona associata con l'ID di visualizzazione fornito.|  
|[CMouseManager::GetViewIdByName](#getviewidbyname)|Restituisce l'ID della vista associata al nome di visualizzazione fornito.|  
|[CMouseManager::GetViewNames](#getviewnames)|Recupera un elenco di tutti i nomi di visualizzazione aggiunto.|  
|[CMouseManager::LoadState](#loadstate)|Carica il `CMouseManager` dello stato dal Registro di sistema Windows.|  
|[CMouseManager::SaveState](#savestate)|Scrive il `CMouseManager` allo stato del Registro di sistema.|  
|[CMouseManager::SetCommandForDblClk](#setcommandfordblclk)|Associa il comando specificato e la visualizzazione specificata.|  
  
## <a name="remarks"></a>Note  
 Il `CMouseManager` classe gestisce una raccolta di `CView` oggetti. Ogni visualizzazione è identificata da un nome e da un ID. Queste viste vengono visualizzate di **personalizzazione** la finestra di dialogo. L'utente può modificare il comando associato a qualsiasi visualizzazione tramite il **personalizzazione** la finestra di dialogo. Il comando associato viene eseguito quando l'utente fa doppio clic in tale visualizzazione. A tale scopo da una prospettiva di codifica, è necessario elaborare il `WM_LBUTTONDBLCLK` messaggio e chiamare il [CWinAppEx::OnViewDoubleClick](../../mfc/reference/cwinappex-class.md#onviewdoubleclick) funzione nel codice di cui `CView` oggetto...  
  
 Non è necessario creare un `CMouseManager` oggetto manualmente. Verrà creato dal framework dell'applicazione. Si verrà anche eliminato automaticamente quando l'utente chiude l'applicazione. Per ottenere un puntatore al gestore del mouse per l'applicazione, chiamare [CWinAppEx::GetMouseManager](../../mfc/reference/cwinappex-class.md#getmousemanager).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMouseManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmousemanager.h  
  
##  <a name="addview"></a>  CMouseManager::AddView  
 Registra un [CView](../../mfc/reference/cview-class.md) dell'oggetto con il [CMouseManager classe](../../mfc/reference/cmousemanager-class.md) per supportare il comportamento del mouse personalizzato.  
  
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
 [in] `iViewId`  
 Un ID di visualizzazione.  
  
 [in] `uiViewNameResId`  
 ID di stringa di risorsa che fa riferimento il nome della vista.  
  
 [in] `uiIconId`  
 Un ID icona di visualizzazione.  
  
 [in] `iId`  
 Un ID di visualizzazione.  
  
 [in] `lpszViewName`  
 Nome di una vista.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per supportare il comportamento personalizzato del mouse, una vista deve essere registrata con il `CMouseManager` oggetto. Qualsiasi oggetto derivato dalla `CView` classe può essere registrata con il gestore del mouse. La stringa e l'icona associata a una vista vengono visualizzati nel **Mouse** scheda della finestra di **Personalizza** la finestra di dialogo.  
  
 È compito del programmatore per creare e gestire gli ID di visualizzazione, ad esempio `iViewId` e `iId`.  
  
 Per ulteriori informazioni su come ottenere un comportamento del mouse personalizzato, vedere [personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMouseManager` oggetto utilizzando il `CWinAppEx::GetMouseManager` (metodo) e `AddView` metodo il `CMouseManager` classe. Questo frammento di codice fa parte di [campione raccolta stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#4](../../mfc/reference/codesnippet/cpp/cmousemanager-class_1.cpp)]  
  
##  <a name="getviewdblclickcommand"></a>  CMouseManager::GetViewDblClickCommand  
 Restituisce il comando che viene eseguito quando l'utente fa doppio clic all'interno della visualizzazione specificata.  
  
```  
UINT GetViewDblClickCommand(int iId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iId`  
 L'ID di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 L'identificatore di comando, se la vista è associata a un comando. in caso contrario 0.  
  
##  <a name="getviewiconid"></a>  CMouseManager::GetViewIconId  
 Recupera l'icona associata a un ID di visualizzazione.  
  
```  
UINT GetViewIconId(int iViewId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iViewId`  
 L'ID di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di risorsa icona se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo avrà esito negativo se la vista non è registrata utilizzando innanzitutto [CMouseManager::AddView](#addview).  
  
##  <a name="getviewidbyname"></a>  CMouseManager::GetViewIdByName  
 Recupera l'ID della vista associata a un nome di visualizzazione.  
  
```  
int GetViewIdByName(LPCTSTR lpszName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Il nome della vista.  
  
### <a name="return-value"></a>Valore restituito  
 Un ID di visualizzazione se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo cerca tramite viste registrate tramite [CMouseManager::AddView](#addview).  
  
##  <a name="getviewnames"></a>  CMouseManager::GetViewNames  
 Recupera un elenco di tutti i nomi di visualizzazione registrati.  
  
```  
void GetViewNames(CStringList& listOfNames) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `listOfNames`  
 Un riferimento a `CStringList` oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo compila il parametro `listOfNames` con i nomi di tutte le visualizzazioni registrati tramite [CMouseManager::AddView](#addview).  
  
##  <a name="loadstate"></a>  CMouseManager::LoadState  
 Carica lo stato del [CMouseManager classe](../../mfc/reference/cmousemanager-class.md) dal Registro di sistema.  
  
```  
BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Un percorso di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le informazioni sullo state caricate dal Registro di sistema includono le viste registrate, gli identificatori di visualizzazione e i comandi associati. Se il parametro `lpszProfileName` è `NULL`, questa funzione viene caricato il `CMouseManager` dati dal percorso predefinito del Registro di sistema controllato dal [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).  
  
 Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di inizializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di inizializzazione dell'area di lavoro, vedere [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate).  
  
##  <a name="savestate"></a>  CMouseManager::SaveState  
 Scrive lo stato del [CMouseManager classe](../../mfc/reference/cmousemanager-class.md) nel Registro di sistema.  
  
```  
BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Un percorso di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le informazioni sullo stato scritte nel Registro di sistema includono le viste registrate tutte, Visualizza identificatori e i comandi associati. Se il parametro `lpszProfileName` è `NULL`, questa funzione scrive il `CMouseManager` dati nella posizione predefinita del Registro di sistema controllata dal [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).  
  
 Nella maggior parte dei casi, non è necessario chiamare direttamente questa funzione. Viene chiamato come parte del processo di serializzazione dell'area di lavoro. Per ulteriori informazioni sul processo di serializzazione dell'area di lavoro, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).  
  
##  <a name="setcommandfordblclk"></a>  CMouseManager::SetCommandForDblClk  
 Associa un comando personalizzato a una vista che innanzitutto è registrata con il gestore del mouse.  
  
```  
void SetCommandForDblClk(
    int iViewId,  
    UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iViewId`  
 L'identificatore della vista.  
  
 [in] `uiCmd`  
 Identificatore di comando.  
  
### <a name="remarks"></a>Note  
 Per associare un comando personalizzato a una vista, è necessario registrare innanzitutto la vista utilizzando [CMouseManager::AddView](#addview). Il `AddView` metodo richiede un identificatore della vista come parametro di input. Quando si registra una vista, è possibile chiamare `CMouseManager::SetCommandForDblClk` con il parametro di input di stessa visualizzazione identificatore fornito per `AddView`. Successivamente, quando l'utente fa doppio clic del mouse nella visualizzazione registrato, l'applicazione eseguirà il comando indicato da `uiCmd.` per supportare il comportamento del mouse personalizzato, è necessario anche personalizzare la visualizzazione registrata con il gestore del mouse. Per ulteriori informazioni sul comportamento del mouse personalizzato, vedere [personalizzazione di tastiera e Mouse](../keyboard-and-mouse-customization.md).  
  
 Se `uiCmd` è impostato su 0, la visualizzazione specificata non è più associata a un comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)   
 [Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)



