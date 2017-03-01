---
title: Classe CSinusoidalTransitionFromVelocity | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSinusoidalTransitionFromVelocity
- afxanimationcontroller/CSinusoidalTransitionFromVelocity
dev_langs:
- C++
helpviewer_keywords:
- CSinusoidalTransitionFromVelocity class
ms.assetid: cc885f17-b84b-45ee-8f1f-36a8bbb7adad
caps.latest.revision: 18
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 035c92a807fdbe9028547472a3dc816995b95c91
ms.lasthandoff: 02/24/2017

---
# <a name="csinusoidaltransitionfromvelocity-class"></a>Classe CSinusoidalTransitionFromVelocity
Incapsula una transizione a velocità sinusoidale con un'ampiezza determinata dalla velocità iniziale della variabile di animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSinusoidalTransitionFromVelocity : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity](#csinusoidaltransitionfromvelocity)|Costruisce un oggetto di transizione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::m_duration](#m_duration)|La durata della transizione.|  
|[CSinusoidalTransitionFromVelocity::m_period](#m_period)|Il periodo di oscillazione dell'onda sinusoidale in secondi.|  
  
## <a name="remarks"></a>Note  
 Il valore della variabile di animazione oscilla attorno al valore iniziale per l'intera durata di una transizione a intervalli sinusoidali. L'ampiezza dell'oscillazione è determinata dalla velocità della variabile di animazione quando inizia la transizione. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CSinusoidalTransitionFromVelocity](../../mfc/reference/csinusoidaltransitionfromvelocity-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="a-namecreatea--csinusoidaltransitionfromvelocitycreate"></a><a name="create"></a>CSinusoidalTransitionFromVelocity::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parametri  
 `pLibrary`  
 Puntatore alla libreria di transizione è responsabile della creazione di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario FALSE.  
  
##  <a name="a-namecsinusoidaltransitionfromvelocitya--csinusoidaltransitionfromvelocitycsinusoidaltransitionfromvelocity"></a><a name="csinusoidaltransitionfromvelocity"></a>CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity  
 Costruisce un oggetto di transizione.  
  
```  
CSinusoidalTransitionFromVelocity(
    UI_ANIMATION_SECONDS duration,  
    UI_ANIMATION_SECONDS period);
```  
  
### <a name="parameters"></a>Parametri  
 `duration`  
 La durata della transizione.  
  
 `period`  
 Il periodo di oscillazione dell'onda sinusoidale in secondi.  
  
##  <a name="a-namemdurationa--csinusoidaltransitionfromvelocitymduration"></a><a name="m_duration"></a>CSinusoidalTransitionFromVelocity::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="a-namemperioda--csinusoidaltransitionfromvelocitymperiod"></a><a name="m_period"></a>CSinusoidalTransitionFromVelocity::m_period  
 Il periodo di oscillazione dell'onda sinusoidale in secondi.  
  
```  
UI_ANIMATION_SECONDS m_period;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

