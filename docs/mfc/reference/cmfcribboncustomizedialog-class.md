---
title: CMFCRibbonCustomizeDialog (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog
helpviewer_keywords:
- CMFCRibbonCustomizeDialog [MFC], CMFCRibbonCustomizeDialog
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
ms.openlocfilehash: a66c0a19c04e0a900b91c0c28c45bb9c766d25c0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375198"
---
# <a name="cmfcribboncustomizedialog-class"></a>CMFCRibbonCustomizeDialog (classe)

Visualizza la pagina **Personalizza** della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog)|Costruisce un oggetto `CMFCRibbonCustomizeDialog`.|
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Osservazioni

MFC crea automaticamente un'istanza di questa classe se non si elabora il messaggio di AFX_WM_ON_RIBBON_CUSTOMIZE o se si restituisce 0 dal gestore messaggi.

Se si desidera utilizzare questa classe nell'applicazione per visualizzare la barra `DoModal` multifunzione **Personalizza** la finestra di dialogo, è sufficiente crearne un'istanza e chiamare il metodo .

Poiché questa classe è derivata dalla [classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md), è possibile aggiungere pagine personalizzate utilizzando l'API. `CMFCPropertySheet`

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

[CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncustomizedialog.h

## <a name="cmfcribboncustomizedialogcmfcribboncustomizedialog"></a><a name="cmfcribboncustomizedialog"></a>CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog

Costruisce un oggetto `CMFCRibbonCustomizeDialog`.

```
CMFCRibbonCustomizeDialog(
    CWnd* pWndParent,
    CMFCRibbonBar* pRibbon);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Un puntatore alla finestra padre (in genere il frame principale).

*pNastro*<br/>
[in] Puntatore all'oggetto `CMFCRibbonBar` che deve essere personalizzato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCRibbonCustomizeDialog` illustrato come costruire un oggetto.

[!code-cpp[NVC_MFC_RibbonApp#18](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]

### <a name="remarks"></a>Osservazioni

Il costruttore crea un'istanza di un [CMFCRibbonCustomizePropertyPage classe](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) oggetto e lo aggiunge all'insieme di pagine della finestra delle proprietà.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
