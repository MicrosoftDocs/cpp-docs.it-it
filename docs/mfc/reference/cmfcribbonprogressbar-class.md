---
title: Classe CMFCRibbonProgressBar
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetPos
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRangeMax
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRangeMin
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRegularSize
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::IsInfiniteMode
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::OnDraw
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetInfiniteMode
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetPos
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetRange
helpviewer_keywords:
- CMFCRibbonProgressBar [MFC], CMFCRibbonProgressBar
- CMFCRibbonProgressBar [MFC], GetPos
- CMFCRibbonProgressBar [MFC], GetRangeMax
- CMFCRibbonProgressBar [MFC], GetRangeMin
- CMFCRibbonProgressBar [MFC], GetRegularSize
- CMFCRibbonProgressBar [MFC], IsInfiniteMode
- CMFCRibbonProgressBar [MFC], OnDraw
- CMFCRibbonProgressBar [MFC], SetInfiniteMode
- CMFCRibbonProgressBar [MFC], SetPos
- CMFCRibbonProgressBar [MFC], SetRange
ms.assetid: de3d9f2e-ed59-480e-aa7d-08a33ab36c67
ms.openlocfilehash: 626666a8f03a8312bd26fceca745f82ad1ab89b1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57285919"
---
# <a name="cmfcribbonprogressbar-class"></a>Classe CMFCRibbonProgressBar

Implementa un controllo che indica visivamente lo stato di avanzamento di un'operazione di lunga durata.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonProgressBar : public CMFCRibbonBaseElement
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonProgressBar::CMFCRibbonProgressBar](#cmfcribbonprogressbar)|Costruisce e inizializza un oggetto `CMFCRibbonProgressBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonProgressBar::GetPos](#getpos)|Restituisce lo stato di avanzamento corrente.|
|[CMFCRibbonProgressBar::GetRangeMax](#getrangemax)|Restituisce il valore massimo dell'intervallo corrente.|
|[CMFCRibbonProgressBar::GetRangeMin](#getrangemin)|Restituisce il valore minimo dell'intervallo corrente.|
|[CMFCRibbonProgressBar::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. (Esegue l'override [cmfcribbonbaseelement:: Getregularsize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonProgressBar::IsInfiniteMode](#isinfinitemode)|Specifica se l'indicatore di stato viene eseguito in modalità infinita.|
|[CMFCRibbonProgressBar::OnDraw](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. (Esegue l'override [cmfcribbonbaseelement:: OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|
|[CMFCRibbonProgressBar::SetInfiniteMode](#setinfinitemode)|Imposta l'indicatore di stato per l'utilizzo della modalità infinita.|
|[CMFCRibbonProgressBar::SetPos](#setpos)|Imposta lo stato di avanzamento corrente.|
|[CMFCRibbonProgressBar::SetRange](#setrange)|Imposta i valori minimi e massimo.|

## <a name="remarks"></a>Note

Oggetto `CMFCRibbonProgressBar` possono operare in due modalità: normale e infinito. In modalità normale, l'indicatore di stato viene riempita da sinistra a destra e si arresta quando raggiunge il valore massimo. In modalità infinita, l'indicatore di stato viene riempita ripetutamente dal valore minimo al valore massimo. È possibile usare la modalità infinita per indicare che è in corso un'operazione, ma che il tempo di completamento è sconosciuto.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonProgressBar` . Nell'esempio viene illustrato come impostare l'indicatore di stato per l'utilizzo della modalità infinita (in cui il tempo di completamento di un'operazione è sconosciuto), impostare i valori minimi e massimo per l'indicatore di stato e impostare la posizione corrente dell'indicatore di stato. Questo frammento di codice fa parte di [esempio di MS Office 2007 Demo](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#11](../../mfc/reference/codesnippet/cpp/cmfcribbonprogressbar-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonProgressBar.h

##  <a name="cmfcribbonprogressbar"></a>  CMFCRibbonProgressBar::CMFCRibbonProgressBar

Costruisce e Inizializza un [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md) oggetto.

```
CMFCRibbonProgressBar();

CMFCRibbonProgressBar(
    UINT nID,
    int nWidth = 90,
    int nHeight = 22);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] Specifica l'ID di comando per l'indicatore di stato della barra multifunzione.

*nWidth*<br/>
[in] Specifica la larghezza, in pixel, dell'indicatore di stato della barra multifunzione.

*nHeight*<br/>
[in] Specifica l'altezza, in pixel, dell'indicatore di stato della barra multifunzione.

##  <a name="getpos"></a>  CMFCRibbonProgressBar::GetPos

Restituisce la posizione corrente dell'indicatore di stato.

```
int GetPos () const;
```

### <a name="return-value"></a>Valore restituito

Un valore che rappresenta la posizione corrente dell'indicatore di stato.

### <a name="remarks"></a>Note

L'intervallo impostato deve essere compreso nell'intervallo specificato per il [CMFCRibbonProgressBar::SetRange](#setrange) (metodo).

##  <a name="getrangemax"></a>  CMFCRibbonProgressBar::GetRangeMax

Restituisce l'indicatore di stato corrente del valore massimo.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Il valore massimo dell'intervallo corrente.

### <a name="remarks"></a>Note

##  <a name="getrangemin"></a>  CMFCRibbonProgressBar::GetRangeMin

Restituisce l'indicatore di stato corrente del valore di intervallo minimo.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Il valore minimo dell'intervallo corrente.

##  <a name="getregularsize"></a>  CMFCRibbonProgressBar::GetRegularSize

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="isinfinitemode"></a>  CMFCRibbonProgressBar::IsInfiniteMode

Specifica se l'indicatore di stato viene eseguito in modalità infinita.

```
BOOL IsInfiniteMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'indicatore di stato è in modalità infinita. in caso contrario, FALSE.

### <a name="remarks"></a>Note

In modalità infinita, l'indicatore di stato riempie ripetutamente dal valore minimo al valore massimo. È possibile usare la modalità infinita per indicare che è in corso un'operazione, ma che il tempo di completamento è sconosciuto.

##  <a name="ondraw"></a>  CMFCRibbonProgressBar::OnDraw

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Note

##  <a name="setinfinitemode"></a>  CMFCRibbonProgressBar::SetInfiniteMode

Imposta l'indicatore di stato per l'utilizzo della modalità infinita.

```
void SetInfiniteMode(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
[in] TRUE per specificare che l'indicatore di stato è in modalità infinita. in caso contrario, FALSE.

### <a name="remarks"></a>Note

In genere, se l'indicatore di stato è in modalità infinita, lo segnala all'utente che è in corso un'operazione, ma che il tempo di completamento è sconosciuto. Di conseguenza, l'indicatore di stato riempie ripetutamente dal valore minimo al valore massimo.

##  <a name="setpos"></a>  CMFCRibbonProgressBar::SetPos

Imposta la posizione corrente dell'indicatore di stato.

```
void SetPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
[in] Specifica la posizione in cui è impostato l'indicatore di stato.

*bRedraw*<br/>
[in] Specifica se l'indicatore di stato deve essere ridisegnato.

### <a name="remarks"></a>Note

L'intervallo impostato deve essere compreso nell'intervallo specificato per il [CMFCRibbonProgressBar::SetRange](#setrange) (metodo).

##  <a name="setrange"></a>  CMFCRibbonProgressBar::SetRange

Imposta i valori minimi e massimo per l'indicatore di stato.

```
void SetRange(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
[in] Specifica il valore minimo dell'intervallo.

*nMax*<br/>
[in] Specifica il valore massimo dell'intervallo.

### <a name="remarks"></a>Note

Usare questo metodo per definire l'intervallo dell'indicatore di stato impostando i valori minimi e massimo.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
