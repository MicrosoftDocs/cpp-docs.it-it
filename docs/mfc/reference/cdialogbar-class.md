---
description: 'Altre informazioni su: classe CDialogBar'
title: Classe CDialogBar
ms.date: 11/04/2016
f1_keywords:
- CDialogBar
- AFXEXT/CDialogBar
- AFXEXT/CDialogBar::CDialogBar
- AFXEXT/CDialogBar::Create
helpviewer_keywords:
- CDialogBar [MFC], CDialogBar
- CDialogBar [MFC], Create
ms.assetid: da2f7a30-970c-44e3-87f0-6094bd002cab
ms.openlocfilehash: 7feb31cd8152309557a398f5c8d0edb8d91c340e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185219"
---
# <a name="cdialogbar-class"></a>Classe CDialogBar

Fornisce la funzionalità di una finestra di dialogo non modale di Windows in una barra di controllo.

## <a name="syntax"></a>Sintassi

```
class CDialogBar : public CControlBar
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDialogBar:: CDialogBar](#cdialogbar)|Costruisce un oggetto `CDialogBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDialogBar:: create](#create)|Crea una barra della finestra di dialogo di Windows e la collega all' `CDialogBar` oggetto.|

## <a name="remarks"></a>Commenti

Una barra della finestra di dialogo è simile a una finestra di dialogo in cui sono contenuti i controlli Windows standard che l'utente può tabulare tra. Un'altra somiglianza consiste nella creazione di un modello di finestra di dialogo per rappresentare la barra della finestra di dialogo.

La creazione e l'utilizzo di una barra di dialogo è simile alla creazione e all'utilizzo di un `CFormView` oggetto. Per prima cosa, usare l' [editor finestre](../../windows/dialog-editor.md) per definire un modello di finestra di dialogo con lo stile WS_CHILD e nessun altro stile. Il modello non deve avere lo stile WS_VISIBLE. Nel codice dell'applicazione chiamare il costruttore per costruire l' `CDialogBar` oggetto, quindi chiamare `Create` per creare la finestra della barra di dialogo e collegarla all' `CDialogBar` oggetto.

Per ulteriori informazioni su `CDialogBar` , vedere l'articolo [barre di dialogo](../../mfc/dialog-bars.md) e [Nota tecnica 31](../../mfc/tn031-control-bars.md), barre di controllo.

> [!NOTE]
> Nella versione corrente, un `CDialogBar` oggetto non può ospitare controlli Windows Forms. Per ulteriori informazioni sui controlli Windows Forms in Visual C++, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CDialogBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="cdialogbarcdialogbar"></a><a name="cdialogbar"></a> CDialogBar:: CDialogBar

Costruisce un oggetto `CDialogBar`.

```
CDialogBar();
```

## <a name="cdialogbarcreate"></a><a name="create"></a> CDialogBar:: create

Carica il modello di risorsa della finestra di dialogo specificato da `lpszTemplateName` o `nIDTemplate` , crea la finestra della barra di dialogo, ne imposta lo stile e lo associa all' `CDialogBar` oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    LPCTSTR lpszTemplateName,
    UINT nStyle,
    UINT nID);

virtual BOOL Create(
    CWnd* pParentWnd,
    UINT nIDTemplate,
    UINT nStyle,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore all' `CWnd` oggetto padre.

*lpszTemplateName*<br/>
Puntatore al nome del `CDialogBar` modello di risorsa della finestra di dialogo dell'oggetto.

*nStyle*<br/>
Stile della barra degli strumenti. Gli stili aggiuntivi della barra degli strumenti supportati sono:

- CBRS_TOP barra di controllo si trova nella parte superiore della finestra cornice.

- CBRS_BOTTOM barra di controllo si trova nella parte inferiore della finestra cornice.

- La barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

- CBRS_TOOLTIPS barra di controllo Visualizza le descrizioni comandi.

- La barra di controllo CBRS_SIZE_DYNAMIC è dinamica.

- La barra di controllo CBRS_SIZE_FIXED è fissa.

- La barra di controllo CBRS_FLOATING è mobile.

- CBRS_FLYBY barra di stato Visualizza informazioni sul pulsante.

- CBRS_HIDE_INPLACE barra di controllo non viene visualizzata all'utente.

*nID*<br/>
ID del controllo della barra della finestra di dialogo.

*nIDTemplate*<br/>
ID risorsa del modello di `CDialogBar` finestra di dialogo dell'oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Se si specifica lo stile di allineamento CBRS_TOP o CBRS_BOTTOM, la larghezza della barra della finestra di dialogo è quella della finestra cornice e l'altezza corrisponde a quella della risorsa specificata da *nIDTemplate*. Se si specifica lo stile di allineamento CBRS_LEFT o CBRS_RIGHT, l'altezza della barra della finestra di dialogo è quella della finestra cornice e la relativa larghezza corrisponde a quella della risorsa specificata da *nIDTemplate*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCMessageMaps#13](../../mfc/reference/codesnippet/cpp/cdialogbar-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[CTRLBARS di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)
