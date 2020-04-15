---
title: Classe CMFCDesktopAlertWndButton
ms.date: 11/04/2016
f1_keywords:
- CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCaptionButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCloseButton
helpviewer_keywords:
- CMFCDesktopAlertWndButton [MFC], IsCaptionButton
- CMFCDesktopAlertWndButton [MFC], IsCloseButton
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
ms.openlocfilehash: 5b18a15f8bfd98396acae0558d121b32bc4127c3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367619"
---
# <a name="cmfcdesktopalertwndbutton-class"></a>Classe CMFCDesktopAlertWndButton

Consente di aggiungere pulsanti a una finestra di dialogo di avviso sul desktop.

## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWndButton : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Costruttore predefinito.|
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCDesktopAlertWndButton::IsCaptionButton](#iscaptionbutton)|Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso.|
|[CMFCDesktopAlertWndButton::IsCloseButton](#isclosebutton)|Determina se il pulsante chiude la finestra di dialogo di avviso.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso.|
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante chiude la finestra di dialogo di avviso.|

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `m_bIsCaptionButton` `m_bIsCloseButton` il costruttore imposta i membri dati e su FALSE. L'oggetto `CMFCDesktopAlertDialog` `m_bIsCaptionButton` padre imposta su TRUE se il pulsante è posizionato nell'area della didascalia della finestra di dialogo di avviso. La `CMFCDesktopAlertDialog` classe `CMFCDesktopAlertWndButton` crea un oggetto che funge da pulsante `m_bIsCloseButton` che chiude la finestra di dialogo di avviso e imposta su TRUE.

Aggiungere `CMFCDesktopAlertWndButton` oggetti `CMFCDesktopAlertDialog` a un oggetto come si aggiungerebbe qualsiasi pulsante. Per ulteriori `CMFCDesktopAlertDialog`informazioni su , vedere [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio `CMFCDesktopAlertWndButton` riportato di `SetImage` seguito viene illustrato come utilizzare il metodo nella classe . Questo frammento di codice fa parte [dell'esempio Desktop Alert Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#4](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_1.h)]
[!code-cpp[NVC_MFC_DesktopAlertDemo#5](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdesktopalertwnd.h

## <a name="cmfcdesktopalertwndbuttoniscaptionbutton"></a><a name="iscaptionbutton"></a>CMFCDesktopAlertWndButton::IsCaptionButton

Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso.

```
BOOL IsCaptionButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso; in caso contrario, 0.

## <a name="cmfcdesktopalertwndbuttonisclosebutton"></a><a name="isclosebutton"></a>CMFCDesktopAlertWndButton::IsCloseButton

Determina se il pulsante chiude la finestra di dialogo di avviso.

```
BOOL IsCloseButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante chiude la finestra di dialogo di avviso; in caso contrario, 0.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
