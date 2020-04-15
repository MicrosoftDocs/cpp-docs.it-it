---
title: CMFCWindowsManagerDialog (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog
helpviewer_keywords:
- CMFCWindowsManagerDialog [MFC], CMFCWindowsManagerDialog
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
ms.openlocfilehash: e3928c0d3ae4f607dceb99c0762277e8ea9ddbde
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319833"
---
# <a name="cmfcwindowsmanagerdialog-class"></a>CMFCWindowsManagerDialog (classe)

L'oggetto `CMFCWindowsManagerDialog` consente a un utente di gestire le finestre figlio MDI in un'applicazione MDI.

## <a name="syntax"></a>Sintassi

```
class CMFCWindowsManagerDialog : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog)|Costruisce un oggetto `CMFCWindowsManagerDialog`.|

## <a name="remarks"></a>Osservazioni

Il `CMFCWindowsManagerDialog` contiene un elenco di finestre figlio MDI attualmente aperte nell'applicazione. L'utente può controllare manualmente lo stato delle finestre figlio MDI utilizzando questa finestra di dialogo.

`CMFCWindowsManagerDialog`è incorporato all'interno della [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md). Il `CMFCWindowsManagerDialog` non è una classe che è necessario creare manualmente. Chiamare invece la funzione [CMDIFrameWndEx::ShowWindowsDialog](../../mfc/reference/cmdiframewndex-class.md#showwindowsdialog)per creare `CMFCWindowsManagerDialog` e visualizzare un oggetto.

## <a name="example"></a>Esempio

Nell'esempio riportato di `CMFCWindowsManagerDialog` seguito `CMDIFrameWndEx::ShowWindowsDialog`viene illustrato come costruire un oggetto chiamando . Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/cpp/cmfcwindowsmanagerdialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxWindowsManagerDialog.h

## <a name="cmfcwindowsmanagerdialogcmfcwindowsmanagerdialog"></a><a name="cmfcwindowsmanagerdialog"></a>CMFCWindowsManagerDialog::CMFCWindowsManagerDialog

Costruisce un [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) oggetto.

```
CMFCWindowsManagerDialog(
    CMDIFrameWndEx* pMDIFrame,
    BOOL bHelpButton = FALSE);
```

### <a name="parameters"></a>Parametri

*PMDIFrame (frame)*<br/>
[in] Puntatore alla finestra padre o proprietario.

*bHelpButton (pulsantedi/ Button)*<br/>
[in] Parametro booleano che specifica se il framework visualizza un pulsante **?.**

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui gestori visivi, vedere [Gestione visualizzazioni](../../mfc/visualization-manager.md).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CmDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md)
