---
title: CD2DPathGeometry Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry::CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry::Attach
- AFXRENDERTARGET/CD2DPathGeometry::Create
- AFXRENDERTARGET/CD2DPathGeometry::Destroy
- AFXRENDERTARGET/CD2DPathGeometry::Detach
- AFXRENDERTARGET/CD2DPathGeometry::GetFigureCount
- AFXRENDERTARGET/CD2DPathGeometry::GetSegmentCount
- AFXRENDERTARGET/CD2DPathGeometry::Open
- AFXRENDERTARGET/CD2DPathGeometry::Stream
- AFXRENDERTARGET/CD2DPathGeometry::m_pPathGeometry
dev_langs:
- C++
helpviewer_keywords:
- CD2DPathGeometry [MFC], CD2DPathGeometry
- CD2DPathGeometry [MFC], Attach
- CD2DPathGeometry [MFC], Create
- CD2DPathGeometry [MFC], Destroy
- CD2DPathGeometry [MFC], Detach
- CD2DPathGeometry [MFC], GetFigureCount
- CD2DPathGeometry [MFC], GetSegmentCount
- CD2DPathGeometry [MFC], Open
- CD2DPathGeometry [MFC], Stream
- CD2DPathGeometry [MFC], m_pPathGeometry
ms.assetid: 686216eb-5080-4242-ace5-8fa1ce96307c
caps.latest.revision: 17
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
ms.openlocfilehash: de29f4ee2e53d552de99908085839f38902aa5fe
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dpathgeometry-class"></a>CD2DPathGeometry Class
A wrapper for ID2D1PathGeometry.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DPathGeometry : public CD2DGeometry;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPathGeometry::CD2DPathGeometry](#cd2dpathgeometry)|Constructs a CD2DPathGeometry object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPathGeometry::Attach](#attach)|Attaches existing resource interface to the object|  
|[CD2DPathGeometry::Create](#create)|Creates a CD2DPathGeometry. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DPathGeometry::Destroy](#destroy)|Destroys a CD2DPathGeometry object. (Overrides [CD2DGeometry::Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|  
|[CD2DPathGeometry::Detach](#detach)|Detaches resource interface from the object|  
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Retrieves tthe number of figures in the path geometry.|  
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Retrieves the number of segments in the path geometry.|  
|[CD2DPathGeometry::Open](#open)|Retrieves the geometry sink that is used to populate the path geometry with figures and segments.|  
|[CD2DPathGeometry::Stream](#stream)|Copies the contents of the path geometry to the specified ID2D1GeometrySink.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|A pointer to an ID2D1PathGeometry.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
 `CD2DPathGeometry`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="attach"></a>  CD2DPathGeometry::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1PathGeometry* pResource);
```  
  
### <a name="parameters"></a>Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dpathgeometry"></a>  CD2DPathGeometry::CD2DPathGeometry  
 Constructs a CD2DPathGeometry object.  
  
```  
CD2DPathGeometry(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="create"></a>  CD2DPathGeometry::Create  
 Creates a CD2DPathGeometry.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="destroy"></a>  CD2DPathGeometry::Destroy  
 Destroys a CD2DPathGeometry object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>  CD2DPathGeometry::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1PathGeometry* Detach();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to detached resource interface.  
  
##  <a name="getfigurecount"></a>  CD2DPathGeometry::GetFigureCount  
 Retrieves tthe number of figures in the path geometry.  
  
```  
int GetFigureCount() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Returns the number of figures in the path geometry.  
  
##  <a name="getsegmentcount"></a>  CD2DPathGeometry::GetSegmentCount  
 Retrieves the number of segments in the path geometry.  
  
```  
int GetSegmentCount() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Returns the number of segments in the path geometry.  
  
##  <a name="m_ppathgeometry"></a>  CD2DPathGeometry::m_pPathGeometry  
 A pointer to an ID2D1PathGeometry.  
  
```  
ID2D1PathGeometry* m_pPathGeometry;  
```  
  
##  <a name="open"></a>  CD2DPathGeometry::Open  
 Retrieves the geometry sink that is used to populate the path geometry with figures and segments.  
  
```  
ID2D1GeometrySink* Open();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to the ID2D1GeometrySink that is used to populate the path geometry with figures and segments.  
  
##  <a name="stream"></a>  CD2DPathGeometry::Stream  
 Copies the contents of the path geometry to the specified ID2D1GeometrySink.  
  
```  
BOOL Stream(ID2D1GeometrySink* geometrySink);
```  
  
### <a name="parameters"></a>Parameters  
 `geometrySink`  
 The sink to which the path geometry's contents are copied. Modifying this sink does not change the contents of this path geometry.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

