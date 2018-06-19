---
title: Funzioni Bitmap grigie e con dithering | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- AFXWIN/AfxDrawGrayBitmap
- AFXWIN/AfxGetGrayBitmap
- AFXWIN/AfxDrawDitheredBitmap
- AFXWIN/AfxGetDitheredBitmap
dev_langs:
- C++
helpviewer_keywords:
- gray and dithered bitmap functions [MFC]
ms.assetid: cb139a77-b85e-4504-9d93-24156ad77a41
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: de887cdbe80642925bc935eb48726a59850f6f96
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33375174"
---
# <a name="gray-and-dithered-bitmap-functions"></a>funzioni di bitmap grige e retinate
**Funzioni della bitmap grigia**  
  
 MFC fornisce due funzioni visualizzare una bitmap con l'aspetto di un controllo disabilitato.  
  
 ![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "vcgraybitmap")  
  
|||  
|-|-|  
|[AfxDrawGrayBitmap](#afxdrawgraybitmap)|Disegna una versione in grigio di una bitmap.|  
|[AfxGetGrayBitmap](#afxgetgraybitmap)|Copia una versione in grigio di una bitmap.|  
  
 **Funzioni della bitmap con dithering**  
  
 MFC fornisce anche due funzioni per la sostituzione dello sfondo di una bitmap con un modello con dithering.  
  
 ![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "vcditheredbitmap")  
  
|||  
|-|-|  
|[AfxDrawDitheredBitmap](#afxdrawditheredbitmap)|Disegna una bitmap con uno sfondo con dithering.|  
|[AfxGetDitheredBitmap](#afxgetditheredbitmap)|Copia una bitmap con uno sfondo con dithering.|  
  
##  <a name="afxdrawgraybitmap"></a>  AfxDrawGrayBitmap  
 Disegna una versione in grigio di una bitmap.  
  
```   
void AFXAPI AfxDrawGrayBitmap(
    CDC* pDC,  
    int x,  
    int y,  
    const CBitmap& rSrc,  
    COLORREF crBackground); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al controller di dominio di destinazione.  
  
 *x*  
 Coordinata X di destinazione.  
  
 *y*  
 Coordinata Y di destinazione.  
  
 `rSrc`  
 Bitmap di origine.  
  
 `crBackground`  
 Nuovo colore di sfondo (in genere grigio, ad esempio COLOR_MENU).  
  
### <a name="remarks"></a>Note  
 La bitmap disegnata con `AfxDrawGrayBitmap` avrà l'aspetto di un controllo disabilitato.  
  
 ![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "vcgraybitmap")  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#191](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_1.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  

##  <a name="afxgetgraybitmap"></a>  AfxGetGrayBitmap  
 Copia una versione in grigio di una bitmap.  
  
```   
void AFXAPI AfxGetGrayBitmap(
    const CBitmap& rSrc,  
    CBitmap* pDest,  
    COLORREF crBackground); 
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Bitmap di origine.  
  
 `pDest`  
 Bitmap di destinazione.  
  
 `crBackground`  
 Nuovo colore di sfondo (in genere grigio, ad esempio COLOR_MENU).  
  
### <a name="remarks"></a>Note  
 La bitmap copiata con `AfxGetGrayBitmap` avrà l'aspetto di un controllo disabilitato.  
  
 ![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "vcgraybitmap")  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#193](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_2.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="afxdrawditheredbitmap"></a>  AfxDrawDitheredBitmap  
 Disegna una bitmap, sostituendo lo sfondo con un modello con dithering (controllo).  
  
```   
void AFXAPI AfxDrawDitheredBitmap(
    CDC* pDC,  
    int x,  
    int y,  
    const CBitmap& rSrc,  
    COLORREF cr1  ,  
    COLORREF cr2); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al controller di dominio di destinazione.  
  
 *x*  
 Coordinata X di destinazione.  
  
 *y*  
 Coordinata Y di destinazione.  
  
 `rSrc`  
 Bitmap di origine.  
  
 `cr1`  
 Uno dei due dithering colori, in genere bianco.  
  
 `cr2`  
 Altri dithering colore, grigio chiaro in genere (COLOR_MENU).  
  
### <a name="remarks"></a>Note  
 La bitmap di origine viene disegnata nella destinazione con un colore di due controller di dominio ( `cr1` e `cr2`) modello Scacchi sostituzione dello sfondo della bitmap. Lo sfondo della bitmap di origine è definito come il bianco e tutti i pixel corrispondenza tra il colore del pixel nell'angolo superiore sinistro della bitmap.  
  
 ![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "vcditheredbitmap")  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#190](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_3.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  


##  <a name="afxgetditheredbitmap"></a>  AfxGetDitheredBitmap  
 Copia una bitmap, sostituendo lo sfondo con un modello con dithering (controllo).  
  
```   
void AFXAPI AfxGetDitheredBitmap(
    const CBitmap& rSrc,  
    CBitmap* pDest,  
    COLORREF cr1  ,  
    COLORREF cr2); 
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Bitmap di origine.  
  
 `pDest`  
 Bitmap di destinazione.  
  
 `cr1`  
 Uno dei due dithering colori, in genere bianco.  
  
 `cr2`  
 Altri dithering colore, grigio chiaro in genere (COLOR_MENU).  
  
### <a name="remarks"></a>Note  
 La bitmap di origine viene copiata nella bitmap di destinazione con due colori ( `cr1` e `cr2`) modello Scacchi sostituzione dello sfondo della bitmap di origine. Lo sfondo della bitmap di origine è definito come il bianco e tutti i pixel corrispondenza tra il colore del pixel nell'angolo superiore sinistro della bitmap.  
  
 ![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "vcditheredbitmap")  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#192](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_4.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
