---
title: Classe CMFCImageEditorDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCImageEditorDialog
dev_langs:
- C++
helpviewer_keywords:
- CMFCImageEditorDialog class
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
caps.latest.revision: 24
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 1a629f9699aa2d6fb185737b51b36259ce574fe0
ms.lasthandoff: 02/24/2017

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
  
-   Un'area dell'immagine che consente di modificare singoli pixel in un'immagine.  
  
-   Strumenti per modificare i pixel nell'area dell'immagine di disegno.  
  
-   Una tavolozza dei colori per specificare il colore che viene utilizzato dagli strumenti di disegno.  
  
-   Area di anteprima che visualizza la modalità di modifica.  
  
 Nella figura seguente viene illustrato un editor di immagini la finestra di dialogo.  
  
 ![La finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "imageedit")  
  
 Un modo per utilizzare un `CMFCImageEditorDialog` oggetto consiste nel passarlo un `CBitmap` immagine da modificare. Non creare un'immagine di grandi dimensioni perché l'immagine di area di modifica ha una dimensione limitata e il pixel logico viene ridimensionata per adattarsi all'area. Chiamare il `DoModal` metodo per avviare una finestra di dialogo modale.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afximageeditordialog.h  
  
##  <a name="a-namecmfcimageeditordialoga--cmfcimageeditordialogcmfcimageeditordialog"></a><a name="cmfcimageeditordialog"></a>CMFCImageEditorDialog::CMFCImageEditorDialog  
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
 Il numero di bit utilizzati per rappresentare il colore di un singolo pixel, è anche detto intensità del colore.  Se il `nBitsPixel` parametro è -1, la profondità di colore è derivata dall'immagine specificato dal `pBitmap` parametro. Il valore predefinito è -1.  
  
### <a name="return-value"></a>Valore restituito  
 Per modificare un'immagine, passare un puntatore di immagine per il `CMFCImageEditorDialog` costruttore. Chiamare quindi il `DoModal` per aprire una finestra di dialogo modale. Quando il `DoModal` metodo viene restituito, contiene la nuova immagine.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCImageEditorDialog` classe. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls n.&8;](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_1.cpp)]  
[!code-cpp[&#40; NVC_MFC_NewControls](../../mfc/reference/codesnippet/cpp/cmfcimageeditordialog-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

