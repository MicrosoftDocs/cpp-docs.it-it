---
title: Classe CUserToolsManager | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
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
dev_langs: C++
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
caps.latest.revision: "26"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 520e6ae9aebdc35c07acac3f99c16be393f79e74
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[CUserToolsManager::CreateNewTool](#createnewtool)|Crea un nuovo strumento di utente.|  
|[CUserToolsManager::FindTool](#findtool)|Restituisce un puntatore per il `CMFCUserTool` oggetto associato a un ID di comando specificato.|  
|[CUserToolsManager::GetArgumentsMenuID](#getargumentsmenuid)|Restituisce l'ID di risorsa che è associato il **argomenti** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetDefExt](#getdefext)|Restituisce l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetFilter](#getfilter)|Restituisce il filtro di file che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetInitialDirMenuID](#getinitialdirmenuid)|Restituisce l'ID di risorsa che è associato il **directory iniziale** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetMaxTools](#getmaxtools)|Restituisce il numero massimo di strumenti di utente che possono essere allocati nell'applicazione.|  
|[CUserToolsManager::GetToolsEntryCmd](#gettoolsentrycmd)|Restituisce l'ID di comando del segnaposto di elemento del menu per gli strumenti utente.|  
|[CUserToolsManager::GetUserTools](#getusertools)|Restituisce un riferimento all'elenco di strumenti utente.|  
|[CUserToolsManager::InvokeTool](#invoketool)|Esegue un'applicazione associata con lo strumento di utente che ha un ID di comando specificato.|  
|[CUserToolsManager::IsUserToolCmd](#isusertoolcmd)|Determina se un ID di comando è associato a uno strumento utente.|  
|[CUserToolsManager::LoadState](#loadstate)|Carica le informazioni sugli strumenti utente dal Registro di sistema Windows.|  
|[CUserToolsManager::MoveToolDown](#movetooldown)|Sposta lo strumento dell'utente specificato in basso nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::MoveToolUp](#movetoolup)|Sposta lo strumento dell'utente specificata verso l'alto nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::RemoveTool](#removetool)|Rimuove lo strumento dell'utente specificato dall'applicazione.|  
|[CUserToolsManager::SaveState](#savestate)|Archivia informazioni sugli strumenti utente nel Registro di sistema Windows.|  
|[CUserToolsManager::SetDefExt](#setdefext)|Specifica l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo di **strumenti** scheda del **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::SetFilter](#setfilter)|Specifica il file di filtro che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Per incorporare strumenti utente nell'applicazione, è necessario:  
  
 1. Riservare una voce di menu e un ID di comando associato per una voce di menu strumento di utente.  
  
 2. Riservare un ID di comando in sequenza per ogni strumento che è possibile definire un utente nell'applicazione.  
  
 3. Chiamare il [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) (metodo) e specificare i parametri seguenti: ID di comando, primo ID di comando dello strumento di utente e ID di comando. ultimo utente dello strumento di menu  
  
 Deve essere presente solo una globale `CUserToolsManager` oggetto per ogni applicazione.  
  
 Per un esempio di strumenti di utente, vedere il progetto di esempio VisualStudioDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CUserToolsManager` oggetto e come creare nuovi strumenti utente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CUserToolsManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertoolsmanager.h  
  
##  <a name="createnewtool"></a>CUserToolsManager::CreateNewTool  
 Crea un nuovo strumento di utente.  
  
```  
CUserTool* CreateNewTool();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore allo strumento utente appena creato, o `NULL` se il numero di strumenti utente ha superato il massimo. Il tipo restituito è identico al tipo passato a `CWinAppEx::EnableUserTools` come il `pToolRTC` parametro.  
  
### <a name="remarks"></a>Note  
 Questo metodo individua il primo ID di comando di menu disponibili nell'intervallo fornito nella chiamata a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e assegna lo strumento per questo ID.  
  
 Il metodo ha esito negativo se il numero di strumenti ha raggiunto il valore massimo. Questo errore si verifica quando tutti gli ID di comando all'interno dell'intervallo sono assegnati a strumenti utente. È possibile recuperare il numero massimo di strumenti chiamando [CUserToolsManager::GetMaxTools](#getmaxtools). È possibile ottenere l'accesso all'elenco di strumenti chiamando il [CUserToolsManager::GetUserTools](#getusertools) metodo.  
  
##  <a name="cusertoolsmanager"></a>CUserToolsManager::CUserToolsManager  
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
 [in] `uiCmdToolsDummy`  
 Intero senza segno che il framework utilizza come segnaposto per l'ID di comando del menu Strumenti utente.  
  
 [in] `uiCmdFirst`  
 L'ID di comando per il primo comando dello strumento di utente.  
  
 [in] `uiCmdLast`  
 L'ID di comando per l'ultimo comando dello strumento di utente.  
  
 [in] `pToolRTC`  
 La classe che [CUserToolsManager::CreateNewTool](#createnewtool) crea. Tramite questa classe, è possibile utilizzare un tipo derivato di [CUserTool classe](../../mfc/reference/cusertool-class.md) anziché l'implementazione predefinita.  
  
 [in] `uArgMenuID`  
 L'ID di risorsa di menu del menu di scelta rapida di argomenti.  
  
 [in] `uInitDirMenuID`  
 L'ID di risorsa di menu del menu di scelta rapida directory iniziale.  
  
### <a name="remarks"></a>Note  
 Non chiamare questo costruttore. Chiamare invece [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) a strumenti utente attiva e chiamata [CWinAppEx::GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) per ottenere un puntatore per il `CUserToolsManager`. Per ulteriori informazioni, vedere [strumenti definiti dall'utente](../../mfc/user-defined-tools.md).  
  
##  <a name="findtool"></a>CUserToolsManager::FindTool  
 Restituisce un puntatore per il [CUserTool classe](../../mfc/reference/cusertool-class.md) oggetto associato a un ID di comando specificato.  
  
```  
CUserTool* FindTool(UINT uiCmdId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 Un identificatore di comando di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CUserTool classe](../../mfc/reference/cusertool-class.md) o `CUserTool`-se l'oggetto derivato esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Quando `FindTool` viene completata correttamente, il tipo restituito è identico al tipo del `pToolRTC` parametro [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="getargumentsmenuid"></a>CUserToolsManager::GetArgumentsMenuID  
 Restituisce l'ID di risorsa che è associato il **argomenti** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
UINT GetArgumentsMenuID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'identificatore di una risorsa di menu.  
  
### <a name="remarks"></a>Note  
 Il `uArgMenuID` parametro di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) specifica l'ID della risorsa.  
  
##  <a name="getdefext"></a>CUserToolsManager::GetDefExt  
 Restituisce l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
const CString& GetDefExt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento di `CString` oggetto che contiene l'estensione.  
  
##  <a name="getfilter"></a>CUserToolsManager::GetFilter  
 Restituisce il filtro di file che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
const CString& GetFilter() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento di `CString` oggetto che contiene il filtro.  
  
##  <a name="getinitialdirmenuid"></a>CUserToolsManager::GetInitialDirMenuID  
 Restituisce l'ID di risorsa che è associato il **directory iniziale** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
UINT GetInitialDirMenuID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di risorsa di menu.  
  
### <a name="remarks"></a>Note  
 L'ID restituito viene specificato nella `uInitDirMenuID` parametro di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="getmaxtools"></a>CUserToolsManager::GetMaxTools  
 Restituisce il numero massimo di strumenti di utente che possono essere allocati nell'applicazione.  
  
```  
int GetMaxTools() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di strumenti di utente che possono essere allocati.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero massimo di strumenti che possono essere allocati nell'applicazione. Questo numero è il numero di ID compreso nell'intervallo tra il `uiCmdFirst` tramite il `uiCmdLast` parametri da passare a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="gettoolsentrycmd"></a>CUserToolsManager::GetToolsEntryCmd  
 Restituisce l'ID di comando del segnaposto di elemento del menu per gli strumenti utente.  
  
```  
UINT GetToolsEntryCmd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando del segnaposto.  
  
### <a name="remarks"></a>Note  
 Per abilitare gli strumenti di utente, si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). Il `uiCmdToolsDummy` parametro specifica l'ID di comando del comando voce strumenti. Questo metodo restituisce l'ID di comando. voce di strumenti Ogni volta che tale ID viene utilizzato in un menu, viene sostituito dall'elenco di strumenti utente quando viene visualizzato il menu.  
  
##  <a name="getusertools"></a>CUserToolsManager::GetUserTools  
 Restituisce un riferimento all'elenco di strumenti utente.  
  
```  
const CObList& GetUserTools() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento const a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che contiene un elenco di strumenti di utente.  
  
### <a name="remarks"></a>Note  
 Chiamata di questo metodo per recuperare un elenco degli strumenti di [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) viene conservato. Ogni strumento utente è rappresentato da un oggetto di tipo [CUserTool classe](../../mfc/reference/cusertool-class.md) o un tipo derivato da `CUserTool`. Il tipo è specificato per il `pToolRTC` parametro quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per consentire agli strumenti utente.  
  
##  <a name="invoketool"></a>CUserToolsManager::InvokeTool  
 Esegue un'applicazione associata con lo strumento di utente che ha un ID di comando specificato.  
  
```  
BOOL InvokeTool(UINT uiCmdId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 L'ID di comando di menu associata con lo strumento dell'utente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando associato allo strumento utente è stato eseguito correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamata di questo metodo per eseguire un'applicazione associata con l'utente dello strumento che ha l'ID di comando specificato dal `uiCmdId`.  
  
##  <a name="isusertoolcmd"></a>CUserToolsManager::IsUserToolCmd  
 Determina se un ID di comando è associato a uno strumento utente.  
  
```  
BOOL IsUserToolCmd(UINT uiCmdId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 ID di comando della voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un ID di comando specificato è associato a uno strumento utente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo controlla se l'ID di comando specificato è compreso nell'intervallo di ID di comando. Nell'intervallo specificato quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per consentire agli strumenti utente.  
  
##  <a name="loadstate"></a>CUserToolsManager::LoadState  
 Carica le informazioni sugli strumenti utente dal Registro di sistema Windows.  
  
```  
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Il percorso della chiave del Registro di sistema di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato è stato caricato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo carica lo stato del `CUserToolsManager` oggetto dal Registro di sistema Windows.  
  
 In genere, non chiamare questo metodo direttamente. [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate) chiama come parte del processo di inizializzazione dell'area di lavoro.  
  
##  <a name="movetooldown"></a>CUserToolsManager::MoveToolDown  
 Sposta lo strumento dell'utente specificato in basso nell'elenco degli strumenti dell'utente.  
  
```  
BOOL MoveToolDown(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTool`  
 Specifica lo strumento dell'utente da spostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo strumento utente è stato spostato verso il basso; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo ha esito negativo se lo strumento che il `pTool` specifica non è presente nell'elenco interno o se lo strumento sia l'ultimo nell'elenco.  
  
##  <a name="movetoolup"></a>CUserToolsManager::MoveToolUp  
 Sposta lo strumento dell'utente specificata verso l'alto nell'elenco degli strumenti dell'utente.  
  
```  
BOOL MoveToolUp(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTool`  
 Specifica lo strumento dell'utente da spostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo strumento utente è stato spostato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo ha esito negativo se lo strumento che il `pTool` parametro specifica non è presente nell'elenco interno o se lo strumento è il primo elemento strumento nell'elenco.  
  
##  <a name="removetool"></a>CUserToolsManager::RemoveTool  
 Rimuove lo strumento dell'utente specificato dall'applicazione.  
  
```  
BOOL RemoveTool(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pTool`  
 Puntatore a uno strumento utente da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo strumento è stato rimosso correttamente. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se lo strumento è stato rimosso correttamente, questo metodo elimina `pTool`.  
  
##  <a name="savestate"></a>CUserToolsManager::SaveState  
 Archivia informazioni sugli strumenti utente nel Registro di sistema Windows.  
  
```  
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Un percorso per la chiave del Registro di sistema di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato è stato salvato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo archivia lo stato corrente del `CUserToolsManager` oggetto del Registro di sistema.  
  
 In genere, non è necessario chiamare questo metodo direttamente, [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate) chiama automaticamente come parte del processo di serializzazione dell'area di lavoro dell'applicazione.  
  
##  <a name="setdefext"></a>CUserToolsManager::SetDefExt  
 Specifica l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo di **strumenti** scheda del **Personalizza** la finestra di dialogo.  
  
```  
void SetDefExt(const CString& strDefExt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strDefExt`  
 Una stringa di testo che contiene l'estensione di file predefinita.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare un'estensione di file predefinito nel **Apri File** nella finestra di dialogo viene visualizzata quando l'utente seleziona un'applicazione per associare lo strumento dell'utente. Il valore predefinito è "exe".  
  
##  <a name="setfilter"></a>CUserToolsManager::SetFilter  
 Specifica il file di filtro che il **Apri File** la finestra di dialogo ( [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** nel campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
void SetFilter(const CString& strFilter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strFilter`  
 Specifica il filtro.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)   
 [Classe CUserTool](../../mfc/reference/cusertool-class.md)
