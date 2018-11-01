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
ms.openlocfilehash: daa2f978b306bbe45f91514ada0f264a848521c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450609"
---
# <a name="cmfcdesktopalertwndbutton-class"></a>Classe CMFCDesktopAlertWndButton

Consente i pulsanti da aggiungere alla finestra di dialogo di avviso del desktop.

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
|[CMFCDesktopAlertWndButton::IsCloseButton](#isclosebutton)|Determina se il pulsante si chiude la finestra di dialogo di avviso.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|nome|Descrizione|
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso.|
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante si chiude la finestra di dialogo di avviso.|

### <a name="remarks"></a>Note

Per impostazione predefinita, il costruttore imposta la `m_bIsCaptionButton` e `m_bIsCloseButton` membri dati su FALSE. L'elemento padre `CMFCDesktopAlertDialog` set di oggetti `m_bIsCaptionButton` su TRUE se il pulsante è posizionato nell'area della didascalia della finestra di dialogo di avviso. Il `CMFCDesktopAlertDialog` classe crea un `CMFCDesktopAlertWndButton` oggetto che funge da pulsante che consente di chiudere la finestra di dialogo Avviso casella e imposta `m_bIsCloseButton` su TRUE.

Aggiungere `CMFCDesktopAlertWndButton` oggetti in un `CMFCDesktopAlertDialog` come si aggiungerebbero alcun pulsante dell'oggetto. Per altre informazioni sulle `CMFCDesktopAlertDialog`, vedere [classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `SetImage` metodo nel `CMFCDesktopAlertWndButton` classe. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).

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

##  <a name="iscaptionbutton"></a>  CMFCDesktopAlertWndButton::IsCaptionButton

Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo di avviso.

```
BOOL IsCaptionButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo Avviso; in caso contrario, 0.

##  <a name="isclosebutton"></a>  CMFCDesktopAlertWndButton::IsCloseButton

Determina se il pulsante si chiude la finestra di dialogo di avviso.

```
BOOL IsCloseButton() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante chiude la finestra di dialogo di avviso; in caso contrario, 0.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
