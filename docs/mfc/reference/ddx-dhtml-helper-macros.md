---
description: 'Altre informazioni su: DDX_DHtml le macro Helper'
title: DDX_DHtml le macro Helper
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
ms.openlocfilehash: ac7df82d628c943a5ba28697cf614853e7e7dddd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220240"
---
# <a name="ddx_dhtml-helper-macros"></a>DDX_DHtml le macro Helper

Le macro di helper DDX_DHtml consentono di accedere facilmente alle proprietà dei controlli comunemente utilizzate in una pagina HTML.

### <a name="data-exchange-macros"></a>Macro scambio di dati

|Nome|Description|
|-|-|
|[DDX_DHtml_ElementValue](#ddx_dhtml_elementvalue)|Imposta o recupera la proprietà Value dal controllo selezionato.|
|[DDX_DHtml_ElementInnerText](#ddx_dhtml_elementinnertext)|Imposta o Recupera il testo tra i tag di inizio e di fine dell'elemento corrente.|
|[DDX_DHtml_ElementInnerHtml](#ddx_dhtml_elementinnerhtml)|Imposta o Recupera il codice HTML tra i tag di inizio e di fine dell'elemento corrente.|
|[DDX_DHtml_Anchor_Href](#ddx_dhtml_anchor_href)|Imposta o recupera l'URL di destinazione o il punto di ancoraggio.|
|[DDX_DHtml_Anchor_Target](#ddx_dhtml_anchor_target)|Imposta o recupera la finestra o il frame di destinazione.|
|[DDX_DHtml_Img_Src](#ddx_dhtml_img_src)|Imposta o Recupera il nome di un'immagine o di un clip video nel documento.|
|[DDX_DHtml_Frame_Src](#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|
|[DDX_DHtml_IFrame_Src](#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

## <a name="ddx_dhtml_anchor_href"></a><a name="ddx_dhtml_anchor_href"></a> DDX_DHtml_Anchor_Href

Imposta o recupera l'URL di destinazione o il punto di ancoraggio.

```
DDX_DHtml_Anchor_Href(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLANCHORELEMENT_HREF.

## <a name="ddx_dhtml_anchor_target"></a><a name="ddx_dhtml_anchor_target"></a> DDX_DHtml_Anchor_Target

Imposta o recupera la finestra o il frame di destinazione.

```
DDX_DHtml_Anchor_Target(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLANCHORELEMENT_TARGET.

## <a name="ddx_dhtml_elementinnerhtml"></a><a name="ddx_dhtml_elementinnerhtml"></a> DDX_DHtml_ElementInnerHtml

Imposta o Recupera il codice HTML tra i tag di inizio e di fine dell'elemento corrente.

```
DDX_DHtml_ElementInnerHtml(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLELEMENT_INNERHTML.

## <a name="ddx_dhtml_elementinnertext"></a><a name="ddx_dhtml_elementinnertext"></a> DDX_DHtml_ElementInnerText

Imposta o Recupera il testo tra i tag di inizio e di fine dell'elemento corrente.

```
DDX_DHtml_ElementInnerText(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLELEMENT_INNERTEXT.

## <a name="ddx_dhtml_elementvalue"></a><a name="ddx_dhtml_elementvalue"></a> DDX_DHtml_ElementValue

Imposta o recupera la proprietà Value dal controllo selezionato.

```
DDX_DHtml_ElementValue(
    CDataExchange* dx,
    LPCTSTR name,
    var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare. Vedere *valore* in [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext).

### <a name="remarks"></a>Commenti

Questa macro avrà esito positivo solo se eseguita su controlli che dispongono di una proprietà Value. I controlli che dispongono di una proprietà valore includono caselle di modifica, caselle di riepilogo e caselle combinate.

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_A_VALUE.

## <a name="ddx_dhtml_frame_src"></a><a name="ddx_dhtml_frame_src"></a> DDX_DHtml_Frame_Src

Imposta o recupera l'URL del frame associato.

```
DDX_DHtml_Frame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLFRAMEBASE_SRC.

## <a name="ddx_dhtml_iframe_src"></a><a name="ddx_dhtml_iframe_src"></a> DDX_DHtml_IFrame_Src

Imposta o recupera l'URL del frame associato.

```
DDX_DHtml_IFrame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLFRAMEBASE_SRC.

## <a name="ddx_dhtml_img_src"></a><a name="ddx_dhtml_img_src"></a> DDX_DHtml_Img_Src

Ottiene o Recupera il nome di un'immagine o di un clip video nel documento.

```
DDX_DHtml_Img_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### <a name="parameters"></a>Parametri

*DX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nome*<br/>
Valore specificato per il parametro ID del controllo HTML.

*var*<br/>
Valore da scambiare.

### <a name="remarks"></a>Commenti

Quando si usa la macro DDX_DHtml_Img_Src per recuperare la proprietà src per un elemento IMAGE, l'oggetto Image di Internet Explorer restituisce l'URL con escape completo per l'origine dell'immagine. Se, ad esempio, si utilizza la macro DDX_DHtml_Img_Src per impostare la proprietà src di un elemento IMAGE sulla stringa "some interessante Picture", quando si recupera la proprietà, Internet Explorer restituirà la stringa "res://d:\myapplication\myapp.exe/some%20interesting%20picture."

Questa macro chiama la funzione [CDHtmlDialog::D DX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) utilizzando l'ID di invio DISPID_IHTMLIMGELEMENT_SRC.

## <a name="see-also"></a>Vedi anche

[Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
