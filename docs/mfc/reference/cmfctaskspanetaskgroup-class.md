---
title: Classe CMFCTasksPaneTaskGroup | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::SetACCData
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsBottom
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsCollapsed
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsSpecial
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_lstTasks
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rect
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rectGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_strName
dev_langs:
- C++
helpviewer_keywords:
- CMFCTasksPaneTaskGroup class
ms.assetid: 2111640b-a46e-4b27-b033-29e88632b86a
caps.latest.revision: 33
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 405a69a0c7d8c4179b36e1beec09fdfa7acd2d7b
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctaskspanetaskgroup-class"></a>Classe CMFCTasksPaneTaskGroup
Il `CMFCTasksPaneTaskGroup` classe è una classe helper utilizzata per la [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) controllo. Gli oggetti di tipo `CMFCTasksPaneTaskGroup` rappresentano un *gruppo di attività*. Il gruppo di attività è un elenco di elementi visualizzato dal framework in una casella separata dotata di un pulsante di compressione. La casella può avere una didascalia facoltativa (nome del gruppo). Se un gruppo viene compresso, l'elenco di attività non è visibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCTasksPaneTaskGroup : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup](#cmfctaskspanetaskgroup)|Costruisce un oggetto `CMFCTasksPaneTaskGroup`.|  
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::SetACCData](#setaccdata)|Determina i dati di accessibilità per il gruppo di attività corrente.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::m_bIsBottom](#m_bisbottom)|Determina se il gruppo di attività è allineato alla parte inferiore del controllo del riquadro attività.|  
|[CMFCTasksPaneTaskGroup::m_bIsCollapsed](#m_biscollapsed)|Determina se il gruppo di attività è compressa.|  
|[CMFCTasksPaneTaskGroup::m_bIsSpecial](#m_bisspecial)|Determina se il gruppo di attività è *speciali.* Il framework Visualizza didascalie speciali con un colore diverso.|  
|[CMFCTasksPaneTaskGroup::m_lstTasks](#m_lsttasks)|Contiene l'elenco delle attività interna.|  
|[CMFCTasksPaneTaskGroup::m_rect](#m_rect)|Specifica il rettangolo di delimitazione della didascalia del gruppo.|  
|[CMFCTasksPaneTaskGroup::m_rectGroup](#m_rectgroup)|Specifica il rettangolo di delimitazione del gruppo.|  
|[CMFCTasksPaneTaskGroup::m_strName](#m_strname)|Specifica il nome del gruppo.|  
  
## <a name="remarks"></a>Note  
 Nella figura seguente viene illustrato un gruppo di attività espanso:  
  
 ![Gruppo di attività espanso](../../mfc/reference/media/nexttaskgrpexpand.png "nexttaskgrpexpand")  
  
 Nella figura seguente viene illustrato un gruppo di attività compresso:  
  
 ![Gruppo di attività compresso](../../mfc/reference/media/nexttaskgrpcollapse.png "nexttaskgrpcollapse")  
  
 Nella figura seguente viene illustrato un gruppo di attività senza didascalia:  
  
 ![Gruppo di attività senza didascalia](../../mfc/reference/media/nexttaskgrpnocapt.png "nexttaskgrpnocapt")  
  
 Nella figura seguente vengono mostrati due gruppi di attività. Il primo gruppo di attività è contrassegnato come speciale impostando il `m_bIsSpecial` flag `TRUE`, mentre il secondo gruppo di attività non è speciale. Si noti come la didascalia per il primo gruppo di attività è più scura del secondo gruppo di attività:  
  
 ![Gruppo di attività speciale](../../mfc/reference/media/nexttaskgrpspecial.png "nexttaskgrpspecial")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTasksPane.h  
  
##  <a name="cmfctaskspanetaskgroup"></a>CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup  
 Costruisce un oggetto `CMFCTasksPaneTaskGroup`.  
  
```  
CMFCTasksPaneTaskGroup(
    LPCTSTR lpszName,  
    BOOL bIsBottom,  
    BOOL bIsSpecial=FALSE,  
    BOOL bIsCollapsed=FALSE,  
    CMFCTasksPanePropertyPage* pPage=NULL,  
    HICON hIcon=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Specifica il nome del gruppo nella didascalia del gruppo.  
  
 `bIsBottom`  
 Specifica se il gruppo è allineato alla parte inferiore del controllo del riquadro attività.  
  
 `bIsSpecial`  
 Specifica se il gruppo è designato come *speciali* e di conseguenza, se la didascalia del gruppo viene riempita con un colore diverso.  
  
 `bIsCollapsed`  
 Specifica se il gruppo viene compresso.  
  
 `pPage`  
 Specifica la pagina delle proprietà cui appartiene questo gruppo di attività.  
  
 `hIcon`  
 Specifica l'icona visualizzata nella didascalia del gruppo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bisbottom"></a>CMFCTasksPaneTaskGroup::m_bIsBottom  
 Determina se il gruppo di attività è allineato alla parte inferiore del controllo del riquadro attività.  
  
```  
BOOL m_bIsBottom;  
```  
  
### <a name="remarks"></a>Note  
 Un solo gruppo può essere allineato alla parte inferiore del controllo del riquadro attività. Questo gruppo di attività debba essere aggiunti per ultimi. Per ulteriori informazioni, vedere [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).  
  
##  <a name="m_biscollapsed"></a>CMFCTasksPaneTaskGroup::m_bIsCollapsed  
 Determina se il gruppo di attività è compressa.  
  
```  
BOOL m_bIsCollapsed;  
```  
  
### <a name="remarks"></a>Note  
 È possibile abilitare o disabilitare la capacità di comprimere i gruppi nel riquadro attività chiamando [CMFCTasksPane::EnableGroupCollapse](../../mfc/reference/cmfctaskspane-class.md#enablegroupcollapse).  
  
##  <a name="m_bisspecial"></a>CMFCTasksPaneTaskGroup::m_bIsSpecial  
 Determina se il gruppo di attività è *speciali* e se la didascalia per un gruppo di attività speciali deve essere identificata da un colore diverso.  
  
```  
BOOL m_bIsSpecial;  
```  
  
### <a name="remarks"></a>Note  
 Se l'applicazione sta utilizzando il tema di Windows XP e `m_bIsSpecial` è `FALSE`, il framework chiama `DrawThemeBackground` con il `EBP_NORMALGROUPBACKGROUND` flag. Se `m_bIsSpecial` è `TRUE`, il framework chiama `DrawThemeBackground` con il `EBP_SPECIALGROUPBACKGROUND` flag.  
  
##  <a name="m_lsttasks"></a>CMFCTasksPaneTaskGroup::m_lstTasks  
 Contiene l'elenco delle attività interna.  
  
```  
CObList m_lstTasks;  
```  
  
### <a name="remarks"></a>Note  
 Per compilare questo elenco, chiamare [CMFCTasksPane::AddTask](../../mfc/reference/cmfctaskspane-class.md#addtask).  
  
##  <a name="m_rect"></a>CMFCTasksPaneTaskGroup::m_rect  
 Specifica il rettangolo di delimitazione della didascalia del gruppo.  
  
```  
CRect m_rect;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore viene calcolato automaticamente dal framework.  
  
##  <a name="m_rectgroup"></a>CMFCTasksPaneTaskGroup::m_rectGroup  
 Specifica il rettangolo di delimitazione del gruppo.  
  
```  
CRect m_rectGroup;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore viene calcolato automaticamente dal framework.  
  
##  <a name="m_strname"></a>CMFCTasksPaneTaskGroup::m_strName  
 Specifica il nome del gruppo.  
  
```  
CString m_strName;  
```  
  
### <a name="remarks"></a>Note  
 Se questo valore è vuoto, la didascalia del gruppo non viene visualizzata e il gruppo non può essere compresso.  
  
##  <a name="setaccdata"></a>CMFCTasksPaneTaskGroup::SetACCData  
 Determina i dati di accessibilità per il gruppo di attività corrente.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParent`  
 Rappresenta la finestra padre del gruppo di attività corrente.  
  
 [out] `data`  
 Un oggetto di tipo `CAccessibilityData` che viene popolato con i dati di accessibilità del gruppo di attività corrente.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il `data` parametro è stato correttamente popolato con i dati di accessibilità del gruppo di attività corrente; in caso contrario, `FALSE`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)   
 [Classe CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)

