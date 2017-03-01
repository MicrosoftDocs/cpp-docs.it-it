---
title: Classe CTooltipManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTooltipManager
dev_langs:
- C++
helpviewer_keywords:
- CTooltipManager class
ms.assetid: c71779d7-8b6e-47ef-8500-d4552731fe86
caps.latest.revision: 22
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 3bbf191aacdd318f2afb0bd1a126c3eff290fad6
ms.lasthandoff: 02/24/2017

---
# <a name="ctooltipmanager-class"></a>Classe CTooltipManager
Gestisce informazioni di runtime sulle descrizioni comandi. L'istanza della classe `CTooltipManager` viene avviata una volta per applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTooltipManager : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTooltipManager::CreateToolTip](#createtooltip)|Crea un controllo ToolTip per i tipi di controllo di Windows specificati.|  
|[CTooltipManager::DeleteToolTip](#deletetooltip)|Elimina un controllo ToolTip.|  
|[CTooltipManager::SetTooltipParams](#settooltipparams)|Personalizza l'aspetto visivo del controllo ToolTip per i tipi di controllo di Windows specificati.|  
|[CTooltipManager::SetTooltipText](#settooltiptext)|Imposta il testo e la descrizione per un controllo ToolTip.|  
|[CTooltipManager::UpdateTooltips](#updatetooltips)||  
  
## <a name="remarks"></a>Note  
 Utilizzare [da CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, e `CTooltipManager` per implementare le descrizioni comandi personalizzate nell'applicazione. Per un esempio di come utilizzare queste classi di descrizione comandi, vedere il [da CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md) argomento.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtooltipmanager.h  
  
##  <a name="a-namecreatetooltipa--ctooltipmanagercreatetooltip"></a><a name="createtooltip"></a>CTooltipManager::CreateToolTip  
 Crea un controllo descrizione comandi.  
  
```  
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,  
    CWnd* pWndParent,  
    UINT nType);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `pToolTip`  
 Un riferimento a un puntatore di descrizione comandi. È impostato in modo che punti quando la funzione restituisce la descrizione comando appena creata.  
  
 [in] `pWndParent`  
 Elemento padre della descrizione comando.  
  
 [in] `nType`  
 Tipo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato creato una descrizione comando.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [CTooltipManager::DeleteToolTip](#deletetooltip) per eliminare il controllo descrizione comando che viene passato in `pToolTip`.  
  
 Il [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) imposta i parametri di rappresentazione visiva di ogni descrizione comando viene creato in base la descrizione comando del tipo che `nType` specifica. Per modificare i parametri per uno o più tipi di descrizione comandi, chiamare [CTooltipManager::SetTooltipParams](#settooltipparams).  
  
 Tipi di descrizione comandi validi sono elencati nella tabella seguente:  
  
|ToolTip (tipo)|Categoria di controllo|Tipi di esempio|  
|------------------|----------------------|-------------------|  
|AFX_TOOLTIP_TYPE_BUTTON|Un pulsante.|CMFCButton|  
|AFX_TOOLTIP_TYPE_CAPTIONBAR|Una barra del titolo.|CMFCCaptionBar|  
|AFX_TOOLTIP_TYPE_DEFAULT|Qualsiasi controllo che non si adatta a un'altra categoria.|Nessuno.|  
|AFX_TOOLTIP_TYPE_DOCKBAR|Un riquadro ancorato.|CDockablePane|  
|AFX_TOOLTIP_TYPE_EDIT|Una casella di testo.|Nessuno.|  
|AFX_TOOLTIP_TYPE_MINIFRAME|Un mini.|CPaneFrameWnd|  
|AFX_TOOLTIP_TYPE_PLANNER|Una pianificazione.|Nessuno.|  
|AFX_TOOLTIP_TYPE_RIBBON|Una barra multifunzione.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|  
|AFX_TOOLTIP_TYPE_TAB|Controllo struttura a schede.|CMFCTabCtrl|  
|AFX_TOOLTIP_TYPE_TOOLBAR|Una barra degli strumenti.|CMFCToolBar, CMFCPopupMenuBar|  
|AFX_TOOLTIP_TYPE_TOOLBOX|Una casella degli strumenti.|Nessuno.|  
  
##  <a name="a-namedeletetooltipa--ctooltipmanagerdeletetooltip"></a><a name="deletetooltip"></a>CTooltipManager::DeleteToolTip  
 Elimina un controllo ToolTip.  
  
```  
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pToolTip`  
 Un riferimento a un puntatore a una descrizione comando per l'eliminazione.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ogni [CToolTipCtrl (classe)](../../mfc/reference/ctooltipctrl-class.md) che è stato creato da [CTooltipManager::CreateToolTip](#createtooltip). Il controllo padre deve chiamare questo metodo dal relativo `OnDestroy` gestore. Ciò è necessario rimuovere la descrizione comando correttamente dal framework. Questo metodo imposta `pToolTip` per `NULL` prima della restituzione.  
  
##  <a name="a-namesettooltipparamsa--ctooltipmanagersettooltipparams"></a><a name="settooltipparams"></a>CTooltipManager::SetTooltipParams  
 Consente di personalizzare l'aspetto del controllo descrizione comandi per i tipi di controllo di Windows specificati.  
  
```  
void SetTooltipParams(
    UINT nTypes,  
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),  
    CMFCToolTipInfo* pParams=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTypes`  
 Specifica i tipi di controllo.  
  
 [in] `pRTC`  
 Classe di runtime di descrizione comandi personalizzata.  
  
 [in] `pParams`  
 Parametri della descrizione comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta la classe di runtime e i parametri iniziali che il [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) utilizza durante la creazione di descrizioni comandi. Quando un controllo chiama [CTooltipManager::CreateToolTip](#createtooltip) e passa in una descrizione comando di tipo che rappresenta uno dei tipi indicati da `nTypes`, la gestione della descrizione comando crea un controllo descrizione comandi che è un'istanza della classe di runtime specificata da `pRTC` e passa i parametri specificati da `pParams` la nuova descrizione comando.  
  
 Quando si chiama questo metodo, tutti i proprietari esistenti della descrizione comando venga visualizzato il messaggio AFX_WM_UPDATETOOLTIPS che è necessario ricreare le relative descrizioni comandi utilizzando [CTooltipManager::CreateToolTip](#createtooltip).  
  
 `nTypes`può essere qualsiasi combinazione della descrizione comando valida tipi [CTooltipManager::CreateToolTip](#createtooltip) utilizza, oppure può essere AFX_TOOLTIP_TYPE_ALL. Se si passa AFX_TOOLTIP_TYPE_ALL, interessa tutti i tipi di descrizione comandi.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetTooltipParams` metodo la `CTooltipManager` classe. Questo frammento di codice fa parte di [esempio disegnare Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient&#11;](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]  
  
##  <a name="a-namesettooltiptexta--ctooltipmanagersettooltiptext"></a><a name="settooltiptext"></a>CTooltipManager::SetTooltipText  
 Imposta il testo e la descrizione per una descrizione comandi.  
  
```  
static void SetTooltipText(
    TOOLINFO* pTI,  
    CToolTipCtrl* pToolTip,  
    UINT nType,  
    const CString strText,  
    LPCTSTR lpszDescr=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTI`  
 Un puntatore a un oggetto TOOLINFO.  
  
 [in, out] `pToolTip`  
 Un puntatore per il controllo descrizione comando per il quale impostare il testo e la descrizione.  
  
 [in] `nType`  
 Specifica il tipo di controllo a cui è associata questa descrizione comandi.  
  
 [in] `strText`  
 Il testo da impostare come testo della descrizione comandi.  
  
 [in] `lpszDescr`  
 Un puntatore per la descrizione della descrizione. Può essere `NULL`.  
  
### <a name="remarks"></a>Note  
 Il valore di `nType` deve essere lo stesso valore di `nType` parametro di [CTooltipManager::CreateToolTip](#createtooltip) al momento della creazione della descrizione comando.  
  
##  <a name="a-nameupdatetooltipsa--ctooltipmanagerupdatetooltips"></a><a name="updatetooltips"></a>CTooltipManager::UpdateTooltips  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void UpdateTooltips();
```  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe da CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)   
 [Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)

