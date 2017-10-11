---
title: Classe CD2DPathGeometry | Documenti Microsoft
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
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 5b9c6ac03757a0180f0947775d4c35b3faef953d
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dpathgeometry-class"></a>Classe CD2DPathGeometry
Wrapper per ID2D1PathGeometry.  
  
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
|[CD2DPathGeometry::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DPathGeometry::Create](#create)|Crea un CD2DPathGeometry. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DPathGeometry::Destroy](#destroy)|Elimina un oggetto CD2DPathGeometry. (Esegue l'override [CD2DGeometry:: Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|  
|[CD2DPathGeometry::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Recupera il numero di cifre nella geometria del percorso.|  
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Recupera il numero di segmenti nella geometria del percorso.|  
|[CD2DPathGeometry::Open](#open)|Recupera il sink di geometria che viene utilizzato per popolare la geometria del percorso con figure e segmenti.|  
|[CD2DPathGeometry::Stream](#stream)|Copia il contenuto della geometria del percorso di ID2D1GeometrySink specificato.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|Puntatore a un ID2D1PathGeometry.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
 `CD2DPathGeometry`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="attach"></a>CD2DPathGeometry::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1PathGeometry* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
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
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
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
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
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
 Puntatore a un ID2D1PathGeometry.  
  
```  
ID2D1PathGeometry* m_pPathGeometry;  
```  
  
##  <a name="open"></a>CD2DPathGeometry::Open  
 Recupera il sink di geometria che viene utilizzato per popolare la geometria del percorso con figure e segmenti.  
  
```  
ID2D1GeometrySink* Open();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a ID2D1GeometrySink utilizzato per popolare la geometria del percorso con figure e segmenti.  
  
##  <a name="stream"></a>CD2DPathGeometry::Stream  
 Copia il contenuto della geometria del percorso di ID2D1GeometrySink specificato.  
  
```  
BOOL Stream(ID2D1GeometrySink* geometrySink);
```  
  
### <a name="parameters"></a>Parametri  
 `geometrySink`  
 Il sink in cui vengono copiati i contenuti della geometria del percorso. Modifica di questo tipo di sink non di modificare il contenuto di questa geometria del percorso.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

