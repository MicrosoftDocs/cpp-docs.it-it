---
title: CMFCRibbonLabel (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonLabel
- AFXRIBBONLABEL/CMFCRibbonLabel
- AFXRIBBONLABEL/CMFCRibbonLabel::CMFCRibbonLabel
- AFXRIBBONLABEL/CMFCRibbonLabel::SetACCData
helpviewer_keywords:
- CMFCRibbonLabel [MFC], CMFCRibbonLabel
- CMFCRibbonLabel [MFC], SetACCData
ms.assetid: 0346c891-83bf-4f20-b8a1-c84cf2aadced
ms.openlocfilehash: cd30e374441661368d3ea7abf5177424f8dffb3c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375128"
---
# <a name="cmfcribbonlabel-class"></a>CMFCRibbonLabel (classe)

Implementa un'etichetta di testo non selezionabile per una barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonLabel : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonLabel::CMFCRibbonLabel](#cmfcribbonlabel)|Costruisce e inizializza `CMFCRibbonLabel` un oggetto con la stringa di testo specificata.|
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonLabel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonLabel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonLabel::SetACCData](#setaccdata)|Determina i dati di accessibilità per l'elemento etichetta della barra multifunzione corrente. (Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

### <a name="remarks"></a>Osservazioni

Dopo aver creato un'etichetta della barra multifunzione, aggiungerla a un gruppo chiamando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

Non è possibile aggiungere un'etichetta della barra multifunzione alla barra di accesso rapido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonLabel.h

## <a name="cmfcribbonlabelcmfcribbonlabel"></a><a name="cmfcribbonlabel"></a>CMFCRibbonLabel::CMFCRibbonLabel

Costruisce e inizializza un [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md) oggetto che visualizza la stringa di testo specificata.

```
CMFCRibbonLabel(
    LPCTSTR lpszText,
    BOOL bIsMultiLine = FALSE);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
[in] Testo da visualizzare nell'etichetta.

*bIsMultiLine*<br/>
[in] TRUE per specificare che l'etichetta è un'etichetta su più righe. in caso contrario, FALSE.

## <a name="cmfcribbonlabelsetaccdata"></a><a name="setaccdata"></a>CMFCRibbonLabel::SetACCData

Determina i dati di accessibilità per l'elemento etichetta della barra multifunzione corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
[in] Rappresenta la finestra padre dell'etichetta della barra multifunzione corrente.

*data*<br/>
[fuori] Oggetto di `CAccessibilityData` tipo popolato con i dati di accessibilità dell'etichetta della barra multifunzione corrente.

### <a name="return-value"></a>Valore restituito

TRUESe il parametro *data* è stato popolato correttamente con i dati di accessibilità dell'etichetta della barra multifunzione corrente. in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
