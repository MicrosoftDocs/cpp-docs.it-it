---
description: 'Altre informazioni su: classe CMFCCustomColorsPropertyPage'
title: Classe CMFCCustomColorsPropertyPage
ms.date: 11/04/2016
f1_keywords:
- CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage::Setup
helpviewer_keywords:
- CMFCCustomColorsPropertyPage [MFC], Setup
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
ms.openlocfilehash: 9a1e5a83f2dcb291b266c3ef8fcd65422d30135a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193344"
---
# <a name="cmfccustomcolorspropertypage-class"></a>Classe CMFCCustomColorsPropertyPage

Rappresenta una pagina delle proprietà che può selezionare colori personalizzati in una finestra di dialogo colore.

## <a name="syntax"></a>Sintassi

```
class CMFCCustomColorsPropertyPage : public CPropertyPage
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|`CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|`CMFCCustomColorsPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCCustomColorsPropertyPage::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCCustomColorsPropertyPage:: Setup](#setup)|Imposta i componenti colore della pagina delle proprietà.|

### <a name="remarks"></a>Commenti

La `CMFCColorDialog` classe usa questa classe per visualizzare la pagina delle proprietà colore personalizzato. Per ulteriori informazioni su `CMFCColorDialog` , vedere la [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCCustomColorsPropertyPage` oggetto e impostare i componenti del colore della pagina delle proprietà.

[!code-cpp[NVC_MFC_RibbonApp#35](../../mfc/reference/codesnippet/cpp/cmfccustomcolorspropertypage-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcustomcolorspropertypage. h

## <a name="cmfccustomcolorspropertypagesetup"></a><a name="setup"></a> CMFCCustomColorsPropertyPage:: Setup

Imposta i componenti colore della pagina delle proprietà.

```cpp
void Setup(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

*R*\
in Componente rosso del valore RGB.

*G*\
in Componente verde del valore RGB.

*B*\
in Componente blu del valore RGB.

### <a name="remarks"></a>Commenti

Questo metodo aggiorna i valori di colore RGB correnti e HLS (tonalità, luminosità e saturazione) associati della pagina delle proprietà. Il metodo [CMFCColorDialog:: SetPageTwo](../../mfc/reference/cmfccolordialog-class.md#setpagetwo) chiama questo metodo quando il Framework inizializza la finestra di dialogo colore o l'utente preme il pulsante sinistro del mouse. Per ulteriori informazioni su `CMFCColorDialog` , vedere la [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)<br/>
[Classe CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)
