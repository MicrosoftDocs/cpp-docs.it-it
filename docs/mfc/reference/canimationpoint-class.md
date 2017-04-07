---
title: Classe CAnimationPoint | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint::CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetX
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetY
- AFXANIMATIONCONTROLLER/CAnimationPoint::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationPoint::m_xValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::m_yValue
dev_langs:
- C++
helpviewer_keywords:
- CAnimationPoint class
ms.assetid: 5dc4d46f-e695-4681-b15c-544b78b3e317
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
ms.openlocfilehash: a6a59ad85928c199a8dd911b915076ffbd0b0e37
ms.lasthandoff: 02/24/2017

---
# <a name="canimationpoint-class"></a>Classe CAnimationPoint
Implementa la funzionalità di un punto le cui coordinate possono essere animate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationPoint : public CAnimationBaseObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::CAnimationPoint](#canimationpoint)|Di overload. Costruisce un oggetto CAnimationPoint.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::AddTransition](#addtransition)|Aggiunge transizioni per X e Y.|  
|[CAnimationPoint::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per X e Y.|  
|[CAnimationPoint::GetValue](#getvalue)|Restituisce il valore corrente.|  
|[CAnimationPoint::GetX](#getx)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|  
|[CAnimationPoint::GetY](#gety)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|  
|[CAnimationPoint::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili dell'animazione incapsulata in un elenco. (Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint CAnimationPoint::operator](#operator_cpoint)|Converte un CAnimationPoint in un CPoint.|  
|[CAnimationPoint::operator =](#operator_eq)|Assegna ptSrc a CAnimationPoint.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::m_xValue](#m_xvalue)|La variabile di animazione incapsulata che rappresenta X coordinate del punto di animazione.|  
|[CAnimationPoint::m_yValue](#m_yvalue)|La variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationPoint incapsula due oggetti CAnimationVariable e può rappresentare un punto nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per aggiungere un'animazione a una posizione di qualsiasi oggetto sullo schermo (come stringa di testo, cerchio, un punto e così via). Per utilizzare questa classe nell'applicazione, semplicemente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare a coordinate X e/o Y.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationPoint`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtransition"></a>CAnimationPoint::AddTransition  
 Aggiunge transizioni per X e Y.  
  
```  
void AddTransition(
    CBaseTransition* pXTransition,  
    CBaseTransition* pYTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pXTransition`  
 Puntatore alla transizione per coordinate X.  
  
 `pYTransition`  
 Puntatore alla transizione per l'asse Y delle coordinate.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per X e Y. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non si desidera applicare una transizione a uno di coordinate, è possibile passare NULL.  
  
##  <a name="canimationpoint"></a>CAnimationPoint::CAnimationPoint  
 Costruisce un oggetto CAnimationPoint.  
  
```  
CAnimationPoint();

 
CAnimationPoint(
    const CPoint& ptDefault,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `ptDefault`  
 Specifica le coordinate del punto predefinito.  
  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `nObjectID`  
 Specifica l'ID dell'oggetto.  
  
 `dwUserData`  
 Specifica i dati definiti dall'utente.  
  
### <a name="remarks"></a>Note  
 Costruisce un oggetto CAnimationPoint con proprietà predefinite: predefiniti le coordinate del punto, l'ID del gruppo e l'ID oggetto vengono impostati su 0.  
  
##  <a name="getanimationvariablelist"></a>CAnimationPoint::GetAnimationVariableList  
 Inserisce le variabili dell'animazione incapsulata in un elenco.  
  
```  
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Quando la funzione restituisce, contiene i puntatori a due oggetti CAnimationVariable che rappresenta le coordinate X e Y.  
  
##  <a name="getdefaultvalue"></a>CAnimationPoint::GetDefaultValue  
 Restituisce i valori predefiniti per X e Y.  
  
```  
CPoint GetDefaultValue();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore punto contenitore predefinito.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore predefinito, che in precedenza è stato impostato dal costruttore o SetDefaultValue.  
  
##  <a name="getvalue"></a>CAnimationPoint::GetValue  
 Restituisce il valore corrente.  
  
```  
BOOL GetValue(CPoint& ptValue);
```  
  
### <a name="parameters"></a>Parametri  
 `ptValue`  
 Output. Quando questo metodo viene restituito, contiene il valore corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore corrente è stato recuperato correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente del punto di animazione. Se gli oggetti di questo metodo ha esito negativo o COM sottostanti per X e Y coordinate non sono state inizializzate, ptValue contiene il valore predefinito, che è stata precedentemente impostato nel costruttore o da SetDefaultValue.  
  
##  <a name="getx"></a>CAnimationPoint::GetX  
 Fornisce l'accesso a CAnimationVariable per la coordinata X.  
  
```  
CAnimationVariable& GetX();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta X coordinate.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere l'accesso diretto alla variabile CAnimationVariable sottostante che rappresenta X coordinate.  
  
##  <a name="gety"></a>CAnimationPoint::GetY  
 Fornisce l'accesso a CAnimationVariable per la coordinata Y.  
  
```  
CAnimationVariable& GetY();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata Y.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere l'accesso diretto alla variabile CAnimationVariable sottostante che rappresenta la coordinata Y.  
  
##  <a name="m_xvalue"></a>CAnimationPoint::m_xValue  
 La variabile di animazione incapsulata che rappresenta X coordinate del punto di animazione.  
  
```  
CAnimationVariable m_xValue;  
```  
  
##  <a name="m_yvalue"></a>CAnimationPoint::m_yValue  
 La variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.  
  
```  
CAnimationVariable m_yValue;  
```  
  
##  <a name="operator_cpoint"></a>CPoint CAnimationPoint::operator  
 Converte un CAnimationPoint in un CPoint.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente di CAnimationPoint come CPoint.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il punto restituito conterrà i valori predefiniti per X e Y.  
  
##  <a name="operator_eq"></a>CAnimationPoint::operator =  
 Assegna ptSrc a CAnimationPoint.  
  
```  
void operator=(const CPoint& ptSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `ptSrc`  
 Fa riferimento a CPoint o POINT.  
  
### <a name="remarks"></a>Note  
 Assegna ptSrc a CAnimationPoint. È consigliabile eseguire che prima dell'inizio dell'animazione perché questo operatore chiama SetDefaultValue che ricrea il componente COM sottostante gli oggetti per le coordinate X e Y se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="setdefaultvalue"></a>CAnimationPoint::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(const POINT& ptDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `ptDefault`  
 Specifica il valore di punto predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodi assegnano valori predefiniti per le coordinate X e Y del punto di animazione. Ricrea anche gli oggetti COM sottostanti se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

