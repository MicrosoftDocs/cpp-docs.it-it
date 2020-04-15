---
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
ms.openlocfilehash: cf9a2658807959108b3bb0af672d4c1835b58bc5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375668"
---
# <a name="cdialogbar-class"></a>Classe CDialogBar

Fornisce la funzionalità di una finestra di dialogo non modale di Windows in una barra di controllo.

## <a name="syntax"></a>Sintassi

```
class CDialogBar : public CControlBar
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialogBar::CDialogBar](#cdialogbar)|Costruisce un oggetto `CDialogBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialogBar::Create](#create)|Crea una barra della finestra di `CDialogBar` dialogo di Windows e la associa all'oggetto.|

## <a name="remarks"></a>Osservazioni

Una barra della finestra di dialogo è simile a una finestra di dialogo in quanto contiene controlli standard di Windows tra cui l'utente può passare tatto. Un'altra somiglianza è che si crea un modello di finestra di dialogo per rappresentare la barra della finestra di dialogo.

La creazione e l'utilizzo di una `CFormView` barra della finestra di dialogo è simile alla creazione e all'utilizzo di un oggetto. In primo luogo, utilizzare [l'editor finestre](../../windows/dialog-editor.md) per definire un modello di finestra di dialogo con lo stile WS_CHILD e nessun altro stile. Il modello non deve avere lo stile WS_VISIBLE. Nel codice dell'applicazione chiamare il `CDialogBar` costruttore `Create` per costruire l'oggetto, quindi chiamare `CDialogBar` per creare la finestra della barra della finestra di dialogo e associarla all'oggetto.

Per ulteriori `CDialogBar`informazioni su , vedere l'articolo Barre delle finestre di [dialogo](../../mfc/dialog-bars.md) e [nota tecnica 31](../../mfc/tn031-control-bars.md), Barre di controllo.

> [!NOTE]
> Nella versione corrente, `CDialogBar` un oggetto non può ospitare controlli Windows Form. Per ulteriori informazioni sui controlli Windows Form in Visual C, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[Ccontrolbar](../../mfc/reference/ccontrolbar-class.md)

`CDialogBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cdialogbarcdialogbar"></a><a name="cdialogbar"></a>CDialogBar::CDialogBar

Costruisce un oggetto `CDialogBar`.

```
CDialogBar();
```

## <a name="cdialogbarcreate"></a><a name="create"></a>CDialogBar::Create

Carica il modello di risorsa `lpszTemplateName` `nIDTemplate`della finestra di dialogo specificato da o , crea `CDialogBar` la finestra della barra della finestra di dialogo, ne imposta lo stile e lo associa all'oggetto.

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

*pParentWnd (informazioni in due)*<br/>
Puntatore all'oggetto padre. `CWnd`

*lpszTemplateName (nome di metodo)*<br/>
Puntatore al nome `CDialogBar` del modello di risorsa finestra di dialogo dell'oggetto.

*nStyle*<br/>
Stile della barra degli strumenti. Ulteriori stili di barre degli strumenti supportati sono:

- CBRS_TOP barra di controllo si trova nella parte superiore della finestra cornice.

- CBRS_BOTTOM barra di controllo si trova nella parte inferiore della finestra cornice.

- CBRS_NOALIGN barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.

- CBRS_TOOLTIPS barra Controllo vengono visualizzate le descrizioni comandi.

- CBRS_SIZE_DYNAMIC barra di controllo è dinamica.

- CBRS_SIZE_FIXED barra di controllo è fissa.

- CBRS_FLOATING barra di controllo è mobile.

- CBRS_FLYBY barra di stato vengono visualizzate informazioni sul pulsante.

- CBRS_HIDE_INPLACE barra di controllo non viene visualizzata all'utente.

*nID*<br/>
ID di controllo della barra della finestra di dialogo.

*NIDTemplate (modello)*<br/>
ID risorsa del `CDialogBar` modello di finestra di dialogo dell'oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se si specifica lo stile di allineamento CBRS_TOP o CBRS_BOTTOM, la larghezza della barra della finestra di dialogo è quella della finestra cornice e la relativa altezza è quella della risorsa specificata da *nIDTemplate*. Se si specifica il CBRS_LEFT o CBRS_RIGHT stile di allineamento, l'altezza della barra della finestra di dialogo è quella della finestra cornice e la relativa larghezza è quella della risorsa specificata da *nIDTemplate*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCMessageMaps#13](../../mfc/reference/codesnippet/cpp/cdialogbar-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)
