---
description: 'Altre informazioni su: classe CMFCRibbonProgressBar'
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
ms.openlocfilehash: b4e91a604386a57aa7cac59294c569635583304c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321761"
---
# <a name="cmfcribbonprogressbar-class"></a>Classe CMFCRibbonProgressBar

Implementa un controllo che indica visivamente lo stato di avanzamento di un'operazione di lunga durata.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonProgressBar : public CMFCRibbonBaseElement
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonProgressBar:: CMFCRibbonProgressBar](#cmfcribbonprogressbar)|Costruisce e inizializza un oggetto `CMFCRibbonProgressBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonProgressBar:: GetPos](#getpos)|Restituisce lo stato corrente.|
|[CMFCRibbonProgressBar:: GetRangeMax](#getrangemax)|Restituisce il valore massimo dell'intervallo corrente.|
|[CMFCRibbonProgressBar:: GetRangeMin](#getrangemin)|Restituisce il valore minimo dell'intervallo corrente.|
|[CMFCRibbonProgressBar:: GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. Esegue l'override di [CMFCRibbonBaseElement:: GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).|
|[CMFCRibbonProgressBar:: IsInfiniteMode](#isinfinitemode)|Specifica se l'indicatore di stato funziona in modalità infinita.|
|[CMFCRibbonProgressBar:: onpare](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. Esegue l'override di [CMFCRibbonBaseElement:: onpare](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).|
|[CMFCRibbonProgressBar:: SetInfiniteMode](#setinfinitemode)|Imposta l'indicatore di stato per il funzionamento in modalità infinita.|
|[CMFCRibbonProgressBar:: SetPos](#setpos)|Imposta lo stato di avanzamento corrente.|
|[CMFCRibbonProgressBar:: SetRange](#setrange)|Imposta i valori minimo e massimo.|

## <a name="remarks"></a>Commenti

Un oggetto `CMFCRibbonProgressBar` può funzionare in due modalità: normale e infinita. In modalità normale, l'indicatore di stato viene riempito da sinistra verso destra e si arresta quando raggiunge il valore massimo. In modalità infinita, l'indicatore di stato viene riempito ripetutamente dal valore minimo al valore massimo. È possibile utilizzare la modalità infinita per indicare che un'operazione è in corso, ma che l'ora di completamento è sconosciuta.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonProgressBar` . Nell'esempio viene illustrato come impostare l'indicatore di stato per il funzionamento in modalità infinita (in cui il tempo di completamento di un'operazione è sconosciuto), impostare i valori minimo e massimo per l'indicatore di stato e impostare la posizione corrente dell'indicatore di stato. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#11](../../mfc/reference/codesnippet/cpp/cmfcribbonprogressbar-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonProgressBar. h

## <a name="cmfcribbonprogressbarcmfcribbonprogressbar"></a><a name="cmfcribbonprogressbar"></a> CMFCRibbonProgressBar:: CMFCRibbonProgressBar

Costruisce e Inizializza un oggetto [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md) .

```
CMFCRibbonProgressBar();

CMFCRibbonProgressBar(
    UINT nID,
    int nWidth = 90,
    int nHeight = 22);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in Specifica l'ID di comando per l'indicatore di stato della barra multifunzione.

*nWidth*<br/>
in Specifica la larghezza, in pixel, dell'indicatore di stato della barra multifunzione.

*nHeight*<br/>
in Specifica l'altezza, in pixel, dell'indicatore di stato della barra multifunzione.

## <a name="cmfcribbonprogressbargetpos"></a><a name="getpos"></a> CMFCRibbonProgressBar:: GetPos

Restituisce la posizione corrente dell'indicatore di stato.

```
int GetPos () const;
```

### <a name="return-value"></a>Valore restituito

Valore che rappresenta la posizione corrente dell'indicatore di stato.

### <a name="remarks"></a>Commenti

L'intervallo da impostare deve essere compreso nell'intervallo specificato dal metodo [CMFCRibbonProgressBar:: SetRange](#setrange) .

## <a name="cmfcribbonprogressbargetrangemax"></a><a name="getrangemax"></a> CMFCRibbonProgressBar:: GetRangeMax

Restituisce il valore massimo corrente dell'indicatore di stato.

```
int GetRangeMax() const;
```

### <a name="return-value"></a>Valore restituito

Valore massimo dell'intervallo corrente.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonprogressbargetrangemin"></a><a name="getrangemin"></a> CMFCRibbonProgressBar:: GetRangeMin

Restituisce il valore dell'intervallo minimo corrente dell'indicatore di stato.

```
int GetRangeMin() const;
```

### <a name="return-value"></a>Valore restituito

Valore minimo dell'intervallo corrente.

## <a name="cmfcribbonprogressbargetregularsize"></a><a name="getregularsize"></a> CMFCRibbonProgressBar:: GetRegularSize

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonprogressbarisinfinitemode"></a><a name="isinfinitemode"></a> CMFCRibbonProgressBar:: IsInfiniteMode

Specifica se l'indicatore di stato funziona in modalità infinita.

```
BOOL IsInfiniteMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'indicatore di stato è in modalità infinita; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

In modalità infinita, l'indicatore di stato riempie ripetutamente il valore minimo rispetto al valore massimo. È possibile utilizzare la modalità infinita per indicare che un'operazione è in corso, ma che l'ora di completamento è sconosciuta.

## <a name="cmfcribbonprogressbarondraw"></a><a name="ondraw"></a> CMFCRibbonProgressBar:: onpare

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonprogressbarsetinfinitemode"></a><a name="setinfinitemode"></a> CMFCRibbonProgressBar:: SetInfiniteMode

Imposta l'indicatore di stato per il funzionamento in modalità infinita.

```cpp
void SetInfiniteMode(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
in TRUE per specificare che l'indicatore di stato è in modalità infinita; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

In genere, se l'indicatore di stato è in modalità infinita, indica all'utente che un'operazione è in corso, ma che l'ora di completamento è sconosciuta. Pertanto, l'indicatore di stato si riempie ripetutamente dal valore minimo al valore massimo.

## <a name="cmfcribbonprogressbarsetpos"></a><a name="setpos"></a> CMFCRibbonProgressBar:: SetPos

Imposta la posizione corrente dell'indicatore di stato.

```cpp
void SetPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
in Specifica la posizione in cui è impostato l'indicatore di stato.

*bRedraw*<br/>
in Specifica se l'indicatore di stato deve essere ridisegnato.

### <a name="remarks"></a>Commenti

L'intervallo da impostare deve essere compreso nell'intervallo specificato dal metodo [CMFCRibbonProgressBar:: SetRange](#setrange) .

## <a name="cmfcribbonprogressbarsetrange"></a><a name="setrange"></a> CMFCRibbonProgressBar:: SetRange

Imposta i valori minimo e massimo per l'indicatore di stato.

```cpp
void SetRange(
    int nMin,
    int nMax);
```

### <a name="parameters"></a>Parametri

*nMin*<br/>
in Specifica il valore minimo dell'intervallo.

*nMax*<br/>
in Specifica il valore massimo dell'intervallo.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per definire l'intervallo dell'indicatore di stato impostando i valori minimo e massimo.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
