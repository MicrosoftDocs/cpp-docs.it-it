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
ms.openlocfilehash: 2ae7c941b527a7cbaa01bf43ef4d41c9a4975dac
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57302403"
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
|[CDialogBar::Create](#create)|Crea una barra di finestra di dialogo di Windows e lo collega al `CDialogBar` oggetto.|

## <a name="remarks"></a>Note

Una barra di finestra di dialogo è simile a una finestra di dialogo in quanto contiene controlli Windows standard che l'utente può spostarsi tra. Un altro somiglianza è che si crea un modello di finestra di dialogo per rappresentare la barra di finestra di dialogo.

Creazione e utilizzo di una barra di finestra di dialogo è simile alla creazione e utilizzo di un `CFormView` oggetto. In primo luogo, usare il [editor finestre](../../windows/dialog-editor.md) per definire un modello di finestra di dialogo con lo stile WS_CHILD e nessun altro stile. Il modello non deve avere lo stile WS_VISIBLE. Nel codice dell'applicazione, chiamare il costruttore per costruire il `CDialogBar` dell'oggetto, quindi chiamare `Create` per creare la finestra di dialogo barra e collegarla al `CDialogBar` oggetto.

Per ulteriori informazioni sul `CDialogBar`, vedere l'articolo [barre di finestra di dialogo](../../mfc/dialog-bars.md) e [Nota tecnica 31](../../mfc/tn031-control-bars.md), le barre di controllo.

> [!NOTE]
>  Nella versione corrente, un `CDialogBar` oggetto non può ospitare controlli Windows Form. Per altre informazioni sui controlli Windows Form in Visual C++, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CDialogBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="cdialogbar"></a>  CDialogBar::CDialogBar

Costruisce un oggetto `CDialogBar`.

```
CDialogBar();
```

##  <a name="create"></a>  CDialogBar::Create

Carica il modello di risorsa finestra di dialogo specificato da `lpszTemplateName` oppure `nIDTemplate`, crea la finestra di dialogo barra, imposta lo stile e lo associa al `CDialogBar` oggetto.

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
Un puntatore all'elemento padre `CWnd` oggetto.

*lpszTemplateName*<br/>
Un puntatore al nome del `CDialogBar` modello di risorsa finestra di dialogo dell'oggetto.

*nStyle*<br/>
Lo stile della barra degli strumenti. Stili della barra degli strumenti aggiuntivi supportati sono:

- Barra di controllo CBRS_TOP è nella parte superiore della finestra cornice.

- Barra di controllo CBRS_BOTTOM è nella parte inferiore della finestra cornice.

- Barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

- Barra di controllo CBRS_TOOLTIPS consente di visualizzare le descrizioni comandi.

- Cbrs_size_dynamic la barra è dinamica.

- Cbrs_size_fixed la barra è fisso.

- Barra di controllo CBRS_FLOATING è mobile.

- Barra di stato CBRS_FLYBY Visualizza le informazioni relative al pulsante.

- Barra di controllo CBRS_HIDE_INPLACE non viene visualizzata all'utente.

*nID*<br/>
ID di controllo della barra di finestra di dialogo.

*nIDTemplate*<br/>
L'ID della risorsa di `CDialogBar` modello finestra di dialogo dell'oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se si specifica lo stile di allineamento CBRS_TOP o CBRS_BOTTOM, la larghezza della barra della finestra di dialogo della finestra cornice e l'altezza è quello di risorsa specificata dal *nIDTemplate*. Se si specifica lo stile di allineamento CBRS_LEFT o CBRS_RIGHT, altezza della barra della finestra di dialogo della finestra cornice e la larghezza è quello di risorsa specificata da *nIDTemplate*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCMessageMaps#13](../../mfc/reference/codesnippet/cpp/cdialogbar-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC viene](../../visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)
