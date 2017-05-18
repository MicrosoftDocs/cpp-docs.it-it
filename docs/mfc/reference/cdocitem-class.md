---
title: Classe CDocItem | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDocItem
- AFXOLE/CDocItem
- AFXOLE/CDocItem::GetDocument
- AFXOLE/CDocItem::IsBlank
dev_langs:
- C++
helpviewer_keywords:
- items, document
- document items
- server documents, document items
- CDocItem class
- container document items
- client document items
- OLE documents, items
- server documents
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
caps.latest.revision: 22
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 1ade88aa562180d5c3a6a7afe3fe26943a5d811d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdocitem-class"></a>Classe CDocItem
Classe di base per elementi del documento, ovvero i componenti dei dati di un documento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDocItem : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocItem::GetDocument](#getdocument)|Restituisce il documento che contiene l'elemento.|  
|[CDocItem::IsBlank](#isblank)|Determina se l'elemento contiene le informazioni.|  
  
## <a name="remarks"></a>Note  
 `CDocItem`gli oggetti vengono utilizzati per rappresentare gli elementi OLE nei documenti di client e server.  
  
 Per ulteriori informazioni, vedere l'articolo [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="getdocument"></a>CDocItem::GetDocument  
 Chiamare questa funzione per ottenere il documento che contiene l'elemento.  
  
```  
CDocument* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al documento che contiene l'elemento; **NULL**, se l'elemento non è parte di un documento.  
  
### <a name="remarks"></a>Note  
 Questa funzione è sottoposta a override nelle classi derivate [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md), che restituisce un puntatore a una delle due un [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), o un [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) oggetto.  
  
##  <a name="isblank"></a>CDocItem::IsBlank  
 Chiamato dal framework quando si verifica la serializzazione predefinita.  
  
```  
virtual BOOL IsBlank() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento non contiene informazioni; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CDocItem` gli oggetti non sono vuoti. [COleClientItem](../../mfc/reference/coleclientitem-class.md) oggetti talvolta sono vuoti dal momento che derivano direttamente da `CDocItem`. Tuttavia, [COleServerItem](../../mfc/reference/coleserveritem-class.md) gli oggetti vengono sempre vuoti. Per impostazione predefinita, le applicazioni OLE contenente `COleClientItem` gli oggetti che non dispongono di x o y extent vengono serializzati. Questa operazione viene eseguita tramite la restituzione di **TRUE** da un override di `IsBlank` quando l'elemento non dispone di x o y extent.  
  
 Eseguire l'override di questa funzione se si desidera implementare altre azioni durante la serializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDocument (classe)](../../mfc/reference/coledocument-class.md)   
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)

