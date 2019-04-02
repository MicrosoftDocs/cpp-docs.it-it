---
title: Classe CMFCToolBarComboBoxEdit
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarComboBoxEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit
helpviewer_keywords:
- CMFCToolBarComboBoxEdit [MFC], CMFCToolBarComboBoxEdit
ms.assetid: 4789c34a-ce58-48ba-a26f-38748b601352
ms.openlocfilehash: 55a2cfef69ee215d63a859b0b7fbf3886bbf60b6
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58771032"
---
# <a name="cmfctoolbarcomboboxedit-class"></a>Classe CMFCToolBarComboBoxEdit

Il framework utilizza il `CMFCToolBarComboBoxEdit` classe per creare un pulsante della barra degli strumenti che si comporta come un controllo casella combinata modificabile.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarComboBoxEdit : public CEdit
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit](#cmfctoolbarcomboboxedit)|Costruisce un oggetto `CMFCToolBarComboBoxEdit`.|
|`CMFCToolBarComboBoxEdit::~CMFCToolBarComboBoxEdit`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCToolBarComboBoxEdit::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage) funzioni di Windows. Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|

### <a name="remarks"></a>Note

Derivare una classe dal `CMFCToolBarComboBoxEdit` classe per personalizzare le operazioni di modifica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarcomboboxbutton.h

##  <a name="cmfctoolbarcomboboxedit"></a>  CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit

Costruisce un oggetto `CMFCToolBarComboBoxEdit`.

```
CMFCToolBarComboBoxEdit(CMFCToolBarComboBoxButton& combo);
```

### <a name="parameters"></a>Parametri

*combo*<br/>
[in] Un riferimento a un [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) oggetto, ovvero un pulsante della barra degli strumenti contenente un controllo casella combinata.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCToolBarComboBoxEdit` classe. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#5](../../mfc/reference/codesnippet/cpp/cmfctoolbarcomboboxedit-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)
