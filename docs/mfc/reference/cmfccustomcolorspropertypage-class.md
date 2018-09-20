---
title: Classe CMFCCustomColorsPropertyPage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage::Setup
dev_langs:
- C++
helpviewer_keywords:
- CMFCCustomColorsPropertyPage [MFC], Setup
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 876d361d64681568ba22ba84fcc53cda08199703
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434934"
---
# <a name="cmfccustomcolorspropertypage-class"></a>Classe CMFCCustomColorsPropertyPage

Rappresenta una pagina delle proprietà che è possibile selezionare colori personalizzati in una finestra di dialogo colore.

## <a name="syntax"></a>Sintassi

```
class CMFCCustomColorsPropertyPage : public CPropertyPage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCCustomColorsPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCCustomColorsPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCCustomColorsPropertyPage::Setup](#setup)|Imposta i componenti di colore della pagina delle proprietà.|

### <a name="remarks"></a>Note

Il `CMFCColorDialog` Usa questa classe per visualizzare la pagina delle proprietà colore personalizzato. Per altre informazioni sulle `CMFCColorDialog`, vedere [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCCustomColorsPropertyPage` dell'oggetto e impostare i componenti di colore della pagina delle proprietà.

[!code-cpp[NVC_MFC_RibbonApp#35](../../mfc/reference/codesnippet/cpp/cmfccustomcolorspropertypage-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcustomcolorspropertypage.h

##  <a name="setup"></a>  CMFCCustomColorsPropertyPage::Setup

Imposta i componenti di colore della pagina delle proprietà.

```
void Setup(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*R*|[in] Il componente rosso del valore RGB.|
|*G*|[in] Il componente verde del valore RGB.|
|*B*|[in] Il componente blu del valore RGB.|

### <a name="remarks"></a>Note

Questo metodo aggiorna il RGB corrente e HLS (hue, luminosità e saturazione) colore valori associati della pagina delle proprietà. Il [CMFCColorDialog::SetPageTwo](../../mfc/reference/cmfccolordialog-class.md#setpagetwo) chiama questo metodo quando il framework Inizializza la finestra di dialogo colore o l'utente preme il pulsante sinistro del mouse. Per altre informazioni sulle `CMFCColorDialog`, vedere [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)<br/>
[Classe CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)
