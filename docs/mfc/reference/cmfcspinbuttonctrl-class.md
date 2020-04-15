---
title: Classe CMFCSpinButtonCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl::OnDraw
helpviewer_keywords:
- CMFCSpinButtonCtrl [MFC], OnDraw
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
ms.openlocfilehash: 445b857400d8c82109ca7220b84bac692a2abf89
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376182"
---
# <a name="cmfcspinbuttonctrl-class"></a>Classe CMFCSpinButtonCtrl

La `CMFCSpinButtonCtrl` classe supporta un gestore visivo che disegna un controllo pulsante di selezione.

## <a name="syntax"></a>Sintassi

```
class CMFCSpinButtonCtrl : public CSpinButtonCtrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Costruttore predefinito.|
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCSpinButtonCtrl::OnDraw](#ondraw)|Ridipinge il controllo pulsante di selezione corrente.|

## <a name="remarks"></a>Osservazioni

Per usare un gestore visualizzazione per disegnare un controllo pulsante di selezione nell'applicazione, sostituire tutte le istanze della `CSpinButtonCtrl` classe con la `CMFCSpinButtonCtrl` classe .

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CMFCSpinButtonCtrl` viene illustrato `Create` come creare un oggetto della classe e utilizzarne il metodo.

[!code-cpp[NVC_MFC_RibbonApp#25](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)

[CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxspinbuttonctrl.h

## <a name="cmfcspinbuttonctrlondraw"></a><a name="ondraw"></a>CMFCSpinButtonCtrl::OnDraw

Ridipinge il controllo pulsante di selezione corrente.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Il framework `CMFCSpinButtonCtrl::OnPaint` chiama il metodo per gestire il [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#onpaint) `CMFCSpinButtonCtrl::OnDraw` messaggio e tale metodo chiama a sua volta questo metodo. Eseguire l'override di questo metodo per personalizzare il modo in cui il framework disegna il controllo pulsante di selezione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCVisualManager (classe)](../../mfc/reference/cmfcvisualmanager-class.md)
