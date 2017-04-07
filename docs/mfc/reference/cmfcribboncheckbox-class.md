---
title: Classe CMFCRibbonCheckBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetCompactSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetIntermediateSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetRegularSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::IsDrawTooltipImage
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDraw
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawMenuImage
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawOnList
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::SetACCData
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonCheckBox class
ms.assetid: 3a6c3891-c8d1-4af0-b954-7b9ab048782a
caps.latest.revision: 30
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
ms.openlocfilehash: 9efe04a8e79835b8e51b7045cb86ab2dba68b675
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribboncheckbox-class"></a>Classe CMFCRibbonCheckBox
La classe `CMFCRibbonCheckBox` implementa una casella di controllo che è possibile aggiungere a un pannello della barra multifunzione, a una barra di accesso rapido o a un menu di scelta rapida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonCheckBox : public CMFCRibbonButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCheckBox::CMFCRibbonCheckBox](#cmfcribboncheckbox)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCheckBox::GetCompactSize](#getcompactsize)|(Esegue l'override di [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|  
|[CMFCRibbonCheckBox::GetIntermediateSize](#getintermediatesize)|(Esegue l'override di [CMFCRibbonButton::GetIntermediateSize](../../mfc/reference/cmfcribbonbutton-class.md#getintermediatesize).)|  
|[CMFCRibbonCheckBox::GetRegularSize](#getregularsize)|(Esegue l'override di [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|  
|[CMFCRibbonCheckBox::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|  
|[CMFCRibbonCheckBox::OnDraw](#ondraw)|(Esegue l'override di [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|  
|[CMFCRibbonCheckBox::OnDrawMenuImage](#ondrawmenuimage)|(Esegue l'override di [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|  
|[CMFCRibbonCheckBox::OnDrawOnList](#ondrawonlist)|Esegue l'override di `CMFCRibbonButton::OnDrawOnList`.|  
|[CMFCRibbonCheckBox::SetACCData](#setaccdata)|(Esegue l'override di [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|  
  
## <a name="remarks"></a>Note  
 Per usare un `CMFCRibbonCheckBox` nell'applicazione, aggiungere il seguente costruttore al codice:  
  
```  
CMFCRibbonCheckBox (UINT nID, LPCTSTR lpszText)  
```  
dove `nID` è l'ID comando della casella di controllo e `lpszText` è l'etichetta di testo della casella di controllo.  
  
 È possibile aggiungere una casella di controllo a un pannello della barra multifunzione utilizzando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonCheckBox](../../mfc/reference/cmfcribboncheckbox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncheckbox. h  
  
##  <a name="cmfcribboncheckbox"></a>CMFCRibbonCheckBox::CMFCRibbonCheckBox  
 Costruttore di un oggetto casella di controllo della barra multifunzione  
  
```  
CMFCRibbonCheckBox(
    UINT nID,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Specifica l'ID di comando.  
  
 [in] `lpszText`  
 Specifica l'etichetta di testo.  
  
### <a name="return-value"></a>Valore restituito  
 Costruisce un oggetto casella di controllo della barra multifunzione.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCRibbonCheckBox` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&17;](../../mfc/reference/codesnippet/cpp/cmfcribboncheckbox-class_1.cpp)]  
  
##  <a name="getcompactsize"></a>CMFCRibbonCheckBox::GetCompactSize  
 Quando sottoposto a override, ottiene la dimensione compact della casella di controllo.  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al `CDC` associata con la casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CSize` oggetto che contiene la compattezza della casella di controllo.  
  
### <a name="remarks"></a>Note  
 Se non sottoposto a override, restituisce la dimensione intermedia della casella di controllo.  
  
##  <a name="getintermediatesize"></a>CMFCRibbonCheckBox::GetIntermediateSize  
 Ottiene le dimensioni della casella di controllo intermedi.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al `CDC` associata a questa casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le dimensioni della casella di controllo intermedi.  
  
### <a name="remarks"></a>Note  
 Se non sottoposto a override, viene calcolata la dimensione intermedia come dimensione della casella di controllo predefinito ( `AFX_CHECK_BOX_DEFAULT_SIZE`) e la dimensione del testo, più i margini.  
  
##  <a name="getregularsize"></a>CMFCRibbonCheckBox::GetRegularSize  
 Ottiene le dimensioni normali della casella di controllo.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a di `CDC` oggetto associato a questa casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CSize` oggetto che contiene le dimensioni normali della casella di controllo.  
  
### <a name="remarks"></a>Note  
 Se non sottoposto a override, restituisce la dimensione intermedia della casella di controllo.  
  
##  <a name="isdrawtooltipimage"></a>CMFCRibbonCheckBox::IsDrawTooltipImage  
 Indica se è presente un'immagine della descrizione comando associata alla casella di controllo.  
  
```  
virtual BOOL IsDrawTooltipImage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` nel caso di un'immagine della descrizione comando associata alla casella di controllo, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCRibbonCheckBox::OnDraw  
 Chiamato dal framework per disegnare la casella di controllo utilizzando un contesto di dispositivo specificato.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al `CDC` in cui disegnare la casella di controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawmenuimage"></a>CMFCRibbonCheckBox::OnDrawMenuImage  
 Chiamato dal framework per disegnare un'immagine del menu per la casella di controllo.  
  
```  
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CDC*`  
 Puntatore al `CDC` associata con la casella di controllo.  
  
 [in] `CRect`  
 Oggetto `CRect` oggetto che specifica il rettangolo in cui disegnare l'immagine del menu.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se è stato creato l'immagine, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se non sottoposto a override, restituisce `FALSE`.  
  
##  <a name="ondrawonlist"></a>CMFCRibbonCheckBox::OnDrawOnList  
 Chiamato dal framework per disegnare la casella di controllo in una casella di riepilogo di comandi.  
  
```  
virtual void OnDrawOnList(
    CDC* pDC,  
    CString strText,  
    int nTextOffset,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo in cui disegnare la casella di controllo.  
  
 [in] `strText`  
 Testo da visualizzare.  
  
 [in] `nTextOffset`  
 La distanza in pixel, dal lato sinistro della casella di riepilogo per visualizzare il testo.  
  
 [in] `rect`  
 Il rettangolo di visualizzazione per la casella di controllo.  
  
 [in] `bIsSelected`  
 `TRUE`Se è selezionata la casella di controllo, o `FALSE` in caso contrario.  
  
 [in] `bHighlighted`  
 `TRUE`Se la casella di controllo viene evidenziato, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setaccdata"></a>CMFCRibbonCheckBox::SetACCData  
 Imposta i dati di accessibilità per la casella di controllo.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 `pParent`  
 La finestra padre della casella di controllo.  
  
 `data`  
 I dati di accessibilità per la casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo imposta i dati di accessibilità per la casella di controllo e sempre restituisce `TRUE`. Eseguire l'override di questo metodo per impostare i dati di accessibilità e restituire un valore che indica l'esito positivo o negativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)

