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
ms.openlocfilehash: 990f41d2dfa6491d246797322ee275c9648d52a9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367576"
---
# <a name="cmfcdisablemenuanimation-class"></a>Classe CMFCDisableMenuAnimation

Disabilita l'animazione del menu a comparsa.

## <a name="syntax"></a>Sintassi

```
class CMFCDisableMenuAnimation
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Costruisce un oggetto `CMFCDisableMenuAnimation`.|
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCDisableMenuAnimation::Restore](#restore)|Ripristina l'animazione precedente utilizzata dal framework per visualizzare un menu a comparsa.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|`CMFCDisableMenuAnimation::m_animType`|Memorizza il tipo di animazione del menu a comparsa precedente.|

### <a name="remarks"></a>Osservazioni

Utilizzate questa classe helper per disattivare temporaneamente l'animazione del menu a comparsa (ad esempio, quando elaborate i comandi del mouse o della tastiera).

Un `CMFCDisableMenuAnimation` oggetto disabilita l'animazione del menu a comparsa durante la sua durata. Il costruttore memorizza il tipo di `m_animType` animazione del menu `CMFCPopupMenu::NO_ANIMATION`a comparsa corrente nel campo e imposta il tipo di animazione corrente su . Il distruttore ripristina il tipo di animazione precedente.

È possibile `CMFCDisableMenuAnimation` creare un oggetto nello stack per disabilitare l'animazione del menu a comparsa in una singola funzione. Se si desidera disabilitare l'animazione `CMFCDisableMenuAnimation` del menu a comparsa tra le funzioni, creare un oggetto nell'heap e quindi eliminarlo quando si desidera ripristinare l'animazione del menu a comparsa.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare lo stack per disabilitare temporaneamente l'animazione del menu.

[!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpopupmenu.h

## <a name="cmfcdisablemenuanimationrestore"></a><a name="restore"></a>CMFCDisableMenuAnimation::Restore

Ripristina l'animazione precedente utilizzata dal framework per visualizzare un menu a comparsa.

```
void Restore ();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene `CMFCDisableMenuAnimation` chiamato dal distruttore per ripristinare l'animazione precedente utilizzata dal framework per visualizzare un menu a comparsa.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
