---
title: Classe CTooltipManager | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CTooltipManager
- AFXTOOLTIPMANAGER/CTooltipManager
- AFXTOOLTIPMANAGER/CTooltipManager::CreateToolTip
- AFXTOOLTIPMANAGER/CTooltipManager::DeleteToolTip
- AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipParams
- AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipText
- AFXTOOLTIPMANAGER/CTooltipManager::UpdateTooltips
dev_langs:
- C++
helpviewer_keywords:
- CTooltipManager [MFC], CreateToolTip
- CTooltipManager [MFC], DeleteToolTip
- CTooltipManager [MFC], SetTooltipParams
- CTooltipManager [MFC], SetTooltipText
- CTooltipManager [MFC], UpdateTooltips
ms.assetid: c71779d7-8b6e-47ef-8500-d4552731fe86
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 01d0cb0774af7c1c900f31b4e83bb03dba8bd255
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121086"
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
|[Settooltipparams](#settooltipparams)|Personalizza l'aspetto visivo del controllo ToolTip per i tipi di controllo di Windows specificati.|  
|[CTooltipManager::SetTooltipText](#settooltiptext)|Imposta il testo e la descrizione per un controllo ToolTip.|  
|[CTooltipManager::UpdateTooltips](#updatetooltips)||  
  
## <a name="remarks"></a>Note  
 Uso [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, e `CTooltipManager` interagiscono per implementare le descrizioni comandi personalizzate nell'applicazione. Per un esempio di come usare queste classi di descrizione comandi, vedere la [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) argomento.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtooltipmanager. h  
  
##  <a name="createtooltip"></a>  CTooltipManager::CreateToolTip  
 Crea un controllo tooltip.  
  
```  
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,  
    CWnd* pWndParent,  
    UINT nType);
```  
  
### <a name="parameters"></a>Parametri  
 [out] *pToolTip*  
 Un riferimento a un puntatore della descrizione comando. Viene impostato in modo da puntare alla descrizione comando appena creata al completamento della funzione.  
  
 [in] *pWndParent*  
 Elemento padre della descrizione comando.  
  
 [in] *NLE*  
 Tipo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato creato una descrizione comando.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [CTooltipManager::DeleteToolTip](#deletetooltip) per eliminare il controllo descrizione comando che viene passato nuovamente *pToolTip*.  
  
 Il [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) imposta i parametri di visualizzazione di ogni descrizione comando viene creato in base sul componente tooltip del tipo che *NLE* specifica. Per modificare i parametri per uno o più tipi di descrizione comando, chiamare [Settooltipparams](#settooltipparams).  
  
 Tipi di descrizione comando validi sono elencati nella tabella seguente:  
  
|Tipo di ToolTip|Categoria di controllo|Tipi di esempio|  
|------------------|----------------------|-------------------|  
|AFX_TOOLTIP_TYPE_BUTTON|Un pulsante.|CMFCButton|  
|AFX_TOOLTIP_TYPE_CAPTIONBAR|Una barra del titolo.|CMFCCaptionBar|  
|AFX_TOOLTIP_TYPE_DEFAULT|Qualsiasi controllo che non rientra un'altra categoria.|Nessuno.|  
|AFX_TOOLTIP_TYPE_DOCKBAR|Un riquadro ancorato.|CDockablePane|  
|AFX_TOOLTIP_TYPE_EDIT|Una casella di testo.|Nessuno.|  
|AFX_TOOLTIP_TYPE_MINIFRAME|Una con mini-cornice.|CPaneFrameWnd|  
|AFX_TOOLTIP_TYPE_PLANNER|Una pianificazione.|Nessuno.|  
|AFX_TOOLTIP_TYPE_RIBBON|Una barra multifunzione.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|  
|AFX_TOOLTIP_TYPE_TAB|Un controllo struttura a schede.|CMFCTabCtrl|  
|AFX_TOOLTIP_TYPE_TOOLBAR|Una barra degli strumenti.|CMFCToolBar, CMFCPopupMenuBar|  
|AFX_TOOLTIP_TYPE_TOOLBOX|Una casella degli strumenti.|Nessuno.|  
  
##  <a name="deletetooltip"></a>  CTooltipManager::DeleteToolTip  
 Elimina un controllo ToolTip.  
  
```  
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] *pToolTip*  
 Un riferimento a un puntatore a una descrizione comando per essere distrutti.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ciascuno [classe CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) che è stato creato da [CTooltipManager::CreateToolTip](#createtooltip). Il controllo padre deve chiamare questo metodo dal relativo `OnDestroy` gestore. Ciò è necessario per rimuovere correttamente la descrizione comando da framework. Questo metodo imposta *pToolTip* su NULL prima della restituzione.  
  
##  <a name="settooltipparams"></a>  Settooltipparams  
 Consente di personalizzare l'aspetto del controllo tooltip per i tipi di controllo di Windows specificati.  
  
```  
void SetTooltipParams(
    UINT nTypes,  
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),  
    CMFCToolTipInfo* pParams=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nTypes*  
 Specifica i tipi di controllo.  
  
 [in] *pRTC*  
 Classe di runtime di descrizione comando personalizzata.  
  
 [in] *pParams*  
 Parametri della descrizione comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta la classe di runtime e i parametri iniziali che il [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) Usa durante la creazione di descrizioni comandi. Quando un controllo chiama [CTooltipManager::CreateToolTip](#createtooltip) e passa in una descrizione comando di tipo che rappresenta uno dei tipi indicati dal *nTypes*, il gestore della descrizione comando crea un controllo descrizione comando che è un'istanza del classe di runtime specificata da *pRTC* e passa i parametri specificati dal *pParams* alla nuova descrizione comando.  
  
 Quando si chiama questo metodo, tutti i proprietari esistenti di descrizione comando visualizzato il messaggio AFX_WM_UPDATETOOLTIPS e creano nuovamente le descrizioni dei comandi mediante [CTooltipManager::CreateToolTip](#createtooltip).  
  
 *nTypes* può essere qualsiasi combinazione della descrizione comando valida tipi [CTooltipManager::CreateToolTip](#createtooltip) utilizza, oppure può essere AFX_TOOLTIP_TYPE_ALL. Se si passa AFX_TOOLTIP_TYPE_ALL, tutti i tipi di descrizione comando sono interessati.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetTooltipParams` metodo la `CTooltipManager` classe. Questo frammento di codice fa parte dell' [esempio Draw Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#11](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]  
  
##  <a name="settooltiptext"></a>  CTooltipManager::SetTooltipText  
 Imposta il testo e una descrizione per una descrizione comando.  
  
```  
static void SetTooltipText(
    TOOLINFO* pTI,  
    CToolTipCtrl* pToolTip,  
    UINT nType,  
    const CString strText,  
    LPCTSTR lpszDescr=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pTI*  
 Un puntatore a un oggetto TOOLINFO.  
  
 [in, out] *pToolTip*  
 Un puntatore al controllo tooltip per cui impostare il testo e la descrizione.  
  
 [in] *NLE*  
 Specifica il tipo di controllo a cui è associata questa descrizione comando.  
  
 [in] *strText*  
 Il testo da impostare come testo della descrizione comando.  
  
 [in] *lpszDescr*  
 Un puntatore per la descrizione della descrizione. Può essere NULL.  
  
### <a name="remarks"></a>Note  
 Il valore di *NLE* deve essere lo stesso valore di *NLE* parametro del [CTooltipManager::CreateToolTip](#createtooltip) durante la creazione della descrizione comando.  
  
##  <a name="updatetooltips"></a>  CTooltipManager::UpdateTooltips  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void UpdateTooltips();
```  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)   
 [Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)
