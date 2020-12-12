---
description: 'Altre informazioni su: classe CMFCImageEditorDialog'
title: Classe CMFCImageEditorDialog
ms.date: 11/19/2018
f1_keywords:
- CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog::CMFCImageEditorDialog
helpviewer_keywords:
- CMFCImageEditorDialog [MFC], CMFCImageEditorDialog
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
ms.openlocfilehash: 6c25cf4a1a8d0cc5852049a06c3a140cbb00a118
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265389"
---
# <a name="cmfcimageeditordialog-class"></a>Classe CMFCImageEditorDialog

La `CMFCImageEditorDialog` classe supporta una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImageEditorDialog : public CDialogEx
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCImageEditorDialog:: CMFCImageEditorDialog](#cmfcimageeditordialog)|Costruisce un oggetto `CMFCImageEditorDialog`.|

## <a name="remarks"></a>Commenti

La `CMFCImageEditorDialog` classe fornisce una finestra di dialogo che include:

- Area immagine utilizzata per modificare singoli pixel in un'immagine.

- Strumenti di disegno per modificare i pixel nell'area dell'immagine.

- Tavolozza dei colori per specificare il colore utilizzato dagli strumenti di disegno.

- Area di anteprima che Visualizza l'effetto della modifica.

Nella figura seguente è illustrata una finestra di dialogo dell'editor di immagini.

![Finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "Finestra di dialogo di CMFCImageEditorDialog")

Un modo per usare un `CMFCImageEditorDialog` oggetto consiste nel passargli un' `CBitmap` immagine da modificare. Non creare un'immagine di grandi dimensioni perché l'area di modifica delle immagini ha una dimensione limitata e le dimensioni dei pixel logici vengono modificate per adattarsi all'area. Chiamare il `DoModal` metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximageeditordialog. h

## <a name="cmfcimageeditordialogcmfcimageeditordialog"></a><a name="cmfcimageeditordialog"></a> CMFCImageEditorDialog:: CMFCImageEditorDialog

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
Puntatore alla finestra padre della finestra di dialogo Editor di immagini corrente.

*nBitsPixel*<br/>
Numero di bit utilizzati per rappresentare il colore di un singolo pixel, noto anche come profondità del colore.  Se il parametro *nBitsPixel* è-1, la profondità del colore è derivata dall'immagine specificata dal parametro *pBitmap* . Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Per modificare un'immagine, passare un puntatore di immagine al `CMFCImageEditorDialog` costruttore. Chiamare quindi il `DoModal` metodo per aprire una finestra di dialogo modale. Quando il `DoModal` metodo restituisce un risultato, la bitmap contiene la nuova immagine.

### <a name="remarks"></a>Commenti

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCImageEditorDialog` classe. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#8](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_1.cpp)]
[!code-cpp[NVC_MFC_NewControls#40](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
