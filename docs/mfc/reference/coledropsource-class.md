---
title: Classe COleDropSource | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDropSource
- AFXOLE/COleDropSource
- AFXOLE/COleDropSource::COleDropSource
- AFXOLE/COleDropSource::GiveFeedback
- AFXOLE/COleDropSource::OnBeginDrag
- AFXOLE/COleDropSource::QueryContinueDrag
dev_langs:
- C++
helpviewer_keywords:
- COleDropSource [MFC], COleDropSource
- COleDropSource [MFC], GiveFeedback
- COleDropSource [MFC], OnBeginDrag
- COleDropSource [MFC], QueryContinueDrag
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e510811fcaac81aa54699250ef37f48ffe1f40e2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374897"
---
# <a name="coledropsource-class"></a>Classe COleDropSource
Consente i dati da trascinare in una destinazione di rilascio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDropSource : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropSource::COleDropSource](#coledropsource)|Costruisce un oggetto `COleDropSource`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropSource::GiveFeedback](#givefeedback)|Il cursore assume durante un'operazione di trascinamento e rilascio.|  
|[COleDropSource::OnBeginDrag](#onbegindrag)|Gestisce l'acquisizione del mouse durante un'operazione di trascinamento e rilascio.|  
|[COleDropSource::QueryContinueDrag](#querycontinuedrag)|Controlla se il trascinamento deve continuare.|  
  
## <a name="remarks"></a>Note  
 Il [COleDropTarget](../../mfc/reference/coledroptarget-class.md) classe gestisce la parte ricevente dell'operazione di trascinamento e rilascio. Il `COleDropSource` oggetto è responsabile per determinare l'inizio di un'operazione di trascinamento, inviare commenti e suggerimenti durante l'operazione di trascinamento e determinare se l'operazione di trascinamento termina.  
  
 Per utilizzare un `COleDropSource` dell'oggetto, è sufficiente chiamare il costruttore. Questo semplifica il processo volto a determinare quali eventi, ad esempio un clic del mouse, iniziano un'operazione di trascinamento utilizzando [COleDataSource:: DoDragDrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#dodragdrop), o [ COleServerItem:: DoDragDrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) (funzione). Queste funzioni verranno creati un `COleDropSource` oggetto. Si potrebbe voler modificare il comportamento predefinito del `COleDropSource` funzioni sottoponibili a override. Queste funzioni membro verranno chiamate dal framework in momenti appropriati.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento e rilascio tramite OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per ulteriori informazioni, vedere [IDropSource](http://msdn.microsoft.com/library/windows/desktop/ms690071) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropSource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coledropsource"></a>  COleDropSource::COleDropSource  
 Costruisce un oggetto `COleDropSource`.  
  
```  
COleDropSource();
```  
  
##  <a name="givefeedback"></a>  COleDropSource::GiveFeedback  
 Chiamato dal framework dopo la chiamata [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) o [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).  
  
```  
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `dropEffect`  
 L'effetto che si desidera visualizzare all'utente, in genere che indica cosa accadrebbe se si è verificato un calo a questo punto con i dati selezionati. In genere, questo è il valore restituito dalla chiamata più recente a [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) o [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover). Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE` Un calo non sarebbe consentito.  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **DRAGDROP_S_USEDEFAULTCURSORS** se il trascinamento è in corso, **NOERROR** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire commenti e suggerimenti per l'utente di che cosa accadrebbe se si è verificato un calo a questo punto. L'implementazione predefinita utilizza i cursori predefiniti OLE. Per ulteriori informazioni sulle operazioni di trascinamento e rilascio tramite OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per ulteriori informazioni, vedere [IDropSource::GiveFeedback](http://msdn.microsoft.com/library/windows/desktop/ms693723), [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms680129), e [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) in Windows SDK.  
  
##  <a name="onbegindrag"></a>  COleDropSource::OnBeginDrag  
 Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.  
  
```  
virtual BOOL OnBeginDrag(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che contiene i dati selezionati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il trascinamento è consentito, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera modificare la modalità di che avvio del processo di trascinamento. L'implementazione predefinita acquisisce il mouse e rimane in modalità di trascinamento fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, momento in cui rilascia il puntatore del mouse.  
  
##  <a name="querycontinuedrag"></a>  COleDropSource::QueryContinueDrag  
 Dopo aver iniziato il trascinamento, questa funzione viene chiamata ripetutamente dal framework finché l'operazione di trascinamento viene annullata o completata.  
  
```  
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed, 
    DWORD dwKeyState);
```  
  
### <a name="parameters"></a>Parametri  
 *bEscapePressed*  
 Indica se è stato premuto il tasto ESC dall'ultima chiamata a `COleDropSource::QueryContinueDrag`.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica della tastiera. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
### <a name="return-value"></a>Valore restituito  
 **DRAGDROP_S_CANCEL** se viene premuto il tasto ESC o il pulsante destro del mouse o del pulsante sinistro viene generato prima di trascinarli viene avviato. **DRAGDROP_S_DROP** se deve essere eseguita un'operazione di rilascio. In caso contrario `S_OK`.  
  
### <a name="remarks"></a>Note  
 Si verifica l'override di che questa funzione se si desidera modificare il punto in cui il trascinamento viene annullata o un'eliminazione.  
  
 L'implementazione predefinita avvia l'eliminazione o Annulla l'operazione di trascinamento, come indicato di seguito. Annulla un'operazione di trascinamento quando viene premuto il tasto ESC o il pulsante destro del mouse. Avvia un'operazione di rilascio quando il pulsante sinistro del mouse viene generato dopo l'avvio di trascinamento. In caso contrario, restituisce `S_OK` ed non esegue più alcuna operazione.  
  
 Poiché questa funzione viene chiamata frequentemente, viene ottimizzata per quanto possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



