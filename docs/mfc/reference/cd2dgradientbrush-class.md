---
title: Classe CD2DGradientBrush | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush::CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush::Destroy
- AFXRENDERTARGET/CD2DGradientBrush::m_arGradientStops
- AFXRENDERTARGET/CD2DGradientBrush::m_colorInterpolationGamma
- AFXRENDERTARGET/CD2DGradientBrush::m_extendMode
- AFXRENDERTARGET/CD2DGradientBrush::m_pGradientStops
dev_langs:
- C++
helpviewer_keywords:
- CD2DGradientBrush [MFC], CD2DGradientBrush
- CD2DGradientBrush [MFC], Destroy
- CD2DGradientBrush [MFC], m_arGradientStops
- CD2DGradientBrush [MFC], m_colorInterpolationGamma
- CD2DGradientBrush [MFC], m_extendMode
- CD2DGradientBrush [MFC], m_pGradientStops
ms.assetid: 5bf133e6-16b7-4e3a-845d-0ce63fafe5ec
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4e479c156967addc7add8f048d2ef1c3abab0dd8
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956233"
---
# <a name="cd2dgradientbrush-class"></a>Classe CD2DGradientBrush
Classe di base di CD2DLinearGradientBrush e delle classi CD2DRadialGradientBrush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DGradientBrush : public CD2DBrush;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGradientBrush::CD2DGradientBrush](#cd2dgradientbrush)|Costruisce un oggetto CD2DGradientBrush.|  
|[CD2DGradientBrush:: ~ CD2DGradientBrush](#cd2dgradientbrush__~cd2dgradientbrush)|Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto di pennello sfumato D2D.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGradientBrush:: Destroy](#destroy)|Elimina un oggetto CD2DGradientBrush. (Esegue l'override [CD2DBrush:: Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DGradientBrush::m_arGradientStops](#m_argradientstops)|Matrice delle strutture D2D1_GRADIENT_STOP.|  
|[CD2DGradientBrush::m_colorInterpolationGamma](#m_colorinterpolationgamma)|Lo spazio in cui il viene eseguito l'interpolazione tra i cursori sfumatura.|  
|[CD2DGradientBrush::m_extendMode](#m_extendmode)|Il comportamento della sfumatura compreso nell'intervallo [0,1] normalizzato.|  
|[CD2DGradientBrush::m_pGradientStops](#m_pgradientstops)|Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 `CD2DGradientBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dgradientbrush"></a>  CD2DGradientBrush:: ~ CD2DGradientBrush  
 Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto di pennello sfumato D2D.  
  
```  
virtual ~CD2DGradientBrush();
```  
  
##  <a name="cd2dgradientbrush"></a>  CD2DGradientBrush::CD2DGradientBrush  
 Costruisce un oggetto CD2DGradientBrush.  
  
```  
CD2DGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,  
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentTarget*  
 Puntatore alla destinazione di rendering.  
  
 *gradientStops*  
 Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.  
  
 *gradientStopsCount*  
 Un valore maggiore o uguale a 1 che specifica il numero di cursori sfumatura nella matrice gradientStops.  
  
 *colorInterpolationGamma*  
 Lo spazio in cui il viene eseguito l'interpolazione tra i cursori sfumatura.  
  
 *extendMode*  
 Il comportamento della sfumatura compreso nell'intervallo [0,1] normalizzato.  
  
 *pBrushProperties*  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 *flag bAutoDestroy*  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="destroy"></a>  CD2DGradientBrush:: Destroy  
 Elimina un oggetto CD2DGradientBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="m_argradientstops"></a>  CD2DGradientBrush::m_arGradientStops  
 Matrice delle strutture D2D1_GRADIENT_STOP.  
  
```  
CArray<D2D1_GRADIENT_STOP, D2D1_GRADIENT_STOP> m_arGradientStops;  
```  
  
##  <a name="m_colorinterpolationgamma"></a>  CD2DGradientBrush::m_colorInterpolationGamma  
 Lo spazio in cui il viene eseguito l'interpolazione tra i cursori sfumatura.  
  
```  
D2D1_GAMMA m_colorInterpolationGamma;  
```  
  
##  <a name="m_extendmode"></a>  CD2DGradientBrush::m_extendMode  
 Il comportamento della sfumatura compreso nell'intervallo [0,1] normalizzato.  
  
```  
D2D1_EXTEND_MODE m_extendMode;  
```  
  
##  <a name="m_pgradientstops"></a>  CD2DGradientBrush::m_pGradientStops  
 Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.  
  
```  
ID2D1GradientStopCollection* m_pGradientStops;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
