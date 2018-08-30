---
title: Classe CDocObjectServerItem | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::GetDocument
- AFXDOCOB/CDocObjectServerItem::OnHide
- AFXDOCOB/CDocObjectServerItem::OnShow
dev_langs:
- C++
helpviewer_keywords:
- CDocObjectServerItem [MFC], CDocObjectServerItem
- CDocObjectServerItem [MFC], GetDocument
- CDocObjectServerItem [MFC], OnHide
- CDocObjectServerItem [MFC], OnShow
ms.assetid: 530f7156-50c8-4806-9328-602c9133f622
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e660144808c3e9abf8f8c090b9af5ff2eb73d9e9
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211805"
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
|[CDocObjectServerItem::OnShow](#onshow)|Chiamato dal framework per rendere il DocObject elementi sul posto attivo. Se l'elemento non è un DocObject, chiama il metodo [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow).|  
  
## <a name="remarks"></a>Note  
 `CDocObjectServerItem` definisce le funzioni membro sottoponibile a override: [OnHide](#onhide), [OnOpen](https://msdn.microsoft.com/7a9b1363-6ad8-4732-9959-4e35c07644fd), e [OnShow](#onshow).  
  
 Per usare `CDocObjectServerItem`, assicurare che il [OnGetEmbeddedItem](../../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) esegue l'override nel `COleServerDoc`-restituisce una nuova classe derivata `CDocObjectServerItem` oggetto. Se è necessario modificare qualsiasi funzionalità inclusi nell'elemento, è possibile creare una nuova istanza della propria `CDocObjectServerItem`-classe derivata.  
  
 Per altre informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nel *riferimenti alla libreria MFC*. Vedere anche [prime operazioni in Internet: i documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleServerItem](../../mfc/reference/coleserveritem-class.md)  
  
 `CDocObjectServerItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxDocOb. h  
  
##  <a name="cdocobjectserveritem"></a>  CDocObjectServerItem::CDocObjectServerItem  
 Costruisce un oggetto `CDocObjectServerItem`.  
  
```  
CDocObjectServerItem(COleServerDoc* pServerDoc, BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *pServerDoc*  
 Puntatore al documento che conterrà il nuovo elemento DocObject.  
  
 *bAutoDelete*  
 Indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento a essa. L'argomento impostato su FALSE se il `CDocObjectServerItem` oggetto è parte integrante di dati del documento. Impostarla su TRUE se l'oggetto è una struttura secondaria usata per identificare un intervallo di dati del documento che possono essere eliminati dal framework.  
  
##  <a name="getdocument"></a>  CDocObjectServerItem::GetDocument  
 Recupera un puntatore al documento che contiene l'elemento.  
  
```  
COleServerDoc* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.  
  
### <a name="remarks"></a>Note  
 Ciò consente l'accesso al documento server che è stato passato come argomento per il [CDocObjectServerItem](#cdocobjectserveritem) costruttore.  
  
##  <a name="onhide"></a>  CDocObjectServerItem::OnHide  
 Chiamato dal framework per nascondere l'elemento.  
  
```  
virtual void OnHide();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita genera un'eccezione se l'elemento è DocObject. Non è possibile nascondere un elemento DocObject attivo perché accetta l'intera vista. È necessario disattivare l'elemento DocObject per eliminarlo. Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnHide](../../mfc/reference/coleserveritem-class.md#onhide).  
  
##  <a name="onshow"></a>  CDocObjectServerItem::OnShow  
 Chiamato dal framework per indicare all'applicazione server per rendere il DocObject elementi sul posto attivo.  
  
```  
virtual void OnShow();
```  
  
### <a name="remarks"></a>Note  
 Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onopen). Eseguire l'override di questa funzione se si desidera eseguire l'elaborazione quando si apre un elemento DocObject speciali.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md)   
 [Classe COleDocObjectItem](../../mfc/reference/coledocobjectitem-class.md)
