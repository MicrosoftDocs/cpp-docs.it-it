---
description: 'Altre informazioni su: classe CMFCRibbonContextCaption'
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
ms.openlocfilehash: fa4134b89055274e4f44bef1150518207e06143e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293625"
---
# <a name="cmfcribboncontextcaption-class"></a>Classe CMFCRibbonContextCaption

Implementa una didascalia a colori visualizzata all'inizio di una categoria della barra multifunzione o di una categoria contesto.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonContextCaption : public CMFCRibbonButton
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonContextCaption::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonContextCaption::GetColor](#getcolor)|Restituisce il colore della didascalia.|
|[CMFCRibbonContextCaption::GetRightTabX](#getrighttabx)||
|`CMFCRibbonContextCaption::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Commenti

Non è possibile creare direttamente istanze di questa classe. La classe [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) usa questa classe internamente per aggiungere il colore alle categorie della barra multifunzione.

Per impostare il colore per le categorie della barra multifunzione, chiamare [CMFCRibbonCategory:: SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor). Per impostare il colore per le categorie di contesto, chiamare [CMFCRibbonBar:: AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonBar. h

## <a name="cmfcribboncontextcaptiongetcolor"></a><a name="getcolor"></a> CMFCRibbonContextCaption:: GetColor

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

### <a name="remarks"></a>Commenti

Il colore della didascalia può essere impostato chiamando [CMFCRibbonCategory:: SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor) o [CMFCRibbonBar:: AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).

## <a name="cmfcribboncontextcaptiongetrighttabx"></a><a name="getrighttabx"></a> CMFCRibbonContextCaption::GetRightTabX

Recupera la posizione del bordo destro della scheda della barra multifunzione della categoria.

```
int GetRightTabX() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore X destro del rettangolo di inclusione della `CMFCRibbonCategory` scheda della barra multifunzione dell'oggetto o un valore pari a-1 se la scheda è troncata.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[Classe CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
