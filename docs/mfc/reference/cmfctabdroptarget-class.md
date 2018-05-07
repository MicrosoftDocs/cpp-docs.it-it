---
title: Classe CMFCTabDropTarget | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragEnter
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragLeave
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragOver
- AFXBASETABCTRL/CMFCTabDropTarget::OnDropEx
- AFXBASETABCTRL/CMFCTabDropTarget::Register
dev_langs:
- C++
helpviewer_keywords:
- CMFCTabDropTarget [MFC], OnDragEnter
- CMFCTabDropTarget [MFC], OnDragLeave
- CMFCTabDropTarget [MFC], OnDragOver
- CMFCTabDropTarget [MFC], OnDropEx
- CMFCTabDropTarget [MFC], Register
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53988248ac183fd551d100ede29648bcecd067f5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmfctabdroptarget-class"></a>Classe CMFCTabDropTarget
Fornisce il meccanismo di comunicazione tra un controllo struttura a schede e le librerie OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCTabDropTarget : public COleDropTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCTabDropTarget::CMFCTabDropTarget`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCTabDropTarget::OnDragEnter](#ondragenter)|Chiamato dal framework quando l'utente trascina un oggetto in una finestra a schede. (Esegue l'override [COleDropTarget::OnDragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).)|  
|[CMFCTabDropTarget::OnDragLeave](#ondragleave)|Chiamato dal framework quando l'utente trascina un oggetto all'esterno dell'intervallo di scheda con lo stato attivo. (Esegue l'override [COleDropTarget::OnDragLeave](../../mfc/reference/coledroptarget-class.md#ondragleave).)|  
|[CMFCTabDropTarget::OnDragOver](#ondragover)|Chiamato dal framework quando l'utente trascina un oggetto nella finestra scheda con lo stato attivo. (Esegue l'override [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover).)|  
|[CMFCTabDropTarget::OnDropEx](#ondropex)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento. (Esegue l'override [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).)|  
|[CMFCTabDropTarget::Register](#register)|Registra il controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.|  
  
### <a name="remarks"></a>Note  
 Questa classe fornisce il supporto di trascinamento e rilascio per la `CMFCBaseTabCtrl` classe. Se l'applicazione consente di inizializzare le librerie OLE utilizzando il [AfxOleInit](ole-initialization.md#afxoleinit) funzione `CMFCBaseTabCtrl` oggetti effettuano la registrazione per le operazioni di trascinamento e rilascio.  
  
 La `CMFCTabDropTarget` classe estende la classe base, eseguendo la scheda che è sotto il cursore quando si attiva un'operazione di trascinamento. Per ulteriori informazioni sulle operazioni di trascinamento e rilascio, vedere [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCTabDropTarget` e usare il relativo metodo `Register`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/cpp/cmfctabdroptarget-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [COleDropTarget](../../mfc/reference/coledroptarget-class.md)  
  
 [CMFCTabDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbasetabctrl.h  
  
##  <a name="ondragenter"></a>  CMFCTabDropTarget::OnDragEnter  
 Chiamato dal framework quando l'utente trascina un oggetto in una finestra a schede.  
  
```  
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pWnd`|Non usato.|  
|[in] `pDataObject`|Un puntatore all'oggetto che l'utente trascina.|  
|[in] `dwKeyState`|Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, e `MK_RBUTTON`.|  
|[in] `point`|Posizione del cursore nelle coordinate client.|  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che determina se l'eliminazione si verifica nella posizione specificata da `point`. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce `DROPEFFECT_NONE` se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato di dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata al metodo `CMFCBaseTabCtrl::OnDragEnter` con i parametri forniti.  
  
 Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).  
  
##  <a name="ondragleave"></a>  CMFCTabDropTarget::OnDragLeave  
 Chiamato dal framework quando l'utente trascina un oggetto all'esterno dell'intervallo di scheda con lo stato attivo.  
  
```  
virtual void OnDragLeave(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pWnd`|Non usato.|  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama il `CMFCBaseTabCtrl::OnDragLeave` metodo per eseguire l'operazione di trascinamento.  
  
##  <a name="ondragover"></a>  CMFCTabDropTarget::OnDragOver  
 Chiamato dal framework quando l'utente trascina un oggetto nella finestra scheda con lo stato attivo.  
  
```  
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pWnd`|Non usato.|  
|[in] `pDataObject`|Un puntatore all'oggetto che l'utente trascina.|  
|[in] `dwKeyState`|Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, e `MK_RBUTTON`.|  
|[in] `point`|La posizione del puntatore del mouse in coordinate client.|  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che determina se l'eliminazione si verifica nella posizione specificata da `point`. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### <a name="remarks"></a>Note  
 Questo metodo rende la scheda che è sotto il cursore quando si attiva un'operazione di trascinamento. Restituisce `DROPEFFECT_NONE` se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato di dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata al metodo `CMFCBaseTabCtrl::OnDragOver` con i parametri forniti.  
  
 Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).  
  
##  <a name="ondropex"></a>  CMFCTabDropTarget::OnDropEx  
 Chiamato dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento.  
  
```  
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    DROPEFFECT dropList,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pWnd`|Non usato.|  
|[in] `pDataObject`|Un puntatore all'oggetto che l'utente trascina.|  
|[in] `dropEffect`|L'operazione di rilascio predefinito.|  
|[in] `dropList`|Non usato.|  
|[in] `point`|La posizione del puntatore del mouse in coordinate client.|  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto risultante. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama `CMFCBaseTabCtrl::OnDrop` se il framework della barra degli strumenti è in modalità di personalizzazione e il formato di dati degli Appunti è disponibile. Se la chiamata a `CMFCBaseTabCtrl::OnDrop` restituisce un valore diverso da zero, questo metodo restituisce l'effetto di rilascio predefinito specificato da `dropEffect`. In caso contrario, questo metodo restituisce `DROPEFFECT_NONE`. Per ulteriori informazioni sugli effetti di rilascio, vedere [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).  
  
 Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).  
  
##  <a name="register"></a>  CMFCTabDropTarget::Register  
 Registra il controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.  
  
```  
BOOL Register(CMFCBaseTabCtrl *pOwner);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pOwner`|Lo scheda controllo da registrare come obiettivo di rilascio.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la registrazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [COleDropTarget::Register](../../mfc/reference/coledroptarget-class.md#register) per registrare il controllo per le operazioni di trascinamento e rilascio.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md)



