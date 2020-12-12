---
description: 'Altre informazioni su: classe CMFCRibbonSlider'
title: Classe CMFCRibbonSlider
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider::CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetPos
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMax
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMin
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRegularSize
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetZoomIncrement
- AFXRIBBONSLIDER/CMFCRibbonSlider::HasZoomButtons
- AFXRIBBONSLIDER/CMFCRibbonSlider::OnDraw
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetPos
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetRange
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomButtons
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomIncrement
helpviewer_keywords:
- CMFCRibbonSlider [MFC], CMFCRibbonSlider
- CMFCRibbonSlider [MFC], GetPos
- CMFCRibbonSlider [MFC], GetRangeMax
- CMFCRibbonSlider [MFC], GetRangeMin
- CMFCRibbonSlider [MFC], GetRegularSize
- CMFCRibbonSlider [MFC], GetZoomIncrement
- CMFCRibbonSlider [MFC], HasZoomButtons
- CMFCRibbonSlider [MFC], OnDraw
- CMFCRibbonSlider [MFC], SetPos
- CMFCRibbonSlider [MFC], SetRange
- CMFCRibbonSlider [MFC], SetZoomButtons
- CMFCRibbonSlider [MFC], SetZoomIncrement
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
ms.openlocfilehash: d125afdf961d97c0501742acdc75d7802c7e104d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321734"
---
# <a name="cmfcribbonslider-class"></a>Classe CMFCRibbonSlider

La `CMFCRibbonSlider` classe implementa un controllo dispositivo di scorrimento che è possibile aggiungere a una barra multifunzione o a una barra di stato della barra multifunzione. Il controllo dispositivo di scorrimento della barra multifunzione è simile ai dispositivi di scorrimento dello zoom visualizzati nelle applicazioni di Office 2007.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonSlider : public CMFCRibbonBaseElement
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonSlider:: CMFCRibbonSlider](#cmfcribbonslider)|Costruisce e Inizializza un controllo dispositivo di scorrimento della barra multifunzione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonSlider:: GetPos](#getpos)|Restituisce la posizione corrente del controllo dispositivo di scorrimento.|
|[CMFCRibbonSlider:: GetRangeMax](#getrangemax)|Restituisce il valore massimo del dispositivo di scorrimento.|
|[CMFCRibbonSlider:: GetRangeMin](#getrangemin)|Restituisce il valore minimo del dispositivo di scorrimento.|
|[CMFCRibbonSlider:: GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. Esegue l'override di [CMFCRibbonBaseElement:: GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).|
|[CMFCRibbonSlider:: GetZoomIncrement](#getzoomincrement)|Restituisce la dimensione dell'incremento dello zoom per il controllo dispositivo di scorrimento.|
|[CMFCRibbonSlider:: HasZoomButtons](#haszoombuttons)|Specifica se il dispositivo di scorrimento dispone di pulsanti dello zoom.|
|[CMFCRibbonSlider:: onpare](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. Esegue l'override di [CMFCRibbonBaseElement:: onpare](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).|
|[CMFCRibbonSlider:: SetPos](#setpos)|Imposta la posizione corrente del controllo dispositivo di scorrimento.|
|[CMFCRibbonSlider:: SetRange](#setrange)|Specifica l'intervallo del controllo dispositivo di scorrimento impostando i valori minimo e massimo.|
|[CMFCRibbonSlider:: SetZoomButtons](#setzoombuttons)|Consente di visualizzare o nascondere i pulsanti dello zoom.|
|[CMFCRibbonSlider:: SetZoomIncrement](#setzoomincrement)|Imposta la dimensione dell'incremento dello zoom per il controllo dispositivo di scorrimento.|

## <a name="remarks"></a>Commenti

È possibile usare il `SetRange` metodo per configurare l'intervallo di incrementi di zoom per il dispositivo di scorrimento. È possibile impostare la posizione corrente del dispositivo di scorrimento usando il `SetPos` metodo.

È possibile visualizzare i pulsanti di zoom circolari sul lato sinistro e destro del controllo Slider usando il `SetZoomButtons` metodo. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale, il pulsante di zoom a sinistra Visualizza un segno meno e il pulsante di zoom destro Visualizza un segno più.

Il `SetZoomIncrement` metodo definisce l'incremento da aggiungere o sottrarre dalla posizione corrente quando un utente fa clic sui pulsanti dello zoom.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi della `CMFCRibbonSlider` classe per impostare le proprietà del dispositivo di scorrimento. Nell'esempio viene illustrato come costruire un `CMFCRibbonSlider` oggetto, visualizzare i pulsanti dello zoom, impostare la posizione corrente del controllo dispositivo di scorrimento e impostare l'intervallo di valori per il controllo dispositivo di scorrimento.

[!code-cpp[NVC_MFC_RibbonApp#12](../../mfc/reference/codesnippet/cpp/cmfcribbonslider-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonslider. h

## <a name="cmfcribbonslidercmfcribbonslider"></a><a name="cmfcribbonslider"></a> CMFCRibbonSlider:: CMFCRibbonSlider

Costruisce un dispositivo di scorrimento della barra multifunzione.

```
CMFCRibbonSlider(
    UINT nID,
    int nWidth=100);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in ID dispositivo di scorrimento.

[in]. *nWidth* Larghezza del dispositivo di scorrimento in pixel.

### <a name="remarks"></a>Commenti

Costruisce un dispositivo di scorrimento della barra multifunzione che è *nWidth* pixel di larghezza nella categoria del pannello in cui viene aggiunto il dispositivo di scorrimento. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale.

## <a name="cmfcribbonslidergetpos"></a><a name="getpos"></a> CMFCRibbonSlider:: GetPos

Restituisce la posizione corrente del controllo dispositivo di scorrimento.

```
int GetPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione corrente del controllo dispositivo di scorrimento, che è una posizione rispetto all'inizio del dispositivo di scorrimento.

## <a name="cmfcribbonslidergetrangemax"></a><a name="getrangemax"></a> CMFCRibbonSlider:: GetRangeMax

Ottiene l'incremento massimo del dispositivo di scorrimento che può essere spostata dal dispositivo di scorrimento sul controllo dispositivo di scorrimento.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Incremento massimo del dispositivo di scorrimento che può essere spostata dal dispositivo di scorrimento sul controllo dispositivo di scorrimento.

## <a name="cmfcribbonslidergetrangemin"></a><a name="getrangemin"></a> CMFCRibbonSlider:: GetRangeMin

Restituisce l'incremento minimo che il dispositivo di scorrimento può spostare sul controllo dispositivo di scorrimento.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Incremento minimo di spostamento del dispositivo di scorrimento sul controllo dispositivo di scorrimento.

## <a name="cmfcribbonslidergetregularsize"></a><a name="getregularsize"></a> CMFCRibbonSlider:: GetRegularSize

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonslidergetzoomincrement"></a><a name="getzoomincrement"></a> CMFCRibbonSlider:: GetZoomIncrement

Ottenere l'incremento dello zoom per il controllo dispositivo di scorrimento.

```
int GetZoomIncrement() const;
```

### <a name="return-value"></a>Valore restituito

Incremento dello zoom per il controllo dispositivo di scorrimento.

## <a name="cmfcribbonsliderhaszoombuttons"></a><a name="haszoombuttons"></a> CMFCRibbonSlider:: HasZoomButtons

Specifica se il dispositivo di scorrimento dispone di pulsanti dello zoom.

```
BOOL HasZoomButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il dispositivo di scorrimento ha pulsanti di zoom; In caso contrario, FALSE.

## <a name="cmfcribbonsliderondraw"></a><a name="ondraw"></a> CMFCRibbonSlider:: onpare

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonslidersetpos"></a><a name="setpos"></a> CMFCRibbonSlider:: SetPos

Imposta la posizione corrente del controllo dispositivo di scorrimento.

```cpp
void SetPos(
    int nPos,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
in Specifica la posizione da impostare per il dispositivo di scorrimento. La posizione è relativa all'inizio del dispositivo di scorrimento.

*bRedraw*<br/>
in Se TRUE, il dispositivo di scorrimento verrà ridisegnato.

## <a name="cmfcribbonslidersetrange"></a><a name="setrange"></a> CMFCRibbonSlider:: SetRange

Impostare l'intervallo di valori per il controllo dispositivo di scorrimento.

```cpp
void SetRange(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
in Specifica il valore minimo del controllo dispositivo di scorrimento.

*nMax*<br/>
in Specifica il valore massimo del controllo dispositivo di scorrimento.

### <a name="remarks"></a>Commenti

Specifica l'intervallo di valori per il controllo dispositivo di scorrimento impostando i valori minimo e massimo.

## <a name="cmfcribbonslidersetzoombuttons"></a><a name="setzoombuttons"></a> CMFCRibbonSlider:: SetZoomButtons

Visualizzare o nascondere i pulsanti dello zoom.

```cpp
void SetZoomButtons(BOOL bSet=TRUE);
```

### <a name="parameters"></a>Parametri

[in]. *bSet* TRUE per visualizzare i pulsanti dello zoom; FALSE per nasconderle.

## <a name="cmfcribbonslidersetzoomincrement"></a><a name="setzoomincrement"></a> CMFCRibbonSlider:: SetZoomIncrement

Imposta l'incremento dello zoom per il controllo dispositivo di scorrimento.

```cpp
void SetZoomIncrement(int nZoomIncrement);
```

### <a name="parameters"></a>Parametri

*nZoomIncrement*<br/>
in Specifica l'incremento dello zoom del controllo dispositivo di scorrimento.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)
