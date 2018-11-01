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
ms.openlocfilehash: 0b0df30d48b2f77d620b00f67d40743445981b66
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665036"
---
# <a name="cmfcdisablemenuanimation-class"></a>Classe CMFCDisableMenuAnimation

Disabilita l'animazione come menu a comparsa.

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
|[CMFCDisableMenuAnimation::Restore](#restore)|Ripristina l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|nome|Descrizione|
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione precedente menu a comparsa.|

### <a name="remarks"></a>Note

Utilizzare questa classe helper per disabilitare temporaneamente l'animazione del menu a comparsa (ad esempio, quando si elaborano i comandi del mouse o tastiera).

Oggetto `CMFCDisableMenuAnimation` oggetto disabilita l'animazione come menu di scelta rapida durante la sua durata. Il costruttore archivia il tipo di animazione menu di scelta rapida corrente nella `m_animType` campo e imposta il tipo di animazione corrente a `CMFCPopupMenu::NO_ANIMATION`. Il distruttore Ripristina il tipo di animazione precedente.

È possibile creare un `CMFCDisableMenuAnimation` oggetto nello stack per disabilitare l'animazione del menu a comparsa in una singola funzione. Se si desidera disabilitare animazione del menu popup tra le funzioni, creare un `CMFCDisableMenuAnimation` oggetto sull'heap e quindi eliminarlo caso si desideri ripristinare animazione del menu a comparsa.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come usare lo stack per disabilitare temporaneamente l'animazione dei menu.

[!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpopupmenu.h

##  <a name="restore"></a>  CMFCDisableMenuAnimation::Restore

Ripristina l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.

```
void Restore ();
```

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal `CMFCDisableMenuAnimation` distruttore per ripristinare l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
