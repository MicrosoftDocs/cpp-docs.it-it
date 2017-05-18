---
title: Classe CPtrList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPtrList
dev_langs:
- C++
helpviewer_keywords:
- lists, generic
- CPtrList class
- generic lists
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
caps.latest.revision: 23
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 8158e0acce04ee78ea07da26332f53613489653f
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="cptrlist-class"></a>Classe CPtrList
Supporta elenchi di puntatori void.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPtrList : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CPtrList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ovunque sia visualizzato un puntatore `CObject` come parametro della funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `CObject*& CObList::GetHead() const;`  
  
 ad esempio, si converte in  
  
 `void*& CPtrList::GetHead() const;`  
  
## <a name="remarks"></a>Note  
 `CPtrList` include la macro `IMPLEMENT_DYNAMIC` per supportare l'accesso del tipo in fase di esecuzione ed eseguire l'operazione di dump dell'oggetto `CDumpContext`. Se è necessario un dump di singoli elementi dell'elenco di puntatori, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.  
  
 Gli elenchi di puntatori non possono essere serializzati.  
  
 Quando un oggetto `CPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.  
  
 Per ulteriori informazioni sull'utilizzo di `CPtrList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObList](../../mfc/reference/coblist-class.md)

