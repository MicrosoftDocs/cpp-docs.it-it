---
description: 'Altre informazioni su: classe CMFCToolBarComboBoxEdit'
title: Classe CMFCToolBarComboBoxEdit
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarComboBoxEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit
helpviewer_keywords:
- CMFCToolBarComboBoxEdit [MFC], CMFCToolBarComboBoxEdit
ms.assetid: 4789c34a-ce58-48ba-a26f-38748b601352
ms.openlocfilehash: f5b54c8c9eb13baf335c52074b1f529bb4f9dab7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143468"
---
# <a name="cmfctoolbarcomboboxedit-class"></a>Classe CMFCToolBarComboBoxEdit

Il Framework usa la `CMFCToolBarComboBoxEdit` classe per creare un pulsante della barra degli strumenti che si comporta come un controllo casella combinata modificabile.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarComboBoxEdit : public CEdit
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarComboBoxEdit:: CMFCToolBarComboBoxEdit](#cmfctoolbarcomboboxedit)|Costruisce un oggetto `CMFCToolBarComboBoxEdit`.|
|`CMFCToolBarComboBoxEdit::~CMFCToolBarComboBoxEdit`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCToolBarComboBoxEdit::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|

### <a name="remarks"></a>Commenti

Derivare una classe dalla `CMFCToolBarComboBoxEdit` classe per personalizzare le operazioni di modifica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarcomboboxbutton. h

## <a name="cmfctoolbarcomboboxeditcmfctoolbarcomboboxedit"></a><a name="cmfctoolbarcomboboxedit"></a> CMFCToolBarComboBoxEdit:: CMFCToolBarComboBoxEdit

Costruisce un oggetto `CMFCToolBarComboBoxEdit`.

```
CMFCToolBarComboBoxEdit(CMFCToolBarComboBoxButton& combo);
```

### <a name="parameters"></a>Parametri

*combinata*<br/>
in Un riferimento a un oggetto [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) , ovvero un pulsante della barra degli strumenti contenente un controllo casella combinata.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCToolBarComboBoxEdit` classe. Questo frammento di codice fa parte dell' [esempio demo IE](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#5](../../mfc/reference/codesnippet/cpp/cmfctoolbarcomboboxedit-class_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)
