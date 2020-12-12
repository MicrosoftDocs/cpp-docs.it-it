---
description: 'Altre informazioni su: classe CMFCRibbonCustomizeDialog'
title: Classe CMFCRibbonCustomizeDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog
helpviewer_keywords:
- CMFCRibbonCustomizeDialog [MFC], CMFCRibbonCustomizeDialog
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
ms.openlocfilehash: 9420ebdf32a1c26cba6efee17467fd3dfe202574
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293612"
---
# <a name="cmfcribboncustomizedialog-class"></a>Classe CMFCRibbonCustomizeDialog

Consente di visualizzare la pagina **Personalizza** della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog)|Costruisce un oggetto `CMFCRibbonCustomizeDialog`.|
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonCustomizeDialog::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Commenti

MFC crea un'istanza di questa classe automaticamente se non si elabora il messaggio di AFX_WM_ON_RIBBON_CUSTOMIZE o se si restituisce 0 dal gestore di messaggi.

Se si desidera utilizzare questa classe nell'applicazione per visualizzare la finestra di dialogo **Personalizza** della barra multifunzione, è sufficiente crearne un'istanza e chiamare il `DoModal` metodo.

Poiché questa classe è derivata dalla [classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md), è possibile aggiungere pagine personalizzate tramite l' `CMFCPropertySheet` API.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

[CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncustomizedialog. h

## <a name="cmfcribboncustomizedialogcmfcribboncustomizedialog"></a><a name="cmfcribboncustomizedialog"></a> CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog

Costruisce un oggetto `CMFCRibbonCustomizeDialog`.

```
CMFCRibbonCustomizeDialog(
    CWnd* pWndParent,
    CMFCRibbonBar* pRibbon);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre, in genere il frame principale.

*pRibbon*<br/>
in Puntatore all'oggetto da `CMFCRibbonBar` personalizzare.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCRibbonCustomizeDialog` oggetto.

[!code-cpp[NVC_MFC_RibbonApp#18](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]

### <a name="remarks"></a>Commenti

Il costruttore crea un'istanza di un oggetto della [classe CMFCRibbonCustomizePropertyPage](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) e lo aggiunge alla raccolta di pagine della finestra delle proprietà.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
