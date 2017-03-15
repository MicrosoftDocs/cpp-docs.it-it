---
title: Classe CMFCPropertyGridColorProperty | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPropertyGridColorProperty
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyGridColorProperty class
- CMFCPropertyGridColorProperty::OnClickButton method
- CMFCPropertyGridColorProperty::FormatProperty method
- CMFCPropertyGridColorProperty::OnDrawValue method
- CMFCPropertyGridColorProperty::OnUpdateValue method
- CMFCPropertyGridColorProperty::OnEdit method
ms.assetid: af37be93-a91e-40a2-9a65-0f3412c6f0f8
caps.latest.revision: 33
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7069e35a44dbb0dbd4ad8d5d2b9156ccfbc15c76
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpropertygridcolorproperty-class"></a>Classe CMFCPropertyGridColorProperty
La classe `CMFCPropertyGridColorProperty` supporta un elemento controllo elenco delle proprietà che apre una finestra di dialogo di selezione colore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](#cmfcpropertygridcolorproperty)|Costruisce un oggetto `CMFCPropertyGridColorProperty`.|  
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](#enableautomaticbutton)|Consente di *automatica* pulsante nella finestra di dialogo Selezione colore. (Il pulsante automatica standard è denominato **automatica**.)|  
|[CMFCPropertyGridColorProperty::EnableOtherButton](#enableotherbutton)|Consente di *altri* pulsante nella finestra di dialogo Selezione colore. (Lo standard denominato altro pulsante **più colori... **.)|  
|`CMFCPropertyGridColorProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. (Esegue l'override di [CMFCPropertyGridProperty::FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|  
|[CMFCPropertyGridColorProperty::GetColor](#getcolor)|Ottiene il colore corrente della proprietà.|  
|`CMFCPropertyGridColorProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCPropertyGridColorProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. (Esegue l'override di [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|  
|`CMFCPropertyGridColorProperty::OnDrawValue`|Chiamato dal framework per visualizzare il valore della proprietà. (Esegue l'override di [CMFCPropertyGridProperty::OnDrawValue](../../mfc/reference/cmfcpropertygridproperty-class.md#ondrawvalue).)|  
|`CMFCPropertyGridColorProperty::OnEdit`|Chiamato dal framework quando l'utente sta per modificare il valore di una proprietà. (Esegue l'override di [CMFCPropertyGridProperty::OnEdit](../../mfc/reference/cmfcpropertygridproperty-class.md#onedit).)|  
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Chiamato dal framework quando viene modificato il valore di una proprietà modificabile. (Esegue l'override di [CMFCPropertyGridProperty::OnUpdateValue](../../mfc/reference/cmfcpropertygridproperty-class.md#onupdatevalue).)|  
|[CMFCPropertyGridColorProperty::SetColor](#setcolor)|Imposta un nuovo colore per la proprietà.|  
|[CMFCPropertyGridColorProperty::SetColumnsNumber](#setcolumnsnumber)|Specifica il numero di colonne nella griglia delle proprietà del colore corrente.|  
|[CMFCPropertyGridColorProperty::SetOriginalValue](#setoriginalvalue)|Imposta il valore originale di una proprietà modificabile.|  
  
## <a name="remarks"></a>Note  
 La classe `CMFCPropertyGridColorProperty` supporta una proprietà Color che è possibile aggiungere a un controllo elenco delle proprietà. Per ulteriori informazioni, vedere il [CMFCPropertyGridCtrl classe](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto della classe `CMFCPropertyGridColorProperty` e configurare tale oggetto usando diversi metodi della classe `CMFCPropertyGridColorProperty`. Il codice illustra come abilitare i pulsanti "automatico" (Automatic) e "altro" (Other) e come impostare il colore e il numero di colonne. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[13 NVC_MFC_NewControls](../../mfc/reference/codesnippet/cpp/cmfcpropertygridcolorproperty-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertygridctrl.h  
  
##  <a name="a-namecmfcpropertygridcolorpropertya--cmfcpropertygridcolorpropertycmfcpropertygridcolorproperty"></a><a name="cmfcpropertygridcolorproperty"></a>CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty  
 Costruisce un oggetto `CMFCPropertyGridColorProperty`.  
  
```  
CMFCPropertyGridColorProperty(
    const CString& strName,  
    const COLORREF& color,  
    CPalette* pPalette = NULL,  
    LPCTSTR lpszDescr = NULL,  
    DWORD_PTR dwData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strName`  
 Nome della proprietà.  
  
 [in] `color`  
 Il valore di colore della proprietà.  
  
 [in] `pPalette`  
 Puntatore a una tavolozza di colori. Il valore predefinito è `NULL`.  
  
 [in] `lpszDescr`  
 Descrizione della proprietà. Il valore predefinito è `NULL`.  
  
 [in] `dwData`  
 Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore ad altri dati che sono associati alla proprietà. Il valore predefinito è 0.  
  
##  <a name="a-nameenableautomaticbuttona--cmfcpropertygridcolorpropertyenableautomaticbutton"></a><a name="enableautomaticbutton"></a>CMFCPropertyGridColorProperty::EnableAutomaticButton  
 Consente di *automatica* pulsante nella finestra di dialogo Selezione colore. (Il pulsante automatica standard è denominato **automatica**.)  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Il testo dell'etichetta del pulsante automatica.  
  
 [in] `colorAutomatic`  
 Il valore di colore RGB del colore automatic (predefinito).  
  
 [in] `bEnable`  
 `TRUE`Per abilitare il pulsante automatico; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenableotherbuttona--cmfcpropertygridcolorpropertyenableotherbutton"></a><a name="enableotherbutton"></a>CMFCPropertyGridColorProperty::EnableOtherButton  
 Consente di *altri* pulsante nella finestra di dialogo Selezione colore. (Lo standard denominato altro pulsante **più colori... **.)  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg = TRUE,  
    BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Il testo dell'etichetta del pulsante.  
  
 [in] `bAltColorDlg`  
 `TRUE`Per visualizzare il `CMFCColorDialog` finestra di dialogo. `FALSE` per visualizzare la finestra di dialogo Selezione colori standard. Il valore predefinito è `TRUE`.  
  
 [in] `bEnable`  
 `TRUE`Per visualizzare il pulsante; in caso contrario, `FALSE`.  Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcolora--cmfcpropertygridcolorpropertygetcolor"></a><a name="getcolor"></a>CMFCPropertyGridColorProperty::GetColor  
 Ottiene il colore corrente della proprietà.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcolora--cmfcpropertygridcolorpropertysetcolor"></a><a name="setcolor"></a>CMFCPropertyGridColorProperty::SetColor  
 Imposta un nuovo colore per la proprietà.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcolumnsnumbera--cmfcpropertygridcolorpropertysetcolumnsnumber"></a><a name="setcolumnsnumber"></a>CMFCPropertyGridColorProperty::SetColumnsNumber  
 Specifica il numero di colonne nella griglia delle proprietà del colore corrente.  
  
```  
void SetColumnsNumber(int nColumnsNumber);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nColumnsNumber`  
 Numero di colonne nella griglia delle proprietà colore preferito.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta il valore di `m_nColumnsNumber` protetti (membro dati).  
  
##  <a name="a-namesetoriginalvaluea--cmfcpropertygridcolorpropertysetoriginalvalue"></a><a name="setoriginalvalue"></a>CMFCPropertyGridColorProperty::SetOriginalValue  
 Imposta il valore originale di una proprietà modificabile.  
  
```  
virtual void SetOriginalValue(const COleVariant& varValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `varValue`  
 Un valore.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CMFCPropertyGridProperty::ResetOriginalValue](../../mfc/reference/cmfcpropertygridproperty-class.md#resetoriginalvalue) per reimpostare il valore originale di una proprietà modificata.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

