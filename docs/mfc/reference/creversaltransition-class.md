---
title: Classe CReversalTransition | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::Create
- AFXANIMATIONCONTROLLER/CReversalTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CReversalTransition class
ms.assetid: e89516be-2d07-4885-95a8-fc278f46e3ad
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
ms.openlocfilehash: 028ea275cc345513248e76dcf5b0eba931823b7a
ms.lasthandoff: 02/24/2017

---
# <a name="creversaltransition-class"></a>Classe CReversalTransition
Incapsula una transizione di inversione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CReversalTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReversalTransition::CReversalTransition](#creversaltransition)|Costruisce un oggetto di transizione di inversione e inizializza la durata.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReversalTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReversalTransition::m_duration](#m_duration)|La durata della transizione.|  
  
## <a name="remarks"></a>Note  
 Una transizione di inversione cambia facilmente la direzione per una durata specificata. Il valore finale sarà identico al valore iniziale e la velocità finale sarà negativo della velocità iniziale. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CReversalTransition](../../mfc/reference/creversaltransition-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="create"></a>CReversalTransition::Create  
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
  
##  <a name="creversaltransition"></a>CReversalTransition::CReversalTransition  
 Costruisce un oggetto di transizione di inversione e inizializza la durata.  
  
```  
CReversalTransition(UI_ANIMATION_SECONDS duration);
```  
  
### <a name="parameters"></a>Parametri  
 `duration`  
 La durata della transizione.  
  
##  <a name="m_duration"></a>CReversalTransition::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

