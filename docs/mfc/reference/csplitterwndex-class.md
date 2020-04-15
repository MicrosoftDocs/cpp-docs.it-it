---
title: Classe CSplitterWndEx
ms.date: 11/04/2016
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
helpviewer_keywords:
- CSplitterWndEx [MFC], OnDrawSplitter
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
ms.openlocfilehash: d7952e3082bf68cff7ad9ba218073081ee522320
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363915"
---
# <a name="csplitterwndex-class"></a>Classe CSplitterWndEx

Rappresenta una finestra con separatore personalizzata.

## <a name="syntax"></a>Sintassi

```
class CSplitterWndEx : public CSplitterWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CSplitterWndEx::CSplitterWndEx`|Costruttore predefinito.|
|`CSplitterWndEx::~CSplitterWndEx`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Chiamato dal framework per disegnare una finestra con separatore. (Esegue l'override di [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|

## <a name="remarks"></a>Osservazioni

Eseguire `OnDrawSplitter` l'override del metodo per personalizzare l'aspetto dei componenti grafici di una finestra con separatore.

La `CSplitterWndEx` classe viene utilizzata insieme ai metodi [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox)e [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) , implementati da un gestore visualizzazione. Per fare in modo che un gestore visualizzazione disegni una `CSplitterWnd` finestra `CSplitterWndEx` con separatore nell'applicazione, sostituire le dichiarazioni della classe con la classe . Per le applicazioni finestra cornice, la classe della finestra con separatore viene dichiarata nella classe CMainFrame che si trova in mainfrm.h. Per un esempio, `OutlookDemo` vedere l'esempio nella directory Samples.For an example, see the sample in the Samples directory.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

[CCmdTarget](ccmdtarget-class.md)

[CWnd](cwnd-class.md)

[CSplitterWnd](csplitterwnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsplitterwndex.h

## <a name="csplitterwndexondrawsplitter"></a><a name="ondrawsplitter"></a>CSplitterWndEx::OnDrawSplitter

Chiamato dal framework per disegnare una finestra con separatore.

```
virtual void OnDrawSplitter(
   CDC* pDC,
   ESplitType nType,
   const CRect& rect
);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo. Se questo parametro è NULL, il framework ridisegna la finestra attiva.

*nType*<br/>
[in] Uno dei `CSplitterWnd::ESplitType` valori di enumerazione che specifica l'elemento della finestra di divisione da disegnare. I valori validi sono `splitBox`, `splitBar`, `splitIntersection` e `splitBorder`.

*Rect*<br/>
[in] Rettangolo di delimitazione che specifica le dimensioni e la posizione in cui disegnare l'elemento della finestra con separatore specificato.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../hierarchy-chart.md)<br/>
[Classi](mfc-classes.md)<br/>
[Classe CSplitterWnd](csplitterwnd-class.md)<br/>
[CMFCVisualManager (classe)](cmfcvisualmanager-class.md)
