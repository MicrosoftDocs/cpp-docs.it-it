---
title: CMFCToolTipInfo (classe)
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
ms.openlocfilehash: 000a2fd33928e59685efa6f145406542a4935819
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377342"
---
# <a name="cmfctooltipinfo-class"></a>CMFCToolTipInfo (classe)

Memorizza informazioni sull'aspetto visivo delle descrizioni comandi.

## <a name="syntax"></a>Sintassi

```
class CMFCToolTipInfo
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolTipInfo::operator=](#operator_eq)||

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolTipInfo::m_bBalloonTooltip](#m_bballoontooltip)|Variabile booleana che indica se la descrizione comandi ha l'aspetto di un fumetto.|
|[CMFCToolTipInfo::m_bBoldLabel](#m_bboldlabel)|Una variabile booleana che indica se le etichette della descrizione comandi vengono visualizzate in grassetto.|
|[CMFCToolTipInfo::m_bDrawDescription](#m_bdrawdescription)|Variabile booleana che indica se la descrizione comando contiene una descrizione.|
|[CMFCToolTipInfo::m_bDrawIcon](#m_bdrawicon)|Variabile booleana che indica se la descrizione comando contiene un'icona.|
|[CMFCToolTipInfo::m_bDrawSeparator](#m_bdrawseparator)|Variabile booleana che indica se viene visualizzato un separatore tra l'etichetta e la descrizione della descrizione comando.|
|[CMFCToolTipInfo::m_bRoundedCorners](#m_broundedcorners)|Variabile booleana che indica se la descrizione comando ha gli angoli arrotondati.|
|[CMFCToolTipInfo::m_bVislManagerTheme](#m_bvislmanagertheme)|Variabile booleana che indica se l'aspetto della descrizione comandi deve essere controllato da un gestore visualizzazione (vedere [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)).|
|[CMFCToolTipInfo::m_clrBorder](#m_clrborder)|Colore del bordo della descrizione comando.|
|[CMFCToolTipInfo::m_clrFill](#m_clrfill)|Colore dello sfondo della descrizione comando.|
|[CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient)|Colore del riempimento sfumato nella descrizione comandi.|
|[CMFCToolTipInfo::m_clrText](#m_clrtext)|Colore del testo nella descrizione comandi.|
|[CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle)|Angolo del riempimento sfumato nella descrizione comandi.|
|[CMFCToolTipInfo::m_nMaxDescrWidth](#m_nmaxdescrwidth)|Larghezza massima possibile, in pixel, del testo nella descrizione comandi.|

## <a name="remarks"></a>Osservazioni

Utilizzare [cMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) `CMFCToolTipInfo`Class , , e [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) insieme per implementare descrizioni comandi personalizzate nell'applicazione. Per un esempio di come utilizzare queste classi di descrizione comandi, vedere il [CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md) argomento.

## <a name="example"></a>Esempio

L'esempio di codice seguente illustra come impostare i valori delle variabili di membro nella classe `CMFCToolTipInfo`.

[!code-cpp[NVC_MFC_RibbonApp#42](../../mfc/reference/codesnippet/cpp/cmfctooltipinfo-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipctrl.h

## <a name="cmfctooltipinfom_bballoontooltip"></a><a name="m_bballoontooltip"></a>CMFCToolTipInfo::m_bBalloonTooltip

Specifica lo stile di visualizzazione di tutte le descrizioni comandi.

```
BOOL m_bBalloonTooltip;
```

### <a name="remarks"></a>Osservazioni

TRUE indica che le descrizioni comandi utilizzano lo stile bollatura, FALSE indica che le descrizioni comandi utilizzano lo stile rettangolare.

## <a name="cmfctooltipinfom_bboldlabel"></a><a name="m_bboldlabel"></a>CMFCToolTipInfo::m_bBoldLabel

Specifica se il tipo di carattere del testo della descrizione comando è in grassetto.

```
BOOL m_bBoldLabel;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare il testo della descrizione comando in grassetto o FALSE per visualizzare le etichette delle descrizioni comandi con un tipo di carattere non in grassetto.

## <a name="cmfctooltipinfom_bdrawdescription"></a><a name="m_bdrawdescription"></a>CMFCToolTipInfo::m_bDrawDescription

Specifica se ogni descrizione comando visualizza il testo descrittivo.

```
BOOL m_bDrawDescription;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare la descrizione o SU FALSE per nasconderla. È possibile specificare la descrizione in una descrizione comando chiamando [CMFCToolTipCtrl::SetDescription](../../mfc/reference/cmfctooltipctrl-class.md#setdescription)

## <a name="cmfctooltipinfom_bdrawicon"></a><a name="m_bdrawicon"></a>CMFCToolTipInfo::m_bDrawIcon

Specifica se tutte le descrizioni comandi visualizzano icone.

```
BOOL m_bDrawIcon;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare un'icona in ogni descrizione comando o FALSE per visualizzare le descrizioni comandi senza icone.

## <a name="cmfctooltipinfom_bdrawseparator"></a><a name="m_bdrawseparator"></a>CMFCToolTipInfo::m_bDrawSeparator

Specifica se ogni descrizione comando dispone di un separatore tra l'etichetta e la descrizione.

```
BOOL m_bDrawSeparator;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare il separatore tra l'etichetta e la descrizione della descrizione comando oppure su FALSE per visualizzare le descrizioni comandi senza separatore.

## <a name="cmfctooltipinfom_broundedcorners"></a><a name="m_broundedcorners"></a>CMFCToolTipInfo::m_bRoundedCorners

Specifica se tutte le descrizioni comandi hanno angoli arrotondati.

```
BOOL m_bRoundedCorners;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare gli angoli arrotondati sulle descrizioni comandi o SU per visualizzare gli angoli rettangolari nelle descrizioni comandi.

## <a name="cmfctooltipinfom_clrborder"></a><a name="m_clrborder"></a>CMFCToolTipInfo::m_clrBorder

Specifica il colore dei bordi in tutte le descrizioni comandi.

```
COLORREF m_clrBorder;
```

## <a name="cmfctooltipinfom_clrfill"></a><a name="m_clrfill"></a>CMFCToolTipInfo::m_clrFill

Specifica il colore degli sfondi della descrizione comandi.

```
COLORREF m_clrFill;
```

### <a name="remarks"></a>Osservazioni

Se [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) è -1, il `m_clrFill`colore di sfondo della descrizione comando è . In `m_clrFill` caso contrario, specifica il colore `m_clrFillGradient` dell'inizio della sfumatura e il colore della fine della sfumatura. [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.

## <a name="cmfctooltipinfom_clrfillgradient"></a><a name="m_clrfillgradient"></a>CMFCToolTipInfo::m_clrFillGradient

Specifica il colore finale per uno sfondo sfumato per le descrizioni comandi.

```
COLORREF m_clrFillGradient;
```

### <a name="remarks"></a>Osservazioni

Se `m_clrFillGradient` è -1, non vi è alcungradiento. In caso contrario, il colore iniziale della sfumatura viene specificato da `m_clrFillGradient` [CMFCToolTipInfo::m_clrFill](#m_clrfill) e il colore della fine della sfumatura è specificato da . [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.

## <a name="cmfctooltipinfom_clrtext"></a><a name="m_clrtext"></a>CMFCToolTipInfo::m_clrText

Specifica il colore del testo di tutte le descrizioni comandi.

```
COLORREF m_clrText;
```

## <a name="cmfctooltipinfom_ngradientangle"></a><a name="m_ngradientangle"></a>CMFCToolTipInfo::m_nGradientAngle

Specifica l'angolo di disegno di una sfumatura sullo sfondo delle descrizioni comandi.

```
int m_nGradientAngle;
```

### <a name="remarks"></a>Osservazioni

`m_nGradientAngle`specifica l'angolo, in gradi, in base all'offset orizzontale della sfumatura sullo sfondo delle descrizioni comandi. Se `m_nGradientAngle` è 0, il gradiente viene disegnato da sinistra a destra. Se `m_nGradientAngle` è compreso tra 1 e 360, il gradiente ruota in senso orario di quel numero di gradi. Se `m_nGradientAngle` è -1, che è il valore predefinito, la sfumatura viene disegnata dall'alto verso il basso. Equivale all'impostazione `m_nGradientAngle` su 90.

[CMFCToolTipInfo::m_clrFill](#m_clrfill) `clrFill` specifica il colore dell'inizio della sfumatura e [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) `clrFillGradient` specifica il colore della fine della sfumatura. Se `m_clrFillGradient` è -1, non vi è alcungradiento.

## <a name="cmfctooltipinfom_nmaxdescrwidth"></a><a name="m_nmaxdescrwidth"></a>CMFCToolTipInfo::m_nMaxDescrWidth

Specifica la larghezza massima della descrizione visualizzata in ogni descrizione comando. Se la larghezza della descrizione supera il valore specificato, il testo viene mandato a capo.

```
int m_nMaxDescrWidth;
```

## <a name="cmfctooltipinfom_bvislmanagertheme"></a><a name="m_bvislmanagertheme"></a>CMFCToolTipInfo::m_bVislManagerTheme

Specifica se il gestore visualizzazione dell'applicazione controlla l'aspetto di tutte le descrizioni comandi.

```
BOOL m_bVislManagerTheme;
```

### <a name="remarks"></a>Osservazioni

Se `m_bVislManagerTheme` è TRUE, ogni descrizione comando richiede un nuovo [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) dal gestore visualizzazione dell'applicazione prima che vengano visualizzati sullo schermo e utilizza i valori in tale oggetto per determinarne l'aspetto. Gli altri membri di [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) vengono ignorati.

## <a name="cmfctooltipinfooperator"></a><a name="operator_eq"></a>CMFCToolTipInfo::operatore

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
CMFCToolTipInfo& operator=(CMFCToolTipInfo& src);
```

### <a name="parameters"></a>Parametri

[in] *src*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)<br/>
[CMFCToolTipCtrl (classe)](../../mfc/reference/cmfctooltipctrl-class.md)
