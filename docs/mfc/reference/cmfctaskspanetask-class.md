---
title: Classe CMFCTasksPaneTask | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask::CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask::SetACCData
- AFXTASKSPANE/CMFCTasksPaneTask::m_bAutoDestroyWindow
- AFXTASKSPANE/CMFCTasksPaneTask::m_bIsBold
- AFXTASKSPANE/CMFCTasksPaneTask::m_dwUserData
- AFXTASKSPANE/CMFCTasksPaneTask::m_hwndTask
- AFXTASKSPANE/CMFCTasksPaneTask::m_nIcon
- AFXTASKSPANE/CMFCTasksPaneTask::m_nWindowHeight
- AFXTASKSPANE/CMFCTasksPaneTask::m_pGroup
- AFXTASKSPANE/CMFCTasksPaneTask::m_rect
- AFXTASKSPANE/CMFCTasksPaneTask::m_strName
- AFXTASKSPANE/CMFCTasksPaneTask::m_uiCommandID
dev_langs:
- C++
helpviewer_keywords:
- CMFCTasksPaneTask [MFC], CMFCTasksPaneTask
- CMFCTasksPaneTask [MFC], SetACCData
- CMFCTasksPaneTask [MFC], m_bAutoDestroyWindow
- CMFCTasksPaneTask [MFC], m_bIsBold
- CMFCTasksPaneTask [MFC], m_dwUserData
- CMFCTasksPaneTask [MFC], m_hwndTask
- CMFCTasksPaneTask [MFC], m_nIcon
- CMFCTasksPaneTask [MFC], m_nWindowHeight
- CMFCTasksPaneTask [MFC], m_pGroup
- CMFCTasksPaneTask [MFC], m_rect
- CMFCTasksPaneTask [MFC], m_strName
- CMFCTasksPaneTask [MFC], m_uiCommandID
ms.assetid: c5a7513b-cd8f-4e2e-b16f-650e1fe30954
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 041a207af69ac65646e1b30672250b84aa3a5d36
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37853969"
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
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::m_bAutoDestroyWindow](#m_bautodestroywindow)|Determina se la finestra di attività viene eliminata automaticamente.|  
|[CMFCTasksPaneTask::m_bIsBold](#m_bisbold)|Determina se il framework consente di disegnare un'etichetta di attività come testo in grassetto.|  
|[CMFCTasksPaneTask::m_dwUserData](#m_dwuserdata)|Contiene dati definiti dall'utente che associa il framework con l'attività. Impostare su zero se l'attività non è disponibili dati associati.|  
|[CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)|Handle alla finestra attività.|  
|[CMFCTasksPaneTask::m_nIcon](#m_nicon)|L'indice nell'elenco delle immagini dell'immagine visualizzato dal framework accanto all'attività.|  
|[CMFCTasksPaneTask::m_nWindowHeight](#m_nwindowheight)|L'altezza della finestra attività. Se l'attività non dispone di alcun intervallo di attività, questo valore è zero.|  
|[CMFCTasksPaneTask::m_pGroup](#m_pgroup)|Un puntatore al `CMFCTasksPaneTaskGroup` a cui appartiene questa attività.|  
|[CMFCTasksPaneTask::m_rect](#m_rect)|Specifica il rettangolo di delimitazione dell'attività.|  
|[CMFCTasksPaneTask::m_strName](#m_strname)|Il nome dell'attività.|  
|[CMFCTasksPaneTask::m_uiCommandID](#m_uicommandid)|Specifica l'ID di comando del comando eseguito dal framework quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando validi, l'attività viene considerato come un'etichetta semplice.|  
  
## <a name="remarks"></a>Note  
 La figura seguente illustra un gruppo di attività contenente tre attività:  
  
 ![Gruppo di attività espanso](../../mfc/reference/media/nexttaskgrpexpand.png "nexttaskgrpexpand")  
  
> [!NOTE]
>  Se un'attività non ha un ID di comando validi, si viene considerato come un'etichetta semplice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtaskspane. H  
  
##  <a name="cmfctaskspanetask"></a>  CMFCTasksPaneTask::CMFCTasksPaneTask  
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
 *pGroup*  
 Specifica la [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene l'attività.  
  
 *lpszName*  
 Specifica il nome dell'attività.  
  
 *nIcon*  
 Specifica l'indice dell'immagine dell'attività nell'elenco di immagini.  
  
 *uiCommandID*  
 Specifica l'ID di comando del comando che viene eseguito quando viene selezionato l'attività.  
  
 *dwUserData*  
 Dati definiti dall'utente.  
  
 *hwndTask*  
 Specifica l'handle della finestra attività.  
  
 *bAutoDestroyWindow*  
 Se TRUE, la finestra delle attività verrà eliminata automaticamente.  
  
 *nWindowHeight*  
 Specifica l'altezza della finestra attività.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bautodestroywindow"></a>  CMFCTasksPaneTask::m_bAutoDestroyWindow  
 Determina se la finestra di attività viene eliminata automaticamente.  
  
```  
BOOL m_bAutoDestroyWindow;  
```  
  
### <a name="remarks"></a>Note  
 Impostare su TRUE per specificare che la finestra attività ( [CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)) deve essere eliminato automaticamente; in caso contrario, FALSE.  
  
##  <a name="m_bisbold"></a>  CMFCTasksPaneTask::m_bIsBold  
 Determina se un'etichetta di attività viene disegnata il testo in grassetto.  
  
```  
BOOL m_bIsBold;  
```  
  
### <a name="remarks"></a>Note  
 Imposta questo membro su true per visualizzare testo in grassetto per l'etichetta di attività.  
  
##  <a name="m_dwuserdata"></a>  CMFCTasksPaneTask::m_dwUserData  
 Contiene dati definiti dall'utente associati all'attività. Impostare su zero se nessun dato viene associato all'attività.  
  
```  
DWORD m_dwUserData;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_hwndtask"></a>  CMFCTasksPaneTask::m_hwndTask  
 Handle alla finestra attività.  
  
```  
HWND m_hwndTask;  
```  
  
### <a name="remarks"></a>Note  
 Per aggiungere una finestra attività, chiamare [CMFCTasksPane::AddWindow](../../mfc/reference/cmfctaskspane-class.md#addwindow).  
  
##  <a name="m_nicon"></a>  CMFCTasksPaneTask::m_nIcon  
 Posizione di indice in un elenco di immagini che identifica un'immagine visualizzata accanto all'attività specificata.  
  
```  
int m_nIcon;  
```  
  
### <a name="remarks"></a>Note  
 L'elenco di immagini è impostato [CMFCTasksPane::SetIconsList](../../mfc/reference/cmfctaskspane-class.md#seticonslist).  
  
 Impostare `m_nIcon` su -1 se si desidera visualizzare l'attività senza un'immagine.  
  
##  <a name="m_nwindowheight"></a>  CMFCTasksPaneTask::m_nWindowHeight  
 L'altezza della finestra attività. Se l'attività non dispone di alcun intervallo di attività, questo valore è zero.  
  
```  
int m_nWindowHeight;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pgroup"></a>  CMFCTasksPaneTask::m_pGroup  
 Puntatore per il [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene questa attività.  
  
```  
CMFCTasksPaneTaskGroup* m_pGroup;  
```  
  
### <a name="remarks"></a>Note  
 Ogni attività deve avere un gruppo padre. Per aggiungere gruppi a un riquadro attività, chiamare [cmfctaskspane:: addgroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).  
  
##  <a name="m_rect"></a>  CMFCTasksPaneTask::m_rect  
 Specifica il rettangolo di delimitazione dell'attività.  
  
```  
CRect m_rect;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore viene calcolato dal framework quando viene disegnata l'attività.  
  
##  <a name="m_strname"></a>  CMFCTasksPaneTask::m_strName  
 Il nome dell'attività.  
  
```  
CString m_strName;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_uicommandid"></a>  CMFCTasksPaneTask::m_uiCommandID  
 Specifica l'ID di comando del comando che viene eseguito quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando validi, l'attività viene considerato come un'etichetta semplice.  
  
```  
UINT m_uiCommandID;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="setaccdata"></a>  CMFCTasksPaneTask::SetACCData  
 Determina i dati di accessibilità per l'attività corrente.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pParent*  
 Rappresenta la finestra padre dell'attività corrente.  
  
 [out] *dati*  
 Un oggetto di tipo `CAccessibilityData` che viene popolato con i dati di accessibilità dell'attività corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il *dati* parametro è stato popolato con i dati di accessibilità dell'attività corrente; in caso contrario, FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)
