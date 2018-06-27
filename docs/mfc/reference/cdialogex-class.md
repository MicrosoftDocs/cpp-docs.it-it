---
title: Classe CDialogEx | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDialogEx
- AFXDIALOGEX/CDialogEx
- AFXDIALOGEX/CDialogEx::CDialogEx
- AFXDIALOGEX/CDialogEx::SetBackgroundColor
- AFXDIALOGEX/CDialogEx::SetBackgroundImage
dev_langs:
- C++
helpviewer_keywords:
- CDialogEx [MFC], CDialogEx
- CDialogEx [MFC], SetBackgroundColor
- CDialogEx [MFC], SetBackgroundImage
ms.assetid: a6ed3b1f-aef8-4b66-ac78-2160faf63c13
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ff365134a9b952b92211418c03d147a65077c66e
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951852"
---
# <a name="cdialogex-class"></a>Classe CDialogEx
La classe `CDialogEx` specifica il colore e l'immagine di sfondo di una finestra di dialogo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDialogEx : public CDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogEx::CDialogEx](#cdialogex)|Costruisce un oggetto `CDialogEx`.|  
|`CDialogEx::~CDialogEx`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogEx::SetBackgroundColor](#setbackgroundcolor)|Imposta il colore di sfondo della finestra di dialogo.|  
|[CDialogEx::SetBackgroundImage](#setbackgroundimage)|Imposta l'immagine di sfondo della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Per usare la classe `CDialogEx`, derivare la classe della finestra di dialogo dalla classe `CDialogEx` e non dalla classe `CDialog`.  
  
 Le immagini della finestra di dialogo vengono archiviate in un file di risorse. Il framework elimina automaticamente tutte le immagini caricate dal file di risorse. Per eliminare a livello di codice l'immagine di sfondo corrente, chiamare il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo o implementare un `OnDestroy` gestore dell'evento. Quando si chiama il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo, passare un `HBITMAP` parametro come handle dell'immagine. L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.  
  
 Un `CDialogEx` oggetto può essere un elemento padre di un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto. Il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object chiama il `CDialogEx::SetActiveMenu` (metodo) quando il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto verrà visualizzata la. In seguito, il `CDialogEx` oggetto gestisce qualsiasi evento di menu finché il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto viene chiuso.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdialogex. h  
  
##  <a name="cdialogex"></a>  CDialogEx::CDialogEx  
 Costruisce un oggetto `CDialogEx`.  
  
```  
CDialogEx(
    UINT nIDTemplate,  
    CWnd* pParent=NULL);

 
CDialogEx(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nIDTemplate*  
 L'ID di risorsa di un modello di finestra di dialogo.  
  
 [in] *lpszTemplateName*  
 Nome della risorsa di un modello di finestra di dialogo.  
  
 [in] *pParent*  
 Puntatore alla finestra padre. Il valore predefinito è `NULL`.  
  
 [in] *pParentWnd*  
 Puntatore alla finestra padre. Il valore predefinito è `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setbackgroundcolor"></a>  CDialogEx::SetBackgroundColor  
 Imposta il colore di sfondo della finestra di dialogo.  
  
```  
void SetBackgroundColor(
    COLORREF color,  
    BOOL bRepaint=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Un valore di colore RGB.  
  
 [in] *bRepaint*  
 `TRUE` Per aggiornare immediatamente la schermata; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setbackgroundimage"></a>  CDialogEx::SetBackgroundImage  
 Imposta l'immagine di sfondo della finestra di dialogo.  
  
```  
void SetBackgroundImage(
    HBITMAP hBitmap,  
    BackgroundLocation location=BACKGR_TILE,  
    BOOL bAutoDestroy=TRUE,  
    BOOL bRepaint=TRUE);

 
BOOL SetBackgroundImage(
    UINT uiBmpResId,  
    BackgroundLocation location=BACKGR_TILE,  
    BOOL bRepaint=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *hBitmap*  
 Handle per l'immagine di sfondo.  
  
 [in] *uiBmpResId*  
 L'ID risorsa dell'immagine di sfondo.  
  
 [in] *percorso*  
 Uno del `CDialogEx::BackgroundLocation` valori che specificano la posizione dell'immagine. I valori validi includono BACKGR_TILE BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.  
  
 [in] *il flag bAutoDestroy*  
 `TRUE` Per eliminare automaticamente l'immagine di sfondo; in caso contrario, `FALSE`.  
  
 [in] *bRepaint*  
 `TRUE` per immediatamente ridisegnare la finestra di dialogo; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Nel secondo metodo sintassi, eseguire l'overload `TRUE` se il metodo ha esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'immagine specificata non è estesa alle dimensioni dell'area client finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)   
 [Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)
