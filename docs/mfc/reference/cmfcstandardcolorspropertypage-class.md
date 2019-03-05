---
title: Classe CMFCStandardColorsPropertyPage
ms.date: 11/04/2016
helpviewer_keywords:
- CMFCStandardColorsPropertyPage class [MFC]
ms.assetid: b84b7cfb-bb24-4c65-804a-5b642cb64400
ms.openlocfilehash: 91cfa609c31e83c02cce8b2a474a9b66ec3ba56f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57260738"
---
# <a name="cmfcstandardcolorspropertypage-class"></a>Classe CMFCStandardColorsPropertyPage

Rappresenta una pagina delle proprietà che gli utenti utilizzano selezione dei colori standard in una finestra di dialogo colore.

## <a name="syntax"></a>Sintassi

```
class CMFCStandardColorsPropertyPage : public CPropertyPage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCStandardColorsPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCStandardColorsPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|

### <a name="remarks"></a>Note

Il `CMFCColorDialog` Usa questa classe per visualizzare la pagina proprietà di colori standard. Per altre informazioni sulle `CMFCColorDialog`, vedere [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxstandardcolorspropertypage.h

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)<br/>
[Classe CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)
