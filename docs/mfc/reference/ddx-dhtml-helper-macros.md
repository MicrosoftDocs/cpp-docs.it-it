---
title: Macro di Helper DDX_DHtml | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- macros [MFC], exchanging data with HMTL pages
- DDX macros [MFC]
- HTML pages [MFC], helper macros
- DDX (dialog data exchange), DHtml helper macros
- macros [MFC], DDX_DHtml helpers
ms.assetid: c46302d2-ea43-4fea-bfc2-6f590d99f267
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6de53324eac663df7c12ee0cb2c0f4f02558157d
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121702"
---
# <a name="ddxdhtml-helper-macros"></a>Macro di Helper DDX_DHtml
Le macro di helper DDX_DHtml consentono un facile accesso alle proprietà di uso comune dei controlli in una pagina HTML.  
  
### <a name="data-exchange-macros"></a>Macro di scambio di dati  
  
|||  
|-|-|  
|[DDX_DHtml_ElementValue](#ddx_dhtml_elementvalue)|Imposta o recupera la proprietà Value dal controllo selezionato.|  
|[DDX_DHtml_ElementInnerText](#ddx_dhtml_elementinnertext)|Imposta o recupera il testo tra i tag di inizio e di fine dell'elemento corrente.|  
|[DDX_DHtml_ElementInnerHtml](#ddx_dhtml_elementinnerhtml)|Imposta o recupera il codice HTML tra i tag di inizio e di fine dell'elemento corrente.|  
|[DDX_DHtml_Anchor_Href](#ddx_dhtml_anchor_href)|Imposta o recupera il punto di ancoraggio o URL di destinazione.|  
|[DDX_DHtml_Anchor_Target](#ddx_dhtml_anchor_target)|Imposta o recupera la finestra di destinazione o il frame.|  
|[DDX_DHtml_Img_Src](#ddx_dhtml_img_src)|Imposta o recupera il nome di un'immagine o un video clip nel documento.|  
|[DDX_DHtml_Frame_Src](#ddx_dhtml_frame_src)|Ottiene o imposta l'URL del frame associato.|  
|[DDX_DHtml_IFrame_Src](#ddx_dhtml_iframe_src)|Ottiene o imposta l'URL del frame associato.|  
  
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
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLANCHORELEMENT_HREF inviare ID.

## <a name="ddx_dhtml_anchor_target"></a>  DDX_DHtml_Anchor_Target
 Imposta o recupera la finestra di destinazione o il frame.  
    
```  
DDX_DHtml_Anchor_Target(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLANCHORELEMENT_TARGET inviare ID.  

## <a name="ddx_dhtml_elementinnerhtml"></a>  DDX_DHtml_ElementInnerHtml
 Imposta o recupera il codice HTML tra i tag di inizio e di fine dell'elemento corrente.  
  
  
  
```  
DDX_DHtml_ElementInnerHtml(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLELEMENT_INNERHTML inviare ID.  
  

## <a name="ddx_dhtml_elementinnertext"></a>  DDX_DHtml_ElementInnerText
Imposta o recupera il testo tra i tag di inizio e di fine dell'elemento corrente.  
  
  
  
```  
DDX_DHtml_ElementInnerText(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLELEMENT_INNERTEXT inviare ID. 

## <a name="ddx_dhtml_elementvalue"></a> DDX_DHtml_ElementValue  
Imposta o recupera la proprietà Value dal controllo selezionato.  
 
```  
DDX_DHtml_ElementValue(
    CDataExchange* dx,  
    LPCTSTR name,
    var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare. Vedere *valore* in [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext).  
  
## <a name="remarks"></a>Note  
 Questa macro verrà completata solo quando viene eseguito i controlli che hanno una proprietà Value. I controlli che hanno una proprietà Value includono le caselle di modifica, caselle di riepilogo e caselle combinate.  
  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_A_VALUE inviare ID.  

## <a name="ddx_dhtml_frame_src"></a> DDX_DHtml_Frame_Src
Ottiene o imposta l'URL del frame associato.  
  
```  
DDX_DHtml_Frame_Src(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLFRAMEBASE_SRC inviare ID.  

## <a name="ddx_dhtml_iframe_src"></a> DDX_DHtml_IFrame_Src
Ottiene o imposta l'URL del frame associato.  
  
  
  
```  
DDX_DHtml_IFrame_Src(
    CDataExchange* dx,  
    LPCTSTR name,  
    CString& var)  
```  
  
#### <a name="parameters"></a>Parametri  
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
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
 *dx*  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 *name*  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *var*  
 Il valore da scambiare.  
  
## <a name="remarks"></a>Note  
 Quando si usa la macro DDX_DHtml_Img_Src per recuperare la proprietà src di un elemento immagine, l'oggetto immagine di Internet Explorer restituirà l'URL completo con caratteri di escape per l'origine dell'immagine. Ad esempio, se si usa la macro DDX_DHtml_Img_Src per impostare la proprietà src di un elemento immagine per la stringa "alcuni interessanti immagine", quando si recupera la proprietà, Internet Explorer restituirà la stringa "res://d:\myapplication\myapp.exe/some% 20interesting % 20picture."  
  
 Questa macro chiama il [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) funzione utilizzando il DISPID_IHTMLIMGELEMENT_SRC inviare ID.  

  
## <a name="see-also"></a>Vedere anche  
 [Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
