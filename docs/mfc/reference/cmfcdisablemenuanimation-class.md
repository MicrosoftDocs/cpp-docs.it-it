---
description: 'Altre informazioni su: classe CMFCDisableMenuAnimation'
title: Classe CMFCDisableMenuAnimation
ms.date: 11/04/2016
f1_keywords:
- CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore
helpviewer_keywords:
- CMFCDisableMenuAnimation [MFC], Restore
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
ms.openlocfilehash: fc869570865d8b99d29e0248afeeb133e657a908
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250699"
---
# <a name="cmfcdisablemenuanimation-class"></a>Classe CMFCDisableMenuAnimation

Disabilita l'animazione del menu popup.

## <a name="syntax"></a>Sintassi

```
class CMFCDisableMenuAnimation
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Costruisce un oggetto `CMFCDisableMenuAnimation`.|
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCDisableMenuAnimation:: Restore](#restore)|Ripristina l'animazione precedente utilizzata dal Framework per visualizzare un menu di scelta rapida.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione del menu popup precedente.|

### <a name="remarks"></a>Commenti

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

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal `CMFCDisableMenuAnimation` distruttore per ripristinare l'animazione precedente utilizzata dal Framework per visualizzare un menu di scelta rapida.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
