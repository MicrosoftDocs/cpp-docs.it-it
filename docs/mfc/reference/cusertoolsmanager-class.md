---
title: Classe CUserToolsManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUserToolsManager
dev_langs:
- C++
helpviewer_keywords:
- CUserToolsManager class
ms.assetid: bdfa37ae-efca-4616-abb5-9d0dcd2d335b
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0b82adf0f9eba5ee334ada2c169546f27894c1dd
ms.lasthandoff: 02/24/2017

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
|[CUserToolsManager::GetDefExt](#getdefext)|Restituisce l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetFilter](#getfilter)|Restituisce il filtro di file che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetInitialDirMenuID](#getinitialdirmenuid)|Restituisce l'ID di risorsa che è associato il **directory iniziale** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::GetMaxTools](#getmaxtools)|Restituisce il numero massimo di strumenti che possono essere allocati nell'applicazione.|  
|[CUserToolsManager::GetToolsEntryCmd](#gettoolsentrycmd)|Restituisce l'ID di comando del segnaposto di elemento del menu per gli strumenti utente.|  
|[CUserToolsManager::GetUserTools](#getusertools)|Restituisce un riferimento all'elenco di strumenti utente.|  
|[CUserToolsManager::InvokeTool](#invoketool)|Esegue un'applicazione associata allo strumento di utente che ha un ID di comando specificato.|  
|[CUserToolsManager::IsUserToolCmd](#isusertoolcmd)|Determina se un ID di comando è associato a uno strumento dell'utente.|  
|[CUserToolsManager::LoadState](#loadstate)|Carica le informazioni sugli strumenti utente dal Registro di sistema.|  
|[CUserToolsManager::MoveToolDown](#movetooldown)|Sposta lo strumento di utente specificato in basso nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::MoveToolUp](#movetoolup)|Sposta lo strumento di utente specificato verso l'alto nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::RemoveTool](#removetool)|Rimuove lo strumento di utente specificato dall'applicazione.|  
|[CUserToolsManager::SaveState](#savestate)|Archivia le informazioni sugli strumenti utente nel Registro di sistema Windows.|  
|[CUserToolsManager::SetDefExt](#setdefext)|Specifica l'estensione predefinita che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
|[CUserToolsManager::SetFilter](#setfilter)|Specifica il file di filtro che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Per incorporare gli strumenti utente nell'applicazione, è necessario:  
  
 1. Riservare un ID di comando associato per una voce di menu strumento di utente e una voce di menu.  
  
 2. Riservare un ID di comando in sequenza per ogni strumento dell'utente che un utente può definire nell'applicazione.  
  
 3. Chiamare il [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) metodo e specificare i parametri seguenti: menu ID di comando, primo ID di comando dello strumento di utente e ID di comando. ultimo utente dello strumento  
  
 Deve essere presente solo un globale `CUserToolsManager` oggetto per ogni applicazione.  
  
 Per un esempio di strumenti utente, vedere il progetto di esempio VisualStudioDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un riferimento a un `CUserToolsManager` oggetto e come creare nuovi strumenti utente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#38;](../../mfc/codesnippet/cpp/cusertoolsmanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CUserToolsManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertoolsmanager.h  
  
##  <a name="a-namecreatenewtoola--cusertoolsmanagercreatenewtool"></a><a name="createnewtool"></a>CUserToolsManager::CreateNewTool  
 Crea un nuovo strumento di utente.  
  
```  
CUserTool* CreateNewTool();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore allo strumento utente appena creato, o `NULL` se il numero di strumenti utente ha superato il massimo. Il tipo restituito è lo stesso tipo che viene passato a `CWinAppEx::EnableUserTools` come il `pToolRTC` parametro.  
  
### <a name="remarks"></a>Note  
 Questo metodo individua il primo ID di comando di menu disponibili nell'intervallo che viene fornito nella chiamata a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) e assegna l'utilità utente questo ID.  
  
 Il metodo ha esito negativo se il numero di strumenti ha raggiunto il limite massimo. Ciò si verifica quando tutti gli ID di comando all'interno dell'intervallo vengono assegnati a strumenti utente. È possibile recuperare il numero massimo di strumenti chiamando [CUserToolsManager::GetMaxTools](#getmaxtools). È possibile ottenere l'accesso all'elenco degli strumenti mediante la chiamata di [CUserToolsManager::GetUserTools](#getusertools) metodo.  
  
##  <a name="a-namecusertoolsmanagera--cusertoolsmanagercusertoolsmanager"></a><a name="cusertoolsmanager"></a>CUserToolsManager::CUserToolsManager  
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
 L'ID di comando per il primo comando strumento utente.  
  
 [in] `uiCmdLast`  
 L'ID di comando per l'ultimo comando dello strumento di utente.  
  
 [in] `pToolRTC`  
 La classe che [CUserToolsManager::CreateNewTool](#createnewtool) crea. Utilizzando questa classe, è possibile utilizzare un tipo derivato di [CUserTool classe](../../mfc/reference/cusertool-class.md) anziché l'implementazione predefinita.  
  
 [in] `uArgMenuID`  
 L'ID di risorsa di menu del menu di scelta rapida di argomenti.  
  
 [in] `uInitDirMenuID`  
 L'ID di risorsa di menu del menu di scelta rapida directory iniziale.  
  
### <a name="remarks"></a>Note  
 Non chiamare questo costruttore. Si consiglia di chiamare [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) a strumenti utente attiva e chiamata [CWinAppEx::GetUserToolsManager](../../mfc/reference/cwinappex-class.md#getusertoolsmanager) per ottenere un puntatore al `CUserToolsManager`. Per ulteriori informazioni, vedere [strumenti definiti dall'utente](../../mfc/user-defined-tools.md).  
  
##  <a name="a-namefindtoola--cusertoolsmanagerfindtool"></a><a name="findtool"></a>CUserToolsManager::FindTool  
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
 Quando `FindTool` è esito positivo, il tipo restituito è lo stesso tipo di `pToolRTC` parametro [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="a-namegetargumentsmenuida--cusertoolsmanagergetargumentsmenuid"></a><a name="getargumentsmenuid"></a>CUserToolsManager::GetArgumentsMenuID  
 Restituisce l'ID di risorsa che è associato il **argomenti** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
UINT GetArgumentsMenuID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'identificatore di una risorsa di menu.  
  
### <a name="remarks"></a>Note  
 Il `uArgMenuID` parametro di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) specifica l'ID della risorsa.  
  
##  <a name="a-namegetdefexta--cusertoolsmanagergetdefext"></a><a name="getdefext"></a>CUserToolsManager::GetDefExt  
 Restituisce l'estensione predefinita che il **Apri File** la finestra di dialogo ( [CFileDialog](../../mfc/reference/cfiledialog-class.md#cfiledialog)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
const CString& GetDefExt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento di `CString` oggetto che contiene l'estensione.  
  
##  <a name="a-namegetfiltera--cusertoolsmanagergetfilter"></a><a name="getfilter"></a>CUserToolsManager::GetFilter  
 Restituisce il filtro di file che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
const CString& GetFilter() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento di `CString` oggetto che contiene il filtro.  
  
##  <a name="a-namegetinitialdirmenuida--cusertoolsmanagergetinitialdirmenuid"></a><a name="getinitialdirmenuid"></a>CUserToolsManager::GetInitialDirMenuID  
 Restituisce l'ID di risorsa che è associato il **directory iniziale** menu il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
UINT GetInitialDirMenuID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di risorsa di menu.  
  
### <a name="remarks"></a>Note  
 Cui è specificato l'ID restituito il `uInitDirMenuID` parametro di [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="a-namegetmaxtoolsa--cusertoolsmanagergetmaxtools"></a><a name="getmaxtools"></a>CUserToolsManager::GetMaxTools  
 Restituisce il numero massimo di strumenti che possono essere allocati nell'applicazione.  
  
```  
int GetMaxTools() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di strumenti che possono essere allocati.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero massimo di strumenti che possono essere allocati nell'applicazione. Questo numero è il numero di ID compreso nell'intervallo tra il `uiCmdFirst` tramite il `uiCmdLast` parametri da passare a [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools).  
  
##  <a name="a-namegettoolsentrycmda--cusertoolsmanagergettoolsentrycmd"></a><a name="gettoolsentrycmd"></a>CUserToolsManager::GetToolsEntryCmd  
 Restituisce l'ID di comando del segnaposto di elemento del menu per gli strumenti utente.  
  
```  
UINT GetToolsEntryCmd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando del segnaposto.  
  
### <a name="remarks"></a>Note  
 Per abilitare gli strumenti di utente, si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools). Il `uiCmdToolsDummy` parametro specifica l'ID di comando del comando voce degli strumenti. Questo metodo restituisce l'ID di comando voce di strumenti. Se tale ID viene utilizzato in un menu, viene sostituito dall'elenco di strumenti utente quando viene visualizzato il menu.  
  
##  <a name="a-namegetusertoolsa--cusertoolsmanagergetusertools"></a><a name="getusertools"></a>CUserToolsManager::GetUserTools  
 Restituisce un riferimento all'elenco di strumenti utente.  
  
```  
const CObList& GetUserTools() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento const a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che contiene un elenco di strumenti utente.  
  
### <a name="remarks"></a>Note  
 Chiamata di questo metodo per recuperare un elenco degli strumenti di [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md) viene conservato. Ogni strumento è rappresentato da un oggetto di tipo [CUserTool classe](../../mfc/reference/cusertool-class.md) o un tipo derivato da `CUserTool`. Il tipo è specificato per il `pToolRTC` parametro quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per consentire agli strumenti utente.  
  
##  <a name="a-nameinvoketoola--cusertoolsmanagerinvoketool"></a><a name="invoketool"></a>CUserToolsManager::InvokeTool  
 Esegue un'applicazione associata allo strumento di utente che ha un ID di comando specificato.  
  
```  
BOOL InvokeTool(UINT uiCmdId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 ID di comando di menu associata allo strumento di utente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando associato allo strumento utente è stato eseguito correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamata di questo metodo per eseguire un'applicazione associata all'utente di strumenti che presenta l'ID di comando specificata da `uiCmdId`.  
  
##  <a name="a-nameisusertoolcmda--cusertoolsmanagerisusertoolcmd"></a><a name="isusertoolcmd"></a>CUserToolsManager::IsUserToolCmd  
 Determina se un ID di comando è associato a uno strumento dell'utente.  
  
```  
BOOL IsUserToolCmd(UINT uiCmdId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 Un ID di comando della voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un ID di comando specificata è associato a uno strumento dell'utente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo controlla se l'ID di comando specificato è compreso nell'intervallo di ID di comando. Nell'intervallo specificato quando si chiama [CWinAppEx::EnableUserTools](../../mfc/reference/cwinappex-class.md#enableusertools) per consentire agli strumenti utente.  
  
##  <a name="a-nameloadstatea--cusertoolsmanagerloadstate"></a><a name="loadstate"></a>CUserToolsManager::LoadState  
 Carica le informazioni sugli strumenti utente dal Registro di sistema.  
  
```  
BOOL LoadState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Il percorso della chiave del Registro di sistema di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato è stato caricato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo carica lo stato di `CUserToolsManager` oggetto dal Registro di sistema.  
  
 In genere, non chiamare direttamente questo metodo. [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#loadstate) chiama come parte del processo di inizializzazione dell'area di lavoro.  
  
##  <a name="a-namemovetooldowna--cusertoolsmanagermovetooldown"></a><a name="movetooldown"></a>CUserToolsManager::MoveToolDown  
 Sposta lo strumento di utente specificato in basso nell'elenco degli strumenti dell'utente.  
  
```  
BOOL MoveToolDown(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTool`  
 Specifica lo strumento di utente di spostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo strumento utente è stato spostato verso il basso; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo non riesce se lo strumento che il `pTool` specifica non è presente nell'elenco interno o se lo strumento è ultimo nell'elenco.  
  
##  <a name="a-namemovetoolupa--cusertoolsmanagermovetoolup"></a><a name="movetoolup"></a>CUserToolsManager::MoveToolUp  
 Sposta lo strumento di utente specificato verso l'alto nell'elenco degli strumenti dell'utente.  
  
```  
BOOL MoveToolUp(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTool`  
 Specifica lo strumento di utente di spostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo strumento utente è stato spostato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo non riesce se lo strumento che il `pTool` parametro specifica non è presente nell'elenco interno o se lo strumento è il primo elemento strumento nell'elenco.  
  
##  <a name="a-nameremovetoola--cusertoolsmanagerremovetool"></a><a name="removetool"></a>CUserToolsManager::RemoveTool  
 Rimuove lo strumento di utente specificato dall'applicazione.  
  
```  
BOOL RemoveTool(CUserTool* pTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pTool`  
 Un puntatore a uno strumento dell'utente da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo strumento viene rimosso correttamente. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se lo strumento viene rimosso correttamente, questo metodo elimina `pTool`.  
  
##  <a name="a-namesavestatea--cusertoolsmanagersavestate"></a><a name="savestate"></a>CUserToolsManager::SaveState  
 Archivia le informazioni sugli strumenti utente nel Registro di sistema Windows.  
  
```  
BOOL SaveState(LPCTSTR lpszProfileName=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Un percorso per la chiave del Registro di sistema di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato è stato salvato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il metodo archivia lo stato corrente di `CUserToolsManager` oggetto nel Registro di sistema Windows.  
  
 In genere, non occorre chiamare questo metodo direttamente, [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate) viene chiamato automaticamente come parte del processo di serializzazione dell'area di lavoro dell'applicazione.  
  
##  <a name="a-namesetdefexta--cusertoolsmanagersetdefext"></a><a name="setdefext"></a>CUserToolsManager::SetDefExt  
 Specifica l'estensione predefinita che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
```  
void SetDefExt(const CString& strDefExt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strDefExt`  
 Una stringa di testo che contiene l'estensione di file predefinita.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare un'estensione nome file predefinito nel **Apri File** nella finestra di dialogo che viene visualizzata quando l'utente seleziona un'applicazione per associare lo strumento di utente. Il valore predefinito è "exe".  
  
##  <a name="a-namesetfiltera--cusertoolsmanagersetfilter"></a><a name="setfilter"></a>CUserToolsManager::SetFilter  
 Specifica il file di filtro che il **Apri File** la finestra di dialogo ( [classe CFileDialog](../../mfc/reference/cfiledialog-class.md)) utilizza il **comando** campo il **strumenti** scheda della finestra il **Personalizza** la finestra di dialogo.  
  
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

