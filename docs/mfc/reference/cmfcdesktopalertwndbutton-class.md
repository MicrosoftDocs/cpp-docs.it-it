---
description: 'Altre informazioni su: classe CMFCDesktopAlertWndButton'
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
ms.openlocfilehash: 0c645f4ec79aaa58364cfa9688d19915ece205bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330082"
---
# <a name="cmfcdesktopalertwndbutton-class"></a>Classe CMFCDesktopAlertWndButton

Consente di aggiungere i pulsanti a una finestra di dialogo di avviso del desktop.

## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWndButton : public CMFCButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Costruttore predefinito.|
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCDesktopAlertWndButton:: IsCaptionButton](#iscaptionbutton)|Determina se il pulsante è visualizzato nell'area didascalia della finestra di dialogo avviso.|
|[CMFCDesktopAlertWndButton:: IsCloseButton](#isclosebutton)|Determina se il pulsante chiude la finestra di dialogo di avviso.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante è visualizzato nell'area didascalia della finestra di dialogo di avviso.|
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante chiude la finestra di dialogo di avviso.|

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il costruttore imposta `m_bIsCaptionButton` i `m_bIsCloseButton` membri dati e su false. L' `CMFCDesktopAlertDialog` oggetto padre imposta `m_bIsCaptionButton` su true se il pulsante è posizionato nell'area didascalia della finestra di dialogo avviso. La `CMFCDesktopAlertDialog` classe crea un `CMFCDesktopAlertWndButton` oggetto che funge da pulsante che chiude la finestra di dialogo di avviso e imposta `m_bIsCloseButton` su true.

Aggiungere `CMFCDesktopAlertWndButton` oggetti a un `CMFCDesktopAlertDialog` oggetto come si aggiunge un pulsante. Per ulteriori informazioni su `CMFCDesktopAlertDialog` , vedere la [classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `SetImage` metodo nella `CMFCDesktopAlertWndButton` classe. Questo frammento di codice fa parte dell' [esempio Desktop Alert demo](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxdesktopalertwnd. h

## <a name="cmfcdesktopalertwndbuttoniscaptionbutton"></a><a name="iscaptionbutton"></a> CMFCDesktopAlertWndButton:: IsCaptionButton

Determina se il pulsante è visualizzato nell'area didascalia della finestra di dialogo avviso.

```
BOOL IsCaptionButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante viene visualizzato nell'area didascalia della finestra di dialogo avviso; in caso contrario, 0.

## <a name="cmfcdesktopalertwndbuttonisclosebutton"></a><a name="isclosebutton"></a> CMFCDesktopAlertWndButton:: IsCloseButton

Determina se il pulsante chiude la finestra di dialogo di avviso.

```
BOOL IsCloseButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante chiude la finestra di dialogo avviso; in caso contrario, 0.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
