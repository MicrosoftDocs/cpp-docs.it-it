---
title: Classe CMFCWindowsManagerDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog
helpviewer_keywords:
- CMFCWindowsManagerDialog [MFC], CMFCWindowsManagerDialog
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
ms.openlocfilehash: 5089decc7a118cd867aa14df51f5d7e269221108
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767405"
---
# <a name="cmfcwindowsmanagerdialog-class"></a>Classe CMFCWindowsManagerDialog

Il `CMFCWindowsManagerDialog` oggetto consente di gestire le finestre figlio MDI in un'applicazione MDI.

## <a name="syntax"></a>Sintassi

```
class CMFCWindowsManagerDialog : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog)|Costruisce un oggetto `CMFCWindowsManagerDialog`.|

## <a name="remarks"></a>Note

Il `CMFCWindowsManagerDialog` contiene un elenco di finestre figlio MDI aperti nell'applicazione. L'utente può controllare lo stato delle finestre figlio MDI manualmente tramite questa finestra di dialogo.

`CMFCWindowsManagerDialog` è incorporato all'interno di [CMDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md). Il `CMFCWindowsManagerDialog` non è una classe che è necessario creare manualmente. In alternativa, chiamare la funzione [CMDIFrameWndEx::ShowWindowsDialog](../../mfc/reference/cmdiframewndex-class.md#showwindowsdialog), creerà e visualizzare un `CMFCWindowsManagerDialog` oggetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire una `CMFCWindowsManagerDialog` chiamando `CMDIFrameWndEx::ShowWindowsDialog`. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/cpp/cmfcwindowsmanagerdialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxWindowsManagerDialog.h

##  <a name="cmfcwindowsmanagerdialog"></a>  CMFCWindowsManagerDialog::CMFCWindowsManagerDialog

Costruisce un [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) oggetto.

```
CMFCWindowsManagerDialog(
    CMDIFrameWndEx* pMDIFrame,
    BOOL bHelpButton = FALSE);
```

### <a name="parameters"></a>Parametri

*pMDIFrame*<br/>
[in] Puntatore alla finestra padre o proprietaria.

*bHelpButton*<br/>
[in] Un parametro booleano che specifica se il framework visualizza una **aiutare** pulsante.

### <a name="remarks"></a>Note

Per altre informazioni sui gestori visualizzazione, vedere [gestione visualizzazione](../../mfc/visualization-manager.md).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)
