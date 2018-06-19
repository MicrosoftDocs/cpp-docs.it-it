---
title: Classe di CMFCImageEditorDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog
- AFXIMAGEEDITORDIALOG/CMFCImageEditorDialog::CMFCImageEditorDialog
dev_langs:
- C++
helpviewer_keywords:
- CMFCImageEditorDialog [MFC], CMFCImageEditorDialog
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 795e5548e93323af389c3faeaefa7dda0bf7d80c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376249"
---
# <a name="cmfcimageeditordialog-class"></a>Classe di CMFCImageEditorDialog
La `CMFCImageEditorDialog` classe supporta una finestra di dialogo editor di immagini.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCImageEditorDialog : public CDialogEx  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCImageEditorDialog::CMFCImageEditorDialog](#cmfcimageeditordialog)|Costruisce un oggetto `CMFCImageEditorDialog`.|  
  
## <a name="remarks"></a>Note  
 La `CMFCImageEditorDialog` classe fornisce una finestra di dialogo che include:  
  
-   Un'area di immagine che consente di modificare singoli pixel in un'immagine.  
  
-   Strumenti per modificare i pixel nell'area dell'immagine di disegno.  
  
-   Una tavolozza dei colori per specificare il colore che viene utilizzato dagli strumenti di disegno.  
  
-   Un'area di anteprima che visualizza l'effetto della modifica.  
  
 Nella figura seguente viene illustrato un editor di immagini la finestra di dialogo.  
  
 ![Finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "imageedit")  
  
 Un modo per utilizzare un `CMFCImageEditorDialog` oggetto consiste nel passarlo un `CBitmap` immagine da modificare. Non creare un'immagine di grandi dimensioni perché l'immagine di area di modifica è di dimensioni limitate e la logica pixel viene ridimensionata per adattarsi all'area. Chiamare il `DoModal` metodo per avviare una finestra di dialogo modale.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afximageeditordialog.h  
  
##  <a name="cmfcimageeditordialog"></a>  CMFCImageEditorDialog::CMFCImageEditorDialog  
 Costruisce un oggetto `CMFCImageEditorDialog`.  
  
```  
CMFCImageEditorDialog(
    CBitmap* pBitmap,  
    CWnd* pParent=NULL,  
    int nBitsPixel=-1);
```  
  
### <a name="parameters"></a>Parametri  
 `pBitmap`  
 Puntatore a un'immagine.  
  
 `pParent`  
 Puntatore alla finestra padre della casella di dialogo editor immagine corrente.  
  
 `nBitsPixel`  
 Il numero di bit utilizzati per rappresentare il colore di un singolo pixel, note anche come profondità di colore.  Se il `nBitsPixel` parametro è -1, la profondità di colore è derivata dall'immagine specificata per il `pBitmap` parametro. Il valore predefinito è -1.  
  
### <a name="return-value"></a>Valore restituito  
 Per modificare un'immagine, passare un puntatore di immagine per il `CMFCImageEditorDialog` costruttore. Chiamare quindi il `DoModal` per aprire una finestra di dialogo modale. Quando il `DoModal` metodo viene restituito, contiene la nuova immagine.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCImageEditorDialog` classe. In questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#8](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_1.cpp)]  
[!code-cpp[NVC_MFC_NewControls#40](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
