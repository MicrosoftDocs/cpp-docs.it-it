---
title: Classe CMFCDisableMenuAnimation
ms.date: 11/04/2016
f1_keywords:
- CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore
helpviewer_keywords:
- CMFCDisableMenuAnimation [MFC], Restore
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
ms.openlocfilehash: 97a93e000b3e12d8ec4824100059581216b1b8d9
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840765"
---
# <a name="cmfcdisablemenuanimation-class"></a>Classe CMFCDisableMenuAnimation

Disabilita l'animazione del menu popup.

## <a name="syntax"></a>Sintassi

```
class CMFCDisableMenuAnimation
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|-|-|
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Costruisce un oggetto `CMFCDisableMenuAnimation`.|
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[CMFCDisableMenuAnimation:: Restore](#restore)|Ripristina l'animazione precedente utilizzata dal Framework per visualizzare un menu di scelta rapida.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|-|-|
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione del menu popup precedente.|

### <a name="remarks"></a>Osservazioni

Usare questa classe helper per disabilitare temporaneamente l'animazione del menu popup, ad esempio quando si elaborano i comandi del mouse o della tastiera.

Un `CMFCDisableMenuAnimation` oggetto Disabilita l'animazione del menu popup durante la relativa durata. Il costruttore archivia il tipo di animazione del menu popup corrente nel `m_animType` campo e imposta il tipo di animazione corrente su `CMFCPopupMenu::NO_ANIMATION` . Il distruttore ripristina il tipo di animazione precedente.

È possibile creare un `CMFCDisableMenuAnimation` oggetto nello stack per disabilitare l'animazione del menu popup in una singola funzione. Se si desidera disabilitare l'animazione del menu popup tra le funzioni, creare un `CMFCDisableMenuAnimation` oggetto nell'heap e quindi eliminarlo quando si desidera ripristinare l'animazione del menu popup.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare lo stack per disabilitare temporaneamente l'animazione del menu.

[!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpopupmenu. h

## <a name="cmfcdisablemenuanimationrestore"></a><a name="restore"></a> CMFCDisableMenuAnimation:: Restore

Ripristina l'animazione precedente utilizzata dal Framework per visualizzare un menu di scelta rapida.

```cpp
void Restore ();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal `CMFCDisableMenuAnimation` distruttore per ripristinare l'animazione precedente utilizzata dal Framework per visualizzare un menu di scelta rapida.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
