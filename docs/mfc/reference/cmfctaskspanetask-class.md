---
title: Classe CMFCTasksPaneTask | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCTasksPaneTask
dev_langs:
- C++
helpviewer_keywords:
- CMFCTasksPaneTask class
ms.assetid: c5a7513b-cd8f-4e2e-b16f-650e1fe30954
caps.latest.revision: 27
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
ms.openlocfilehash: 20713b45c4b6aadc5cdfeaadb6ed269aaf7b337f
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctaskspanetask-class"></a>Classe CMFCTasksPaneTask
Il `CMFCTasksPaneTask` classe è una classe helper che rappresenta le attività per il controllo del riquadro attività ( [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)). L'oggetto attività rappresenta un elemento nel gruppo di attività ( [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)). Ogni attività può avere un comando eseguito dal framework quando un utente fa clic sull'attività e un'icona visualizzata a sinistra del nome dell'attività.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCTasksPaneTask : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::CMFCTasksPaneTask](#cmfctaskspanetask)|Crea e Inizializza un `CMFCTasksPaneTask` oggetto.|  
|`CMFCTasksPaneTask::~CMFCTasksPaneTask`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::SetACCData](#setaccdata)|Determina i dati di accessibilità per l'attività corrente.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::m_bAutoDestroyWindow](#m_bautodestroywindow)|Determina se la finestra di attività viene automaticamente eliminata.|  
|[CMFCTasksPaneTask::m_bIsBold](#m_bisbold)|Determina se il framework crea un'etichetta di attività in grassetto.|  
|[CMFCTasksPaneTask::m_dwUserData](#m_dwuserdata)|Contiene dati definiti dall'utente che il framework associa l'attività. Impostare su zero se l'attività non dispone di alcun dato associato.|  
|[CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)|Handle per la finestra delle attività.|  
|[CMFCTasksPaneTask::m_nIcon](#m_nicon)|L'indice dell'elenco immagini dell'immagine che il framework viene visualizzato accanto all'attività.|  
|[CMFCTasksPaneTask::m_nWindowHeight](#m_nwindowheight)|L'altezza della finestra dell'attività. Se l'attività dispone di alcuna finestra di attività, questo valore è zero.|  
|[CMFCTasksPaneTask::m_pGroup](#m_pgroup)|Un puntatore per il `CMFCTasksPaneTaskGroup` cui appartiene questa attività.|  
|[CMFCTasksPaneTask::m_rect](#m_rect)|Specifica il rettangolo di delimitazione dell'attività.|  
|[CMFCTasksPaneTask::m_strName](#m_strname)|Il nome dell'attività.|  
|[CMFCTasksPaneTask::m_uiCommandID](#m_uicommandid)|Specifica l'ID di comando del comando eseguito dal framework quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando validi, l'attività viene considerato come un'etichetta semplice.|  
  
## <a name="remarks"></a>Note  
 Nella figura seguente viene illustrato un gruppo di attività che contiene tre attività:  
  
 ![Gruppo di attività espanso](../../mfc/reference/media/nexttaskgrpexpand.png "nexttaskgrpexpand")  
  
> [!NOTE]
>  Se un'attività non ha un ID di comando validi, viene considerato come un'etichetta semplice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTasksPane.h  
  
##  <a name="a-namecmfctaskspanetaska--cmfctaskspanetaskcmfctaskspanetask"></a><a name="cmfctaskspanetask"></a>CMFCTasksPaneTask::CMFCTasksPaneTask  
 Crea e Inizializza un `CMFCTasksPaneTask` oggetto.  
  
```  
CMFCTasksPaneTask(
    CMFCTasksPaneTaskGroup* pGroup,  
    LPCTSTR lpszName,  
    int nIcon,  
    UINT uiCommandID,  
    DWORD dwUserData = 0,  
    HWND hwndTask = NULL,  
    BOOL bAutoDestroyWindow = FALSE,  
    int nWindowHeight = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Specifica il [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene l'attività.  
  
 `lpszName`  
 Specifica il nome dell'attività.  
  
 `nIcon`  
 Specifica l'indice dell'immagine dell'attività nell'elenco delle immagini.  
  
 `uiCommandID`  
 Specifica l'ID di comando del comando che viene eseguito quando viene selezionato l'attività.  
  
 `dwUserData`  
 Dati definiti dall'utente.  
  
 `hwndTask`  
 Specifica l'handle per la finestra delle attività.  
  
 `bAutoDestroyWindow`  
 Se `TRUE`, la finestra delle attività verrà eliminata automaticamente.  
  
 `nWindowHeight`  
 Specifica l'altezza della finestra dell'attività.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namembautodestroywindowa--cmfctaskspanetaskmbautodestroywindow"></a><a name="m_bautodestroywindow"></a>CMFCTasksPaneTask::m_bAutoDestroyWindow  
 Determina se la finestra di attività viene automaticamente eliminata.  
  
```  
BOOL m_bAutoDestroyWindow;  
```  
  
### <a name="remarks"></a>Note  
 Impostare su `TRUE` per specificare che la finestra delle attività ( [CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)) deve essere eliminato automaticamente; in caso contrario, `FALSE`.  
  
##  <a name="a-namembisbolda--cmfctaskspanetaskmbisbold"></a><a name="m_bisbold"></a>CMFCTasksPaneTask::m_bIsBold  
 Determina se un'etichetta di attività viene disegnata il testo in grassetto.  
  
```  
BOOL m_bIsBold;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare il testo in grassetto per l'etichetta di attività.  
  
##  <a name="a-namemdwuserdataa--cmfctaskspanetaskmdwuserdata"></a><a name="m_dwuserdata"></a>CMFCTasksPaneTask::m_dwUserData  
 Contiene dati definiti dall'utente associati all'attività. Impostare su zero se non è associato all'attività.  
  
```  
DWORD m_dwUserData;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemhwndtaska--cmfctaskspanetaskmhwndtask"></a><a name="m_hwndtask"></a>CMFCTasksPaneTask::m_hwndTask  
 Handle per la finestra delle attività.  
  
```  
HWND m_hwndTask;  
```  
  
### <a name="remarks"></a>Note  
 Per aggiungere una finestra delle attività, chiamare [CMFCTasksPane::AddWindow](../../mfc/reference/cmfctaskspane-class.md#addwindow).  
  
##  <a name="a-namemnicona--cmfctaskspanetaskmnicon"></a><a name="m_nicon"></a>CMFCTasksPaneTask::m_nIcon  
 La posizione di indice in un elenco di immagini che identifica un'immagine che viene visualizzata accanto all'attività specificata.  
  
```  
int m_nIcon;  
```  
  
### <a name="remarks"></a>Note  
 L'elenco di immagini è impostato [CMFCTasksPane::SetIconsList](../../mfc/reference/cmfctaskspane-class.md#seticonslist).  
  
 Impostare `m_nIcon` su -1 se si desidera visualizzare l'attività senza un'immagine.  
  
##  <a name="a-namemnwindowheighta--cmfctaskspanetaskmnwindowheight"></a><a name="m_nwindowheight"></a>CMFCTasksPaneTask::m_nWindowHeight  
 L'altezza della finestra dell'attività. Se l'attività dispone di alcuna finestra di attività, questo valore è zero.  
  
```  
int m_nWindowHeight;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namempgroupa--cmfctaskspanetaskmpgroup"></a><a name="m_pgroup"></a>CMFCTasksPaneTask::m_pGroup  
 Puntatore al [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene questa attività.  
  
```  
CMFCTasksPaneTaskGroup* m_pGroup;  
```  
  
### <a name="remarks"></a>Note  
 Ogni attività deve avere un gruppo padre. Per aggiungere gruppi a un riquadro attività, chiamare [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).  
  
##  <a name="a-namemrecta--cmfctaskspanetaskmrect"></a><a name="m_rect"></a>CMFCTasksPaneTask::m_rect  
 Specifica il rettangolo di delimitazione dell'attività.  
  
```  
CRect m_rect;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore viene calcolato dal framework quando l'attività viene disegnato.  
  
##  <a name="a-namemstrnamea--cmfctaskspanetaskmstrname"></a><a name="m_strname"></a>CMFCTasksPaneTask::m_strName  
 Il nome dell'attività.  
  
```  
CString m_strName;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemuicommandida--cmfctaskspanetaskmuicommandid"></a><a name="m_uicommandid"></a>CMFCTasksPaneTask::m_uiCommandID  
 Specifica l'ID di comando del comando che viene eseguito quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando validi, l'attività viene considerato come un'etichetta semplice.  
  
```  
UINT m_uiCommandID;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetaccdataa--cmfctaskspanetasksetaccdata"></a><a name="setaccdata"></a>CMFCTasksPaneTask::SetACCData  
 Determina i dati di accessibilità per l'attività corrente.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParent`  
 Rappresenta la finestra padre dell'attività corrente.  
  
 [out] `data`  
 Un oggetto di tipo `CAccessibilityData` che viene popolato con i dati di accessibilità dell'attività corrente.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il `data` parametro è stato correttamente popolato con i dati di accessibilità dell'attività corrente; in caso contrario, `FALSE`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)

