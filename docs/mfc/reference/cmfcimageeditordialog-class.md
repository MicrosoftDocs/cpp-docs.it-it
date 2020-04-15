---
title: CMFCImageEditorDialog (classe)
ms.date: 11/19/2018
f1_keywords:
- CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog::CMFCImageEditorDialog
helpviewer_keywords:
- CMFCImageEditorDialog [MFC], CMFCImageEditorDialog
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
ms.openlocfilehash: 23c2a919428689fe107b82041bd87b758ede2bc9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367471"
---
# <a name="cmfcimageeditordialog-class"></a>CMFCImageEditorDialog (classe)

La `CMFCImageEditorDialog` classe supporta una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImageEditorDialog : public CDialogEx
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCImageEditorDialog::CMFCImageEditorDialog](#cmfcimageeditordialog)|Costruisce un oggetto `CMFCImageEditorDialog`.|

## <a name="remarks"></a>Osservazioni

La `CMFCImageEditorDialog` classe fornisce una finestra di dialogo che include:The class provides a dialog box that includes:

- Area dell'immagine utilizzata per modificare singoli pixel in un'immagine.

- Strumenti di disegno per modificare i pixel nell'area dell'immagine.

- Tavolozza dei colori per specificare il colore utilizzato dagli strumenti di disegno.

- Un'area di anteprima che visualizza l'effetto della modifica.

Nella figura seguente viene illustrata una finestra di dialogo dell'editor di immagini.

![Finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "Finestra di dialogo di CMFCImageEditorDialog")

Un modo per `CMFCImageEditorDialog` utilizzare un oggetto `CBitmap` consiste nel passargli un'immagine da modificare. Non creare un'immagine di grandi dimensioni perché l'area di modifica dell'immagine ha dimensioni limitate e le dimensioni logiche in pixel vengono adattate all'area. Chiamare `DoModal` il metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximageeditordialog.h

## <a name="cmfcimageeditordialogcmfcimageeditordialog"></a><a name="cmfcimageeditordialog"></a>CMFCImageEditorDialog::CMFCImageEditorDialog

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

*pPadre*<br/>
Puntatore alla finestra padre della finestra di dialogo dell'editor di immagini corrente.

*nBitsPixel*<br/>
Numero di bit utilizzati per rappresentare il colore di un singolo pixel, denominato anche profondità del colore.  Se il *nBitsPixel* parametro è -1, la profondità del colore è derivata dall'immagine specificata dal *pBitmap* parametro. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Per modificare un'immagine, passare `CMFCImageEditorDialog` un puntatore all'immagine al costruttore. Chiamare quindi `DoModal` il metodo per aprire una finestra di dialogo modale. Quando `DoModal` il metodo termina, la bitmap contiene la nuova immagine.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

Nell'esempio `CMFCImageEditorDialog` seguente viene illustrato come costruire un oggetto della classe. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#8](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_1.cpp)]
[!code-cpp[NVC_MFC_NewControls#40](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)
