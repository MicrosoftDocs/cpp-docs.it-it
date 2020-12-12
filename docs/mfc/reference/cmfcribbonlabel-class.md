---
description: 'Altre informazioni su: classe CMFCRibbonLabel'
title: Classe CMFCRibbonLabel
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
ms.openlocfilehash: 0699e76dfe90b87cd813d18d076adf23f8512bee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321826"
---
# <a name="cmfcribbonlabel-class"></a>Classe CMFCRibbonLabel

Implementa un'etichetta di testo non selezionabile per una barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonLabel : public CMFCRibbonButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonLabel::CMFCRibbonLabel](#cmfcribbonlabel)|Costruisce e Inizializza un `CMFCRibbonLabel` oggetto con la stringa di testo specificata.|
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonLabel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonLabel::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonLabel:: SetACCData](#setaccdata)|Determina i dati di accessibilità per l'elemento dell'etichetta della barra multifunzione corrente. Esegue l'override di [CMFCRibbonButton:: SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).|

### <a name="remarks"></a>Commenti

Dopo aver creato un'etichetta della barra multifunzione, aggiungerla a un pannello chiamando [CMFCRibbonPanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

Non è possibile aggiungere un'etichetta della barra multifunzione alla barra di accesso rapido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonLabel. h

## <a name="cmfcribbonlabelcmfcribbonlabel"></a><a name="cmfcribbonlabel"></a> CMFCRibbonLabel::CMFCRibbonLabel

Costruisce e Inizializza un oggetto [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md) che visualizza la stringa di testo specificata.

```
CMFCRibbonLabel(
    LPCTSTR lpszText,
    BOOL bIsMultiLine = FALSE);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
in Testo da visualizzare nell'etichetta.

*bIsMultiLine*<br/>
in TRUE per specificare che l'etichetta è un'etichetta a più righe; in caso contrario, FALSE.

## <a name="cmfcribbonlabelsetaccdata"></a><a name="setaccdata"></a> CMFCRibbonLabel:: SetACCData

Determina i dati di accessibilità per l'elemento dell'etichetta della barra multifunzione corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
in Rappresenta la finestra padre dell'etichetta della barra multifunzione corrente.

*data*<br/>
out Oggetto di tipo `CAccessibilityData` popolato con i dati di accessibilità dell'etichetta della barra multifunzione corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il parametro *dati* è stato popolato correttamente con i dati di accessibilità dell'etichetta della barra multifunzione corrente. in caso contrario, FALSE.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
