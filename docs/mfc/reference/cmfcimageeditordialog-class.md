---
title: Classe CMFCImageEditorDialog
ms.date: 11/19/2018
f1_keywords:
- CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog::CMFCImageEditorDialog
helpviewer_keywords:
- CMFCImageEditorDialog [MFC], CMFCImageEditorDialog
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
ms.openlocfilehash: 97f16fa00b2e90fd9c43bf9b6792b4eafe7d7b88
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58780445"
---
# <a name="cmfcimageeditordialog-class"></a>Classe CMFCImageEditorDialog

Il `CMFCImageEditorDialog` classe supporta una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImageEditorDialog : public CDialogEx
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCImageEditorDialog::CMFCImageEditorDialog](#cmfcimageeditordialog)|Costruisce un oggetto `CMFCImageEditorDialog`.|

## <a name="remarks"></a>Note

Il `CMFCImageEditorDialog` classe fornisce una finestra di dialogo che include:

- Un'area dell'immagine che consente di modificare singoli pixel in un'immagine.

- Strumenti per modificare i pixel nell'area dell'immagine di disegno.

- Una tavolozza dei colori per specificare il colore che viene usato dagli strumenti di disegno.

- Un'area di anteprima che consente di visualizzare l'effetto della modifica.

La figura seguente mostra un editor di immagini nella finestra di dialogo.

![Finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "nella finestra di dialogo di CMFCImageEditorDialog")

Un modo per usare un `CMFCImageEditorDialog` oggetto consiste nel passarlo un `CBitmap` immagine da modificare. Non creare un'immagine di grandi dimensioni poiché l'immagine di area di modifica con una dimensione limitata e il pixel logico viene ridimensionata per adattarsi all'area. Chiamare il `DoModal` metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximageeditordialog.h

##  <a name="cmfcimageeditordialog"></a>  CMFCImageEditorDialog::CMFCImageEditorDialog

Costruisce un oggetto `CMFCImageEditorDialog`.

```
CMFCImageEditorDialog(
    CBitmap* pBitmap,
    CWnd* pParent=NULL,
    int nBitsPixel=-1);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Puntatore a un'immagine.

*pParent*<br/>
Puntatore alla finestra padre della finestra di dialogo editor immagine corrente.

*nBitsPixel*<br/>
Il numero di bit usati per rappresentare il colore di un singolo pixel, che è anche detto intensità di colore.  Se il *nBitsPixel* parametro è -1, la profondità di colore viene derivata dall'immagine specificato dalle *pBitmap* parametro. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Per modificare un'immagine, passare un puntatore di immagine per il `CMFCImageEditorDialog` costruttore. Chiamare quindi il `DoModal` metodo per aprire una finestra di dialogo modale. Quando il `DoModal` metodo viene restituito, la mappa di bit include la nuova immagine.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCImageEditorDialog` classe. In questo esempio fa parte il [esempio di nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#8](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_1.cpp)]
[!code-cpp[NVC_MFC_NewControls#40](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
