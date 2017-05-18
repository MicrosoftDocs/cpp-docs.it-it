---
title: Classe CMFCImagePaintArea | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::GetMode
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetBitmap
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetColor
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCImagePaintArea class
ms.assetid: c59eec22-f15a-4e58-8c4d-4a18a41f4452
caps.latest.revision: 21
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
ms.openlocfilehash: c16fd9605474e57f167646ddc9bc91d235d1cba5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcimagepaintarea-class"></a>Classe CMFCImagePaintArea
Fornisce l'area dell'immagine che consente di modificare un'immagine in una finestra di dialogo editor di immagini.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCImagePaintArea : public CButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCImagePaintArea::CMFCImagePaintArea](#cmfcimagepaintarea)|Costruisce un oggetto `CMFCImagePaintArea`.|  
|`CMFCImagePaintArea::~CMFCImagePaintArea`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCImagePaintArea::GetMode](#getmode)|Recupera la modalità di disegno corrente.|  
|[CMFCImagePaintArea::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per l'area dell'immagine.|  
|[CMFCImagePaintArea::SetColor](#setcolor)|Imposta il colore corrente.|  
|[CMFCImagePaintArea::SetMode](#setmode)|Imposta la modalità di disegno corrente.|  
  
### <a name="remarks"></a>Note  
 Questa classe non deve essere utilizzato direttamente dal codice.  
  
 Il framework utilizza questa classe per visualizzare l'area dell'immagine in una finestra di dialogo editor di immagini. Per ulteriori informazioni nella finestra di dialogo dell'editor di immagini, vedere [CMFCImageEditorDialog classe](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCImagePaintArea` classe, impostare colori di disegno, impostare la modalità di disegno corrente e l'immagine bitmap per l'area dell'immagine corrente.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#37;](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afximagepaintarea.h  
  
##  <a name="cmfcimagepaintarea"></a>CMFCImagePaintArea::CMFCImagePaintArea  
 Costruisce un oggetto `CMFCImagePaintArea`.  
  
```  
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pParentDlg`|Puntatore alla finestra di dialogo che è l'elemento padre dell'editor di immagini.|  
  
##  <a name="getmode"></a>CMFCImagePaintArea::GetMode  
 Recupera la modalità di disegno corrente.  
  
```  
IMAGE_EDIT_MODE GetMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) valore che specifica la modalità di disegno corrente.  
  
##  <a name="setbitmap"></a>CMFCImagePaintArea::SetBitmap  
 Imposta l'immagine bitmap per l'area dell'immagine.  
  
```  
void SetBitmap(CBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pBitmap`|La nuova immagine bitmap da visualizzare.|  
  
### <a name="remarks"></a>Note  
 Se `pBitmap` è `NULL`, questo metodo imposta le dimensioni dell'area di disegno modificabile su zero. In caso contrario, imposta le dimensioni dell'area di disegno modificabili per le dimensioni dell'immagine bitmap specificata.  
  
##  <a name="setcolor"></a>CMFCImagePaintArea::SetColor  
 Imposta il colore corrente.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `color`|Il nuovo colore.|  
  
### <a name="remarks"></a>Note  
 Quando si seleziona un colore dalla barra tavolozza editor di immagini o colori, il framework chiama questo metodo per aggiornare il colore corrente. Il colore iniziale è nero (un `COLORREF` il valore 0).  
  
 Il colore viene utilizzato nella finestra di dialogo dell'editor di immagini per tutte le modalità di disegno, ad eccezione di `IMAGE_EDIT_MODE_COLOR`. Per ulteriori informazioni sulle modalità di disegno, vedere [enumerazione cmfcimagepaintarea:: Image_edit_mode](cmfcimagepaintarea-image-edit-mode-enumeration.md).  
  
##  <a name="setmode"></a>CMFCImagePaintArea::SetMode  
 Imposta la modalità di disegno corrente.  
  
```  
void SetMode(IMAGE_EDIT_MODE mode);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `mode`|Un [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) valore che specifica la modalità di disegno corrente.|  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe di CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)

