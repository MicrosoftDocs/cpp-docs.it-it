---
title: Classe CPtrList | Microsoft Docs
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
ms.openlocfilehash: 36746c7979511890bb450c9204c0c7a908bbace3
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37853894"
---
# <a name="cptrlist-class"></a>Classe CPtrList
Supporta elenchi di puntatori void.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPtrList : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro della `CPtrList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ogni volta che un `CObject` puntatore come parametro della funzione o valore restituito, sostituire un puntatore a **void**.  
  
 `CObject*& CObList::GetHead() const;`  
  
 ad esempio, si converte in  
  
 `void*& CPtrList::GetHead() const;`  
  
## <a name="remarks"></a>Note  
 `CPtrList` incorpora l'IMPLEMENT_DYNAMIC (macro) per supportare l'accesso di tipo in fase di esecuzione e il dump per un `CDumpContext` oggetto. Se è necessario un dump di singoli elementi dell'elenco di puntatori, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.  
  
 Gli elenchi di puntatori non possono essere serializzati.  
  
 Quando un oggetto `CPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.  
  
 Per altre informazioni sull'uso `CPtrList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObList](../../mfc/reference/coblist-class.md)
