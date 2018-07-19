---
title: Classe COleDropSource | Microsoft Docs
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
ms.openlocfilehash: 41e79ac918c1a549c7972d5feccf4f470473f98c
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37852919"
---
# <a name="coledropsource-class"></a>Classe COleDropSource
Consente i dati da trascinare una destinazione di trascinamento.  
  
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
|[COleDropSource::GiveFeedback](#givefeedback)|Durante un'operazione di trascinamento e rilascio viene modificato il cursore.|  
|[COleDropSource::OnBeginDrag](#onbegindrag)|Gestisce l'acquisizione del mouse durante un'operazione di trascinamento e rilascio.|  
|[COleDropSource::QueryContinueDrag](#querycontinuedrag)|Controlla se il trascinamento deve continuare.|  
  
## <a name="remarks"></a>Note  
 Il [COleDropTarget](../../mfc/reference/coledroptarget-class.md) classe gestisce la parte ricevente dell'operazione di trascinamento e rilascio. Il `COleDropSource` oggetto è responsabile per determinare quando inizia un'operazione di trascinamento, inviare commenti e suggerimenti durante l'operazione di trascinamento e determinare quando termina l'operazione di trascinamento.  
  
 Usare un `COleDropSource` dell'oggetto, è sufficiente chiamare il costruttore. Ciò semplifica il processo per determinare quali eventi, ad esempio un clic del mouse, inizia un'operazione di trascinamento utilizzando [COleDataSource:: DoDragDrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#dodragdrop), o [ COleServerItem:: DoDragDrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) (funzione). Queste funzioni verranno creata una `COleDropSource` oggetto per l'utente. Si potrebbe voler modificare il comportamento predefinito del `COleDropSource` funzioni sottoponibili a override. Queste funzioni membro verranno chiamate dal framework nel momento appropriato.  
  
 Per altre informazioni sulle operazioni di trascinamento e rilascio usando OLE, vedere l'articolo [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per altre informazioni, vedere [IDropSource](http://msdn.microsoft.com/library/windows/desktop/ms690071) nel SDK di Windows.  
  
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
 Chiamato dal framework dopo la chiamata [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) oppure [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).  
  
```  
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```  
  
### <a name="parameters"></a>Parametri  
 *dropEffect*  
 L'effetto che si desidera visualizzare all'utente, che in genere indica che cosa accadrebbe se si è verificato un calo a questo punto con i dati selezionati. In genere, si tratta del valore restituito dalla chiamata più recente per [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) oppure [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover). Può trattarsi di uno o più delle seguenti operazioni:  
  
- DROPEFFECT_NONE un rilascio non sarà autorizzato.  
  
- DROPEFFECT_COPY verrà eseguita un'operazione di copia.  
  
- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.  
  
- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.  
  
- Operazione di scorrimento DROPEFFECT_SCROLL un trascinamento sta per verificarsi o è in corso nel database di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un DRAGDROP_S_USEDEFAULTCURSORS se il trascinamento è in corso, NOERROR in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire commenti e suggerimenti per l'utente su che cosa accadrebbe se si è verificato un calo a questo punto. L'implementazione predefinita utilizza i cursori predefiniti OLE. Per altre informazioni sulle operazioni di trascinamento e rilascio usando OLE, vedere l'articolo [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per altre informazioni, vedere [IDropSource::GiveFeedback](http://msdn.microsoft.com/library/windows/desktop/ms693723), [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms680129), e [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) nel SDK di Windows.  
  
##  <a name="onbegindrag"></a>  COleDropSource::OnBeginDrag  
 Chiamata eseguita dal framework quando si verifica un evento che è stato possibile avviare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.  
  
```  
virtual BOOL OnBeginDrag(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che contiene i dati selezionati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il trascinamento è consentito, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera modificare il modo in cui che viene avviato il processo di trascinamento. L'implementazione predefinita consente di acquisire il puntatore del mouse e rimane in modalità di trascinamento, fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, momento in cui rilascia il mouse.  
  
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
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica sulla tastiera. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.  
  
### <a name="return-value"></a>Valore restituito  
 DRAGDROP_S_CANCEL se il tasto ESC o il pulsante destro del mouse è premuto o sul pulsante a sinistra viene generato prima che il trascinamento viene avviato. DRAGDROP_S_DROP se deve essere eseguita un'operazione di rilascio. In caso contrario S_OK.  
  
### <a name="remarks"></a>Note  
 Si verifica un calo o un override di che questa funzione se si desidera modificare il punto in cui il trascinamento viene annullata.  
  
 L'implementazione predefinita avvia l'eliminazione o Annulla l'operazione di trascinamento come indicato di seguito. Annulla un'operazione di trascinamento quando viene premuto il tasto ESC o il pulsante destro del mouse. Avvia un'operazione di rilascio quando il pulsante sinistro del mouse viene generato dopo l'avvio del trascinamento. In caso contrario, restituisce S_OK e consente di eseguire senza ulteriori operazioni.  
  
 Poiché questa funzione viene chiamata spesso, deve essere ottimizzato quanto più possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



