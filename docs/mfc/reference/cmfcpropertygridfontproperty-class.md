---
title: Classe CMFCPropertyGridFontProperty | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CMFCPropertyGridFontProperty::OnClickButton method
- CMFCPropertyGridFontProperty class
- CMFCPropertyGridFontProperty::FormatProperty method
ms.assetid: 83693f33-bbd3-4fcb-a9ad-fa79fcf2ca24
caps.latest.revision: 23
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 05d1db7e7de2ee72244e885d8a083ac3cda20142
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpropertygridfontproperty-class"></a>Classe CMFCPropertyGridFontProperty
La `CMFCPropertyGridFileProperty` classe supporta un elemento controllo elenco delle proprietà che verrà visualizzata una finestra di dialogo Selezione tipo di carattere.  
  
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
|`CMFCPropertyGridFontProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. (Esegue l'override di [CMFCPropertyGridProperty::FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|  
|[CMFCPropertyGridFontProperty::GetColor](#getcolor)|Recupera il colore selezionato dall'utente nella finestra di dialogo tipo di carattere.|  
|[CMFCPropertyGridFontProperty::GetLogFont](#getlogfont)|Recupera il tipo di carattere selezionato dall'utente nella finestra di dialogo tipo di carattere.|  
|`CMFCPropertyGridFontProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCPropertyGridFontProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. (Esegue l'override di [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|  
  
## <a name="remarks"></a>Note  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridFontProperty](../../mfc/reference/cmfcpropertygridfontproperty-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridfontproperty"></a>CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty  
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
 [in] `strName`  
 Nome della proprietà.  
  
 [in] `lf`  
 Una struttura di tipo di carattere logica che specifica gli attributi del tipo di carattere.  
  
 [in] `dwFontDialogFlags`  
 Stili applicati per la finestra di dialogo tipo di carattere che viene visualizzata quando si sceglie il pulsante di menu a discesa valore di proprietà. Il valore predefinito è la combinazione bit per bit (OR) di CF_EFFECTS e CF_SCREENFONTS. Per ulteriori informazioni, vedere il `Flags` parametro il [struttura CHOOSEFONT](http://msdn.microsoft.com/library/windows/desktop/ms646832).  
  
 [in] `lpszDescr`  
 Descrizione della proprietà del tipo di carattere. Il valore predefinito è `NULL`.  
  
 [in] `dwData`  
 Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore ad altri dati che sono associati alla proprietà. Il valore predefinito è 0.  
  
 [in] `color`  
 Il colore del tipo di carattere. Il valore predefinito è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Oggetto `CMFCPropertyGridFontProperty` oggetto rappresenta una proprietà di tipo di carattere in un controllo griglia delle proprietà del carattere.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCPropertyGridFontProperty` classe. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[&#26; NVC_MFC_NewControls](../../mfc/reference/codesnippet/cpp/cmfcpropertygridfontproperty-class_1.cpp)]  
  
##  <a name="getcolor"></a>CMFCPropertyGridFontProperty::GetColor  
 Recupera il colore selezionato dall'utente nella finestra di dialogo tipo di carattere.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB che rappresenta il colore del tipo di carattere selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getlogfont"></a>CMFCPropertyGridFontProperty::GetLogFont  
 Recupera il tipo di carattere selezionato dall'utente nella finestra di dialogo tipo di carattere.  
  
```  
LPLOGFONT GetLogFont();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura che descrive il tipo di carattere selezionato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

