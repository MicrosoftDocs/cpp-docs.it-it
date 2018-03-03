---
title: Classe CMFCCaptionButton | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetHit
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetIconID
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetRect
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetSize
- AFXCAPTIONBUTTON/CMFCCaptionButton::IsMiniFrameButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::Move
- AFXCAPTIONBUTTON/CMFCCaptionButton::OnDraw
- AFXCAPTIONBUTTON/CMFCCaptionButton::SetMiniFrameButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCCaptionButton [MFC], CMFCCaptionButton
- CMFCCaptionButton [MFC], GetHit
- CMFCCaptionButton [MFC], GetIconID
- CMFCCaptionButton [MFC], GetRect
- CMFCCaptionButton [MFC], GetSize
- CMFCCaptionButton [MFC], IsMiniFrameButton
- CMFCCaptionButton [MFC], Move
- CMFCCaptionButton [MFC], OnDraw
- CMFCCaptionButton [MFC], SetMiniFrameButton
ms.assetid: c5774b38-c0dd-414a-9ede-3b2f78f233ec
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 857054bd60e206cc3a563aa5f00b872f67c58d3f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfccaptionbutton-class"></a>Classe CMFCCaptionButton
Il `CMFCCaptionButton` implementa un pulsante che viene visualizzato nella barra del titolo per un riquadro ancorato o una finestra con mini-cornice. In genere, il framework crea automaticamente pulsanti della barra del titolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCCaptionButton : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionButton::CMFCCaptionButton](#cmfccaptionbutton)|Costruisce un oggetto CMFCCaptionButton.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionButton::GetHit](#gethit)|Restituisce il comando rappresentato dal pulsante.|  
|[CMFCCaptionButton::GetIconID](#geticonid)|Restituisce l'ID dell'immagine associata al pulsante.|  
|[CMFCCaptionButton::GetRect](#getrect)|Restituisce il rettangolo occupato dal pulsante.|  
|[CMFCCaptionButton::GetSize](#getsize)|Restituisce la larghezza e altezza del pulsante.|  
|[CMFCCaptionButton::IsMiniFrameButton](#isminiframebutton)|Indica se l'altezza della barra del titolo è impostata su dimensioni minidump.|  
|[CMFCCaptionButton::Move](#move)|Imposta la posizione di disegno pulsante e Mostra lo stato della finestra.|  
|[CMFCCaptionButton::OnDraw](#ondraw)|Disegna il pulsante della didascalia.|  
|[CMFCCaptionButton::SetMiniFrameButton](#setminiframebutton)|Imposta la dimensione minima della barra del titolo.|  
  
## <a name="remarks"></a>Note  
 È possibile derivare una classe da [CPaneFrameWnd classe](../../mfc/reference/cpaneframewnd-class.md) e utilizzare il metodo protetto, `AddButton`, per aggiungere pulsanti a una finestra cornice minidump.  
  
 CPaneFrameWnd.h definisce gli ID di comando per due tipi di pulsanti:  
  
- `AFX_CAPTION_BTN_PIN`, che visualizza un pulsante pin quando il riquadro ancorato supporta la modalità Nascondi automaticamente.  
  
- `AFX_CAPTION_BTN_CLOSE`, che consente di visualizzare un **Chiudi** pulsante quando il riquadro può essere chiuso o nascosto.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCCaptionButton` dell'oggetto e impostare la dimensione minima della barra del titolo.  
  
 [!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/cpp/cmfccaptionbutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcaptionbutton.h  
  
##  <a name="cmfccaptionbutton"></a>CMFCCaptionButton::CMFCCaptionButton  
 Costruisce un oggetto `CMFCCaptionButton`.  
  
```  
CMFCCaptionButton();

 
CMFCCaptionButton(
    UINT nHit,  
    BOOL bLeftAlign = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHit`  
 Il comando associato al pulsante.  
  
 [in] `bLeftAlign`  
 Specifica se il pulsante è allineato a sinistra.  
  
 Nella tabella seguente sono elencati i valori possibili per il `nHit` parametro.  
  
|Valore|Comando|  
|-----------|-------------|  
|`AFX_HTCLOSE`|Pulsante Chiudi.|  
|`HTMINBUTTON`|Pulsante Riduci a icona.|  
|`HTMAXBUTTON`|Pulsante di ingrandimento.|  
|`AFX_HTLEFTBUTTON`|Pulsante freccia sinistra.|  
|`AFX_HTRIGHTBUTTON`|Pulsante freccia destra.|  
|`AFX_HTMENU`|Premuto il pulsante di menu freccia.|  
|`HTNOWHERE`|Il valore predefinito. non rappresenta nessun comando.|  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i pulsanti non sono associati a un comando.  
  
 Pulsanti sono allineati in destra o sinistra.  
  
##  <a name="gethit"></a>CMFCCaptionButton::GetHit  
 Restituisce il comando rappresentato dal pulsante.  
  
```  
UINT GetHit() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il comando rappresentato dal pulsante.  
  
 Nella tabella seguente sono elencati i possibili valori restituiti.  
  
|Valore|Comando|  
|-----------|-------------|  
|`AFX_HTCLOSE`|Pulsante Chiudi.|  
|`HTMINBUTTON`|Pulsante Riduci a icona.|  
|`HTMAXBUTTON`|Pulsante di ingrandimento.|  
|`AFX_HTLEFTBUTTON`|Pulsante freccia sinistra.|  
|`AFX_HTRIGHTBUTTON`|Pulsante freccia destra.|  
|`AFX_HTMENU`|Premuto il pulsante di menu freccia.|  
|`HTNOWHERE`|Il valore predefinito. non rappresenta nessun comando.|  
  
##  <a name="geticonid"></a>CMFCCaptionButton::GetIconID  
 Restituisce l'ID dell'immagine associata al pulsante.  
  
```  
virtual CMenuImages::IMAGES_IDS GetIconID(
    BOOL bHorz,  
    BOOL bMaximized = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bHorz`  
 `TRUE`per immagine freccia sinistra o destra ID; `FALSE` per su o freccia giù ID immagine.  
  
 [in] `bMaximized`  
 `TRUE`per un ID immagine di ingrandimento. `FALSE` per una riduzione a icona immagine ID.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID immagine.  
  
### <a name="remarks"></a>Note  
 I parametri di specificare gli ID immagine per la riduzione a icona o ottimizzare pulsanti.  
  
##  <a name="getrect"></a>CMFCCaptionButton::GetRect  
 Restituisce il rettangolo occupato dal pulsante.  
  
```  
virtual CRect GetRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo che rappresenta la posizione del pulsante.  
  
### <a name="remarks"></a>Note  
 Se non è possibile visualizzare il pulsante, la dimensione restituita è 0.  
  
##  <a name="getsize"></a>CMFCCaptionButton::GetSize  
 Restituisce la larghezza e altezza del pulsante.  
  
```  
static CSize GetSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni esterne del pulsante.  
  
### <a name="remarks"></a>Note  
 Le dimensioni restituite includono bordo e il margine di pulsante.  
  
##  <a name="isminiframebutton"></a>CMFCCaptionButton::IsMiniFrameButton  
 Indica se l'altezza della barra del titolo è impostata su dimensioni minidump.  
  
```  
BOOL IsMiniFrameButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la didascalia è impostata su dimensioni minidump. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="move"></a>CMFCCaptionButton::Move  
 Imposta la posizione di disegno pulsante e Mostra lo stato della finestra.  
  
```  
void Move(
    const CPoint& ptTo,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ptTo`  
 Nuova posizione.  
  
 [in] `bHide`  
 Se si desidera visualizzare sul pulsante.  
  
##  <a name="ondraw"></a>CMFCCaptionButton::OnDraw  
 Disegna il pulsante della didascalia.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    BOOL bActive,  
    BOOL bHorz = TRUE,  
    BOOL bMaximized = TRUE,  
    BOOL bDisabled = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il pulsante.  
  
 [in] `bActive`  
 Indica se disegnare un'immagine del pulsante attiva.  
  
 [in] `bHorz`  
 Riservato per l'utilizzo in una classe derivata.  
  
 [in] `bMaximized`  
 Indica se disegnare un'immagine del pulsante ingrandita.  
  
 [in] `bDisabled`  
 Indica se disegnare un'immagine del pulsante abilitato.  
  
### <a name="remarks"></a>Note  
 Il `bMaximized` parametro viene utilizzato quando il pulsante è un ingrandimento o pulsante Riduci a icona.  
  
##  <a name="setminiframebutton"></a>CMFCCaptionButton::SetMiniFrameButton  
 Imposta la dimensione minima della barra del titolo.  
  
```  
void SetMiniFramebutton(BOOL bSet = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSet`  
 `TRUE`per l'altezza della barra del titolo mini; `FALSE` per l'altezza della barra del titolo predefinita.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
