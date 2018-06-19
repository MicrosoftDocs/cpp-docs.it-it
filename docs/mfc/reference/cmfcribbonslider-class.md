---
title: Classe CMFCRibbonSlider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider::CMFCRibbonSlider
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetPos
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMax
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRangeMin
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetRegularSize
- AFXRIBBONSLIDER/CMFCRibbonSlider::GetZoomIncrement
- AFXRIBBONSLIDER/CMFCRibbonSlider::HasZoomButtons
- AFXRIBBONSLIDER/CMFCRibbonSlider::OnDraw
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetPos
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetRange
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomButtons
- AFXRIBBONSLIDER/CMFCRibbonSlider::SetZoomIncrement
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonSlider [MFC], CMFCRibbonSlider
- CMFCRibbonSlider [MFC], GetPos
- CMFCRibbonSlider [MFC], GetRangeMax
- CMFCRibbonSlider [MFC], GetRangeMin
- CMFCRibbonSlider [MFC], GetRegularSize
- CMFCRibbonSlider [MFC], GetZoomIncrement
- CMFCRibbonSlider [MFC], HasZoomButtons
- CMFCRibbonSlider [MFC], OnDraw
- CMFCRibbonSlider [MFC], SetPos
- CMFCRibbonSlider [MFC], SetRange
- CMFCRibbonSlider [MFC], SetZoomButtons
- CMFCRibbonSlider [MFC], SetZoomIncrement
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a4264f26028db4c581fe1dc143905ac0ffc8f66
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33372697"
---
# <a name="cmfcribbonslider-class"></a>Classe CMFCRibbonSlider
La `CMFCRibbonSlider` classe implementa un controllo dispositivo di scorrimento che è possibile aggiungere a una barra multifunzione o la barra di stato della barra multifunzione. Il controllo dispositivo di scorrimento della barra multifunzione è simile ai dispositivi di scorrimento dello zoom visualizzati nelle applicazioni di Office 2007.  
  
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
|[CMFCRibbonSlider::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione. (Esegue l'override [cmfcribbonbaseelement:: Getregularsize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|  
|[CMFCRibbonSlider::GetZoomIncrement](#getzoomincrement)|Restituisce la dimensione dell'incremento di zoom per il controllo dispositivo di scorrimento.|  
|[CMFCRibbonSlider::HasZoomButtons](#haszoombuttons)|Specifica se il dispositivo di scorrimento contiene pulsanti zoom.|  
|[CMFCRibbonSlider::OnDraw](#ondraw)|Chiamato dal framework per disegnare l'elemento della barra multifunzione. (Esegue l'override [cmfcribbonbaseelement:: OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|  
|[CMFCRibbonSlider::SetPos](#setpos)|Imposta la posizione corrente del controllo dispositivo di scorrimento.|  
|[CMFCRibbonSlider::SetRange](#setrange)|Specifica l'intervallo del controllo dispositivo di scorrimento impostando i valori minimi e massimo.|  
|[CMFCRibbonSlider::SetZoomButtons](#setzoombuttons)|Mostra o nasconde i pulsanti zoom.|  
|[CMFCRibbonSlider::SetZoomIncrement](#setzoomincrement)|Imposta dimensione dell'incremento di zoom per il controllo dispositivo di scorrimento.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il `SetRange` metodo per configurare l'intervallo di incrementi di zoom per il dispositivo di scorrimento. È possibile impostare la posizione corrente del dispositivo di scorrimento utilizzando il `SetPos` metodo.  
  
 È possibile visualizzare i pulsanti zoom circolare a sinistra e a destra del controllo dispositivo di scorrimento utilizzando il `SetZoomButtons` metodo. Per impostazione predefinita, il dispositivo di scorrimento orizzontale, pulsante zoom a sinistra viene visualizzato un segno di sottrazione e pulsante zoom destra viene visualizzato un segno più.  
  
 Il `SetZoomIncrement` metodo definisce l'incremento per aggiungere o sottrarre dalla posizione corrente quando un utente fa clic sui pulsanti di zoom.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCRibbonSlider` classe per impostare le proprietà del dispositivo di scorrimento. Nell'esempio viene illustrato come costruire un `CMFCRibbonSlider` dell'oggetto, visualizzare i pulsanti zoom, impostare la posizione corrente del controllo dispositivo di scorrimento e impostare l'intervallo di valori per il controllo dispositivo di scorrimento.  
  
 [!code-cpp[NVC_MFC_RibbonApp#12](../../mfc/reference/codesnippet/cpp/cmfcribbonslider-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonslider.h  
  
##  <a name="cmfcribbonslider"></a>  CMFCRibbonSlider::CMFCRibbonSlider  
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
 Larghezza in pixel del dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Costruisce un dispositivo di scorrimento della barra multifunzione è `nWidth` pixel nella categoria pannello in cui viene aggiunto il dispositivo di scorrimento. Per impostazione predefinita, il dispositivo di scorrimento è orizzontale.  
  
##  <a name="getpos"></a>  CMFCRibbonSlider::GetPos  
 Restituisce la posizione corrente del controllo dispositivo di scorrimento.  
  
```  
int GetPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione corrente del controllo dispositivo di scorrimento, ovvero una posizione relativa all'inizio del dispositivo di scorrimento.  
  
##  <a name="getrangemax"></a>  CMFCRibbonSlider::GetRangeMax  
 Ottiene l'incremento massimo del dispositivo di scorrimento che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
```  
int GetRangeMax() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Incremento massimo del dispositivo di scorrimento che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
##  <a name="getrangemin"></a>  CMFCRibbonSlider::GetRangeMin  
 Restituisce l'incremento minimo che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
```  
int GetRangeMin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento minimo che può essere trasmesso il dispositivo di scorrimento nel controllo dispositivo di scorrimento.  
  
##  <a name="getregularsize"></a>  CMFCRibbonSlider::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getzoomincrement"></a>  CMFCRibbonSlider::GetZoomIncrement  
 Ottenere l'incremento di zoom per il controllo dispositivo di scorrimento.  
  
```  
int GetZoomIncrement() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento di zoom per il controllo dispositivo di scorrimento.  
  
##  <a name="haszoombuttons"></a>  CMFCRibbonSlider::HasZoomButtons  
 Specifica se il dispositivo di scorrimento contiene pulsanti zoom.  
  
```  
BOOL HasZoomButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il dispositivo di scorrimento è disponibili pulsanti zoom; `FALSE` in caso contrario.  
  
##  <a name="ondraw"></a>  CMFCRibbonSlider::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpos"></a>  CMFCRibbonSlider::SetPos  
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
  
##  <a name="setrange"></a>  CMFCRibbonSlider::SetRange  
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
  
##  <a name="setzoombuttons"></a>  CMFCRibbonSlider::SetZoomButtons  
 Visualizzare o nascondere i pulsanti zoom.  
  
```  
void SetZoomButtons(BOOL bSet=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in]. `bSet`  
 `TRUE` Per visualizzare pulsanti zoom; `FALSE` per nasconderle.  
  
##  <a name="setzoomincrement"></a>  CMFCRibbonSlider::SetZoomIncrement  
 Impostare l'incremento di zoom per il controllo dispositivo di scorrimento.  
  
```  
void SetZoomIncrement(int nZoomIncrement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nZoomIncrement`  
 Specifica l'incremento del controllo dispositivo di scorrimento dello zoom.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)
