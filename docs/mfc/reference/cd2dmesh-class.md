---
title: CD2DMesh Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DMesh
- AFXRENDERTARGET/CD2DMesh
- AFXRENDERTARGET/CD2DMesh::CD2DMesh
- AFXRENDERTARGET/CD2DMesh::Attach
- AFXRENDERTARGET/CD2DMesh::Create
- AFXRENDERTARGET/CD2DMesh::Destroy
- AFXRENDERTARGET/CD2DMesh::Detach
- AFXRENDERTARGET/CD2DMesh::Get
- AFXRENDERTARGET/CD2DMesh::IsValid
- AFXRENDERTARGET/CD2DMesh::Open
- AFXRENDERTARGET/CD2DMesh::m_pMesh
dev_langs:
- C++
helpviewer_keywords:
- CD2DMesh [MFC], CD2DMesh
- CD2DMesh [MFC], Attach
- CD2DMesh [MFC], Create
- CD2DMesh [MFC], Destroy
- CD2DMesh [MFC], Detach
- CD2DMesh [MFC], Get
- CD2DMesh [MFC], IsValid
- CD2DMesh [MFC], Open
- CD2DMesh [MFC], m_pMesh
ms.assetid: 11a2c78a-1367-40e8-a34f-44aa0509a4c9
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
ms.openlocfilehash: 40667a78e282a6eb789357c916a5231be71c086c
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dmesh-class"></a>CD2DMesh Class
A wrapper for ID2D1Mesh.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DMesh : public CD2DResource;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::CD2DMesh](#cd2dmesh)|Constructs a CD2DMesh object.|  
|[CD2DMesh::~CD2DMesh](#_dtorcd2dmesh)|The destructor. Called when a D2D mesh object is being destroyed.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::Attach](#attach)|Attaches existing resource interface to the object|  
|[CD2DMesh::Create](#create)|Creates a CD2DMesh. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DMesh::Destroy](#destroy)|Destroys a CD2DMesh object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DMesh::Detach](#detach)|Detaches resource interface from the object|  
|[CD2DMesh::Get](#get)|Returns ID2D1Mesh interface|  
|[CD2DMesh::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DMesh::Open](#open)|Opens the mesh for population.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::operator ID2D1Mesh*](#operator_id2d1mesh_star)|Returns ID2D1Mesh interface|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DMesh::m_pMesh](#m_pmesh)|A pointer to an ID2D1Mesh.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DMesh`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="_dtorcd2dmesh"></a>  CD2DMesh::~CD2DMesh  
 The destructor. Called when a D2D mesh object is being destroyed.  
  
```  
virtual ~CD2DMesh();
```  
  
##  <a name="attach"></a>  CD2DMesh::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1Mesh* pResource);
```  
  
### <a name="parameters"></a>Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dmesh"></a>  CD2DMesh::CD2DMesh  
 Constructs a CD2DMesh object.  
  
```  
CD2DMesh(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="create"></a>  CD2DMesh::Create  
 Creates a CD2DMesh.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="destroy"></a>  CD2DMesh::Destroy  
 Destroys a CD2DMesh object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>  CD2DMesh::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1Mesh* Detach();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to detached resource interface.  
  
##  <a name="get"></a>  CD2DMesh::Get  
 Returns ID2D1Mesh interface  
  
```  
ID2D1Mesh* Get();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.  
  
##  <a name="isvalid"></a>  CD2DMesh::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="m_pmesh"></a>  CD2DMesh::m_pMesh  
 A pointer to an ID2D1Mesh.  
  
```  
ID2D1Mesh* m_pMesh;  
```  
  
##  <a name="open"></a>  CD2DMesh::Open  
 Opens the mesh for population.  
  
```  
ID2D1TessellationSink* Open();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to an ID2D1TessellationSink that is used to populate the mesh.  
  
##  <a name="operator_id2d1mesh_star"></a>  CD2DMesh::operator ID2D1Mesh*  
 Returns ID2D1Mesh interface  
  
```  
operator ID2D1Mesh*();
```   
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1Mesh interface or NULL if object is not initialized yet.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

