---
title: Classe CAnimationPoint | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
- CAnimationPoint [MFC], CAnimationPoint
- CAnimationPoint [MFC], AddTransition
- CAnimationPoint [MFC], GetDefaultValue
- CAnimationPoint [MFC], GetValue
- CAnimationPoint [MFC], GetX
- CAnimationPoint [MFC], GetY
- CAnimationPoint [MFC], SetDefaultValue
- CAnimationPoint [MFC], GetAnimationVariableList
- CAnimationPoint [MFC], m_xValue
- CAnimationPoint [MFC], m_yValue
ms.assetid: 5dc4d46f-e695-4681-b15c-544b78b3e317
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8ab685c223c4a86c35ba0feb578d93f58844734b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAnimationPoint::AddTransition](#addtransition)|Aggiunge le transizioni per X e Y coordinate.|  
|[CAnimationPoint::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per X e Y coordinate.|  
|[CAnimationPoint::GetValue](#getvalue)|Restituisce il valore corrente.|  
|[CAnimationPoint::GetX](#getx)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|  
|[CAnimationPoint::GetY](#gety)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|  
|[CAnimationPoint::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili dell'animazione incapsulata in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint CAnimationPoint::operator](#operator_cpoint)|Converte un CAnimationPoint un CPoint.|  
|[CAnimationPoint::operator =](#operator_eq)|Assegna ptSrc a CAnimationPoint.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::m_xValue](#m_xvalue)|La variabile di animazione incapsulata che rappresenta X coordinate del punto di animazione.|  
|[CAnimationPoint::m_yValue](#m_yvalue)|La variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationPoint incapsula due oggetti CAnimationVariable e può rappresentare un punto nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per aggiungere un'animazione a una posizione di un oggetto sullo schermo (ad esempio una stringa di testo, cerchio, un punto e così via). Per utilizzare questa classe nell'applicazione, solo creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare a coordinate X e/o Y.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationPoint`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtransition"></a>CAnimationPoint::AddTransition  
 Aggiunge le transizioni per X e Y coordinate.  
  
```  
void AddTransition(
    CBaseTransition* pXTransition,  
    CBaseTransition* pYTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pXTransition`  
 Puntatore alla transizione per coordinate X.  
  
 `pYTransition`  
 Coordinate di un puntatore alla transizione per Y.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per X e Y coordinate. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno di coordinate, è possibile passare NULL.  
  
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
 Costruisce un oggetto CAnimationPoint con le proprietà predefinite: le coordinate del punto predefinito, ID di gruppo e ID di oggetto sono impostati su 0.  
  
##  <a name="getanimationvariablelist"></a>CAnimationPoint::GetAnimationVariableList  
 Inserisce le variabili dell'animazione incapsulata in un elenco.  
  
```  
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Quando la funzione viene restituito, contiene i puntatori a due oggetti CAnimationVariable che rappresentano le coordinate X e Y.  
  
##  <a name="getdefaultvalue"></a>CAnimationPoint::GetDefaultValue  
 Restituisce i valori predefiniti per X e Y coordinate.  
  
```  
CPoint GetDefaultValue();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore predefinito che contiene punti.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore predefinito, che è stato impostato in precedenza dal costruttore o SetDefaultValue.  
  
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
 Chiamare questa funzione per recuperare il valore corrente del punto di animazione. Se gli oggetti di questo metodo ha esito negativo o COM sottostanti per X e Y coordinate non è state inizializzate, il valore predefinito, che è stata precedentemente impostato nel costruttore o da SetDefaultValue ptValue.  
  
##  <a name="getx"></a>CAnimationPoint::GetX  
 Fornisce l'accesso a CAnimationVariable per la coordinata X.  
  
```  
CAnimationVariable& GetX();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta X coordinate.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta X coordinate.  
  
##  <a name="gety"></a>CAnimationPoint::GetY  
 Fornisce l'accesso a CAnimationVariable per la coordinata Y.  
  
```  
CAnimationVariable& GetY();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata Y.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla variabile CAnimationVariable che rappresenta la coordinata Y.  
  
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
 Converte un CAnimationPoint un CPoint.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente di CAnimationPoint come CPoint.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il punto restituito conterrà i valori predefiniti per X e Y coordinate.  
  
##  <a name="operator_eq"></a>CAnimationPoint::operator =  
 Assegna ptSrc a CAnimationPoint.  
  
```  
void operator=(const CPoint& ptSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `ptSrc`  
 Fa riferimento a CPoint o punto.  
  
### <a name="remarks"></a>Note  
 Assegna ptSrc a CAnimationPoint. È consigliabile per eseguire che prima dell'inizio dell'animazione perché questo operatore chiama SetDefaultValue, il componente COM sottostante che consente di ricreare oggetti per le coordinate X e Y se sono stati creati. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="setdefaultvalue"></a>CAnimationPoint::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(const POINT& ptDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `ptDefault`  
 Specifica il valore di punto predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodi assegnano valori predefiniti per le coordinate X e Y del punto di animazione. Ricrea anche gli oggetti COM sottostanti se sono stati creati. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
