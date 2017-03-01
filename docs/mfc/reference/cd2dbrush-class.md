---
title: Classe CD2DBrush | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DBrush
- afxrendertarget/CD2DBrush
dev_langs:
- C++
helpviewer_keywords:
- CD2DBrush class
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
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
ms.openlocfilehash: b9902445fb6e18df20073d132a2117c67e695b25
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dbrush-class"></a>Classe CD2DBrush
Un wrapper per ID2D1Brush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DBrush : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::CD2DBrush](#cd2dbrush)|Costruisce un oggetto CD2DBrush.|  
|[CD2DBrush:: ~ CD2DBrush](#_dtorcd2dbrush)|Distruttore. Chiamato quando viene eliminato un oggetto brush D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::Attach](#attach)|È possibile collegare interfaccia risorse per l'oggetto esistente|  
|[CD2DBrush:: Destroy](#destroy)|Elimina un oggetto CD2DBrush. (Esegue l'override di [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DBrush::Detach](#detach)|Disconnette l'interfaccia risorse dall'oggetto|  
|[CD2DBrush::Get](#get)|Restituisce l'interfaccia ID2D1Brush|  
|[CD2DBrush::GetOpacity](#getopacity)|Ottiene il livello di opacità di questo pennello|  
|[CD2DBrush::GetTransform](#gettransform)|Ottiene la trasformazione corrente della destinazione di rendering|  
|[CD2DBrush::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DBrush::SetOpacity](#setopacity)|Imposta il livello di opacità di questo pennello|  
|[CD2DBrush::setTransform](#settransform)|Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::operator ID2D1Brush *](#operator_id2d1brush_star)|Restituisce l'interfaccia ID2D1Brush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::m_pBrush](#m_pbrush)|Archivia un puntatore a un oggetto ID2D1Brush.|  
|[CD2DBrush::m_pBrushProperties](#m_pbrushproperties)|Proprietà dei pennelli.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="a-namedtorcd2dbrusha--cd2dbrushcd2dbrush"></a><a name="_dtorcd2dbrush"></a>CD2DBrush:: ~ CD2DBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto brush D2D.  
  
```  
virtual ~CD2DBrush();
```  
  
##  <a name="a-nameattacha--cd2dbrushattach"></a><a name="attach"></a>CD2DBrush::Attach  
 È possibile collegare interfaccia risorse per l'oggetto esistente  
  
```  
void Attach(ID2D1Brush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia di risorse esistente. Non può essere NULL  
  
##  <a name="a-namecd2dbrusha--cd2dbrushcd2dbrush"></a><a name="cd2dbrush"></a>CD2DBrush::CD2DBrush  
 Costruisce un oggetto CD2DBrush.  
  
```  
CD2DBrush(
    CRenderTarget* pParentTarget,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `pBrushProperties`  
 Puntatore all'opacità e alla trasformazione di un pennello.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="a-namedestroya--cd2dbrushdestroy"></a><a name="destroy"></a>CD2DBrush:: Destroy  
 Elimina un oggetto CD2DBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="a-namedetacha--cd2dbrushdetach"></a><a name="detach"></a>CD2DBrush::Detach  
 Disconnette l'interfaccia risorse dall'oggetto  
  
```  
ID2D1Brush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="a-namegeta--cd2dbrushget"></a><a name="get"></a>CD2DBrush::Get  
 Restituisce l'interfaccia ID2D1Brush  
  
```  
ID2D1Brush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="a-namegetopacitya--cd2dbrushgetopacity"></a><a name="getopacity"></a>CD2DBrush::GetOpacity  
 Ottiene il livello di opacità di questo pennello  
  
```  
FLOAT GetOpacity() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità sono compresi nell'intervallo da 0 a 1 prima che vengano moltiplicati insieme  
  
##  <a name="a-namegettransforma--cd2dbrushgettransform"></a><a name="gettransform"></a>CD2DBrush::GetTransform  
 Ottiene la trasformazione corrente della destinazione di rendering  
  
```  
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 Quando viene restituito, contiene la trasformazione corrente della destinazione di rendering. Questo parametro viene passato non inizializzato  
  
##  <a name="a-nameisvalida--cd2dbrushisvalid"></a><a name="isvalid"></a>CD2DBrush::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="a-namempbrusha--cd2dbrushmpbrush"></a><a name="m_pbrush"></a>CD2DBrush::m_pBrush  
 Archivia un puntatore a un oggetto ID2D1Brush.  
  
```  
ID2D1Brush* m_pBrush;  
```  
  
##  <a name="a-namempbrushpropertiesa--cd2dbrushmpbrushproperties"></a><a name="m_pbrushproperties"></a>CD2DBrush::m_pBrushProperties  
 Proprietà dei pennelli.  
  
```  
CD2DBrushProperties* m_pBrushProperties;  
```  
  
##  <a name="a-nameoperatorid2d1brushstara--cd2dbrushoperator-id2d1brush"></a><a name="operator_id2d1brush_star"></a>CD2DBrush::operator ID2D1Brush *  
 Restituisce l'interfaccia ID2D1Brush  
  
```  
operator ID2D1Brush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="a-namesetopacitya--cd2dbrushsetopacity"></a><a name="setopacity"></a>CD2DBrush::SetOpacity  
 Imposta il livello di opacità di questo pennello  
  
```  
void SetOpacity(FLOAT opacity);
```  
  
### <a name="parameters"></a>Parametri  
 `opacity`  
 Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità sono compresi nell'intervallo da 0 a 1 prima che vengano moltiplicati insieme  
  
##  <a name="a-namesettransforma--cd2dbrushsettransform"></a><a name="settransform"></a>CD2DBrush::setTransform  
 Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato  
  
```  
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 La trasformazione da applicare alla destinazione di rendering  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

