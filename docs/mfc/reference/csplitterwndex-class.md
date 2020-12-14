---
description: 'Altre informazioni su: classe CSplitterWndEx'
title: Classe CSplitterWndEx
ms.date: 11/04/2016
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
helpviewer_keywords:
- CSplitterWndEx [MFC], OnDrawSplitter
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
ms.openlocfilehash: 357f650551871cc9768c8e4e693bd62bb5e69bc4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345095"
---
# <a name="csplitterwndex-class"></a>Classe CSplitterWndEx

Rappresenta una finestra con separatore personalizzata.

## <a name="syntax"></a>Sintassi

```
class CSplitterWndEx : public CSplitterWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CSplitterWndEx::CSplitterWndEx`|Costruttore predefinito.|
|`CSplitterWndEx::~CSplitterWndEx`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSplitterWndEx:: OnDrawSplitter](#ondrawsplitter)|Chiamato dal Framework per creare una finestra con separatore. Esegue l'override di [CSplitterWnd:: OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).|

## <a name="remarks"></a>Commenti

Eseguire l'override del `OnDrawSplitter` metodo per personalizzare l'aspetto dei componenti grafici di una finestra con separatore.

La `CSplitterWndEx` classe viene utilizzata insieme ai metodi [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox)e [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) , implementati da un gestore di visualizzazione. Per fare in modo che un gestore di visualizzazione disegni una finestra con separatore nell'applicazione, sostituire le dichiarazioni della `CSplitterWnd` classe con la `CSplitterWndEx` classe. Per le applicazioni della finestra cornice, la classe della finestra con separatore viene dichiarata nella classe CMainFrame che si trova in MainFrm. h. Per un esempio, vedere l' `OutlookDemo` esempio nella directory degli esempi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

[CCmdTarget](ccmdtarget-class.md)

[CWnd](cwnd-class.md)

[CSplitterWnd](csplitterwnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsplitterwndex. h

## <a name="csplitterwndexondrawsplitter"></a><a name="ondrawsplitter"></a> CSplitterWndEx:: OnDrawSplitter

Chiamato dal Framework per creare una finestra con separatore.

```
virtual void OnDrawSplitter(
   CDC* pDC,
   ESplitType nType,
   const CRect& rect
);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore al contesto di dispositivo. Se questo parametro è NULL, il Framework riestrae la finestra attiva.

*nType*<br/>
in Uno dei `CSplitterWnd::ESplitType` valori di enumerazione che specifica l'elemento della finestra con separatore da creare. I valori validi sono `splitBox`, `splitBar`, `splitIntersection` e `splitBorder`.

*Rect*<br/>
in Rettangolo di delimitazione che specifica le dimensioni e la posizione in cui creare l'elemento della finestra con separatore specificato.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../hierarchy-chart.md)<br/>
[Classi](mfc-classes.md)<br/>
[Classe CSplitterWnd](csplitterwnd-class.md)<br/>
[Classe CMFCVisualManager](cmfcvisualmanager-class.md)
