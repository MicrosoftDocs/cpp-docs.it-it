---
title: Classe CRichEditCntrItem | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRichEditCntrItem
- AFXRICH/CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::SyncToRichEditObject
dev_langs:
- C++
helpviewer_keywords:
- CRichEditCntrItem [MFC], CRichEditCntrItem
- CRichEditCntrItem [MFC], SyncToRichEditObject
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9a64950bcb0cc931b4528276e85f5d60e3b5cb08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33368420"
---
# <a name="cricheditcntritem-class"></a>Classe CRichEditCntrItem
Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), fornisce la funzionalità del controllo rich edit nel contesto dell'architettura documento/visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRichEditCntrItem : public COleClientItem  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCntrItem::CRichEditCntrItem](#cricheditcntritem)|Costruisce un oggetto `CRichEditCntrItem`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCntrItem::SyncToRichEditObject](#synctoricheditobject)|Attiva l'elemento di un altro tipo.|  
  
## <a name="remarks"></a>Note  
 Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare qualsiasi componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.  
  
 `CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi OLE sul client che sono nella vista. `CRichEditCntrItem` fornisce accesso a elemento client OLE lato contenitore.  
  
 Questo controllo comune di Windows (e pertanto il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per un esempio di utilizzo di elementi di contenitore rich edit in un'applicazione MFC, vedere il [WORDPAD](../../visual-cpp-samples.md) applicazione di esempio.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleClientItem](../../mfc/reference/coleclientitem-class.md)  
  
 `CRichEditCntrItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrich.h  
  
##  <a name="cricheditcntritem"></a>  CRichEditCntrItem::CRichEditCntrItem  
 Chiamare questa funzione per creare un `CRichEditCntrItem` dell'oggetto e aggiungerlo al documento contenitore.  
  
```  
CRichEditCntrItem(
    REOBJECT* preo = NULL,  
    CRichEditDoc* pContainer = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *preo*  
 Puntatore a un [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) struttura che descrive un elemento OLE. Il nuovo `CRichEditCntrItem` intorno a questo elemento OLE viene costruito l'oggetto. Se *preo* è **NULL**, l'elemento client è vuoto.  
  
 `pContainer`  
 Puntatore al documento contenitore che conterrà questo elemento. Se `pContainer` è **NULL**, è necessario chiamare esplicitamente [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem) aggiungere questo elemento di client a un documento.  
  
### <a name="remarks"></a>Note  
 Questa funzione non esegue le operazioni di inizializzazione OLE.  
  
 Per ulteriori informazioni, vedere il [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) struttura in Windows SDK.  
  
##  <a name="synctoricheditobject"></a>  CRichEditCntrItem::SyncToRichEditObject  
 Chiamare questa funzione per sincronizzare l'aspetto del dispositivo, [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318), di questo **CRichEditCntrltem** a quello specificato da *reo*.  
  
```  
void SyncToRichEditObject(REOBJECT& reo);
```  
  
### <a name="parameters"></a>Parametri  
 *reo*  
 Riferimento a un [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) struttura che descrive un elemento OLE.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC WORDPAD](../../visual-cpp-samples.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc (classe)](../../mfc/reference/cricheditdoc-class.md)   
 [Classe CRichEditView](../../mfc/reference/cricheditview-class.md)
