---
title: CAccelerateDecelerateTransition Class1 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAccelerateDecelerateTransition
- afxanimationcontroller/CAccelerateDecelerateTransition
dev_langs:
- C++
helpviewer_keywords:
- CAccelerateDecelerateTransition class
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
caps.latest.revision: 16
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
ms.openlocfilehash: f11dc96b48695b998fb17c33735e8f56bce517b7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cacceleratedeceleratetransition-class"></a>Classe CAccelerateDecelerateTransition
Implementa una transizione di accelerazione-decelerazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAccelerateDecelerateTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition)|Costruisce un oggetto di transizione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|Il rapporto di tempo trascorsa la durata.|  
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|Il rapporto di tempo trascorsa la durata.|  
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|La durata della transizione.|  
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
  
## <a name="remarks"></a>Note  
 Durante un'accelerazione-decelerazione transizione, la variabile di animazione accelera e rallenta per tutta la durata della transizione, termina con un valore specificato. È possibile controllare la rapidità con cui la variabile accelera e rallenta in modo indipendente, specificando l'accelerazione diversi e rapporti decelerazione. Quando la velocità iniziale è zero, il rapporto di accelerazione è la frazione del tempo che la variabile impiegherà per accelerare; lo stesso vale per il rapporto di decelerazione. Se la velocità iniziale è diverso da zero, è la frazione del tempo tra la velocità che raggiunge zero e la fine della transizione. Il rapporto di accelerazione e il rapporto di decelerazione devono sommare a un massimo di 1.0. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando è NULL. Modifica di variabili membro dopo la creazione dell'oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CAccelerateDecelerateTransition`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="cacceleratedeceleratetransition"></a>CAccelerateDecelerateTransition::CAccelerateDecelerateTransition  
 Costruisce un oggetto di transizione.  
  
```  
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE accelerationRatio = 0.3,  
    DOUBLE decelerationRatio = 0.3);
```  
  
### <a name="parameters"></a>Parametri  
 `duration`  
 La durata della transizione.  
  
 `finalValue`  
 Il valore della variabile di animazione alla fine della transizione.  
  
 `accelerationRatio`  
 Il rapporto di tempo trascorsa la durata.  
  
 `decelerationRatio`  
 Il rapporto di tempo trascorsa la durata.  
  
##  <a name="create"></a>CAccelerateDecelerateTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* *\not used*\);
```  
  
### <a name="parameters"></a>Parametri  
`pLibrary`  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario FALSE.  
  
##  <a name="m_accelerationratio"></a>CAccelerateDecelerateTransition::m_accelerationRatio  
 Il rapporto di tempo trascorsa la durata.  
  
```  
DOUBLE m_accelerationRatio;  
```  
  
##  <a name="m_decelerationratio"></a>CAccelerateDecelerateTransition::m_decelerationRatio  
 Il rapporto di tempo trascorsa la durata.  
  
```  
DOUBLE m_decelerationRatio;  
```  
  
##  <a name="m_duration"></a>CAccelerateDecelerateTransition::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="m_finalvalue"></a>CAccelerateDecelerateTransition::m_finalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_finalValue;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

