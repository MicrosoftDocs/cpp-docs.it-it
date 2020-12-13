---
description: 'Altre informazioni su: classe CMFCWindowsManagerDialog'
title: Classe CMFCWindowsManagerDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog
helpviewer_keywords:
- CMFCWindowsManagerDialog [MFC], CMFCWindowsManagerDialog
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
ms.openlocfilehash: 526cf731e049ffd267382b0c3895b5d29792dcb0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331616"
---
# <a name="cmfcwindowsmanagerdialog-class"></a>Classe CMFCWindowsManagerDialog

L' `CMFCWindowsManagerDialog` oggetto consente a un utente di gestire le finestre figlio MDI in un'applicazione MDI.

## <a name="syntax"></a>Sintassi

```
class CMFCWindowsManagerDialog : public CDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCWindowsManagerDialog:: CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog)|Costruisce un oggetto `CMFCWindowsManagerDialog`.|

## <a name="remarks"></a>Commenti

`CMFCWindowsManagerDialog`Contiene un elenco di finestre figlio MDI attualmente aperte nell'applicazione. L'utente può controllare manualmente lo stato delle finestre figlio MDI utilizzando questa finestra di dialogo.

`CMFCWindowsManagerDialog` è incorporato all'interno della [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md). `CMFCWindowsManagerDialog`Non è una classe da creare manualmente. Chiamare invece la funzione [CMDIFrameWndEx:: ShowWindowsDialog](../../mfc/reference/cmdiframewndex-class.md#showwindowsdialog)e creerà e visualizzerà un `CMFCWindowsManagerDialog` oggetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCWindowsManagerDialog` oggetto chiamando `CMDIFrameWndEx::ShowWindowsDialog` . Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/cpp/cmfcwindowsmanagerdialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxWindowsManagerDialog. h

## <a name="cmfcwindowsmanagerdialogcmfcwindowsmanagerdialog"></a><a name="cmfcwindowsmanagerdialog"></a> CMFCWindowsManagerDialog:: CMFCWindowsManagerDialog

Costruisce un oggetto [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) .

```
CMFCWindowsManagerDialog(
    CMDIFrameWndEx* pMDIFrame,
    BOOL bHelpButton = FALSE);
```

### <a name="parameters"></a>Parametri

*pMDIFrame*<br/>
in Puntatore alla finestra padre o proprietario.

*bHelpButton*<br/>
in Parametro booleano che specifica se il Framework Visualizza un **pulsante?** .

### <a name="remarks"></a>Commenti

Per altre informazioni sui gestori di oggetti visivi, vedere [Gestione visualizzazioni](../../mfc/visualization-manager.md).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)
