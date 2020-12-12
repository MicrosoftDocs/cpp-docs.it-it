---
description: 'Altre informazioni su: classe CMFCToolTipInfo'
title: Classe CMFCToolTipInfo
ms.date: 11/04/2016
f1_keywords:
- CMFCToolTipInfo
- AFXTOOLTIPCTRL/CMFCToolTipInfo
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBalloonTooltip
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBoldLabel
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawDescription
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawIcon
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawSeparator
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bRoundedCorners
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bVislManagerTheme
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrBorder
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFill
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFillGradient
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrText
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nGradientAngle
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nMaxDescrWidth
helpviewer_keywords:
- CMFCToolTipInfo [MFC], m_bBalloonTooltip
- CMFCToolTipInfo [MFC], m_bBoldLabel
- CMFCToolTipInfo [MFC], m_bDrawDescription
- CMFCToolTipInfo [MFC], m_bDrawIcon
- CMFCToolTipInfo [MFC], m_bDrawSeparator
- CMFCToolTipInfo [MFC], m_bRoundedCorners
- CMFCToolTipInfo [MFC], m_bVislManagerTheme
- CMFCToolTipInfo [MFC], m_clrBorder
- CMFCToolTipInfo [MFC], m_clrFill
- CMFCToolTipInfo [MFC], m_clrFillGradient
- CMFCToolTipInfo [MFC], m_clrText
- CMFCToolTipInfo [MFC], m_nGradientAngle
- CMFCToolTipInfo [MFC], m_nMaxDescrWidth
ms.assetid: f9d3d7f8-1f08-4342-a7b2-683860e5d2a5
ms.openlocfilehash: 06ceca500ad92d5f3a27e2740a298d9c1bbfe1cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143429"
---
# <a name="cmfctooltipinfo-class"></a>Classe CMFCToolTipInfo

Memorizza informazioni sull'aspetto visivo delle descrizioni comandi.

## <a name="syntax"></a>Sintassi

```
class CMFCToolTipInfo
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolTipInfo::operator=](#operator_eq)||

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCToolTipInfo:: m_bBalloonTooltip](#m_bballoontooltip)|Variabile booleana che indica se la descrizione comandi ha l'aspetto di un fumetto.|
|[CMFCToolTipInfo::m_bBoldLabel](#m_bboldlabel)|Una variabile booleana che indica se le etichette della descrizione comandi vengono visualizzate in grassetto.|
|[CMFCToolTipInfo::m_bDrawDescription](#m_bdrawdescription)|Variabile booleana che indica se la descrizione comando contiene una descrizione.|
|[CMFCToolTipInfo::m_bDrawIcon](#m_bdrawicon)|Variabile booleana che indica se la descrizione comando contiene un'icona.|
|[CMFCToolTipInfo::m_bDrawSeparator](#m_bdrawseparator)|Variabile booleana che indica se viene visualizzato un separatore tra l'etichetta e la descrizione della descrizione comando.|
|[CMFCToolTipInfo::m_bRoundedCorners](#m_broundedcorners)|Variabile booleana che indica se la descrizione comando ha gli angoli arrotondati.|
|[CMFCToolTipInfo::m_bVislManagerTheme](#m_bvislmanagertheme)|Variabile booleana che indica se l'aspetto della descrizione comando deve essere controllato da un gestore di visualizzazione (vedere la [classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)).|
|[CMFCToolTipInfo::m_clrBorder](#m_clrborder)|Colore del bordo della descrizione comando.|
|[CMFCToolTipInfo::m_clrFill](#m_clrfill)|Colore dello sfondo della descrizione comando.|
|[CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient)|Colore del riempimento sfumato nella descrizione comandi.|
|[CMFCToolTipInfo::m_clrText](#m_clrtext)|Colore del testo nella descrizione comandi.|
|[CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle)|Angolo del riempimento sfumato nella descrizione comandi.|
|[CMFCToolTipInfo::m_nMaxDescrWidth](#m_nmaxdescrwidth)|Larghezza massima possibile, in pixel, del testo nella descrizione comandi.|

## <a name="remarks"></a>Commenti

Usare insieme la classe [CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo` e la [classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) per implementare descrizioni comandi personalizzate nell'applicazione. Per un esempio di come usare queste classi ToolTip, vedere l'argomento relativo alla [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) .

## <a name="example"></a>Esempio

L'esempio di codice seguente illustra come impostare i valori delle variabili di membro nella classe `CMFCToolTipInfo`.

[!code-cpp[NVC_MFC_RibbonApp#42](../../mfc/reference/codesnippet/cpp/cmfctooltipinfo-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipctrl. h

## <a name="cmfctooltipinfom_bballoontooltip"></a><a name="m_bballoontooltip"></a> CMFCToolTipInfo:: m_bBalloonTooltip

Specifica lo stile di visualizzazione di tutte le descrizioni comandi.

```
BOOL m_bBalloonTooltip;
```

### <a name="remarks"></a>Commenti

TRUE indica che le descrizioni comandi utilizzano lo stile del fumetto, FALSE indica che le descrizioni comandi utilizzano lo stile rettangolare.

## <a name="cmfctooltipinfom_bboldlabel"></a><a name="m_bboldlabel"></a> CMFCToolTipInfo:: m_bBoldLabel

Specifica se il tipo di carattere del testo della descrizione comando è in grassetto.

```
BOOL m_bBoldLabel;
```

### <a name="remarks"></a>Commenti

Impostare questo membro su TRUE per visualizzare il testo della descrizione comando con il carattere grassetto o FALSE per visualizzare le etichette della descrizione comando con tipo di carattere non grassetto.

## <a name="cmfctooltipinfom_bdrawdescription"></a><a name="m_bdrawdescription"></a> CMFCToolTipInfo:: m_bDrawDescription

Specifica se ogni descrizione comando Visualizza il testo della descrizione.

```
BOOL m_bDrawDescription;
```

### <a name="remarks"></a>Commenti

Impostare questo membro su TRUE per visualizzare la descrizione oppure su FALSE per nascondere la descrizione. È possibile specificare la descrizione in una descrizione comando chiamando [CMFCToolTipCtrl:: FileDescription](../../mfc/reference/cmfctooltipctrl-class.md#setdescription)

## <a name="cmfctooltipinfom_bdrawicon"></a><a name="m_bdrawicon"></a> CMFCToolTipInfo:: m_bDrawIcon

Specifica se tutte le descrizioni comandi visualizzano le icone.

```
BOOL m_bDrawIcon;
```

### <a name="remarks"></a>Commenti

Impostare questo membro su TRUE per visualizzare un'icona in ogni descrizione comando oppure su FALSE per visualizzare le descrizioni comandi senza icone.

## <a name="cmfctooltipinfom_bdrawseparator"></a><a name="m_bdrawseparator"></a> CMFCToolTipInfo:: m_bDrawSeparator

Specifica se ogni descrizione comando ha un separatore tra l'etichetta e la descrizione.

```
BOOL m_bDrawSeparator;
```

### <a name="remarks"></a>Commenti

Impostare questo membro su TRUE per visualizzare il separatore tra l'etichetta e la descrizione della descrizione comando oppure FALSE per visualizzare le descrizioni comandi senza separatore.

## <a name="cmfctooltipinfom_broundedcorners"></a><a name="m_broundedcorners"></a> CMFCToolTipInfo:: m_bRoundedCorners

Specifica se tutte le descrizioni comandi hanno angoli arrotondati.

```
BOOL m_bRoundedCorners;
```

### <a name="remarks"></a>Commenti

Impostare questo membro su TRUE per visualizzare gli angoli arrotondati sulle descrizioni comandi oppure su FALSE per visualizzare gli angoli rettangolari sulle descrizioni comandi.

## <a name="cmfctooltipinfom_clrborder"></a><a name="m_clrborder"></a> CMFCToolTipInfo:: m_clrBorder

Specifica il colore dei bordi di tutte le descrizioni comandi.

```
COLORREF m_clrBorder;
```

## <a name="cmfctooltipinfom_clrfill"></a><a name="m_clrfill"></a> CMFCToolTipInfo:: m_clrFill

Specifica il colore degli sfondi della descrizione comando.

```
COLORREF m_clrFill;
```

### <a name="remarks"></a>Commenti

Se [CMFCToolTipInfo:: m_clrFillGradient](#m_clrfillgradient) è-1, il colore di sfondo della descrizione comando è `m_clrFill` . In caso contrario, `m_clrFill` specifica il colore dell'inizio della sfumatura e `m_clrFillGradient` specifica il colore della fine della sfumatura. [CMFCToolTipInfo:: m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.

## <a name="cmfctooltipinfom_clrfillgradient"></a><a name="m_clrfillgradient"></a> CMFCToolTipInfo:: m_clrFillGradient

Specifica il colore finale per uno sfondo sfumato per le descrizioni comandi.

```
COLORREF m_clrFillGradient;
```

### <a name="remarks"></a>Commenti

Se `m_clrFillGradient` è-1, non è presente alcuna sfumatura. In caso contrario, il colore iniziale della sfumatura viene specificato da [CMFCToolTipInfo:: m_clrFill](#m_clrfill) e il colore finale della sfumatura è specificato da `m_clrFillGradient` . [CMFCToolTipInfo:: m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.

## <a name="cmfctooltipinfom_clrtext"></a><a name="m_clrtext"></a> CMFCToolTipInfo:: m_clrText

Specifica il colore del testo di tutte le descrizioni comandi.

```
COLORREF m_clrText;
```

## <a name="cmfctooltipinfom_ngradientangle"></a><a name="m_ngradientangle"></a> CMFCToolTipInfo:: m_nGradientAngle

Specifica l'angolo in corrispondenza del quale viene disegnata una sfumatura sullo sfondo delle descrizioni comandi.

```
int m_nGradientAngle;
```

### <a name="remarks"></a>Commenti

`m_nGradientAngle` Specifica l'angolo, in gradi, con cui la sfumatura sullo sfondo delle descrizioni comandi viene sfalsata dall'orizzontale. Se `m_nGradientAngle` è 0, la sfumatura viene disegnata da sinistra a destra. Se `m_nGradientAngle` è compreso tra 1 e 360, la sfumatura ruota in senso orario in base al numero di gradi. Se `m_nGradientAngle` è-1, ovvero il valore predefinito, la sfumatura viene disegnata dall'alto verso il basso. Equivale `m_nGradientAngle` all'impostazione di su 90.

[CMFCToolTipInfo:: m_clrFill](#m_clrfill) `clrFill` Specifica il colore dell'inizio della sfumatura e [CMFCToolTipInfo:: m_clrFillGradient](#m_clrfillgradient) `clrFillGradient` specifica il colore della fine della sfumatura. Se `m_clrFillGradient` è-1, non è presente alcuna sfumatura.

## <a name="cmfctooltipinfom_nmaxdescrwidth"></a><a name="m_nmaxdescrwidth"></a> CMFCToolTipInfo:: m_nMaxDescrWidth

Specifica la larghezza massima della descrizione visualizzata in ogni descrizione comando. Se la larghezza della descrizione supera il valore specificato, viene eseguito il wrapped del testo.

```
int m_nMaxDescrWidth;
```

## <a name="cmfctooltipinfom_bvislmanagertheme"></a><a name="m_bvislmanagertheme"></a> CMFCToolTipInfo:: m_bVislManagerTheme

Specifica se il gestore di visualizzazione dell'applicazione controlla l'aspetto di tutte le descrizioni comandi.

```
BOOL m_bVislManagerTheme;
```

### <a name="remarks"></a>Commenti

Se `m_bVislManagerTheme` è true, ogni descrizione comando richiede un nuovo [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) dal gestore visiva dell'applicazione prima che vengano visualizzati sullo schermo e usa i valori in tale oggetto per determinarne l'aspetto. Gli altri membri di [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) vengono ignorati.

## <a name="cmfctooltipinfooperator"></a><a name="operator_eq"></a> CMFCToolTipInfo:: operator =

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
CMFCToolTipInfo& operator=(CMFCToolTipInfo& src);
```

### <a name="parameters"></a>Parametri

in *src*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)<br/>
[Classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)
