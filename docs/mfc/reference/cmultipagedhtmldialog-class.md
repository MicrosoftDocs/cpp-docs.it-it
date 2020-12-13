---
description: 'Altre informazioni su: classe CMultiPageDHtmlDialog'
title: Classe CMultiPageDHtmlDialog
ms.date: 03/27/2019
f1_keywords:
- CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog::CMultiPageDHtmlDialog
helpviewer_keywords:
- CMultiPageDHtmlDialog [MFC], CMultiPageDHtmlDialog
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
ms.openlocfilehash: 1f7f8c2081687c71a98e427bb5396cfa47a73deb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331528"
---
# <a name="cmultipagedhtmldialog-class"></a>Classe CMultiPageDHtmlDialog

Una finestra di dialogo a più pagine visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.

## <a name="syntax"></a>Sintassi

```
class CMultiPageDHtmlDialog : public CDHtmlDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMultiPageDHtmlDialog:: CMultiPageDHtmlDialog](#cmultipagedhtmldialog)|Costruisce un oggetto finestra di dialogo DHTML a più pagine (stile procedura guidata).|
|[CMultiPageDHtmlDialog:: ~ CMultiPageDHtmlDialog](#_dtorcmultipagedhtmldialog)|Elimina un oggetto finestra di dialogo DHTML a più pagine.|

## <a name="remarks"></a>Commenti

Il meccanismo per eseguire questa operazione è una [mappa eventi DHTML e URL](dhtml-event-maps.md), che contiene mappe eventi incorporate per ogni pagina.

## <a name="example"></a>Esempio

Questa finestra di dialogo a più pagine presuppone tre risorse HTML che definiscono semplici funzionalità simili alla procedura guidata. Nella prima pagina è presente un pulsante **Avanti** , il secondo pulsante **indietro** e **Avanti** e il terzo pulsante **indietro** . Quando viene premuto uno dei pulsanti, una funzione del gestore chiama [CDHtmlDialog:: LoadFromResource](../../mfc/reference/cdhtmldialog-class.md#loadfromresource) per caricare la nuova pagina appropriata.

Parti pertinenti della dichiarazione di classe (in CMyMultiPageDlg. h):

[!code-cpp[NVC_MFCDocView#181](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_1.h)]

Parti pertinenti dell'implementazione della classe (in CMyMultipageDlg. cpp):

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

**Intestazione:** afxdhtml. h

## <a name="cmultipagedhtmldialogcmultipagedhtmldialog"></a><a name="cmultipagedhtmldialog"></a> CMultiPageDHtmlDialog:: CMultiPageDHtmlDialog

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

*lpszTemplateName*<br/>
Stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*szHtmlResID*<br/>
Stringa con terminazione null che rappresenta il nome di una risorsa HTML.

*pParentWnd*<br/>
Puntatore all'oggetto padre o alla finestra proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello di finestra di dialogo.

*nHtmlResID*<br/>
Contiene il numero ID di una risorsa HTML.

## <a name="cmultipagedhtmldialogcmultipagedhtmldialog"></a><a name="_dtorcmultipagedhtmldialog"></a> CMultiPageDHtmlDialog:: ~ CMultiPageDHtmlDialog

Elimina un oggetto finestra di dialogo DHTML a più pagine.

```
virtual ~CMultiPageDHtmlDialog();
```

## <a name="see-also"></a>Vedi anche

[Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
