---
title: Classe CMFCRibbonSlider | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonSlider
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonSlider class
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
caps.latest.revision: 43
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
ms.openlocfilehash: 9f05ae7d0f3e1775a3321928867471749e11e679
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonslider-class"></a>Classe CMFCRibbonSlider
La `CMFCRibbonSlider` classe implementa un controllo dispositivo di scorrimento che è possibile aggiungere a una barra multifunzione o barra di stato multifunzione. Il controllo dispositivo di scorrimento della barra multifunzione è simile ai dispositivi di scorrimento dello zoom visualizzati nelle applicazioni di Office 2007.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonSlider : public CMFCRibbonBaseElement  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonSlider::CMFCRibbonSlider](#cmfcribbonslider)|Costruisce e Inizializza un controllo dispositivo di scorrimento della barra multifunzione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonSlider::GetPos](#getpos)|Restituisce la posizione corrente del controllo dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRangeMax](#getrangemax)|Restituisce il valore massimo del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRangeMin](#getrangemin)|Restituisce il valore minimo del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. (Esegue l'override di [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|  
|[CMFCRibbonSlider::GetZoomIncrement](#getzoomincrement)|Restituisce la dimensione dell'incremento di zoom per il controllo dispositivo di scorrimento.|  
|[CMFCRibbonSlider::HasZoomButtons](#haszoombuttons)|Specifica se il dispositivo di scorrimento è disponibili pulsanti di zoom.|  
|[CMFCRibbonSlider::OnDraw](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. (Esegue l'override di [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|  
|[CMFCRibbonSlider::SetPos](#setpos)|Imposta la posizione corrente del controllo dispositivo di scorrimento.|  
|[CMFCRibbonSlider::SetRange](#setrange)|Specifica l'intervallo del controllo dispositivo di scorrimento impostando i valori minimi e massimo.|  
|[CMFCRibbonSlider::SetZoomButtons](#setzoombuttons)|Mostra o nasconde i pulsanti di zoom.|  
|[CMFCRibbonSlider::SetZoomIncrement](#setzoomincrement)|Imposta dimensione dell'incremento di zoom per il controllo dispositivo di scorrimento.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il `SetRange` metodo per configurare l'intervallo di incrementi di zoom per il dispositivo di scorrimento. È possibile impostare la posizione corrente del dispositivo di scorrimento utilizzando il `SetPos` metodo.  
  
 È possibile visualizzare i pulsanti zoom circolare a sinistra e destra del controllo dispositivo di scorrimento utilizzando il `SetZoomButtons` metodo. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale, sul pulsante zoom a sinistra viene visualizzato un segno meno e sul pulsante zoom destra verrà visualizzato un segno più.  
  
 Il `SetZoomIncrement` metodo definisce l'incremento da aggiungere o sottrarre dalla posizione corrente quando un utente fa clic sui pulsanti di zoom.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCRibbonSlider` classe per impostare le proprietà del dispositivo di scorrimento. Nell'esempio viene illustrato come costruire un `CMFCRibbonSlider` dell'oggetto, visualizzare pulsanti di zoom, impostare la posizione corrente del controllo dispositivo di scorrimento e impostare l'intervallo di valori per il controllo dispositivo di scorrimento.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#12;](../../mfc/reference/codesnippet/cpp/cmfcribbonslider-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonslider.h  
  
##  <a name="a-namecmfcribbonslidera--cmfcribbonslidercmfcribbonslider"></a><a name="cmfcribbonslider"></a>CMFCRibbonSlider::CMFCRibbonSlider  
 Creare un dispositivo di scorrimento della barra multifunzione.  
  
```  
CMFCRibbonSlider(
    UINT nID,  
    int nWidth=100);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 ID del dispositivo di scorrimento.  
  
 [in]. `nWidth`  
 Larghezza di scorrimento in pixel.  
  
### <a name="remarks"></a>Note  
 Costruisce un dispositivo di scorrimento della barra multifunzione è `nWidth` pixel nella categoria pannello in cui viene aggiunto il dispositivo di scorrimento. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale.  
  
##  <a name="a-namegetposa--cmfcribbonslidergetpos"></a><a name="getpos"></a>CMFCRibbonSlider::GetPos  
 Restituisce la posizione corrente del controllo dispositivo di scorrimento.  
  
```  
int GetPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione corrente del controllo dispositivo di scorrimento, che è una posizione rispetto all'inizio del dispositivo di scorrimento.  
  
##  <a name="a-namegetrangemaxa--cmfcribbonslidergetrangemax"></a><a name="getrangemax"></a>CMFCRibbonSlider::GetRangeMax  
 Ottiene l'incremento massimo del dispositivo di scorrimento che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
```  
int GetRangeMax() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Incremento massimo del dispositivo di scorrimento che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
##  <a name="a-namegetrangemina--cmfcribbonslidergetrangemin"></a><a name="getrangemin"></a>CMFCRibbonSlider::GetRangeMin  
 Restituisce l'incremento minimo che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
```  
int GetRangeMin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento minimo che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
##  <a name="a-namegetregularsizea--cmfcribbonslidergetregularsize"></a><a name="getregularsize"></a>CMFCRibbonSlider::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetzoomincrementa--cmfcribbonslidergetzoomincrement"></a><a name="getzoomincrement"></a>CMFCRibbonSlider::GetZoomIncrement  
 Ottenere l'incremento di zoom per il controllo dispositivo di scorrimento.  
  
```  
int GetZoomIncrement() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento di zoom per il controllo dispositivo di scorrimento.  
  
##  <a name="a-namehaszoombuttonsa--cmfcribbonsliderhaszoombuttons"></a><a name="haszoombuttons"></a>CMFCRibbonSlider::HasZoomButtons  
 Specifica se il dispositivo di scorrimento è disponibili pulsanti di zoom.  
  
```  
BOOL HasZoomButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il dispositivo di scorrimento è disponibili pulsanti zoom; `FALSE` in caso contrario.  
  
##  <a name="a-nameondrawa--cmfcribbonsliderondraw"></a><a name="ondraw"></a>CMFCRibbonSlider::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetposa--cmfcribbonslidersetpos"></a><a name="setpos"></a>CMFCRibbonSlider::SetPos  
 Impostare la posizione corrente del controllo dispositivo di scorrimento.  
  
```  
void SetPos(
    int nPos,  
    BOOL bRedraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nPos`  
 Specifica la posizione da impostare per il dispositivo di scorrimento. La posizione è relativo all'inizio del dispositivo di scorrimento.  
  
 [in] `bRedraw`  
 Se `TRUE`, il dispositivo di scorrimento viene ridisegnato.  
  
##  <a name="a-namesetrangea--cmfcribbonslidersetrange"></a><a name="setrange"></a>CMFCRibbonSlider::SetRange  
 Impostare l'intervallo di valori per il controllo dispositivo di scorrimento.  
  
```  
void SetRange(
    int nMin,  
    int nMax);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nMin`  
 Specifica il valore minimo del controllo dispositivo di scorrimento.  
  
 [in] `nMax`  
 Specifica il valore massimo del controllo dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Specifica l'intervallo di valori per il controllo dispositivo di scorrimento impostando i valori minimi e massimo.  
  
##  <a name="a-namesetzoombuttonsa--cmfcribbonslidersetzoombuttons"></a><a name="setzoombuttons"></a>CMFCRibbonSlider::SetZoomButtons  
 Visualizzare o nascondere pulsanti zoom.  
  
```  
void SetZoomButtons(BOOL bSet=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in]. `bSet`  
 `TRUE`Per visualizzare pulsanti di zoom. `FALSE` per nasconderle.  
  
##  <a name="a-namesetzoomincrementa--cmfcribbonslidersetzoomincrement"></a><a name="setzoomincrement"></a>CMFCRibbonSlider::SetZoomIncrement  
 Impostare l'incremento di zoom per il controllo dispositivo di scorrimento.  
  
```  
void SetZoomIncrement(int nZoomIncrement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nZoomIncrement`  
 Specifica l'incremento di zoom del controllo dispositivo di scorrimento.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

