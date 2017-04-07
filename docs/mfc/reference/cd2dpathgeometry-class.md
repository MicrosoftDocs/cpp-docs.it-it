---
title: Classe CD2DPathGeometry | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
- CD2DPathGeometry class
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 1c1158e55bf12d44f34896dd6752c9b8706db636
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dpathgeometry-class"></a>Classe CD2DPathGeometry
Un wrapper per ID2D1PathGeometry.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DPathGeometry : public CD2DGeometry;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::CD2DPathGeometry](#cd2dpathgeometry)|Costruisce un oggetto CD2DPathGeometry.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::Attach](#attach)|È possibile collegare interfaccia risorse per l'oggetto esistente|  
|[CD2DPathGeometry::Create](#create)|Crea un CD2DPathGeometry. (Esegue l'override di [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DPathGeometry::Destroy](#destroy)|Elimina un oggetto CD2DPathGeometry. (Esegue l'override di [CD2DGeometry:: Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|  
|[CD2DPathGeometry::Detach](#detach)|Disconnette l'interfaccia risorse dall'oggetto|  
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Recupera il numero di cifre nella geometria del percorso.|  
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Recupera il numero di segmenti nella geometria del percorso.|  
|[CD2DPathGeometry::Open](#open)|Recupera il sink di geometria che viene utilizzato per popolare la geometria del percorso con figure e segmenti.|  
|[CD2DPathGeometry::Stream](#stream)|Copia il contenuto della geometria del percorso ID2D1GeometrySink specificato.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|Un puntatore a un ID2D1PathGeometry.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
 `CD2DPathGeometry`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="attach"></a>CD2DPathGeometry::Attach  
 È possibile collegare interfaccia risorse per l'oggetto esistente  
  
```  
void Attach(ID2D1PathGeometry* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia di risorse esistente. Non può essere NULL  
  
##  <a name="cd2dpathgeometry"></a>CD2DPathGeometry::CD2DPathGeometry  
 Costruisce un oggetto CD2DPathGeometry.  
  
```  
CD2DPathGeometry(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DPathGeometry::Create  
 Crea un CD2DPathGeometry.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DPathGeometry::Destroy  
 Elimina un oggetto CD2DPathGeometry.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DPathGeometry::Detach  
 Disconnette l'interfaccia risorse dall'oggetto  
  
```  
ID2D1PathGeometry* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="getfigurecount"></a>CD2DPathGeometry::GetFigureCount  
 Recupera il numero di cifre nella geometria del percorso.  
  
```  
int GetFigureCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di cifre nella geometria del percorso.  
  
##  <a name="getsegmentcount"></a>CD2DPathGeometry::GetSegmentCount  
 Recupera il numero di segmenti nella geometria del percorso.  
  
```  
int GetSegmentCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di segmenti nella geometria del percorso.  
  
##  <a name="m_ppathgeometry"></a>CD2DPathGeometry::m_pPathGeometry  
 Un puntatore a un ID2D1PathGeometry.  
  
```  
ID2D1PathGeometry* m_pPathGeometry;  
```  
  
##  <a name="open"></a>CD2DPathGeometry::Open  
 Recupera il sink di geometria che viene utilizzato per popolare la geometria del percorso con figure e segmenti.  
  
```  
ID2D1GeometrySink* Open();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a ID2D1GeometrySink utilizzato per popolare la geometria del percorso con figure e segmenti.  
  
##  <a name="stream"></a>CD2DPathGeometry::Stream  
 Copia il contenuto della geometria del percorso ID2D1GeometrySink specificato.  
  
```  
BOOL Stream(ID2D1GeometrySink* geometrySink);
```  
  
### <a name="parameters"></a>Parametri  
 `geometrySink`  
 Il sink in cui vengono copiati i contenuti della geometria del percorso. Modifica questo sink di non modificare il contenuto di questa geometria del percorso.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

