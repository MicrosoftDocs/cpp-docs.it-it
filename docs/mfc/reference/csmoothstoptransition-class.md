---
title: Classe CSmoothStopTransition | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::Create
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_maximumDuration
dev_langs:
- C++
helpviewer_keywords:
- CSmoothStopTransition class
ms.assetid: e1a4b476-6f96-43dd-90db-870a64406b85
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 60cdc3528d10270187dccd42a634f7483c58821f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="csmoothstoptransition-class"></a>Classe CSmoothStopTransition
Incapsula una transizione a interruzione graduale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSmoothStopTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::CSmoothStopTransition](#csmoothstoptransition)|Costruisce una transizione a interruzione graduale e inizializza la durata massima e il valore finale.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
|[CSmoothStopTransition::m_maximumDuration](#m_maximumduration)|La durata massima della transizione.|  
  
## <a name="remarks"></a>Note  
 Una transizione a interruzione graduale rallentamento quanto si avvicina a un determinato valore finale e raggiunge con una velocità pari a zero. La durata della transizione è determinata dalla velocità iniziale, la differenza tra i valori iniziali e finali e la durata massima specificata. Se non esiste alcuna soluzione composta da un singolo arco parabolico, questo metodo crea una transizione cubica. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CSmoothStopTransition](../../mfc/reference/csmoothstoptransition-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="create"></a>CSmoothStopTransition::Create  
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
  
##  <a name="csmoothstoptransition"></a>CSmoothStopTransition::CSmoothStopTransition  
 Costruisce una transizione a interruzione graduale e inizializza la durata massima e il valore finale.  
  
```  
CSmoothStopTransition(
    UI_ANIMATION_SECONDS maximumDuration,  
    DOUBLE dblFinalValue);
```  
  
### <a name="parameters"></a>Parametri  
 `maximumDuration`  
 La durata massima della transizione.  
  
 `dblFinalValue`  
 Il valore della variabile di animazione alla fine della transizione.  
  
##  <a name="m_dblfinalvalue"></a>CSmoothStopTransition::m_dblFinalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_maximumduration"></a>CSmoothStopTransition::m_maximumDuration  
 La durata massima della transizione.  
  
```  
UI_ANIMATION_SECONDS m_maximumDuration;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

