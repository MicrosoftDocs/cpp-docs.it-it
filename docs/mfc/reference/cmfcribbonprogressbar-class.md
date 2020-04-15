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
ms.openlocfilehash: 063f8ce560af84d350abc0114644f6a63f969f95
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368855"
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
|[CMFCRibbonProgressBar::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. (Esegue l'override [di CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonProgressBar::IsInfiniteMode](#isinfinitemode)|Specifica se l'indicatore di stato funziona in modalità infinita.|
|[CMFCRibbonProgressBar::OnDraw](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. (Esegue l'override di [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|
|[CMFCRibbonProgressBar::SetInfiniteMode](#setinfinitemode)|Imposta la barra di avanzamento in modo che funzioni in modalità infinita.|
|[CMFCRibbonProgressBar::SetPos](#setpos)|Imposta lo stato di avanzamento corrente.|
|[CMFCRibbonProgressBar::SetRange](#setrange)|Imposta i valori minimo e massimo.|

## <a name="remarks"></a>Osservazioni

A `CMFCRibbonProgressBar` può funzionare in due modalità: normale e infinita. In modalità normale, la barra di avanzamento viene riempita da sinistra a destra e si arresta quando raggiunge il valore massimo. In modalità infinita, l'indicatore di stato viene riempito ripetutamente dal valore minimo al valore massimo. È possibile utilizzare la modalità infinita per indicare che un'operazione è in corso, ma che il tempo di completamento è sconosciuto.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonProgressBar` . Nell'esempio viene illustrato come impostare l'indicatore di stato in modo che funzioni in modalità infinita (in cui il tempo di completamento di un'operazione è sconosciuto), impostare i valori minimo e massimo per l'indicatore di stato e impostare la posizione corrente dell'indicatore di stato. Questo frammento di codice fa parte dell'esempio Demo di [MS Office 2007.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_MSOffice2007Demo#11](../../mfc/reference/codesnippet/cpp/cmfcribbonprogressbar-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonProgressBar.h

## <a name="cmfcribbonprogressbarcmfcribbonprogressbar"></a><a name="cmfcribbonprogressbar"></a>CMFCRibbonProgressBar::CMFCRibbonProgressBar

Costruisce e inizializza un [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md) oggetto.

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

*nLarghezza*<br/>
[in] Specifica la larghezza, in pixel, della barra di avanzamento della barra multifunzione.

*nAltezza*<br/>
[in] Specifica l'altezza, in pixel, dell'indicatore di stato della barra multifunzione.

## <a name="cmfcribbonprogressbargetpos"></a><a name="getpos"></a>CMFCRibbonProgressBar::GetPos

Restituisce la posizione corrente dell'indicatore di stato.

```
int GetPos () const;
```

### <a name="return-value"></a>Valore restituito

Valore che rappresenta la posizione corrente dell'indicatore di stato.

### <a name="remarks"></a>Osservazioni

L'intervallo impostato deve essere compreso nell'intervallo specificato dal [CMFCRibbonProgressBar::SetRange](#setrange) metodo.

## <a name="cmfcribbonprogressbargetrangemax"></a><a name="getrangemax"></a>CMFCRibbonProgressBar::GetRangeMax

Restituisce il valore massimo corrente dell'indicatore di stato.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Valore massimo dell'intervallo corrente.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonprogressbargetrangemin"></a><a name="getrangemin"></a>CMFCRibbonProgressBar::GetRangeMin

Restituisce il valore dell'intervallo minimo corrente dell'indicatore di stato.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Valore minimo dell'intervallo corrente.

## <a name="cmfcribbonprogressbargetregularsize"></a><a name="getregularsize"></a>CMFCRibbonProgressBar::GetRegularSize

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonprogressbarisinfinitemode"></a><a name="isinfinitemode"></a>CMFCRibbonProgressBar::IsInfiniteMode

Specifica se l'indicatore di stato funziona in modalità infinita.

```
BOOL IsInfiniteMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe l'indicatore di stato è in modalità infinita. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In modalità infinita, la barra di avanzamento si riempie ripetutamente dal valore minimo al valore massimo. È possibile utilizzare la modalità infinita per indicare che un'operazione è in corso, ma che il tempo di completamento è sconosciuto.

## <a name="cmfcribbonprogressbarondraw"></a><a name="ondraw"></a>CMFCRibbonProgressBar::OnDraw

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonprogressbarsetinfinitemode"></a><a name="setinfinitemode"></a>CMFCRibbonProgressBar::SetInfiniteMode

Imposta la barra di avanzamento in modo che funzioni in modalità infinita.

```
void SetInfiniteMode(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bImpostazione*<br/>
[in] TRUE per specificare che l'indicatore di stato è in modalità infinita. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In genere, se l'indicatore di stato è in modalità infinita, indica all'utente che è in corso un'operazione, ma che il tempo di completamento è sconosciuto. Pertanto, la barra di avanzamento si riempie ripetutamente dal valore minimo al valore massimo.

## <a name="cmfcribbonprogressbarsetpos"></a><a name="setpos"></a>CMFCRibbonProgressBar::SetPos

Imposta la posizione corrente dell'indicatore di stato.

```
void SetPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
[in] Specifica la posizione in cui è impostata l'indicatore di stato.

*bRedraw*<br/>
[in] Specifica se l'indicatore di stato deve essere ridisegnato.

### <a name="remarks"></a>Osservazioni

L'intervallo impostato deve essere compreso nell'intervallo specificato dal [CMFCRibbonProgressBar::SetRange](#setrange) metodo.

## <a name="cmfcribbonprogressbarsetrange"></a><a name="setrange"></a>CMFCRibbonProgressBar::SetRange

Imposta i valori minimo e massimo per l'indicatore di stato.

```
void SetRange(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
[in] Specifica il valore minimo dell'intervallo.

*Nmax*<br/>
[in] Specifica il valore massimo dell'intervallo.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per definire l'intervallo dell'indicatore di stato impostando i valori minimo e massimo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonBaseElement (classe)](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
