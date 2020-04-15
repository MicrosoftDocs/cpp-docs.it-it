---
title: Classe CMultiPageDHtmlDialog
ms.date: 03/27/2019
f1_keywords:
- CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog::CMultiPageDHtmlDialog
helpviewer_keywords:
- CMultiPageDHtmlDialog [MFC], CMultiPageDHtmlDialog
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
ms.openlocfilehash: 89e4830c3b5c6cb663ca2d2935adaaae3f356958
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319658"
---
# <a name="cmultipagedhtmldialog-class"></a>Classe CMultiPageDHtmlDialog

Una finestra di dialogo a più pagine visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.

## <a name="syntax"></a>Sintassi

```
class CMultiPageDHtmlDialog : public CDHtmlDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMultiPageDHtmlDialog::CMultiPageDHtmlDialog](#cmultipagedhtmldialog)|Costruisce un oggetto finestra di dialogo DHTML a più pagine (stile procedura guidata).|
|[CMultiPageDHtmlDialog:: CMultiPageDHtmlDialog](#_dtorcmultipagedhtmldialog)|Elimina un oggetto finestra di dialogo DHTML a più pagine.|

## <a name="remarks"></a>Osservazioni

Il meccanismo per eseguire questa operazione è una [mappa eventi DHTML e URL](dhtml-event-maps.md), che contiene mappe eventi incorporate per ogni pagina.

## <a name="example"></a>Esempio

Questa finestra di dialogo a più pagine presuppone tre risorse HTML che definiscono semplici funzionalità di tipo procedura guidata. La prima pagina ha un pulsante **Avanti,** il secondo un **pulsante Precedente** e **Successivo** e il terzo un pulsante **Precedente.** Quando viene premuto uno dei pulsanti, una funzione del gestore chiama [CDHtmlDialog::LoadFromResource](../../mfc/reference/cdhtmldialog-class.md#loadfromresource) per caricare la nuova pagina appropriata.

Le parti pertinenti della dichiarazione di classe (in CMyMultiPageDlg.h):

[!code-cpp[NVC_MFCDocView#181](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_1.h)]

Le parti pertinenti dell'implementazione della classe (in CMyMultipageDlg.cpp):

[!code-cpp[NVC_MFCDocView#182](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDHtmlSinkHandlerBase2`

`CDHtmlSinkHandlerBase1`

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDHtmlSinkHandler`

[CWnd](../../mfc/reference/cwnd-class.md)

`CDHtmlEventSink`

[CDialog](../../mfc/reference/cdialog-class.md)

[CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)

`CMultiPageDHtmlDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml.h

## <a name="cmultipagedhtmldialogcmultipagedhtmldialog"></a><a name="cmultipagedhtmldialog"></a>CMultiPageDHtmlDialog::CMultiPageDHtmlDialog

Costruisce un oggetto finestra di dialogo DHTML a più pagine (stile procedura guidata).

```
CMultiPageDHtmlDialog(
    LPCTSTR lpszTemplateName,
    LPCTSTR szHtmlResID = NULL,
    CWnd* pParentWnd = NULL);

CMultiPageDHtmlDialog(
    UINT nIDTemplate,
    UINT nHtmlResID = 0,
    CWnd* pParentWnd = NULL);

CMultiPageDHtmlDialog();
```

### <a name="parameters"></a>Parametri

*lpszTemplateName (nome di metodo)*<br/>
Stringa con terminazione null che è il nome di una risorsa modello della finestra di dialogo.

*szHtmlResID (informazioni in lingua inlingua in lingua instato comandato*<br/>
Stringa con terminazione null che è il nome di una risorsa HTML.

*pParentWnd (informazioni in due)*<br/>
Puntatore all'oggetto finestra padre o proprietario (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

*nHtmlResID (informazioni in lingua inlingua in stato inlinguacommo*<br/>
Contiene il numero ID di una risorsa HTML.

## <a name="cmultipagedhtmldialogcmultipagedhtmldialog"></a><a name="_dtorcmultipagedhtmldialog"></a>CMultiPageDHtmlDialog:: CMultiPageDHtmlDialog

Elimina un oggetto finestra di dialogo DHTML a più pagine.

```
virtual ~CMultiPageDHtmlDialog();
```

## <a name="see-also"></a>Vedere anche

[Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
