---
title: Classe CDialogEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CDialogEx class
- CDialogEx::PreTranslateMessage method
ms.assetid: a6ed3b1f-aef8-4b66-ac78-2160faf63c13
caps.latest.revision: 27
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: c12aa0152fdbf83e423b944a0100045962ddb704
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
  
 Le immagini della finestra di dialogo vengono archiviate in un file di risorse. Il framework elimina automaticamente tutte le immagini caricate dal file di risorse. Per eliminare a livello di codice l'immagine di sfondo corrente, chiamare il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo o implementare un `OnDestroy` gestore dell'evento. Quando si chiama il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo, passare un `HBITMAP` parametro per la gestione dell'immagine. L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.  
  
 Oggetto `CDialogEx` oggetto può essere un elemento padre di un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto. Il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) object chiama il `CDialogEx::SetActiveMenu` (metodo) quando il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto apre. In seguito, il `CDialogEx` oggetto gestisce qualsiasi evento del menu finché il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto è chiuso.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdialogex.h  
  
##  <a name="cdialogex"></a>CDialogEx::CDialogEx  
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
 [in] `nIDTemplate`  
 L'ID di risorsa di un modello di finestra di dialogo.  
  
 [in] `lpszTemplateName`  
 Nome della risorsa di un modello di finestra di dialogo.  
  
 [in] `pParent`  
 Puntatore alla finestra padre. Il valore predefinito è `NULL`.  
  
 [in] `pParentWnd`  
 Puntatore alla finestra padre. Il valore predefinito è `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setbackgroundcolor"></a>CDialogEx::SetBackgroundColor  
 Imposta il colore di sfondo della finestra di dialogo.  
  
```  
void SetBackgroundColor(
    COLORREF color,  
    BOOL bRepaint=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Un valore di colore RGB.  
  
 [in] `bRepaint`  
 `TRUE`Per aggiornare immediatamente la schermata; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setbackgroundimage"></a>CDialogEx::SetBackgroundImage  
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
 [in] `hBitmap`  
 Handle per l'immagine di sfondo.  
  
 [in] `uiBmpResId`  
 L'ID risorsa dell'immagine di sfondo.  
  
 [in] `location`  
 Uno del `CDialogEx::BackgroundLocation` valori che specificano la posizione dell'immagine. I valori validi includono BACKGR_TILE, BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.  
  
 [in] `bAutoDestroy`  
 `TRUE`Per eliminare automaticamente l'immagine di sfondo; in caso contrario, `FALSE`.  
  
 [in] `bRepaint`  
 `TRUE`per il nuovo disegno nella finestra di dialogo; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Nel secondo metodo overload sintassi, `TRUE` se il metodo ha esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'immagine specificata non viene adattata per rientrare l'area client della finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)   
 [Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)

