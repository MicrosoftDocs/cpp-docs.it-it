---
title: Classe CCustomTransition | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition::CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition::Create
- AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialValue
- AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialVelocity
- AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialValueSpecified
- AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialVelocitySpecified
- AFXANIMATIONCONTROLLER/CCustomTransition::m_initialValue
- AFXANIMATIONCONTROLLER/CCustomTransition::m_initialVelocity
- AFXANIMATIONCONTROLLER/CCustomTransition::m_pInterpolator
dev_langs:
- C++
helpviewer_keywords:
- CCustomTransition class
ms.assetid: 5bd3f492-940f-4290-a38b-fa68eb8f8401
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
ms.sourcegitcommit: 73410ae17465880f455e5b15026f6cc010803c19
ms.openlocfilehash: 483fb2ab84d2c41fe4666a4ea333c0be8b07caee
ms.lasthandoff: 02/24/2017

---
# <a name="ccustomtransition-class"></a>Classe CCustomTransition
Implementa una transizione personalizzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCustomTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::CCustomTransition](#ccustomtransition)|Costruisce un oggetto di transizione personalizzata.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override di [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
|[CCustomTransition:: SetInitialValue](#setinitialvalue)|Imposta un valore iniziale, che verrà applicato a una variabile di animazione associata a questa transizione.|  
|[CCustomTransition:: SetInitialVelocity](#setinitialvelocity)|Imposta una velocità iniziale, che verrà applicata a una variabile di animazione associata a questa transizione.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::m_bInitialValueSpecified](#m_binitialvaluespecified)|Specifica se il valore iniziale è stato specificato con SetInitialValue.|  
|[CCustomTransition::m_bInitialVelocitySpecified](#m_binitialvelocityspecified)|Specifica se la velocità iniziale è stata specificata con SetInitialVelocity.|  
|[CCustomTransition::m_initialValue](#m_initialvalue)|Archivia il valore iniziale.|  
|[CCustomTransition::m_initialVelocity](#m_initialvelocity)|Archivia la velocità iniziale.|  
|[CCustomTransition::m_pInterpolator](#m_pinterpolator)|Archivia un puntatore a un interpolatore personalizzato.|  
  
## <a name="remarks"></a>Note  
 La classe CCustomTransitions consente agli sviluppatori di implementare transizioni personalizzate. Viene creato e utilizzato come una transizione standard, ma il costruttore accetta come parametro un puntatore a un interpolatore personalizzato. Eseguire i passaggi seguenti per utilizzare le transizioni personalizzate: 1. Derivare una classe da CCustomInterpolator e implementare almeno il metodo InterpolateValue. 2. Assicurarsi che la durata dell'oggetto interpolatore personalizzato deve essere maggiore della durata dell'animazione in cui viene utilizzato. 3. Creare un'istanza (utilizzando l'operatore new) di un oggetto CCustomTransition e passare un puntatore a un interpolatore personalizzato nel costruttore. 4. Chiamare CCustomTransition:: SetInitialValue e CCustomTransition:: SetInitialVelocity se questi parametri sono necessari per l'interpolazione personalizzata. 5. Passare il puntatore alla transizione personalizzata al metodo AddTransition dell'oggetto di animazione, il cui valore deve essere animato con l'algoritmo personalizzato. 6. Quando si deve modificare il valore dell'oggetto di animazione API di animazione di Windows chiamerà InterpolateValue (e gli altri metodi attinenti) in CCustomInterpolator.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CCustomTransition`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="ccustomtransition"></a>CCustomTransition::CCustomTransition  
 Costruisce un oggetto di transizione personalizzata.  
  
```  
CCustomTransition(CCustomInterpolator* pInterpolator);
```  
  
### <a name="parameters"></a>Parametri  
 `pInterpolator`  
 Puntatore all'interpolatore personalizzato.  
  
##  <a name="create"></a>CCustomTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* */,  
    IUIAnimationTransitionFactory* pFactory);
```  
  
### <a name="parameters"></a>Parametri  
 `pFactory`  
 Puntatore alla factory di transizione è responsabile della creazione di transizioni personalizzate.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Questo metodo può anche impostare il valore iniziale e la velocità iniziali da applicare a una variabile di animazione, il quale è associata a questa transizione. A questo scopo è necessario chiamare SetInitialValue e SetInitialVelocity prima che il framework crea l'oggetto COM di transizione incapsulati (si verifica quando si chiama CAnimationController:: AnimateGroup).  
  
##  <a name="m_binitialvaluespecified"></a>CCustomTransition::m_bInitialValueSpecified  
 Specifica se il valore iniziale è stato specificato con SetInitialValue.  
  
```  
BOOL m_bInitialValueSpecified;  
```  
  
##  <a name="m_binitialvelocityspecified"></a>CCustomTransition::m_bInitialVelocitySpecified  
 Specifica se la velocità iniziale è stata specificata con SetInitialVelocity.  
  
```  
BOOL m_bInitialVelocitySpecified;  
```  
  
##  <a name="m_initialvalue"></a>CCustomTransition::m_initialValue  
 Archivia il valore iniziale.  
  
```  
DOUBLE m_initialValue;  
```  
  
##  <a name="m_initialvelocity"></a>CCustomTransition::m_initialVelocity  
 Archivia la velocità iniziale.  
  
```  
DOUBLE m_initialVelocity;  
```  
  
##  <a name="m_pinterpolator"></a>CCustomTransition::m_pInterpolator  
 Archivia un puntatore a un interpolatore personalizzato.  
  
```  
CCustomInterpolator* m_pInterpolator;  
```  
  
##  <a name="setinitialvalue"></a>CCustomTransition:: SetInitialValue  
 Imposta un valore iniziale, che verrà applicato a una variabile di animazione associata a questa transizione.  
  
```  
void SetInitialValue(DOUBLE initialValue);
```  
  
### <a name="parameters"></a>Parametri  
 `initialValue`  
  
##  <a name="setinitialvelocity"></a>CCustomTransition:: SetInitialVelocity  
 Imposta una velocità iniziale, che verrà applicata a una variabile di animazione associata a questa transizione.  
  
```  
void SetInitialVelocity(DOUBLE initialVelocity);
```  
  
### <a name="parameters"></a>Parametri  
 `initialVelocity`  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

