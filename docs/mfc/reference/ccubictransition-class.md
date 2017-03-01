---
title: Classe CCubicTransition | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCubicTransition
- afxanimationcontroller/CCubicTransition
dev_langs:
- C++
helpviewer_keywords:
- CCubicTransition class
ms.assetid: 4fc30e9c-160c-45e1-bdbe-51adf8fee9c5
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 511dc175d51db7887a462aaf63f4f91290375751
ms.lasthandoff: 02/24/2017

---
# <a name="ccubictransition-class"></a>Classe CCubicTransition
Incapsula una transizione cubica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCubicTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCubicTransition::CCubicTransition](#ccubictransition)|Costruisce un oggetto di transizione e inizializza i parametri.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCubicTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCubicTransition::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
|[CCubicTransition::m_dblFinalVelocity](#m_dblfinalvelocity)|La velocità della variabile alla fine della transizione.|  
|[CCubicTransition::m_duration](#m_duration)|La durata della transizione.|  
  
## <a name="remarks"></a>Note  
 Durante una transizione cubica, il valore della variabile di animazione modificato dal valore iniziale a un valore finale specificato per la durata della transizione, termina con una velocità specificata. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CCubicTransition`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="a-nameccubictransitiona--ccubictransitionccubictransition"></a><a name="ccubictransition"></a>CCubicTransition::CCubicTransition  
 Costruisce un oggetto di transizione e inizializza i parametri.  
  
```  
CCubicTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE finalVelocity);
```  
  
### <a name="parameters"></a>Parametri  
 `duration`  
 La durata della transizione.  
  
 `finalValue`  
 Il valore della variabile di animazione alla fine della transizione.  
  
 `finalVelocity`  
 La velocità della variabile alla fine della transizione.  
  
##  <a name="a-namecreatea--ccubictransitioncreate"></a><a name="create"></a>CCubicTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parametri  
`pLibrary`  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  

### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario FALSE.  
  
##  <a name="a-namemdblfinalvaluea--ccubictransitionmdblfinalvalue"></a><a name="m_dblfinalvalue"></a>CCubicTransition::m_dblFinalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="a-namemdblfinalvelocitya--ccubictransitionmdblfinalvelocity"></a><a name="m_dblfinalvelocity"></a>CCubicTransition::m_dblFinalVelocity  
 La velocità della variabile alla fine della transizione.  
  
```  
DOUBLE m_dblFinalVelocity;  
```  
  
##  <a name="a-namemdurationa--ccubictransitionmduration"></a><a name="m_duration"></a>CCubicTransition::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

