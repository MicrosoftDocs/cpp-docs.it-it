---
title: Classe CMFCPropertyGridFontProperty | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::GetColor
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::GetLogFont
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyGridFontProperty [MFC], CMFCPropertyGridFontProperty
- CMFCPropertyGridFontProperty [MFC], GetColor
- CMFCPropertyGridFontProperty [MFC], GetLogFont
ms.assetid: 83693f33-bbd3-4fcb-a9ad-fa79fcf2ca24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 33c719ffcba207beb4a5f867192af2b98aef2797
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45719940"
---
# <a name="cmfcpropertygridfontproperty-class"></a>Classe CMFCPropertyGridFontProperty
Il `CMFCPropertyGridFileProperty` classe supporta un elemento controllo elenco delle proprietà che verrà visualizzata una finestra di dialogo Selezione tipo di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPropertyGridFontProperty : public CMFCPropertyGridProperty  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty](#cmfcpropertygridfontproperty)|Costruisce un oggetto `CMFCPropertyGridFontProperty`.|  
|`CMFCPropertyGridFontProperty::~CMFCPropertyGridFontProperty`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCPropertyGridFontProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. (Esegue l'override [cmfcpropertygridproperty:: Formatproperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|  
|[CMFCPropertyGridFontProperty::GetColor](#getcolor)|Recupera il colore del tipo di carattere selezionato dalla finestra di dialogo tipo di carattere.|  
|[CMFCPropertyGridFontProperty::GetLogFont](#getlogfont)|Recupera il tipo di carattere selezionato dalla finestra di dialogo tipo di carattere.|  
|`CMFCPropertyGridFontProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCPropertyGridFontProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. (Esegue l'override [cmfcpropertygridproperty:: Onclickbutton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|  
  
## <a name="remarks"></a>Note  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridFontProperty](../../mfc/reference/cmfcpropertygridfontproperty-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertygridctrl. h  
  
##  <a name="cmfcpropertygridfontproperty"></a>  CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty  
 Costruisce un oggetto `CMFCPropertyGridFontProperty`.  
  
```  
CMFCPropertyGridFontProperty(
    const CString& strName,  
    LOGFONT& lf,  
    DWORD dwFontDialogFlags = CF_EFFECTS | CF_SCREENFONTS,  
    LPCTSTR lpszDescr = NULL,  
    DWORD_PTR dwData = 0,  
    COLORREF color = (COLORREF)-1);
```  
  
### <a name="parameters"></a>Parametri  
*strName*<br/>
[in] Il nome della proprietà.  
  
*LF*<br/>
[in] Struttura logica del tipo di carattere che specifica gli attributi del tipo di carattere.  
  
*dwFontDialogFlags*<br/>
[in] Stili applicati alla finestra di dialogo tipo di carattere che viene visualizzata quando si fa clic sul pulsante dell'elenco a discesa valore proprietà. Il valore predefinito è la combinazione bit per bit (OR) di CF_EFFECTS e CF_SCREENFONTS. Per altre informazioni, vedere la *Flags* parametro del [CHOOSEFONT struttura](/windows/desktop/api/commdlg/ns-commdlg-tagchoosefonta).  
  
*lpszDescr*<br/>
[in] Descrizione della proprietà del tipo di carattere. Il valore predefinito è NULL.  
  
*dwData*<br/>
[in] Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore a altri dati che sono associati alla proprietà. Il valore predefinito è 0.  
  
*Colore*<br/>
[in] Colore del tipo di carattere. Il valore predefinito è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Oggetto `CMFCPropertyGridFontProperty` oggetto rappresenta una proprietà del tipo di carattere in un controllo griglia delle proprietà del tipo di carattere.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCPropertyGridFontProperty` classe. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#26](../../mfc/reference/codesnippet/cpp/cmfcpropertygridfontproperty-class_1.cpp)]  
  
##  <a name="getcolor"></a>  CMFCPropertyGridFontProperty::GetColor  
 Recupera il colore del tipo di carattere selezionato dalla finestra di dialogo tipo di carattere.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB che rappresenta il colore del tipo di carattere selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getlogfont"></a>  CMFCPropertyGridFontProperty::GetLogFont  
 Recupera il tipo di carattere selezionato dalla finestra di dialogo tipo di carattere.  
  
```  
LPLOGFONT GetLogFont();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura che descrive il tipo di carattere selezionato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)
