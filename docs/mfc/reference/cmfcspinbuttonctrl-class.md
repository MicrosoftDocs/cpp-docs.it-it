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
ms.openlocfilehash: 60808359c11604368493031e1b6f4573b3b2026f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410100"
---
# <a name="cmfcspinbuttonctrl-class"></a>Classe CMFCSpinButtonCtrl

Il `CMFCSpinButtonCtrl` classe supporta un gestore visualizzazione che disegna un controllo pulsante di selezione.

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
|[CMFCSpinButtonCtrl::OnDraw](#ondraw)|Ridisegna il controllo pulsante di selezione corrente.|

## <a name="remarks"></a>Note

Per usare un gestore visualizzazione per disegnare un controllo pulsante di selezione nell'applicazione, sostituire tutte le istanze del `CSpinButtonCtrl` classe con il `CMFCSpinButtonCtrl` classe.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare un oggetto del `CMFCSpinButtonCtrl` classe e usare relativo `Create` (metodo).

[!code-cpp[NVC_MFC_RibbonApp#25](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)

[CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxspinbuttonctrl.h

##  <a name="ondraw"></a>  CMFCSpinButtonCtrl::OnDraw

Ridisegna il controllo pulsante di selezione corrente.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Note

Il framework chiama il `CMFCSpinButtonCtrl::OnPaint` metodo per gestire i [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#onpaint) messaggi e che metodo chiama a sua volta questa `CMFCSpinButtonCtrl::OnDraw` (metodo). Eseguire l'override di questo metodo per personalizzare il modo in cui che il framework consente di disegnare il controllo pulsante di selezione.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)
