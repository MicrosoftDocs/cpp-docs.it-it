---
description: 'Altre informazioni su: classe CMFCSpinButtonCtrl'
title: Classe CMFCSpinButtonCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl::OnDraw
helpviewer_keywords:
- CMFCSpinButtonCtrl [MFC], OnDraw
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
ms.openlocfilehash: 87e9abc94247416704ab801beeaa1953c4cceb46
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339635"
---
# <a name="cmfcspinbuttonctrl-class"></a>Classe CMFCSpinButtonCtrl

La `CMFCSpinButtonCtrl` classe supporta un gestore visualizzazione che disegna un controllo pulsante di selezione.

## <a name="syntax"></a>Sintassi

```
class CMFCSpinButtonCtrl : public CSpinButtonCtrl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Costruttore predefinito.|
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCSpinButtonCtrl:: onpare](#ondraw)|Ridisegna il controllo pulsante di selezione corrente.|

## <a name="remarks"></a>Commenti

Per usare un gestore di visualizzazione per creare un controllo pulsante di selezione nell'applicazione, sostituire tutte le istanze della `CSpinButtonCtrl` classe con la `CMFCSpinButtonCtrl` classe.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare un oggetto della `CMFCSpinButtonCtrl` classe e utilizzare il relativo `Create` metodo.

[!code-cpp[NVC_MFC_RibbonApp#25](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)

[CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxspinbuttonctrl. h

## <a name="cmfcspinbuttonctrlondraw"></a><a name="ondraw"></a> CMFCSpinButtonCtrl:: onpare

Ridisegna il controllo pulsante di selezione corrente.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Commenti

Il Framework chiama il `CMFCSpinButtonCtrl::OnPaint` metodo per gestire il messaggio [CWnd:: OnPaint](../../mfc/reference/cwnd-class.md#onpaint) e tale metodo chiama a sua volta questo `CMFCSpinButtonCtrl::OnDraw` metodo. Eseguire l'override di questo metodo per personalizzare il modo in cui il framework disegna il controllo pulsante di selezione.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)
