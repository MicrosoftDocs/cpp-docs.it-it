---
title: CAccelerateDecelerateTransition Class1 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAccelerateDecelerateTransition
- afxanimationcontroller/CAccelerateDecelerateTransition
dev_langs:
- C++
helpviewer_keywords:
- CAccelerateDecelerateTransition class [MFC]
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4342ed03991317bd030d308dbac9945734dcbd9e
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954708"
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
|[CAccelerateDecelerateTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|Il rapporto del periodo trascorsa la durata.|  
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|Il rapporto del periodo trascorsa la durata.|  
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|La durata della transizione.|  
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|Il valore della variabile di animazione alla fine della transizione.|  
  
## <a name="remarks"></a>Note  
 Durante un'accelerazione-decelerazione transizione, la variabile di animazione accelera e quindi rallenta la durata della transizione, termina con un valore specificato. È possibile controllare con quale velocità variabile accelera e decelera, in modo indipendente, specificando l'accelerazione diversi e possono variare decelerazione. Quando la velocità iniziale è uguale a zero, il rapporto di accelerazione è la frazione della durata che la variabile impiegherà per accelerare; allo stesso modo con il rapporto di decelerazione. Se la velocità iniziale è diverso da zero, si tratta della frazione di tempo tra la velocità che raggiunge zero e la fine della transizione. Il rapporto di accelerazione e il rapporto di decelerazione deve essere sommata a un massimo di 1.0. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile per assegnarle utilizzando l'operatore new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CAccelerateDecelerateTransition`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="cacceleratedeceleratetransition"></a>  CAccelerateDecelerateTransition::CAccelerateDecelerateTransition  
 Costruisce un oggetto di transizione.  
  
```  
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE accelerationRatio = 0.3,  
    DOUBLE decelerationRatio = 0.3);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 La durata della transizione.  
  
 *finalValue*  
 Il valore della variabile di animazione alla fine della transizione.  
  
 *accelerationRatio*  
 Il rapporto del periodo trascorsa la durata.  
  
 *decelerationRatio*  
 Il rapporto del periodo trascorsa la durata.  
  
##  <a name="create"></a>  CAccelerateDecelerateTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* *\not used*\);
```  
  
### <a name="parameters"></a>Parametri  
*pLibrary*  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario, FALSE.  
  
##  <a name="m_accelerationratio"></a>  CAccelerateDecelerateTransition::m_accelerationRatio  
 Il rapporto del periodo trascorsa la durata.  
  
```  
DOUBLE m_accelerationRatio;  
```  
  
##  <a name="m_decelerationratio"></a>  CAccelerateDecelerateTransition::m_decelerationRatio  
 Il rapporto del periodo trascorsa la durata.  
  
```  
DOUBLE m_decelerationRatio;  
```  
  
##  <a name="m_duration"></a>  CAccelerateDecelerateTransition::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="m_finalvalue"></a>  CAccelerateDecelerateTransition::m_finalValue  
 Il valore della variabile di animazione alla fine della transizione.  
  
```  
DOUBLE m_finalValue;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
