---
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
ms.openlocfilehash: b79d6191d2deb0a295e81da1150cc7b38fd81232
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388410"
---
# <a name="cmfcribbonlabel-class"></a>Classe CMFCRibbonLabel

Implementa un'etichetta di testo non selezionabile per una barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonLabel : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonLabel::CMFCRibbonLabel](#cmfcribbonlabel)|Costruisce e Inizializza un `CMFCRibbonLabel` oggetto con la stringa di testo specificato.|
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonLabel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonLabel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCRibbonLabel::SetACCData](#setaccdata)|Determina i dati di accessibilità per l'elemento etichetta della barra multifunzione corrente. (Esegue l'override [cmfcribbonbutton:: Setaccdata](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

### <a name="remarks"></a>Note

Dopo aver creato un'etichetta della barra multifunzione, aggiungerlo a un pannello chiamando [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

È possibile aggiungere un'etichetta della barra multifunzione alla barra di accesso rapido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonLabel.h

##  <a name="cmfcribbonlabel"></a>  CMFCRibbonLabel::CMFCRibbonLabel

Costruisce e Inizializza un [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md) oggetto che viene visualizzata la stringa di testo specificato.

```
CMFCRibbonLabel(
    LPCTSTR lpszText,
    BOOL bIsMultiLine = FALSE);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
[in] Il testo da visualizzare nell'etichetta.

*bIsMultiLine*<br/>
[in] TRUE per specificare che l'etichetta è un'etichetta su più righe; in caso contrario, FALSE.

##  <a name="setaccdata"></a>  CMFCRibbonLabel::SetACCData

Determina i dati di accessibilità per l'elemento etichetta della barra multifunzione corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
[in] Rappresenta la finestra padre dell'etichetta della barra multifunzione corrente.

*data*<br/>
[out] Un oggetto di tipo `CAccessibilityData` che viene popolato con i dati di accessibilità dell'etichetta della barra multifunzione corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il *dati* parametro è stato popolato con i dati di accessibilità dell'etichetta della barra multifunzione corrente; in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
