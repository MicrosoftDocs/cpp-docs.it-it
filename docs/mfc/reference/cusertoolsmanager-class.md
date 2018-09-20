---
title: Classe CUserToolsManager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2da34eacb7524168f16d05248eee97422a1fb770
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380763"
---
# <a name="cusertoolsmanager-class"></a>Classe CUserToolsManager

Gestisce la raccolta di [classe CUserTool](../../mfc/reference/cusertool-class.md) oggetti in un'applicazione. Uno strumento utente è una voce di menu che esegue un'applicazione esterna. L'oggetto `CUserToolsManager` consente all'utente o allo sviluppatore di aggiungere nuovi strumenti utente all'applicazione. Supporta l'esecuzione di comandi associati a strumenti utente e inoltre salva le informazioni sugli strumenti utente nel Registro di sistema di Windows.

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
|[CUserToolsManager::CreateNewTool](#createnewtool)|Crea un nuovo strumento di utente.|
|[CUserToolsManager::FindTool](#findtool)|Restituisce un puntatore per il `CMFCUserTool` oggetto associato a un ID di comando.|
|[CUserToolsManager::GetArgumentsMenuID](#getargumentsmenuid)|Restituisce l'ID di risorsa che è associato il **argomenti** menu nel **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.|
|[CUserToolsManager::GetDefExt](#getdefext)|Restituisce l'estensione predefinita che il **Apri File** nella finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.|
|[CUserToolsManager::GetFilter](#getfilter)|Restituisce il filtro del file che il **Apri File** nella finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.|
|[CUserToolsManager::GetInitialDirMenuID](#getinitialdirmenuid)|Restituisce l'ID di risorsa che è associato il **directory iniziale** menu nel **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.|
|[CUserToolsManager::GetMaxTools](#getmaxtools)|Restituisce il numero massimo di strumenti di utenti che possono essere allocati nell'applicazione.|
|[CUserToolsManager::GetToolsEntryCmd](#gettoolsentrycmd)|Restituisce l'ID del segnaposto dell'elemento menu per gli strumenti di utente.|
|[CUserToolsManager::GetUserTools](#getusertools)|Restituisce un riferimento all'elenco di strumenti dell'utente.|
|[CUserToolsManager::InvokeTool](#invoketool)|Esegue un'applicazione associata allo strumento utente che ha un ID di comando specificato.|
|[CUserToolsManager::IsUserToolCmd](#isusertoolcmd)|Determina se un ID di comando è associato a uno strumento dell'utente.|
|[CUserToolsManager::LoadState](#loadstate)|Carica le informazioni sugli strumenti utente dal Registro di sistema Windows.|
|[CUserToolsManager::MoveToolDown](#movetooldown)|Sposta lo strumento di utente specificato verso il basso nell'elenco degli strumenti dell'utente.|
|[CUserToolsManager::MoveToolUp](#movetoolup)|Sposta lo strumento di utente specificato verso l'alto nell'elenco degli strumenti dell'utente.|
|[CUserToolsManager::RemoveTool](#removetool)|Rimuove lo strumento di utente specificato dall'applicazione.|
|[CUserToolsManager::SaveState](#savestate)|Archivia le informazioni sugli strumenti utente nel Registro di sistema Windows.|
|[CUserToolsManager::SetDefExt](#setdefext)|Specifica l'estensione predefinita che il **Apri File** finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) viene utilizzato nel **comando** campo il **strumenti** scheda del **Personalizza** nella finestra di dialogo.|
|[CUserToolsManager::SetFilter](#setfilter)|Specifica il file di filtro che il **Apri File** nella finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.|

## <a name="remarks"></a>Note

Per incorporare gli strumenti di utente nell'applicazione, è necessario:

1. Riserva una voce di menu e un ID di comando associato per una voce di menu strumento di utente.

2. Riservare un ID di comando in sequenza per ogni strumento che un utente può definire all'interno dell'applicazione.

3. Chiamare il [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) metodo e fornire i seguenti parametri: menu ID di comando, primo ID di comando degli strumenti utente e ID di comando. ultimo utente dello strumento

Deve essere presente solo un globale `CUserToolsManager` oggetto per ogni applicazione.

Per un esempio di strumenti dell'utente, vedere il progetto di esempio VisualStudioDemo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CUserToolsManager` oggetto e come creare nuovi strumenti utente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CUserToolsManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxusertoolsmanager.h

##  <a name="createnewtool"></a>  CUserToolsManager::CreateNewTool

Crea un nuovo strumento di utente.

```
CUserTool* CreateNewTool();
```

### <a name="return-value"></a>Valore restituito

Puntatore allo strumento utente appena creato, o NULL se il numero di strumenti utente ha superato il massimo. Il tipo restituito è identico al tipo passato a `CWinAppEx::EnableUserTools` come il *pToolRTC* parametro.

### <a name="remarks"></a>Note

Questo metodo individua il primo ID di comando di menu disponibili nell'intervallo fornito nella chiamata a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e assegna lo strumento per questo ID.

Il metodo ha esito negativo se il numero di strumenti ha raggiunto il valore massimo. Ciò si verifica quando tutti gli ID di comando all'interno dell'intervallo vengono assegnati a strumenti utente. È possibile recuperare il numero massimo di strumenti chiamando [CUserToolsManager::GetMaxTools](#getmaxtools). È possibile ottenere l'accesso all'elenco di strumenti chiamando il [CUserToolsManager::GetUserTools](#getusertools) (metodo).

##  <a name="cusertoolsmanager"></a>  CUserToolsManager::CUserToolsManager

Costruisce un oggetto `CUserToolsManager`. Ogni applicazione deve avere almeno un utente strumenti manager.

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
[in] Intero senza segno che il framework utilizza come segnaposto per l'ID di comando del menu Strumenti utente.

*uiCmdFirst*<br/>
[in] ID comando per il primo comando dello strumento di utente.

*uiCmdLast*<br/>
[in] ID comando per l'ultimo comando dello strumento di utente.

*pToolRTC*<br/>
[in] La classe che [CUserToolsManager::CreateNewTool](#createnewtool) crea. Utilizzando questa classe, è possibile usare un tipo derivato del [classe CUserTool](../../mfc/reference/cusertool-class.md) anziché l'implementazione predefinita.

*uArgMenuID*<br/>
[in] L'ID di risorsa di menu del menu di scelta rapida di argomenti.

*uInitDirMenuID*<br/>
[in] L'ID di risorsa di menu del menu di scelta rapida della directory iniziale.

### <a name="remarks"></a>Note

Non chiamare questo costruttore. Chiamare invece [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare utente tools e chiamare [CWinAppEx::GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) per ottenere un puntatore al `CUserToolsManager`. Per altre informazioni, vedere [strumenti definiti dall'utente](../../mfc/user-defined-tools.md).

##  <a name="findtool"></a>  CUserToolsManager::FindTool

Restituisce un puntatore per il [classe CUserTool](../../mfc/reference/cusertool-class.md) oggetto associato a un ID di comando.

```
CUserTool* FindTool(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
[in] Un identificatore di comando di menu.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [classe CUserTool](../../mfc/reference/cusertool-class.md) o `CUserTool`-oggetto derivato se esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

Quando `FindTool` viene completata correttamente, il tipo restituito è identico al tipo del *pToolRTC* parametro per [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

##  <a name="getargumentsmenuid"></a>  CUserToolsManager::GetArgumentsMenuID

Restituisce l'ID di risorsa che è associato il **argomenti** menu nel **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.

```
UINT GetArgumentsMenuID() const;
```

### <a name="return-value"></a>Valore restituito

L'identificatore di una risorsa di menu.

### <a name="remarks"></a>Note

Il *uArgMenuID* del parametro [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) specifica l'ID della risorsa.

##  <a name="getdefext"></a>  CUserToolsManager::GetDefExt

Restituisce l'estensione predefinita che il **Apri File** nella finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.

```
const CString& GetDefExt() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento al `CString` oggetto che contiene l'estensione.

##  <a name="getfilter"></a>  CUserToolsManager::GetFilter

Restituisce il filtro del file che il **Apri File** nella finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.

```
const CString& GetFilter() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento al `CString` oggetto che contiene il filtro.

##  <a name="getinitialdirmenuid"></a>  CUserToolsManager::GetInitialDirMenuID

Restituisce l'ID di risorsa che è associato il **directory iniziale** menu nel **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.

```
UINT GetInitialDirMenuID() const;
```

### <a name="return-value"></a>Valore restituito

Un identificatore di risorsa di menu.

### <a name="remarks"></a>Note

Viene specificato l'ID restituito nel *uInitDirMenuID* del parametro [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

##  <a name="getmaxtools"></a>  CUserToolsManager::GetMaxTools

Restituisce il numero massimo di strumenti di utenti che possono essere allocati nell'applicazione.

```
int GetMaxTools() const;
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di strumenti di utenti che possono essere allocati.

### <a name="remarks"></a>Note

Chiamare questo metodo per recuperare il numero massimo di strumenti che possono essere allocati nell'applicazione. Questo numero è il numero di ID compreso nell'intervallo tra i *uiCmdFirst* tramite il *uiCmdLast* parametri da passare a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).

##  <a name="gettoolsentrycmd"></a>  CUserToolsManager::GetToolsEntryCmd

Restituisce l'ID del segnaposto dell'elemento menu per gli strumenti di utente.

```
UINT GetToolsEntryCmd() const;
```

### <a name="return-value"></a>Valore restituito

L'ID del segnaposto del comando.

### <a name="remarks"></a>Note

Per abilitare strumenti utente, si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). Il *uiCmdToolsDummy* parametro specifica l'ID del comando voce degli strumenti. Questo metodo restituisce l'ID del comando. voce degli strumenti Ogni volta che tale ID viene usato in un menu, viene sostituito dall'elenco di strumenti utente quando viene visualizzato il menu di scelta.

##  <a name="getusertools"></a>  CUserToolsManager::GetUserTools

Restituisce un riferimento all'elenco di strumenti dell'utente.

```
const CObList& GetUserTools() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento const a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che contiene un elenco di strumenti dell'utente.

### <a name="remarks"></a>Note

Chiamata di questo metodo per recuperare un elenco degli strumenti che il [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) ma viene conservato. Ogni strumento è rappresentato da un oggetto di tipo [classe CUserTool](../../mfc/reference/cusertool-class.md) o un tipo derivato da `CUserTool`. Il tipo è specificato per il *pToolRTC* parametro quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare strumenti utente.

##  <a name="invoketool"></a>  CUserToolsManager::InvokeTool

Esegue un'applicazione associata allo strumento utente che ha un ID di comando specificato.

```
BOOL InvokeTool(UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
[in] L'ID di comando di menu associata allo strumento utenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando associato allo strumento utenti è stato eseguito correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Chiamata di questo metodo per eseguire un'applicazione associata all'utente dello strumento che ha l'ID di comando specificato da *uiCmdId*.

##  <a name="isusertoolcmd"></a>  CUserToolsManager::IsUserToolCmd

Determina se un ID di comando è associato a uno strumento dell'utente.

```
BOOL IsUserToolCmd(UINT uiCmdId) const;
```

### <a name="parameters"></a>Parametri

*uiCmdId*<br/>
[in] ID di comando della voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se un ID di comando specificato è associato a uno strumento dell'utente; in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo controlla se l'ID di comando specificato è compreso nell'intervallo di ID di comando. Viene specificato l'intervallo quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per abilitare strumenti utente.

##  <a name="loadstate"></a>  CUserToolsManager::LoadState

Carica le informazioni sugli strumenti utente dal Registro di sistema Windows.

```
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Il percorso della chiave del Registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo carica lo stato del `CUserToolsManager` oggetto dal Registro di sistema Windows.

In genere, non chiamare direttamente questo metodo. [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate) chiama come parte del processo di inizializzazione dell'area di lavoro.

##  <a name="movetooldown"></a>  CUserToolsManager::MoveToolDown

Sposta lo strumento di utente specificato verso il basso nell'elenco degli strumenti dell'utente.

```
BOOL MoveToolDown(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
[in] Specifica lo strumento utenti da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato correttamente; verso il basso in caso contrario 0.

### <a name="remarks"></a>Note

Il metodo ha esito negativo se lo strumento che il *pTool* specifica non è presente nell'elenco interno o se lo strumento sia l'ultimo nell'elenco.

##  <a name="movetoolup"></a>  CUserToolsManager::MoveToolUp

Sposta lo strumento di utente specificato verso l'alto nell'elenco degli strumenti dell'utente.

```
BOOL MoveToolUp(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
[in] Specifica lo strumento utenti da spostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo strumento utente è stato spostato correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

Il metodo ha esito negativo se lo strumento che il *pTool* parametro specifica non è presente nell'elenco interno o se lo strumento è il primo elemento nell'elenco degli strumenti.

##  <a name="removetool"></a>  CUserToolsManager::RemoveTool

Rimuove lo strumento di utente specificato dall'applicazione.

```
BOOL RemoveTool(CUserTool* pTool);
```

### <a name="parameters"></a>Parametri

*pTool*<br/>
[in, out] Puntatore a uno strumento dell'utente da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se lo strumento viene rimosso correttamente. In caso contrario, FALSE.

### <a name="remarks"></a>Note

Se lo strumento viene rimosso correttamente, questo metodo consente di eliminare *pTool*.

##  <a name="savestate"></a>  CUserToolsManager::SaveState

Archivia le informazioni sugli strumenti utente nel Registro di sistema Windows.

```
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Un percorso per la chiave del Registro di sistema di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato salvato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Il metodo archivia lo stato corrente del `CUserToolsManager` oggetto nel Registro di sistema Windows.

In genere, non è necessario chiamare questo metodo direttamente [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate) lo chiama automaticamente come parte del processo di serializzazione dell'area di lavoro dell'applicazione.

##  <a name="setdefext"></a>  CUserToolsManager::SetDefExt

Specifica l'estensione predefinita che il **Apri File** finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) viene utilizzato nel **comando** campo il **strumenti** scheda del **Personalizza** nella finestra di dialogo.

```
void SetDefExt(const CString& strDefExt);
```

### <a name="parameters"></a>Parametri

*strDefExt*<br/>
[in] Una stringa di testo che contiene l'estensione di file predefinita.

### <a name="remarks"></a>Note

Chiamare questo metodo per specificare un'estensione nome file predefinito nel **Apri File** nella finestra di dialogo viene visualizzata quando l'utente seleziona un'applicazione da associare lo strumento di utente. Il valore predefinito è "exe".

##  <a name="setfilter"></a>  CUserToolsManager::SetFilter

Specifica il file di filtro che il **Apri File** nella finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) usa nel **comando** campo il **strumenti** scheda della finestra di **Personalizza** nella finestra di dialogo.

```
void SetFilter(const CString& strFilter);
```

### <a name="parameters"></a>Parametri

*strFilter*<br/>
[in] Specifica il filtro.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Classe CUserTool](../../mfc/reference/cusertool-class.md)
