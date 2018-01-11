---
title: Classe CDocObjectServerItem | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::GetDocument
- AFXDOCOB/CDocObjectServerItem::OnHide
- AFXDOCOB/CDocObjectServerItem::OnShow
dev_langs: C++
helpviewer_keywords:
- CDocObjectServerItem [MFC], CDocObjectServerItem
- CDocObjectServerItem [MFC], GetDocument
- CDocObjectServerItem [MFC], OnHide
- CDocObjectServerItem [MFC], OnShow
ms.assetid: 530f7156-50c8-4806-9328-602c9133f622
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7627fbc7cb5d36bd82e130264d2653d5a8464545
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdocobjectserveritem-class"></a>Classe CDocObjectServerItem
Implementa i verbi del server OLE in modo specifico per i server DocObject.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDocObjectServerItem : public COleServerItem  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::CDocObjectServerItem](#cdocobjectserveritem)|Costruisce un oggetto `CDocObjectServerItem`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::GetDocument](#getdocument)|Recupera un puntatore al documento che contiene l'elemento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::OnHide](#onhide)|Genera un'eccezione se il framework tenta di nascondere un elemento DocObject.|  
|[CDocObjectServerItem::OnShow](#onshow)|Chiamato dal framework per rendere il DocObject elementi sul posto attivo. Se l'elemento non è un DocObject, chiama [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow).|  
  
## <a name="remarks"></a>Note  
 `CDocObjectServerItem`definisce le funzioni membro sottoponibili a override: [OnHide](#onhide), [OnOpen](http://msdn.microsoft.com/en-us/7a9b1363-6ad8-4732-9959-4e35c07644fd), e [OnShow](#onshow).  
  
 Per utilizzare `CDocObjectServerItem`, assicurare che il [OnGetEmbeddedItem](../../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) esegue l'override nel `COleServerDoc`-restituisce una nuova classe derivata `CDocObjectServerItem` oggetto. Se è necessario modificare qualsiasi funzionalità di cui l'elemento, è possibile creare una nuova istanza della propria `CDocObjectServerItem`-classe derivata.  
  
 Per ulteriori informazioni sulla DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nel *riferimenti alla libreria MFC*. Vedere anche [prime operazioni in Internet: documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleServerItem](../../mfc/reference/coleserveritem-class.md)  
  
 `CDocObjectServerItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxDocOb. h  
  
##  <a name="cdocobjectserveritem"></a>CDocObjectServerItem::CDocObjectServerItem  
 Costruisce un oggetto `CDocObjectServerItem`.  
  
```  
CDocObjectServerItem(COleServerDoc* pServerDoc, BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 `pServerDoc`  
 Puntatore al documento che conterrà il nuovo elemento DocObject.  
  
 `bAutoDelete`  
 Indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento ad esso. Impostare l'argomento su **FALSE** se il `CDocObjectServerItem` oggetto è parte integrante di dati del documento. Impostarla su **TRUE** se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo di dati del documento che possono essere eliminati dal framework.  
  
##  <a name="getdocument"></a>CDocObjectServerItem::GetDocument  
 Recupera un puntatore al documento che contiene l'elemento.  
  
```  
COleServerDoc* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al documento che contiene l'elemento. **NULL** se l'elemento non fa parte di un documento.  
  
### <a name="remarks"></a>Note  
 In questo modo l'accesso al documento che è stato passato come argomento di un server di [CDocObjectServerItem](#cdocobjectserveritem) costruttore.  
  
##  <a name="onhide"></a>CDocObjectServerItem::OnHide  
 Chiamato dal framework per nascondere l'elemento.  
  
```  
virtual void OnHide();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita genera un'eccezione se l'elemento è DocObject. Non è possibile nascondere un elemento DocObject attivo perché utilizza l'intera vista. È necessario disattivare l'elemento DocObject per nasconderla. Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnHide](../../mfc/reference/coleserveritem-class.md#onhide).  
  
##  <a name="onshow"></a>CDocObjectServerItem::OnShow  
 Chiamato dal framework per indicare all'applicazione server per rendere il DocObject elementi sul posto attivo.  
  
```  
virtual void OnShow();
```  
  
### <a name="remarks"></a>Note  
 Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onopen). Eseguire l'override di questa funzione se si desidera eseguire l'elaborazione durante l'apertura di un elemento DocObject speciali.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md)   
 [Classe COleDocObjectItem](../../mfc/reference/coledocobjectitem-class.md)
