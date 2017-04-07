---
title: Classe CParabolicTransitionFromAcceleration | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::Create
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalVelocity
dev_langs:
- C++
helpviewer_keywords:
- CParabolicTransitionFromAcceleration class
ms.assetid: 1e59b86f-358b-4da0-a4fd-8eaf5e85e00f
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
ms.openlocfilehash: f0d3089a01cd244851be3d4bdf0453101a9c8274
ms.lasthandoff: 02/24/2017

---
# <a name="cparabolictransitionfromacceleration-class"></a>Classe CParabolicTransitionFromAcceleration
Incapsula una transizione di accelerazione parabolica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CParabolicTransitionFromAcceleration : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration](#cparabolictransitionfromacceleration)|Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CParabolicTransitionFromAcceleration::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CParabolicTransitionFromAcceleration::m_dblAcceleration](#m_dblacceleration)|Accelerazione della variabile di animazione durante la transizione.|  
|[CParabolicTransitionFromAcceleration::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
|[CParabolicTransitionFromAcceleration::m_dblFinalVelocity](#m_dblfinalvelocity)|La velocità della variabile di animazione alla fine della transizione.|  
  
## <a name="remarks"></a>Note  
 Durante una transizione di accelerazione parabolica, il valore della variabile di animazione viene modificato dal valore iniziale per il valore finale termina con una velocità specificata. È possibile controllare la rapidità con cui la variabile raggiunge il valore finale specificando la frequenza dell'accelerazione. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CParabolicTransitionFromAcceleration](../../mfc/reference/cparabolictransitionfromacceleration-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="cparabolictransitionfromacceleration"></a>CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration  
 Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.  
  
```  
CParabolicTransitionFromAcceleration(
    DOUBLE dblFinalValue,  
    DOUBLE dblFinalVelocity,  
    DOUBLE dblAcceleration);
```  
  
### <a name="parameters"></a>Parametri  
 `dblFinalValue`  
 Il valore della variabile di animazione alla fine della transizione.  
  
 `dblFinalVelocity`  
 La velocità della variabile di animazione alla fine della transizione.  
  
 `dblAcceleration`  
 Accelerazione della variabile di animazione durante la transizione.  
  
##  <a name="create"></a>CParabolicTransitionFromAcceleration::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* /* not used */);
```  
  
### <a name="parameters"></a>Parametri  
 `pLibrary`  
 Puntatore alla libreria di transizione è responsabile della creazione di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario FALSE.  
  
##  <a name="m_dblacceleration"></a>CParabolicTransitionFromAcceleration::m_dblAcceleration  
 Accelerazione della variabile di animazione durante la transizione.  
  
```  
DOUBLE m_dblAcceleration;  
```  
  
##  <a name="m_dblfinalvalue"></a>CParabolicTransitionFromAcceleration::m_dblFinalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_dblfinalvelocity"></a>CParabolicTransitionFromAcceleration::m_dblFinalVelocity  
 La velocità della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_dblFinalVelocity;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

