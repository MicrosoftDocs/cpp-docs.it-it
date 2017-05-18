---
title: Classe CDiscreteTransition | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition::CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition::Create
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_delay
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_hold
dev_langs:
- C++
helpviewer_keywords:
- CDiscreteTransition class
ms.assetid: b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: dcec642fede0ec6895c928925676232319099be7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdiscretetransition-class"></a>Classe CDiscreteTransition
Incapsula una transizione discreta.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDiscreteTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::CDiscreteTransition](#cdiscretetransition)|Costruisce un oggetto di transizione discreta e inizializza i parametri.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
|[CDiscreteTransition::m_delay](#m_delay)|La quantità di tempo di ritardo del passaggio istantaneo al valore finale.|  
|[CDiscreteTransition::m_hold](#m_hold)|La quantità di tempo per cui conservare la variabile al valore finale.|  
  
## <a name="remarks"></a>Note  
 Durante una transizione discreta, la variabile di animazione rimane il valore iniziale per un periodo di tempo specificato, quindi passa istantaneamente a un valore finale specificato e mantiene tale valore per un determinato tempo di attesa. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CDiscreteTransition](../../mfc/reference/cdiscretetransition-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="cdiscretetransition"></a>CDiscreteTransition::CDiscreteTransition  
 Costruisce un oggetto di transizione discreta e inizializza i parametri.  
  
```  
CDiscreteTransition(
    UI_ANIMATION_SECONDS delay,  
    DOUBLE dblFinalValue,  
    UI_ANIMATION_SECONDS hold);
```  
  
### <a name="parameters"></a>Parametri  
 `delay`  
 La quantità di tempo di ritardo del passaggio istantaneo al valore finale.  
  
 `dblFinalValue`  
 Il valore della variabile di animazione alla fine della transizione.  
  
 `hold`  
 La quantità di tempo per cui conservare la variabile al valore finale.  
  
##  <a name="create"></a>CDiscreteTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
`pLibrary`  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  

  
### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario FALSE.  
  
##  <a name="m_dblfinalvalue"></a>CDiscreteTransition::m_dblFinalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_delay"></a>CDiscreteTransition::m_delay  
 La quantità di tempo di ritardo del passaggio istantaneo al valore finale.  
  
```  
UI_ANIMATION_SECONDS m_delay;  
```  
  
##  <a name="m_hold"></a>CDiscreteTransition::m_hold  
 La quantità di tempo per cui conservare la variabile al valore finale.  
  
```  
UI_ANIMATION_SECONDS m_hold;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

