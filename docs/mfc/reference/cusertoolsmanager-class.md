---
description: 'Altre informazioni su: classe CUserToolsManager'
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
ms.openlocfilehash: 1c6b3b6ec2912a0093929ac117d878d54ed9757f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344952"
---
# <a name="cusertoolsmanager-class"></a>Classe CUserToolsManager

Gestisce la raccolta di oggetti della [Classe CUserTool](../../mfc/reference/cusertool-class.md) in un'applicazione. Uno strumento utente è una voce di menu che esegue un'applicazione esterna. L'oggetto `CUserToolsManager` consente all'utente o allo sviluppatore di aggiungere nuovi strumenti utente all'applicazione. Supporta l'esecuzione di comandi associati a strumenti utente e inoltre salva le informazioni sugli strumenti utente nel Registro di sistema di Windows.

## <a name="syntax"></a>Sintassi

```
class CUserToolsManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CUserToolsManager:: CUserToolsManager](#cusertoolsmanager)|Costruisce un oggetto `CUserToolsManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CUserToolsManager:: CreateNewTool](#createnewtool)|Consente di creare un nuovo strumento utente.|
|[CUserToolsManager:: FindTool](#findtool)|Restituisce il puntatore all' `CMFCUserTool` oggetto associato a un ID di comando specificato.|
|[CUserToolsManager:: GetArgumentsMenuID](#getargumentsmenuid)|Restituisce l'ID di risorsa associato al menu **argomenti** nella scheda **strumenti** della finestra di dialogo **Personalizza** .|
|[CUserToolsManager:: GetDefExt](#getdefext)|Restituisce l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .|
|[CUserToolsManager:: GetFilter](#getfilter)|Restituisce il filtro file utilizzato dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .|
|[CUserToolsManager:: GetInitialDirMenuID](#getinitialdirmenuid)|Restituisce l'ID risorsa associato al menu **directory iniziale** nella scheda **strumenti** della finestra di dialogo **Personalizza** .|
|[CUserToolsManager:: GetMaxTools](#getmaxtools)|Restituisce il numero massimo di strumenti utente che possono essere allocati nell'applicazione.|
|[CUserToolsManager:: GetToolsEntryCmd](#gettoolsentrycmd)|Restituisce l'ID di comando del segnaposto della voce di menu per gli strumenti utente.|
|[CUserToolsManager:: GetUserTools](#getusertools)|Restituisce un riferimento all'elenco di strumenti utente.|
|[CUserToolsManager:: InvokeTool](#invoketool)|Esegue un'applicazione associata allo strumento utente con un ID di comando specificato.|
|[CUserToolsManager:: IsUserToolCmd](#isusertoolcmd)|Determina se un ID comando è associato a uno strumento utente.|
|[CUserToolsManager:: LoadState](#loadstate)|Carica le informazioni sugli strumenti utente dal registro di sistema di Windows.|
|[CUserToolsManager:: MoveToolDown](#movetooldown)|Sposta lo strumento utente specificato verso il basso nell'elenco degli strumenti utente.|
|[CUserToolsManager:: MoveToolUp](#movetoolup)|Sposta lo strumento utente specificato verso l'alto nell'elenco degli strumenti utente.|
|[CUserToolsManager:: RemoveTool](#removetool)|Rimuove lo strumento utente specificato dall'applicazione.|
|[CUserToolsManager:: SaveState](#savestate)|Archivia le informazioni sugli strumenti utente nel registro di sistema di Windows.|
|[CUserToolsManager:: SetDefExt](#setdefext)|Specifica l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .|
|[CUserToolsManager:: sefilter](#setfilter)|Specifica il filtro file usato dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .|

## <a name="remarks"></a>Commenti

Per incorporare gli strumenti utente nell'applicazione, è necessario:

1. Riservare una voce di menu e un ID comando associato per una voce di menu dello strumento utente.

2. Riservare un ID comando sequenziale per ogni strumento utente che può essere definito dall'utente nell'applicazione.

3. Chiamare il metodo [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e fornire i parametri seguenti: ID comando di menu, primo ID comando strumento utente e ID comando ultimo strumento utente.

Deve essere presente un solo `CUserToolsManager` oggetto globale per applicazione.

Per un esempio di strumenti utente, vedere il progetto di esempio VisualStudioDemo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CUserToolsManager` oggetto e come creare nuovi strumenti utente. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CUserToolsManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxusertoolsmanager. h

## <a name="cusertoolsmanagercreatenewtool"></a><a name="createnewtool"></a> CUserToolsManager:: CreateNewTool

Consente di creare un nuovo strumento utente.

```
CUserTool* CreateNewTool();
```

### <a name="return-value"></a>Valore restituito

Puntatore allo strumento utente appena creato oppure NULL se il numero di strumenti utente ha superato il valore massimo. Il tipo restituito è lo stesso del tipo passato a `CWinAppEx::EnableUserTools` come parametro *pToolRTC* .

### <a name="remarks"></a>Commenti

Questo metodo trova il primo ID del comando di menu disponibile nell'intervallo specificato nella chiamata a [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e assegna allo strumento utente questo ID.

Il metodo ha esito negativo se il numero di strumenti ha raggiunto il valore massimo. Questo errore si verifica quando tutti gli ID di comando inclusi nell'intervallo vengono assegnati agli strumenti utente. È possibile recuperare il numero massimo di strumenti chiamando [CUserToolsManager:: GetMaxTools](#getmaxtools). È possibile ottenere l'accesso all'elenco di strumenti chiamando il metodo [CUserToolsManager:: GetUserTools](#getusertools) .

## <a name="cusertoolsmanagercusertoolsmanager"></a><a name="cusertoolsmanager"></a> CUserToolsManager:: CUserToolsManager

Costruisce un oggetto `CUserToolsManager`. Ogni applicazione deve avere al massimo un gestore degli strumenti utente.

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

*uiCmdToolsDummy*<br/>
in Unsigned Integer utilizzato dal Framework come segnaposto per l'ID del comando del menu strumenti utente.

*uiCmdFirst*<br/>
in ID del comando per il primo strumento utente.

*uiCmdLast*<br/>
in ID del comando per l'ultimo strumento utente.

*pToolRTC*<br/>
in Classe creata da [CUserToolsManager:: CreateNewTool](#createnewtool) . Utilizzando questa classe, è possibile utilizzare un tipo derivato della [Classe CUserTool](../../mfc/reference/cusertool-class.md) anziché l'implementazione predefinita.

*uArgMenuID*<br/>
in ID della risorsa di menu del menu di scelta rapida degli argomenti.

*uInitDirMenuID*<br/>
in ID della risorsa di menu del menu popup della directory iniziale.

### <a name="remarks"></a>Commenti

Non chiamare questo costruttore. Chiamare invece [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente e chiamare [CWinAppEx:: GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) per ottenere un puntatore a `CUserToolsManager` . Per ulteriori informazioni, vedere [strumenti definiti dall'utente](../../mfc/user-defined-tools.md).

## <a name="cusertoolsmanagerfindtool"></a><a name="findtool"></a> CUserToolsManager:: FindTool

Restituisce il puntatore all'oggetto della [Classe CUserTool](../../mfc/reference/cusertool-class.md) associato a un ID di comando specificato.

```
CUserTool* FindTool(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
in Identificatore del comando di menu.

### <a name="return-value"></a>Valore restituito

Puntatore a una [Classe CUserTool](../../mfc/reference/cusertool-class.md) o a un `CUserTool` oggetto derivato da se l'operazione riesce; in caso contrario, null.

### <a name="remarks"></a>Commenti

Quando `FindTool` ha esito positivo, il tipo restituito è uguale al tipo del parametro *PToolRTC* di [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergetargumentsmenuid"></a><a name="getargumentsmenuid"></a> CUserToolsManager:: GetArgumentsMenuID

Restituisce l'ID di risorsa associato al menu **argomenti** nella scheda **strumenti** della finestra di dialogo **Personalizza** .

```
UINT GetArgumentsMenuID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di una risorsa di menu.

### <a name="remarks"></a>Commenti

Il parametro *uArgMenuID* di [CWinAppEx:: ENABLEUSERTOOLS](../../mfc/reference/cwinappex-class.md#enableusertools) specifica l'ID della risorsa.

## <a name="cusertoolsmanagergetdefext"></a><a name="getdefext"></a> CUserToolsManager:: GetDefExt

Restituisce l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .

```
const CString& GetDefExt() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all' `CString` oggetto che contiene l'estensione.

## <a name="cusertoolsmanagergetfilter"></a><a name="getfilter"></a> CUserToolsManager:: GetFilter

Restituisce il filtro file utilizzato dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .

```
const CString& GetFilter() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all' `CString` oggetto che contiene il filtro.

## <a name="cusertoolsmanagergetinitialdirmenuid"></a><a name="getinitialdirmenuid"></a> CUserToolsManager:: GetInitialDirMenuID

Restituisce l'ID risorsa associato al menu **directory iniziale** nella scheda **strumenti** della finestra di dialogo **Personalizza** .

```
UINT GetInitialDirMenuID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di risorsa di menu.

### <a name="remarks"></a>Commenti

L'ID restituito viene specificato nel parametro *uInitDirMenuID* di [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergetmaxtools"></a><a name="getmaxtools"></a> CUserToolsManager:: GetMaxTools

Restituisce il numero massimo di strumenti utente che possono essere allocati nell'applicazione.

```
int GetMaxTools() const;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di strumenti utente che è possibile allocare.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il numero massimo di strumenti che possono essere allocati nell'applicazione. Questo numero indica il numero di ID nell'intervallo compreso tra *uiCmdFirst* e i parametri *UiCmdLast* passati a [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

## <a name="cusertoolsmanagergettoolsentrycmd"></a><a name="gettoolsentrycmd"></a> CUserToolsManager:: GetToolsEntryCmd

Restituisce l'ID di comando del segnaposto della voce di menu per gli strumenti utente.

```
UINT GetToolsEntryCmd() const;
```

### <a name="return-value"></a>Valore restituito

ID di comando del segnaposto.

### <a name="remarks"></a>Commenti

Per abilitare gli strumenti utente, chiamare [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). Il parametro *uiCmdToolsDummy* specifica l'ID comando del comando per la voce degli strumenti. Questo metodo restituisce l'ID del comando strumenti voce. Ogni volta che l'ID viene usato in un menu, viene sostituito dall'elenco di strumenti utente quando viene visualizzato il menu.

## <a name="cusertoolsmanagergetusertools"></a><a name="getusertools"></a> CUserToolsManager:: GetUserTools

Restituisce un riferimento all'elenco di strumenti utente.

```
const CObList& GetUserTools() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento const a un oggetto della [classe CObList](../../mfc/reference/coblist-class.md) che contiene un elenco di strumenti utente.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare un elenco di strumenti utente gestiti dall'oggetto [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) . Ogni strumento utente è rappresentato da un oggetto di tipo [Classe CUserTool](../../mfc/reference/cusertool-class.md) o da un tipo derivato da `CUserTool` . Il tipo viene specificato dal parametro *pToolRTC* quando si chiama [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente.

## <a name="cusertoolsmanagerinvoketool"></a><a name="invoketool"></a> CUserToolsManager:: InvokeTool

Esegue un'applicazione associata allo strumento utente con un ID di comando specificato.

```
BOOL InvokeTool(UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
in ID del comando di menu associato allo strumento utente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando associato a User Tool è stato eseguito correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per eseguire un'applicazione associata allo strumento utente con l'ID di comando specificato da *uiCmdId*.

## <a name="cusertoolsmanagerisusertoolcmd"></a><a name="isusertoolcmd"></a> CUserToolsManager:: IsUserToolCmd

Determina se un ID comando è associato a uno strumento utente.

```
BOOL IsUserToolCmd(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
in ID del comando della voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se un ID di comando specificato è associato a uno strumento utente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo controlla se l'ID di comando specificato è nell'intervallo di ID comando. Specificare l'intervallo quando si chiama [CWinAppEx:: EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti utente.

## <a name="cusertoolsmanagerloadstate"></a><a name="loadstate"></a> CUserToolsManager:: LoadState

Carica le informazioni sugli strumenti utente dal registro di sistema di Windows.

```
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso della chiave del registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo carica lo stato dell' `CUserToolsManager` oggetto dal registro di sistema di Windows.

In genere, questo metodo non viene chiamato direttamente. [CWinAppEx:: LoadState](../../mfc/reference/cwinappex-class.md#loadstate) lo chiama come parte del processo di inizializzazione dell'area di lavoro.

## <a name="cusertoolsmanagermovetooldown"></a><a name="movetooldown"></a> CUserToolsManager:: MoveToolDown

Sposta lo strumento utente specificato verso il basso nell'elenco degli strumenti utente.

```
BOOL MoveToolDown(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
in Specifica lo strumento utente da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il metodo ha esito negativo se lo strumento specificato da *pTool* non è presente nell'elenco interno o se lo strumento è l'ultimo nell'elenco.

## <a name="cusertoolsmanagermovetoolup"></a><a name="movetoolup"></a> CUserToolsManager:: MoveToolUp

Sposta lo strumento utente specificato verso l'alto nell'elenco degli strumenti utente.

```
BOOL MoveToolUp(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
in Specifica lo strumento utente da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il metodo ha esito negativo se lo strumento specificato dal parametro *pTool* non è presente nell'elenco interno o se lo strumento è il primo elemento dell'elenco.

## <a name="cusertoolsmanagerremovetool"></a><a name="removetool"></a> CUserToolsManager:: RemoveTool

Rimuove lo strumento utente specificato dall'applicazione.

```
BOOL RemoveTool(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
[in, out] Puntatore a uno strumento utente da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se lo strumento viene rimosso correttamente. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se lo strumento viene rimosso correttamente, questo metodo elimina *pTool*.

## <a name="cusertoolsmanagersavestate"></a><a name="savestate"></a> CUserToolsManager:: SaveState

Archivia le informazioni sugli strumenti utente nel registro di sistema di Windows.

```
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso della chiave del registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato salvato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il metodo archivia lo stato corrente dell' `CUserToolsManager` oggetto nel registro di sistema di Windows.

In genere, non è necessario chiamare direttamente questo metodo, [CWinAppEx:: SaveState](../../mfc/reference/cwinappex-class.md#savestate) lo chiama automaticamente come parte del processo di serializzazione dell'area di lavoro dell'applicazione.

## <a name="cusertoolsmanagersetdefext"></a><a name="setdefext"></a> CUserToolsManager:: SetDefExt

Specifica l'estensione predefinita utilizzata dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .

```cpp
void SetDefExt(const CString& strDefExt);
```

### <a name="parameters"></a>Parametri

*strDefExt*<br/>
in Stringa di testo che contiene l'estensione del nome file predefinita.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per specificare un'estensione del nome di file predefinita nella finestra di dialogo **Apri file** , che viene visualizzata quando l'utente seleziona un'applicazione da associare allo strumento utente. Il valore predefinito è "exe".

## <a name="cusertoolsmanagersetfilter"></a><a name="setfilter"></a> CUserToolsManager:: sefilter

Specifica il filtro file usato dalla finestra di dialogo **Apri file** ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) nel campo **comando** della scheda **strumenti** della finestra di dialogo **Personalizza** .

```cpp
void SetFilter(const CString& strFilter);
```

### <a name="parameters"></a>Parametri

*strFilter*<br/>
in Specifica il filtro.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Classe CUserTool](../../mfc/reference/cusertool-class.md)
