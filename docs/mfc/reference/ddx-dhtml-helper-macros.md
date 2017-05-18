---
title: Macro di Helper DDX_DHtml | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- AFXDHTML/DDX_DHtml_ElementValue
- AFXDHTML/DDX_DHtml_ElementInnerText
- AFXDHTML/DDX_DHtml_ElementInnerHtml
- AFXDHTML/DDX_DHtml_Anchor_Href
- AFXDHTML/DDX_DHtml_Anchor_Target
- AFXDHTML/DDX_DHtml_Img_Src
- AFXDHTML/DDX_DHtml_Frame_Src
- AFXDHTML/DDX_DHtml_IFrame_Src
dev_langs:
- C++
helpviewer_keywords:
- macros, exchanging data with HMTL pages
- DDX macros
- HTML pages, helper macros
- DDX (dialog data exchange), DHtml helper macros
- macros, DDX_DHtml helpers
ms.assetid: c46302d2-ea43-4fea-bfc2-6f590d99f267
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: d3c5136b52206a1ec67e1e1fc78ec291a2954faf
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ddxdhtml-helper-macros"></a>Macro di Helper DDX_DHtml
Le macro di helper DDX_DHtml consentono un facile accesso alle proprietà di uso comune dei controlli in una pagina HTML.  
  
### <a name="data-exchange-macros"></a>Macro per lo scambio dei dati  
  
|||  
|-|-|  
|[DDX_DHtml_ElementValue](#ddx_dhtml_elementvalue)|Imposta o recupera il valore di proprietà dal controllo selezionato.|  
|[DDX_DHtml_ElementInnerText](#ddx_dhtml_elementinnertext)|Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.|  
|[DDX_DHtml_ElementInnerHtml](#ddx_dhtml_elementinnerhtml)|Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.|  
|[DDX_DHtml_Anchor_Href](#ddx_dhtml_anchor_href)|Imposta o recupera il punto di ancoraggio o URL di destinazione.|  
|[DDX_DHtml_Anchor_Target](#ddx_dhtml_anchor_target)|Imposta o recupera la finestra di destinazione o il frame.|  
|[DDX_DHtml_Img_Src](#ddx_dhtml_img_src)|Imposta o recupera il nome di un'immagine o un video clip nel documento.|  
|[DDX_DHtml_Frame_Src](#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|  
|[DDX_DHtml_IFrame_Src](#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdhtml. h  

## <a name="ddx_dhtml_anchor_href"></a>DDX_DHtml_Anchor_Href
Imposta o recupera il punto di ancoraggio o URL di destinazione.  
  
  
  
```  
DDX_DHtml_Anchor_Href(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLANCHORELEMENT_HREF inviare ID.

## <a name="ddx_dhtml_anchor_target"></a>DDX_DHtml_Anchor_Target
 Imposta o recupera la finestra di destinazione o il frame.  
    
```  
DDX_DHtml_Anchor_Target(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLANCHORELEMENT_TARGET inviare ID.  

## <a name="ddx_dhtml_elementinnerhtml"></a>DDX_DHtml_ElementInnerHtml
 Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.  
  
  
  
```  
DDX_DHtml_ElementInnerHtml(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLELEMENT_INNERHTML inviare ID.  
  

## <a name="ddx_dhtml_elementinnertext"></a>DDX_DHtml_ElementInnerText
Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.  
  
  
  
```  
DDX_DHtml_ElementInnerText(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLELEMENT_INNERTEXT inviare ID. 

## <a name="ddx_dhtml_elementvalue"></a>DDX_DHtml_ElementValue  
Imposta o recupera il valore di proprietà dal controllo selezionato.  
 
```  
DDX_DHtml_ElementValue(
    CDataExchange* dx,  
    LPCTSTR name,
    var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare. Vedere *valore* in [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext).  
  
## <a name="remarks"></a>Note  
 Questa macro verrà completata solo quando esegue i controlli che dispongono di una proprietà di valore. Caselle di testo, caselle di riepilogo e caselle combinate sono controlli che dispongono di una proprietà di valore.  
  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_A_VALUE inviare ID.  

## <a name="ddx_dhtml_frame_src"></a>DDX_DHtml_Frame_Src
Imposta o recupera l'URL del frame associato.  
  
```  
DDX_DHtml_Frame_Src(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLFRAMEBASE_SRC inviare ID.  

## <a name="ddx_dhtml_iframe_src"></a>DDX_DHtml_IFrame_Src
Imposta o recupera l'URL del frame associato.  
  
  
  
```  
DDX_DHtml_IFrame_Src(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLFRAMEBASE_SRC inviare ID. 

## <a name="ddx_dhtml_img_src"></a>DDX_DHtml_Img_Src
Ottiene o recupera il nome di un'immagine o un video clip nel documento.  
  
```  
DDX_DHtml_Img_Src(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 `dx`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `name`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 `var`  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Quando si utilizza il `DDX_DHtml_Img_Src` per recuperare la proprietà src per un elemento IMAGE, l'oggetto immagine di Internet Explorer verrà restituito l'URL completo con caratteri di escape per l'origine dell'immagine. Ad esempio, se si utilizza il `DDX_DHtml_Img_Src` (macro) per impostare la proprietà src dell'elemento di un'immagine per la stringa "alcuni interessanti immagine," quando si recupera la proprietà, Internet Explorer restituirà la stringa "res://d:\myapplication\myapp.exe/some%20interesting%20picture".  
  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLIMGELEMENT_SRC inviare ID.  

  
## <a name="see-also"></a>Vedere anche  
 [Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)

