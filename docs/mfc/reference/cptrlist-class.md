---
title: Classe CPtrList
ms.date: 11/04/2016
f1_keywords:
- CPtrList
helpviewer_keywords:
- lists, generic
- CPtrList class [MFC]
- generic lists
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
ms.openlocfilehash: d7da4fe52d25d9ffdf6371aa40f41d7082f1165c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226841"
---
# <a name="cptrlist-class"></a>Classe CPtrList

Supporta elenchi di puntatori void.

## <a name="syntax"></a>Sintassi

```
class CPtrList : public CObject
```

## <a name="members"></a>Membri

Le funzioni membro di `CPtrList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Quando viene visualizzato un `CObject` puntatore come parametro di funzione o valore restituito, sostituire un puntatore a **`void`** .

`CObject*& CObList::GetHead() const;`

ad esempio, si converte in

`void*& CPtrList::GetHead() const;`

## <a name="remarks"></a>Osservazioni

`CPtrList`incorpora la macro IMPLEMENT_DYNAMIC per supportare l'accesso ai tipi in fase di esecuzione e il dump a un `CDumpContext` oggetto. Se è necessario un dump di singoli elementi dell'elenco di puntatori, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Gli elenchi di puntatori non possono essere serializzati.

Quando un oggetto `CPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.

Per ulteriori informazioni sull'utilizzo di `CPtrList` , vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CObList](../../mfc/reference/coblist-class.md)
