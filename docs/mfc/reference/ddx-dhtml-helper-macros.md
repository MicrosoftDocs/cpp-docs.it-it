---
title: Supporto Ddx_dhtml
ms.date: 11/04/2016
f1_keywords:
- AFXDHTML/DDX_DHtml_ElementValue
- AFXDHTML/DDX_DHtml_ElementInnerText
- AFXDHTML/DDX_DHtml_ElementInnerHtml
- AFXDHTML/DDX_DHtml_Anchor_Href
- AFXDHTML/DDX_DHtml_Anchor_Target
- AFXDHTML/DDX_DHtml_Img_Src
- AFXDHTML/DDX_DHtml_Frame_Src
- AFXDHTML/DDX_DHtml_IFrame_Src
helpviewer_keywords:
- macros [MFC], exchanging data with HMTL pages
- DDX macros [MFC]
- HTML pages [MFC], helper macros
- DDX (dialog data exchange), DHtml helper macros
- macros [MFC], DDX_DHtml helpers
ms.assetid: c46302d2-ea43-4fea-bfc2-6f590d99f267
ms.openlocfilehash: 90c80dbc5c8b6788f3afad3cf77d796139fbd946
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323034"
---
# <a name="ddxdhtml-helper-macros"></a>Supporto Ddx_dhtml

Il supporto ddx_dhtml consentono un facile accesso alle proprietà dei controlli in una pagina HTML comunemente utilizzate.

### <a name="data-exchange-macros"></a>Macro di scambio di dati

|||
|-|-|
|[DDX_DHtml_ElementValue](#ddx_dhtml_elementvalue)|Imposta o recupera il valore di proprietà dal controllo selezionato.|
|[DDX_DHtml_ElementInnerText](#ddx_dhtml_elementinnertext)|Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.|
|[DDX_DHtml_ElementInnerHtml](#ddx_dhtml_elementinnerhtml)|Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.|
|[DDX_DHtml_Anchor_Href](#ddx_dhtml_anchor_href)|Imposta o recupera il punto di ancoraggio o URL di destinazione.|
|[DDX_DHtml_Anchor_Target](#ddx_dhtml_anchor_target)|Imposta o recupera la finestra di destinazione o il frame.|
|[DDX_DHtml_Img_Src](#ddx_dhtml_img_src)|Imposta o recupera il nome di un'immagine o un clip video nel documento.|
|[DDX_DHtml_Frame_Src](#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|
|[DDX_DHtml_IFrame_Src](#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

## <a name="ddx_dhtml_anchor_href"></a> DDX_DHtml_Anchor_Href

Imposta o recupera il punto di ancoraggio o URL di destinazione.

```
DDX_DHtml_Anchor_Href(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLANCHORELEMENT_HREF (funzione)

## <a name="ddx_dhtml_anchor_target"></a>  DDX_DHtml_Anchor_Target

Imposta o recupera la finestra di destinazione o il frame.

```
DDX_DHtml_Anchor_Target(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLANCHORELEMENT_TARGET (funzione)

## <a name="ddx_dhtml_elementinnerhtml"></a>  DDX_DHtml_ElementInnerHtml

Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.

```
DDX_DHtml_ElementInnerHtml(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLELEMENT_INNERHTML (funzione)

## <a name="ddx_dhtml_elementinnertext"></a>  DDX_DHtml_ElementInnerText

Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.

```
DDX_DHtml_ElementInnerText(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLELEMENT_INNERTEXT (funzione)

## <a name="ddx_dhtml_elementvalue"></a> DDX_DHtml_ElementValue

Imposta o recupera il valore di proprietà dal controllo selezionato.

```
DDX_DHtml_ElementValue(
    CDataExchange* dx,
    LPCTSTR name,
    var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare. Visualizzare *valore* nelle [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext).

## <a name="remarks"></a>Note

Questa macro verrà completata solo quando viene eseguito i controlli che hanno una proprietà Value. I controlli che hanno un valore di proprietà includono le caselle di modifica, caselle di riepilogo e caselle combinate.

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_A_VALUE (funzione)

## <a name="ddx_dhtml_frame_src"></a> DDX_DHtml_Frame_Src

Imposta o recupera l'URL del frame associato.

```
DDX_DHtml_Frame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLFRAMEBASE_SRC (funzione)

## <a name="ddx_dhtml_iframe_src"></a> DDX_DHtml_IFrame_Src

Imposta o recupera l'URL del frame associato.

```
DDX_DHtml_IFrame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLFRAMEBASE_SRC (funzione)

## <a name="ddx_dhtml_img_src"></a>DDX_DHtml_Img_Src

Ottiene o recupera il nome di un'immagine o un clip video nel documento.

```
DDX_DHtml_Img_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*dx*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*name*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Il valore da scambiare.

## <a name="remarks"></a>Note

Quando si usa la macro DDX_DHtml_Img_Src per recuperare la proprietà src di un elemento IMAGE, l'oggetto immagine di Internet Explorer restituisce l'URL completo con caratteri di escape per l'origine dell'immagine. Ad esempio, se si usa la macro DDX_DHtml_Img_Src per impostare la proprietà src di un elemento immagine alla stringa "alcuni interessanti immagine", quando si recupera quella proprietà, Internet Explorer restituisce la stringa "res://d:\myapplication\myapp.exe/some% 20interesting % 20picture."

Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) ID di invio mediante il DISPID_IHTMLIMGELEMENT_SRC (funzione)

## <a name="see-also"></a>Vedere anche

[Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
