---
title: CMFCPreviewCtrlImpl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::Create
- AFXWIN/CMFCPreviewCtrlImpl::Destroy
- AFXWIN/CMFCPreviewCtrlImpl::Focus
- AFXWIN/CMFCPreviewCtrlImpl::GetDocument
- AFXWIN/CMFCPreviewCtrlImpl::Redraw
- AFXWIN/CMFCPreviewCtrlImpl::SetDocument
- AFXWIN/CMFCPreviewCtrlImpl::SetHost
- AFXWIN/CMFCPreviewCtrlImpl::SetPreviewVisuals
- AFXWIN/CMFCPreviewCtrlImpl::SetRect
- AFXWIN/CMFCPreviewCtrlImpl::DoPaint
- AFXWIN/CMFCPreviewCtrlImpl::m_clrBackColor
- AFXWIN/CMFCPreviewCtrlImpl::m_clrTextColor
- AFXWIN/CMFCPreviewCtrlImpl::m_font
- AFXWIN/CMFCPreviewCtrlImpl::m_pDocument
dev_langs:
- C++
helpviewer_keywords:
- CMFCPreviewCtrlImpl [MFC], CMFCPreviewCtrlImpl
- CMFCPreviewCtrlImpl [MFC], Create
- CMFCPreviewCtrlImpl [MFC], Destroy
- CMFCPreviewCtrlImpl [MFC], Focus
- CMFCPreviewCtrlImpl [MFC], GetDocument
- CMFCPreviewCtrlImpl [MFC], Redraw
- CMFCPreviewCtrlImpl [MFC], SetDocument
- CMFCPreviewCtrlImpl [MFC], SetHost
- CMFCPreviewCtrlImpl [MFC], SetPreviewVisuals
- CMFCPreviewCtrlImpl [MFC], SetRect
- CMFCPreviewCtrlImpl [MFC], DoPaint
- CMFCPreviewCtrlImpl [MFC], m_clrBackColor
- CMFCPreviewCtrlImpl [MFC], m_clrTextColor
- CMFCPreviewCtrlImpl [MFC], m_font
- CMFCPreviewCtrlImpl [MFC], m_pDocument
ms.assetid: 06257fa0-54c9-478d-9d68-c9698c3f93ed
caps.latest.revision: 28
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
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 7c0e9567fbbc5b750e378af2693a2596c007a05e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcpreviewctrlimpl-class"></a>CMFCPreviewCtrlImpl Class
This class implements a window that is placed on a host window provided by the Shell for Rich Preview.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCPreviewCtrlImpl : public CWnd;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl](#dtor)|Destructs a preview control object.|  
|[CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl)|Constructs a preview control object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::Create](#create)|Overloaded. Called by a Rich Preview handler to create the Windows window.|  
|[CMFCPreviewCtrlImpl::Destroy](#destroy)|Called by a Rich Preview handler when it needs to destroy this control.|  
|[CMFCPreviewCtrlImpl::Focus](#focus)|Sets input focus to this control.|  
|[CMFCPreviewCtrlImpl::GetDocument](#getdocument)|Returns a document connected to this preview control.|  
|[CMFCPreviewCtrlImpl::Redraw](#redraw)|Tells this control to redraw.|  
|[CMFCPreviewCtrlImpl::SetDocument](#setdocument)|Called by the preview handler to create a relationship between the document implementation and the preview control.|  
|[CMFCPreviewCtrlImpl::SetHost](#sethost)|Sets a new parent for this control.|  
|[CMFCPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Called by a Rich Preview handler when it needs to set visuals of rich preview content.|  
|[CMFCPreviewCtrlImpl::SetRect](#setrect)|Sets a new bounding rectangle for this control.|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::DoPaint](#dopaint)|Called by the framework to render the preview.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::m_clrBackColor](#m_clrbackcolor)|Background color of preview window.|  
|[CMFCPreviewCtrlImpl::m_clrTextColor](#m_clrtextcolor)|Text color of preview window.|  
|[CMFCPreviewCtrlImpl::m_font](#m_font)|Font used to display text in the preview window.|  
|[CMFCPreviewCtrlImpl::m_pDocument](#m_pdocument)|A pointer to a document whose content is previewed in the control.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwin.h    
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimpl"></a> CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
Constructs a preview control object.

### <a name="syntax"></a>Syntax
CMFCPreviewCtrlImpl();  

## <a name="create"></a> CMFCPreviewCtrlImpl::Create
Overloaded. Called by a Rich Preview handler to create the Windows window.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc  
);  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc,  
   CCreateContext* pContext  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `hWndParent`  
 A handle to the host window supplied by the Shell for Rich Preview.  
  
 `prc`  
 Specifies the initial size and position of the window.  
  
 `pContext`  
 A pointer to a creation context.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if creation succeeded; otherwise `FALSE`.  
  
## <a name="destroy"></a> CMFCPreviewCtrlImpl::Destroy
Called by a Rich Preview handler when it needs to destroy this control.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void Destroy();  
```  
  
## <a name="dopaint"></a> CMFCPreviewCtrlImpl::DoPaint  
Called by the framework to render the preview.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void DoPaint(  
   CPaintDC* pDC  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `pDC`  
 A pointer to a device context for painting.  


## <a name="focus"></a> CMFCPreviewCtrlImpl::Focus  
Sets input focus to this control.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void Focus();  
```  
## <a name="getdocument"></a> CMFCPreviewCtrlImpl::GetDocument
Returns a document connected to this preview control.  
  
### <a name="syntax"></a>Syntax  
  
```  
ATL::IDocument* GetDocument();  
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to a document, whose content is previewed in the control.

## <a name="m_clrbackcolor"></a> CMFCPreviewCtrlImpl::m_clrBackColor  
Background color of the preview window.  
  
### <a name="syntax"></a>Syntax  
  
```  
COLORREF m_clrBackColor;  
```  

## <a name="m_clrtextcolor"></a> CMFCPreviewCtrlImpl::m_clrTextColor
Text color of the preview window.  
  
### <a name="syntax"></a>Syntax  
  
```  
COLORREF m_clrTextColor;  
```  
## <a name="m_font"></a> CMFCPreviewCtrlImpl::m_font  Font used to display text in the preview window.  
  
### <a name="syntax"></a>Syntax  
  
```  
CFont m_font;  
```  
## <a name="m_pdocument"></a> CMFCPreviewCtrlImpl::m_pDocument  
A pointer to a document whose content is previewed in the control.  
  
### <a name="syntax"></a>Syntax  
  
```  
ATL::IDocument* m_pDocument;  
```  

## <a name="redraw"></a> CMFCPreviewCtrlImpl::Redraw  
Tells this control to redraw.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void Redraw();  
```  
## <a name="setdocument"></a> CMFCPreviewCtrlImpl::SetDocument 
Called by the preview handler to create a relationship between the document implementation and the preview control.  
  
### <a name="syntax"></a>Syntax  
  
```  
void SetDocument(  
   IDocument* pDocument  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `pDocument`  
 A pointer to the document implementation.  

## <a name="sethost"></a> CMFCPreviewCtrlImpl::SetHost  
Sets a new parent for this control.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void SetHost(  
   HWND hWndParent  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `hWndParent`  
 A handle to the new parent window.  

## <a name="setpreviewvisuals"></a> CMFCPreviewCtrlImpl::SetPreviewVisuals  
Called by a Rich Preview handler when it needs to set visuals of rich preview content.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void SetPreviewVisuals(  
   COLORREF clrBack,  
   COLORREF clrText,  
   const LOGFONTW *plf  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `clrBack`  
 Background color of preview window.  
  
 `clrText`  
 Text color of preview window.  
  
 `plf`  
 Font used to display text in the preview window. 

##  <a name="setrect"></a> CMFCPreviewCtrlImpl::SetRect  
Sets a new bounding rectangle for this control.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual void SetRect(  
   const RECT* prc,  
   BOOL bRedraw  
);  
```  
  
### <a name="parameters"></a>Parameters  
 `prc`  
 Specifies the new size and position of the preview control.  
  
 `bRedraw`  
 Specifies whether the control should be redrawn.  
  
### <a name="remarks"></a>Remarks  
 Usually a new bounding rectangle is set when the host control is resized.  

## <a name="dtor"></a> CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl  
Destructs a preview control object.  
  
### <a name="syntax"></a>Syntax  
  
```  
virtual ~CMFCPreviewCtrlImpl();  
```  
  

