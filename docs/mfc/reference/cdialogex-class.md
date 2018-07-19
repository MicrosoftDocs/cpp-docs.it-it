---
title: Classe CDialogEx | Microsoft Docs
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
ms.openlocfilehash: 5d941b112047dc8f90a8cdc4686e422f028b6d7e
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37335958"
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
  
 Oggetto `CDialogEx` oggetto può essere un elemento padre di un [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) oggetto. Il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object chiama il `CDialogEx::SetActiveMenu` (metodo) quando il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) apre dell'oggetto. In seguito, il `CDialogEx` oggetto gestisce qualsiasi evento di menu finché il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) oggetto è chiuso.  
  
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
 Puntatore alla finestra padre. Il valore predefinito è NULL.  
  
 [in] *pParentWnd*  
 Puntatore alla finestra padre. Il valore predefinito è NULL.  
  
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
 TRUE per aggiornare immediatamente la schermata; in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
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
  
 [in] *posizione*  
 Uno del `CDialogEx::BackgroundLocation` valori che specificano la posizione dell'immagine. I valori validi includono BACKGR_TILE BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.  
  
 [in] *il flag bAutoDestroy*  
 TRUE per eliminare automaticamente l'immagine di sfondo; in caso contrario, FALSE.  
  
 [in] *bRepaint*  
 TRUE per immediatamente ridisegnare la finestra di dialogo; in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo metodo overload di informazioni sulla sintassi, TRUE se il metodo ha esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 L'immagine specificata non è esteso in base l'area client della finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)   
 [Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)
