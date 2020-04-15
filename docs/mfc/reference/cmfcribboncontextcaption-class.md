---
title: Classe CMFCRibbonContextCaption
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonContextCaption
- AFXRIBBONBAR/CMFCRibbonContextCaption
- AFXRIBBONBAR/CMFCRibbonContextCaption::GetColor
- AFXRIBBONBAR/CMFCRibbonContextCaption::GetRightTabX
helpviewer_keywords:
- CMFCRibbonContextCaption [MFC], GetColor
- CMFCRibbonContextCaption [MFC], GetRightTabX
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
ms.openlocfilehash: 7aacbe23684914c91129d9962ae847d442cc411b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375212"
---
# <a name="cmfcribboncontextcaption-class"></a>Classe CMFCRibbonContextCaption

Implementa una didascalia a colori visualizzata all'inizio di una categoria della barra multifunzione o di una categoria contesto.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonContextCaption : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonContextCaption::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonContextCaption::GetColor](#getcolor)|Restituisce il colore della didascalia.|
|[CMFCRibbonContextCaption::GetRightTabX](#getrighttabx)||
|`CMFCRibbonContextCaption::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Osservazioni

Non è possibile creare direttamente istanze di questa classe. Il [CMFCRibbonBar classe](../../mfc/reference/cmfcribbonbar-class.md) utilizza questa classe internamente per aggiungere colore alle categorie della barra multifunzione.

Per impostare il colore per le categorie della barra multifunzione, chiamare [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor). Per impostare il colore per le categorie di contesto, chiamare [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonBar.h

## <a name="cmfcribboncontextcaptiongetcolor"></a><a name="getcolor"></a>CMFCRibbonContextCaption::GetColor

Restituisce il colore di sfondo della didascalia.

```
AFX_RibbonCategoryColor GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Il valore restituito può essere uno dei seguenti valori enumerati:

- `AFX_CategoryColor_None`

- `AFX_CategoryColor_Red`

- `AFX_CategoryColor_Orange`

- `AFX_CategoryColor_Yellow`

- `AFX_CategoryColor_Green`

- `AFX_CategoryColor_Blue`

- `AFX_CategoryColor_Indigo`

- `AFX_CategoryColor_Violet`

### <a name="remarks"></a>Osservazioni

Il colore della didascalia può essere impostato chiamando [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor) o [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## <a name="cmfcribboncontextcaptiongetrighttabx"></a><a name="getrighttabx"></a>CMFCRibbonContextCaption::GetRightTabX

Recupera la posizione del bordo destro della scheda della barra multifunzione della categoria.

```
int GetRightTabX() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore X di destra del `CMFCRibbonCategory` rettangolo di inclusione della scheda della barra multifunzione dell'oggetto o un valore pari a -1 se la scheda viene troncata.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[CMFCRibbonCategory (classe)](../../mfc/reference/cmfcribboncategory-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
