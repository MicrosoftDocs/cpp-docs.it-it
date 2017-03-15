---
title: Classe CD2DMesh | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- afxrendertarget/CD2DMesh
- CD2DMesh
dev_langs:
- C++
helpviewer_keywords:
- CD2DMesh class
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 78461adeaa0671b146ccb48f4e9145cbdceeb8cf
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dmesh-class"></a>Classe CD2DMesh
Un wrapper per ID2D1Mesh.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DMesh : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::CD2DMesh](#cd2dmesh)|Costruisce un oggetto CD2DMesh.|  
|[CD2DMesh:: ~ CD2DMesh](#_dtorcd2dmesh)|Distruttore. Chiamato quando viene eliminato un oggetto mesh D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::Attach](#attach)|È possibile collegare interfaccia risorse per l'oggetto esistente|  
|[CD2DMesh::Create](#create)|Crea un CD2DMesh. (Esegue l'override di [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DMesh::Destroy](#destroy)|Elimina un oggetto CD2DMesh. (Esegue l'override di [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DMesh::Detach](#detach)|Disconnette l'interfaccia risorse dall'oggetto|  
|[CD2DMesh::Get](#get)|Restituisce l'interfaccia ID2D1Mesh|  
|[CD2DMesh::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DMesh::Open](#open)|Apre la mesh per il popolamento.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::operator ID2D1Mesh *](#operator_id2d1mesh_star)|Restituisce l'interfaccia ID2D1Mesh|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::m_pMesh](#m_pmesh)|Un puntatore a un ID2D1Mesh.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DMesh`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="a-namedtorcd2dmesha--cd2dmeshcd2dmesh"></a><a name="_dtorcd2dmesh"></a>CD2DMesh:: ~ CD2DMesh  
 Distruttore. Chiamato quando viene eliminato un oggetto mesh D2D.  
  
```  
virtual ~CD2DMesh();
```  
  
##  <a name="a-nameattacha--cd2dmeshattach"></a><a name="attach"></a>CD2DMesh::Attach  
 È possibile collegare interfaccia risorse per l'oggetto esistente  
  
```  
void Attach(ID2D1Mesh* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia di risorse esistente. Non può essere NULL  
  
##  <a name="a-namecd2dmesha--cd2dmeshcd2dmesh"></a><a name="cd2dmesh"></a>CD2DMesh::CD2DMesh  
 Costruisce un oggetto CD2DMesh.  
  
```  
CD2DMesh(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="a-namecreatea--cd2dmeshcreate"></a><a name="create"></a>CD2DMesh::Create  
 Crea un CD2DMesh.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="a-namedestroya--cd2dmeshdestroy"></a><a name="destroy"></a>CD2DMesh::Destroy  
 Elimina un oggetto CD2DMesh.  
  
```  
virtual void Destroy();
```  
  
##  <a name="a-namedetacha--cd2dmeshdetach"></a><a name="detach"></a>CD2DMesh::Detach  
 Disconnette l'interfaccia risorse dall'oggetto  
  
```  
ID2D1Mesh* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="a-namegeta--cd2dmeshget"></a><a name="get"></a>CD2DMesh::Get  
 Restituisce l'interfaccia ID2D1Mesh  
  
```  
ID2D1Mesh* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="a-nameisvalida--cd2dmeshisvalid"></a><a name="isvalid"></a>CD2DMesh::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="a-namempmesha--cd2dmeshmpmesh"></a><a name="m_pmesh"></a>CD2DMesh::m_pMesh  
 Un puntatore a un ID2D1Mesh.  
  
```  
ID2D1Mesh* m_pMesh;  
```  
  
##  <a name="a-nameopena--cd2dmeshopen"></a><a name="open"></a>CD2DMesh::Open  
 Apre la mesh per il popolamento.  
  
```  
ID2D1TessellationSink* Open();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un ID2D1TessellationSink utilizzato per popolare la mesh.  
  
##  <a name="a-nameoperatorid2d1meshstara--cd2dmeshoperator-id2d1mesh"></a><a name="operator_id2d1mesh_star"></a>CD2DMesh::operator ID2D1Mesh *  
 Restituisce l'interfaccia ID2D1Mesh  
  
```  
operator ID2D1Mesh*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

