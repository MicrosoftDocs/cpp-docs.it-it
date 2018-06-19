---
title: Classe CPtrList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPtrList
dev_langs:
- C++
helpviewer_keywords:
- lists, generic
- CPtrList class [MFC]
- generic lists
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1a143fd99a79212ed0078f06b334ab6ae0964b3f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370240"
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
  
 Per ulteriori informazioni sull'utilizzo `CPtrList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObList](../../mfc/reference/coblist-class.md)
