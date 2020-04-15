---
title: Classe CUserToolsManager
ms.date: 11/04/2016
f1_keywords:
- CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager::CUserToolsManager
- AFXUSERTOOLSMANAGER/CUserToolsManager::CreateNewTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::FindTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetArgumentsMenuID
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetDefExt
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetFilter
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetInitialDirMenuID
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetMaxTools
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetToolsEntryCmd
- AFXUSERTOOLSMANAGER/CUserToolsManager::GetUserTools
- AFXUSERTOOLSMANAGER/CUserToolsManager::InvokeTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::IsUserToolCmd
- AFXUSERTOOLSMANAGER/CUserToolsManager::LoadState
- AFXUSERTOOLSMANAGER/CUserToolsManager::MoveToolDown
- AFXUSERTOOLSMANAGER/CUserToolsManager::MoveToolUp
- AFXUSERTOOLSMANAGER/CUserToolsManager::RemoveTool
- AFXUSERTOOLSMANAGER/CUserToolsManager::SaveState
- AFXUSERTOOLSMANAGER/CUserToolsManager::SetDefExt
- AFXUSERTOOLSMANAGER/CUserToolsManager::SetFilter
helpviewer_keywords:
- CUserToolsManager [MFC], CUserToolsManager
- CUserToolsManager [MFC], CreateNewTool
- CUserToolsManager [MFC], FindTool
- CUserToolsManager [MFC], GetArgumentsMenuID
- CUserToolsManager [MFC], GetDefExt
- CUserToolsManager [MFC], GetFilter
- CUserToolsManager [MFC], GetInitialDirMenuID
- CUserToolsManager [MFC], GetMaxTools
- CUserToolsManager [MFC], GetToolsEntryCmd
- CUserToolsManager [MFC], GetUserTools
- CUserToolsManager [MFC], InvokeTool
- CUserToolsManager [MFC], IsUserToolCmd
- CUserToolsManager [MFC], LoadState
- CUserToolsManager [MFC], MoveToolDown
- CUserToolsManager [MFC], MoveToolUp
- CUserToolsManager [MFC], RemoveTool
- CUserToolsManager [MFC], SaveState
- CUserToolsManager [MFC], SetDefExt
- CUserToolsManager [MFC], SetFilter
ms.assetid: bdfa37ae-efca-4616-abb5-9d0dcd2d335b
ms.openlocfilehash: c1f14657350c08679868299ce4878cca2ae10eec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373231"
---
# <a name="cusertoolsmanager-class"></a>Classe CUserToolsManager

Gestisce la raccolta di [CUserTool classe](../../mfc/reference/cusertool-class.md) oggetti in un'applicazione. Uno strumento utente è una voce di menu che esegue un'applicazione esterna. L'oggetto `CUserToolsManager` consente all'utente o allo sviluppatore di aggiungere nuovi strumenti utente all'applicazione. Supporta l'esecuzione di comandi associati a strumenti utente e inoltre salva le informazioni sugli strumenti utente nel Registro di sistema di Windows.

## <a name="syntax"></a>Sintassi

```
class CUserToolsManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUserToolsManager::CUserToolsManager](#cusertoolsmanager)|Costruisce un oggetto `CUserToolsManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUserToolsManager::CreateNewTool](#createnewtool)|Crea un nuovo strumento utente.|
|[CUserToolsManager::FindTool](#findtool)|Restituisce il `CMFCUserTool` puntatore all'oggetto associato a un ID di comando specificato.|
|[CUserToolsManager::GetArgumentsMenuID](#getargumentsmenuid)|Restituisce l'ID risorsa associato al menu **Argomenti** nella scheda **Strumenti** della finestra di dialogo **Personalizza.**|
|[CUserToolsManager::GetDefExt](#getdefext)|Restituisce l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**|
|[CUserToolsManager::Filtro](#getfilter)|Restituisce il filtro di file utilizzato dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**|
|[CUserToolsManager::GetInitialDirMenuID](#getinitialdirmenuid)|Restituisce l'ID risorsa associato al menu **Directory iniziale** nella scheda **Strumenti** della finestra di dialogo **Personalizza.**|
|[CUserToolsManager::GetMaxTools](#getmaxtools)|Restituisce il numero massimo di strumenti utente che è possibile allocare nell'applicazione.|
|[CUserToolsManager::GetToolsEntryCmd](#gettoolsentrycmd)|Restituisce l'ID di comando del segnaposto della voce di menu per gli strumenti utente.|
|[CUserToolsManager::GetUserTools](#getusertools)|Restituisce un riferimento all'elenco di strumenti utente.|
|[CUserToolsManager::InvokeTool](#invoketool)|Esegue un'applicazione associata allo strumento utente con un ID di comando specificato.|
|[CUserToolsManager::IsUserToolCmd](#isusertoolcmd)|Determina se un ID di comando è associato a uno strumento utente.|
|[CUserToolsManager::LoadState](#loadstate)|Carica le informazioni sugli strumenti utente dal Registro di sistema di Windows.|
|[CUserToolsManager::MoveToolDown](#movetooldown)|Sposta lo strumento utente specificato verso il basso nell'elenco degli strumenti utente.|
|[CUserToolsManager::MoveToolUp](#movetoolup)|Sposta lo strumento utente specificato verso l'alto nell'elenco degli strumenti utente.|
|[CUserToolsManager::RemoveTool](#removetool)|Rimuove lo strumento utente specificato dall'applicazione.|
|[CUserToolsManager::SaveState](#savestate)|Archivia le informazioni sugli strumenti utente nel Registro di sistema di Windows.|
|[CUserToolsManager::SetDefExt](#setdefext)|Specifica l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**|
|[CUserToolsManager::SetFilter](#setfilter)|Specifica il filtro di file utilizzato dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**|

## <a name="remarks"></a>Osservazioni

Per incorporare gli strumenti utente nell'applicazione, è necessario:To incorporate user tools into your application, you must:

1. Riservare una voce di menu e un ID di comando associato per una voce di menu dello strumento utente.

2. Riservare un ID di comando sequenziale per ogni strumento utente che un utente può definire nell'applicazione.

3. Chiamare il metodo [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e fornire i parametri seguenti: ID comando di menu, ID di comando dello strumento primo utente e ID di comando dell'ultimo strumento dello strumento utente.

Deve essere presente `CUserToolsManager` un solo oggetto globale per applicazione.

Per un esempio di strumenti utente, vedere il progetto di esempio VisualStudioDemo.For an example of user tools, see the VisualStudioDemo sample project.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CUserToolsManager` recuperare un riferimento a un oggetto e come creare nuovi strumenti utente. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CUserToolsManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxusertoolsmanager.h

## <a name="cusertoolsmanagercreatenewtool"></a><a name="createnewtool"></a>CUserToolsManager::CreateNewTool

Crea un nuovo strumento utente.

```
CUserTool* CreateNewTool();
```

### <a name="return-value"></a>Valore restituito

Puntatore allo strumento utente appena creato oppure NULL se il numero di strumenti utente ha superato il valore massimo. Il tipo restituito è uguale al tipo `CWinAppEx::EnableUserTools` passato al parametro *pToolRTC.*

### <a name="remarks"></a>Osservazioni

Questo metodo trova il primo ID di comando di menu disponibile nell'intervallo fornito nella chiamata a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e assegna allo strumento utente questo ID.

Il metodo ha esito negativo se il numero di strumenti ha raggiunto il valore massimo. Ciò si verifica quando tutti gli ID di comando all'interno dell'intervallo vengono assegnati agli strumenti utente. È possibile recuperare il numero massimo di strumenti chiamando [CUserToolsManager::GetMaxTools](#getmaxtools). È possibile ottenere l'accesso all'elenco di strumenti chiamando il [CUserToolsManager::GetUserTools](#getusertools) metodo.

## <a name="cusertoolsmanagercusertoolsmanager"></a><a name="cusertoolsmanager"></a>CUserToolsManager::CUserToolsManager

Costruisce un oggetto `CUserToolsManager`. Ogni applicazione deve avere al massimo un gestore di strumenti utente.

```
CUserToolsManager();

CUserToolsManager(
    const UINT uiCmdToolsDummy,
    const UINT uiCmdFirst,
    const UINT uiCmdLast,
    CRuntimeClass* pToolRTC=RUNTIME_CLASS(CUserTool),
    UINT uArgMenuID=0,
    UINT uInitDirMenuID=0);
```

### <a name="parameters"></a>Parametri

*uiCmdToolsDummy (informazioni in base al nome)*<br/>
[in] Un intero senza segno che il framework utilizza come segnaposto per l'ID di comando del menu degli strumenti utente.

*uiCmdPrimo*<br/>
[in] ID di comando per il primo comando dello strumento utente.

*uiCmdLast (informazioni in questo modo)*<br/>
[in] ID di comando per l'ultimo comando dello strumento utente.

*pToolRTC*<br/>
[in] Classe creata [da CUserToolsManager::CreateNewTool.](#createnewtool) Utilizzando questa classe, è possibile utilizzare un tipo derivato di [CUserTool Class](../../mfc/reference/cusertool-class.md) anziché l'implementazione predefinita.

*uArgMenuID (informazioni in stato in questo stato instato)*<br/>
[in] ID risorsa di menu del menu a comparsa degli argomenti.

*uInitDirMenuID (informazioni in base alla proprietà utente)*<br/>
[in] ID risorsa menu del menu di scelta rapida iniziale della directory.

### <a name="remarks"></a>Osservazioni

Non chiamare questo costruttore. Chiamare invece [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente e chiamare [CWinAppEx::GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) per ottenere un puntatore a `CUserToolsManager`. Per ulteriori informazioni, vedere [Strumenti definiti dall'utente](../../mfc/user-defined-tools.md).

## <a name="cusertoolsmanagerfindtool"></a><a name="findtool"></a>CUserToolsManager::FindTool

Restituisce il puntatore all'oggetto [Classe CUserTool](../../mfc/reference/cusertool-class.md) associato a un ID di comando specificato.

```
CUserTool* FindTool(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId (informazioni in questo base elementi)*<br/>
[in] Identificatore di un comando di menu.

### <a name="return-value"></a>Valore restituito

Un puntatore a una `CUserTool` [classe CUserTool](../../mfc/reference/cusertool-class.md) o un oggetto derivato da -se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Quando `FindTool` ha esito positivo, il tipo restituito è uguale al tipo del parametro *pToolRTC* in [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergetargumentsmenuid"></a><a name="getargumentsmenuid"></a>CUserToolsManager::GetArgumentsMenuID

Restituisce l'ID risorsa associato al menu **Argomenti** nella scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
UINT GetArgumentsMenuID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di una risorsa di menu.

### <a name="remarks"></a>Osservazioni

Il parametro *uArgMenuID* di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) specifica l'ID della risorsa.

## <a name="cusertoolsmanagergetdefext"></a><a name="getdefext"></a>CUserToolsManager::GetDefExt

Restituisce l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
const CString& GetDefExt() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `CString` che contiene l'estensione.

## <a name="cusertoolsmanagergetfilter"></a><a name="getfilter"></a>CUserToolsManager::Filtro

Restituisce il filtro di file utilizzato dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
const CString& GetFilter() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `CString` che contiene il filtro.

## <a name="cusertoolsmanagergetinitialdirmenuid"></a><a name="getinitialdirmenuid"></a>CUserToolsManager::GetInitialDirMenuID

Restituisce l'ID risorsa associato al menu **Directory iniziale** nella scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
UINT GetInitialDirMenuID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di risorsa di menu.

### <a name="remarks"></a>Osservazioni

L'ID restituito è specificato nel parametro *uInitDirMenuID* di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergetmaxtools"></a><a name="getmaxtools"></a>CUserToolsManager::GetMaxTools

Restituisce il numero massimo di strumenti utente che è possibile allocare nell'applicazione.

```
int GetMaxTools() const;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di strumenti utente che è possibile allocare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero massimo di strumenti che possono essere allocati nell'applicazione. Questo numero è il numero di ID nell'intervallo da *uiCmdFirst* ai parametri *uiCmdLast* passati a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergettoolsentrycmd"></a><a name="gettoolsentrycmd"></a>CUserToolsManager::GetToolsEntryCmd

Restituisce l'ID di comando del segnaposto della voce di menu per gli strumenti utente.

```
UINT GetToolsEntryCmd() const;
```

### <a name="return-value"></a>Valore restituito

ID di comando del segnaposto.

### <a name="remarks"></a>Osservazioni

Per abilitare gli strumenti utente, chiamare [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). Il parametro *uiCmdToolsDummy* consente di specificare l'ID di comando del comando di immissione degli strumenti. Questo metodo restituisce l'ID di comando di immissione degli strumenti. Ovunque tale ID venga utilizzato in un menu, viene sostituito dall'elenco degli strumenti utente quando viene visualizzato il menu.

## <a name="cusertoolsmanagergetusertools"></a><a name="getusertools"></a>CUserToolsManager::GetUserTools

Restituisce un riferimento all'elenco di strumenti utente.

```
const CObList& GetUserTools() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento const a un [cObList classe](../../mfc/reference/coblist-class.md) oggetto che contiene un elenco di strumenti utente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare un elenco di strumenti utente che il [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) oggetto gestisce. Ogni strumento utente è rappresentato da un oggetto di `CUserTool`tipo [CUserTool Class](../../mfc/reference/cusertool-class.md) o da un tipo derivato da . Il tipo viene specificato dal parametro *pToolRTC* quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente.

## <a name="cusertoolsmanagerinvoketool"></a><a name="invoketool"></a>CUserToolsManager::InvokeTool

Esegue un'applicazione associata allo strumento utente con un ID di comando specificato.

```
BOOL InvokeTool(UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCmdId (informazioni in questo base elementi)*<br/>
[in] ID del comando di menu associato allo strumento utente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando associato allo strumento utente è stato eseguito correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per eseguire un'applicazione associata allo strumento utente con l'ID di comando specificato da *uiCmdId*.

## <a name="cusertoolsmanagerisusertoolcmd"></a><a name="isusertoolcmd"></a>CUserToolsManager::IsUserToolCmd

Determina se un ID di comando è associato a uno strumento utente.

```
BOOL IsUserToolCmd(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId (informazioni in questo base elementi)*<br/>
[in] ID di comando della voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se un determinato ID di comando è associato a uno strumento utente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo controlla se l'ID di comando specificato è compreso nell'intervallo di ID di comando. L'intervallo viene specificato quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente.

## <a name="cusertoolsmanagerloadstate"></a><a name="loadstate"></a>CUserToolsManager::LoadState

Carica le informazioni sugli strumenti utente dal Registro di sistema di Windows.

```
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso della chiave del Registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo carica lo `CUserToolsManager` stato dell'oggetto dal Registro di sistema di Windows.

In genere, non si chiama direttamente questo metodo. [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate) lo chiama come parte del processo di inizializzazione dell'area di lavoro.

## <a name="cusertoolsmanagermovetooldown"></a><a name="movetooldown"></a>CUserToolsManager::MoveToolDown

Sposta lo strumento utente specificato verso il basso nell'elenco degli strumenti utente.

```
BOOL MoveToolDown(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pStrumento*<br/>
[in] Specifica lo strumento utente da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato verso il basso correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il metodo ha esito negativo se lo strumento specificato da *pTool* non è presente nell'elenco interno o se lo strumento è l'ultimo nell'elenco.

## <a name="cusertoolsmanagermovetoolup"></a><a name="movetoolup"></a>CUserToolsManager::MoveToolUp

Sposta lo strumento utente specificato verso l'alto nell'elenco degli strumenti utente.

```
BOOL MoveToolUp(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pStrumento*<br/>
[in] Specifica lo strumento utente da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il metodo ha esito negativo se lo strumento specificato dal parametro *pTool* non è presente nell'elenco interno o se lo strumento è la prima voce dello strumento nell'elenco.

## <a name="cusertoolsmanagerremovetool"></a><a name="removetool"></a>CUserToolsManager::RemoveTool

Rimuove lo strumento utente specificato dall'applicazione.

```
BOOL RemoveTool(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pStrumento*<br/>
[in, out] Puntatore a uno strumento utente da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUESe lo strumento viene rimosso correttamente. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se lo strumento viene rimosso correttamente, questo metodo elimina *pTool*.

## <a name="cusertoolsmanagersavestate"></a><a name="savestate"></a>CUserToolsManager::SaveState

Archivia le informazioni sugli strumenti utente nel Registro di sistema di Windows.

```
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso della chiave del Registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato salvato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il metodo archivia lo `CUserToolsManager` stato corrente dell'oggetto nel Registro di sistema di Windows.

In genere, non è necessario chiamare direttamente questo metodo, [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate) chiama automaticamente come parte del processo di serializzazione dell'area di lavoro dell'applicazione.

## <a name="cusertoolsmanagersetdefext"></a><a name="setdefext"></a>CUserToolsManager::SetDefExt

Specifica l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
void SetDefExt(const CString& strDefExt);
```

### <a name="parameters"></a>Parametri

*StrDefExt (strDefExt)*<br/>
[in] Stringa di testo contenente l'estensione di file predefinita.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per specificare un'estensione di file predefinita nella finestra di dialogo **Apri file,** che viene visualizzata quando l'utente seleziona un'applicazione da associare allo strumento utente. Il valore predefinito è "exe".

## <a name="cusertoolsmanagersetfilter"></a><a name="setfilter"></a>CUserToolsManager::SetFilter

Specifica il filtro di file utilizzato dalla finestra di dialogo **Apri file** ( [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **Comando** della scheda **Strumenti** della finestra di dialogo **Personalizza.**

```
void SetFilter(const CString& strFilter);
```

### <a name="parameters"></a>Parametri

*strFiltro*<br/>
[in] Specifica il filtro.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Classe CUserTool](../../mfc/reference/cusertool-class.md)
