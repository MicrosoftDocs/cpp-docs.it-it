---
title: Classe COleDropSource | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- drag operations
- drop target, dragging data to
- COleDropSource class
- drag and drop, drop source
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
caps.latest.revision: 24
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
ms.openlocfilehash: f3d0e5b7184cf305459173065b8e1cc07e032aef
ms.lasthandoff: 02/24/2017

---
# <a name="coledropsource-class"></a>Classe COleDropSource
Consente di dati da trascinare in una destinazione di rilascio.  
  
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
|[COleDropSource::GiveFeedback](#givefeedback)|Modifica del cursore durante un'operazione di trascinamento e rilascio.|  
|[COleDropSource::OnBeginDrag](#onbegindrag)|Gestisce l'acquisizione del mouse durante un'operazione di trascinamento e rilascio.|  
|[COleDropSource::QueryContinueDrag](#querycontinuedrag)|Verifica se il trascinamento deve continuare.|  
  
## <a name="remarks"></a>Note  
 Il [COleDropTarget](../../mfc/reference/coledroptarget-class.md) classe gestisce la parte ricevente dell'operazione di trascinamento e rilascio. Il `COleDropSource` oggetto è responsabile per determinare quando inizia un'operazione di trascinamento, commenti e suggerimenti durante l'operazione di trascinamento e determinare quando termina l'operazione di trascinamento.  
  
 Per utilizzare un `COleDropSource` dell'oggetto, è sufficiente chiamare il costruttore. Ciò semplifica il processo per determinare quali eventi, ad esempio un clic del mouse, iniziano un'operazione di trascinamento con [COleDataSource:: DoDragDrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#dodragdrop), o [COleServerItem:: DoDragDrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) (funzione). Queste funzioni creerà un `COleDropSource` oggetto. Si desidera modificare il comportamento predefinito del `COleDropSource` funzioni sottoponibili a override. Queste funzioni membro verranno chiamate dal framework in momenti appropriati.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento e rilascio tramite OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per ulteriori informazioni, vedere [IDropSource](http://msdn.microsoft.com/library/windows/desktop/ms690071) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropSource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coledropsource"></a>COleDropSource::COleDropSource  
 Costruisce un oggetto `COleDropSource`.  
  
```  
COleDropSource();
```  
  
##  <a name="givefeedback"></a>COleDropSource::GiveFeedback  
 Chiamato dal framework dopo [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) o [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).  
  
```  
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `dropEffect`  
 L'effetto che si desidera visualizzare all'utente, in genere che indica cosa accadrebbe se si è verificato un calo a questo punto con i dati selezionati. In genere, questo è il valore restituito dall'ultima chiamata a [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) o [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover). Può trattarsi di uno o più delle seguenti operazioni:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Potrebbe essere stabilito un collegamento dai dati eliminati i dati originali.  
  
- `DROPEFFECT_SCROLL`Un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **DRAGDROP_S_USEDEFAULTCURSORS** se il trascinamento è in corso, **NOERROR** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire commenti e suggerimenti per l'utente su che cosa accadrebbe se si è verificato un calo a questo punto. L'implementazione predefinita utilizza i cursori predefiniti OLE. Per ulteriori informazioni sulle operazioni di trascinamento e rilascio tramite OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 Per ulteriori informazioni, vedere [IDropSource::GiveFeedback](http://msdn.microsoft.com/library/windows/desktop/ms693723), [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms680129), e [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="onbegindrag"></a>COleDropSource::OnBeginDrag  
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
 Eseguire l'override di questa funzione se si desidera modificare la modalità di che avvio del processo di trascinamento. L'implementazione predefinita consente di acquisire il mouse e rimane in modalità di trascinamento fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, momento in cui rilascia il puntatore del mouse.  
  
##  <a name="querycontinuedrag"></a>COleDropSource::QueryContinueDrag  
 Una volta iniziato il trascinamento, questa funzione viene chiamata ripetutamente dal framework fino a quando l'operazione di trascinamento viene completata o annullata.  
  
```  
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed, 
    DWORD dwKeyState);
```  
  
### <a name="parameters"></a>Parametri  
 *bEscapePressed*  
 Indica se è stato premuto il tasto ESC dopo l'ultima chiamata a `COleDropSource::QueryContinueDrag`.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica della tastiera. Si tratta di una combinazione di un numero qualsiasi di quanto segue: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, e **MK_RBUTTON**.  
  
### <a name="return-value"></a>Valore restituito  
 **DRAGDROP_S_CANCEL** se viene premuto il tasto ESC o il pulsante destro o sinistro viene generato prima che il trascinamento viene avviato. **DRAGDROP_S_DROP** se deve essere eseguita un'operazione di rilascio. In caso contrario `S_OK`.  
  
### <a name="remarks"></a>Note  
 Sostituire che questa funzione se si desidera modificare il punto in cui il trascinamento viene annullata o un'eliminazione si verifica.  
  
 L'implementazione predefinita avvia l'eliminazione o Annulla l'operazione di trascinamento come indicato di seguito. Annulla un'operazione di trascinamento quando viene premuto il tasto ESC o il pulsante destro del mouse. Avvia un'operazione di rilascio quando il pulsante sinistro del mouse viene generato dopo il trascinamento è stata avviata. In caso contrario, restituisce `S_OK` ed non esegue più alcuna operazione.  
  
 Poiché questa funzione viene chiamata spesso, viene ottimizzata per quanto possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




