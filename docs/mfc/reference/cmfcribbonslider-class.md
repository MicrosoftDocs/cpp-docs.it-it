---
title: CMFCRibbonSlider (classe)
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
ms.openlocfilehash: f2a05ca1433ca3a44b0459360e3f09fe7a274c68
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368838"
---
# <a name="cmfcribbonslider-class"></a>CMFCRibbonSlider (classe)

La `CMFCRibbonSlider` classe implementa un controllo dispositivo di scorrimento che è possibile aggiungere a una barra multifunzione o a una barra di stato della barra multifunzione. Il controllo dispositivo di scorrimento della barra multifunzione è simile ai dispositivi di scorrimento dello zoom visualizzati nelle applicazioni di Office 2007.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonSlider : public CMFCRibbonBaseElement
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonSlider::CMFCRibbonSlider](#cmfcribbonslider)|Costruisce e inizializza un controllo dispositivo di scorrimento della barra multifunzione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonSlider::GetPos](#getpos)|Restituisce la posizione corrente del controllo dispositivo di scorrimento.|
|[CMFCRibbonSlider::GetRangeMax](#getrangemax)|Restituisce il valore massimo del dispositivo di scorrimento.|
|[CMFCRibbonSlider::GetRangeMin](#getrangemin)|Restituisce il valore minimo del dispositivo di scorrimento.|
|[CMFCRibbonSlider::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. (Esegue l'override [di CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonSlider::Get'oomIncrement](#getzoomincrement)|Restituisce la dimensione dell'incremento dello zoom per il controllo dispositivo di scorrimento.|
|[CMFCRibbonSlider::HasoomButtons](#haszoombuttons)|Specifica se il dispositivo di scorrimento dispone di pulsanti di zoom.|
|[CMFCRibbonSlider::OnDraw](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. (Esegue l'override di [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|
|[CMFCRibbonSlider::SetPos](#setpos)|Imposta la posizione corrente del dispositivo di scorrimento.|
|[CMFCRibbonSlider::SetRange](#setrange)|Specifica l'intervallo del dispositivo di scorrimento impostando i valori minimo e massimo.|
|[CMFCRibbonSlider::Set-oomButtons](#setzoombuttons)|Mostra o nasconde i pulsanti di zoom.|
|[CMFCRibbonSlider::Set'oomIncrement](#setzoomincrement)|Imposta le dimensioni dell'incremento dello zoom per il controllo dispositivo di scorrimento.|

## <a name="remarks"></a>Osservazioni

È possibile `SetRange` utilizzare il metodo per configurare l'intervallo di incrementi di zoom per il dispositivo di scorrimento. È possibile impostare la posizione `SetPos` corrente del dispositivo di scorrimento utilizzando il metodo .

È possibile visualizzare i pulsanti di zoom circolari `SetZoomButtons` sul lato sinistro e destro del controllo dispositivo di scorrimento utilizzando il metodo . Per impostazione predefinita, il dispositivo di scorrimento è orizzontale, il pulsante di zoom sinistro visualizza un segno meno e il pulsante di zoom destro visualizza un segno più.

Il `SetZoomIncrement` metodo definisce l'incremento da aggiungere o sottrarre dalla posizione corrente quando un utente fa clic sui pulsanti di zoom.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCRibbonSlider` utilizzare vari metodi nella classe per impostare le proprietà del dispositivo di scorrimento. Nell'esempio viene illustrato `CMFCRibbonSlider` come costruire un oggetto, visualizzare i pulsanti di zoom, impostare la posizione corrente del dispositivo di scorrimento e impostare l'intervallo di valori per il controllo dispositivo di scorrimento.

[!code-cpp[NVC_MFC_RibbonApp#12](../../mfc/reference/codesnippet/cpp/cmfcribbonslider-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonslider.h

## <a name="cmfcribbonslidercmfcribbonslider"></a><a name="cmfcribbonslider"></a>CMFCRibbonSlider::CMFCRibbonSlider

Creare un dispositivo di scorrimento della barra multifunzione.

```
CMFCRibbonSlider(
    UINT nID,
    int nWidth=100);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] ID dispositivo di scorrimento.

[in]. *nLarghezza* Larghezza del cursore in pixel.

### <a name="remarks"></a>Osservazioni

Costruisce un dispositivo di scorrimento della barra multifunzione di larghezza *nWidth* pixel nella categoria del gruppo in cui viene aggiunto il dispositivo di scorrimento. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale.

## <a name="cmfcribbonslidergetpos"></a><a name="getpos"></a>CMFCRibbonSlider::GetPos

Restituisce la posizione corrente del controllo dispositivo di scorrimento.

```
int GetPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione corrente del dispositivo di scorrimento, ovvero una posizione relativa all'inizio del dispositivo di scorrimento.

## <a name="cmfcribbonslidergetrangemax"></a><a name="getrangemax"></a>CMFCRibbonSlider::GetRangeMax

Ottiene l'incremento massimo del dispositivo di scorrimento che il dispositivo di scorrimento può spostare sul dispositivo di scorrimento.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Incremento massimo del dispositivo di scorrimento che il dispositivo di scorrimento può spostare sul dispositivo di scorrimento.

## <a name="cmfcribbonslidergetrangemin"></a><a name="getrangemin"></a>CMFCRibbonSlider::GetRangeMin

Restituisce l'incremento minimo che il dispositivo di scorrimento può spostare sul dispositivo di scorrimento.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Incremento minimo che il dispositivo di scorrimento può spostare sul dispositivo di scorrimento.

## <a name="cmfcribbonslidergetregularsize"></a><a name="getregularsize"></a>CMFCRibbonSlider::GetRegularSize

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonslidergetzoomincrement"></a><a name="getzoomincrement"></a>CMFCRibbonSlider::Get'oomIncrement

Ottenere l'incremento dello zoom per il controllo dispositivo di scorrimento.

```
int GetZoomIncrement() const;
```

### <a name="return-value"></a>Valore restituito

Incremento dello zoom per il controllo dispositivo di scorrimento.

## <a name="cmfcribbonsliderhaszoombuttons"></a><a name="haszoombuttons"></a>CMFCRibbonSlider::HasoomButtons

Specifica se il dispositivo di scorrimento dispone di pulsanti di zoom.

```
BOOL HasZoomButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il dispositivo di scorrimento dispone di pulsanti di zoom; FALSE in caso contrario.

## <a name="cmfcribbonsliderondraw"></a><a name="ondraw"></a>CMFCRibbonSlider::OnDraw

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonslidersetpos"></a><a name="setpos"></a>CMFCRibbonSlider::SetPos

Impostare la posizione corrente del dispositivo di scorrimento.

```
void SetPos(
    int nPos,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
[in] Specifica la posizione da impostare per il dispositivo di scorrimento. La posizione è relativa all'inizio del cursore.

*bRedraw*<br/>
[in] Se TRUE, il dispositivo di scorrimento verrà ridisegnato.

## <a name="cmfcribbonslidersetrange"></a><a name="setrange"></a>CMFCRibbonSlider::SetRange

Impostare l'intervallo di valori per il dispositivo di scorrimento.

```
void SetRange(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
[in] Specifica il valore minimo del dispositivo di scorrimento.

*Nmax*<br/>
[in] Specifica il valore massimo del dispositivo di scorrimento.

### <a name="remarks"></a>Osservazioni

Specifica l'intervallo di valori per il dispositivo di scorrimento impostando i valori minimo e massimo.

## <a name="cmfcribbonslidersetzoombuttons"></a><a name="setzoombuttons"></a>CMFCRibbonSlider::Set-oomButtons

Visualizzare o nascondere i pulsanti di zoom.

```
void SetZoomButtons(BOOL bSet=TRUE);
```

### <a name="parameters"></a>Parametri

[in]. *bImpostazione* TRUE per visualizzare i pulsanti di zoom; FALSE per nasconderli.

## <a name="cmfcribbonslidersetzoomincrement"></a><a name="setzoomincrement"></a>CMFCRibbonSlider::Set'oomIncrement

Impostare l'incremento dello zoom per il controllo dispositivo di scorrimento.

```
void SetZoomIncrement(int nZoomIncrement);
```

### <a name="parameters"></a>Parametri

*nIncrementa di zoom*<br/>
[in] Specifica l'incremento dello zoom del controllo dispositivo di scorrimento.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonBaseElement (classe)](../../mfc/reference/cmfcribbonbaseelement-class.md)
