---
title: Classe CAnimationSize | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- afxanimationcontroller/CAnimationSize
- CAnimationSize
dev_langs:
- C++
helpviewer_keywords:
- CAnimationSize class
ms.assetid: ea06d1b5-502c-44a3-82ca-8bd6ba6a9364
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
ms.openlocfilehash: 84b9ae3b81f72f6c0ae8e88f78357c29e8d82ffd
ms.lasthandoff: 02/24/2017

---
# <a name="canimationsize-class"></a>Classe CAnimationSize
Implementa la funzionalità di un oggetto dimensioni le cui dimensioni possono essere animate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationSize : public CAnimationBaseObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::CAnimationSize](#canimationsize)|Di overload. Costruisce un oggetto di dimensioni di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::AddTransition](#addtransition)|Aggiunge transizioni per larghezza e altezza.|  
|[CAnimationSize::GetCX](#getcx)|Fornisce l'accesso a CAnimationVariable che rappresenta la larghezza.|  
|[CAnimationSize::GetCY](#getcy)|Fornisce l'accesso a CAnimationVariable che rappresenta l'altezza.|  
|[CAnimationSize::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per la larghezza e altezza.|  
|[CAnimationSize::GetValue](#getvalue)|Restituisce il valore corrente.|  
|[CAnimationSize::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili dell'animazione incapsulata in un elenco. (Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize CAnimationSize::operator](#operator_csize)|Converte un CAnimationSize in un CSize.|  
|[CAnimationSize::operator =](#operator_eq)|Assegna szSrc a CAnimationSize.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::m_cxValue](#m_cxvalue)|La variabile di animazione incapsulata che rappresenta la larghezza della dimensione di animazione.|  
|[CAnimationSize::m_cyValue](#m_cyvalue)|La variabile di animazione incapsulata che rappresenta l'altezza della dimensione di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationSize incapsula due oggetti CAnimationVariable e può rappresentare una dimensione nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per aggiungere un'animazione a una dimensione pari a due dimensionale oggetto sullo schermo (come un rettangolo, controllo e così via). Per utilizzare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare a larghezza e/o di altezza.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationSize` 
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="a-nameaddtransitiona--canimationsizeaddtransition"></a><a name="addtransition"></a>CAnimationSize::AddTransition  
 Aggiunge transizioni per larghezza e altezza.  
  
```  
void AddTransition(
    CBaseTransition* pCXTransition,  
    CBaseTransition* pCYTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pCXTransition`  
 Puntatore alla transizione per larghezza.  
  
 `pCYTransition`  
 Puntatore alla transizione per altezza.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per larghezza e altezza. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non si desidera applicare una transizione a una delle dimensioni, è possibile passare NULL.  
  
##  <a name="a-namecanimationsizea--canimationsizecanimationsize"></a><a name="canimationsize"></a>CAnimationSize::CAnimationSize  
 Costruisce un oggetto di dimensioni di animazione.  
  
```  
CAnimationSize();

 
CAnimationSize(
    const CSize& szDefault,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `szDefault`  
 Specifica la dimensione predefinita.  
  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `nObjectID`  
 Specifica l'ID dell'oggetto.  
  
 `dwUserData`  
 Specifica i dati definiti dall'utente.  
  
### <a name="remarks"></a>Note  
 L'oggetto viene costruito con valori predefiniti per la larghezza, altezza, ID oggetto e ID di gruppo, che verrà impostato su 0. Possono essere modificate in un secondo momento in fase di esecuzione utilizzando SetDefaultValue e SetID.  
  
##  <a name="a-namegetanimationvariablelista--canimationsizegetanimationvariablelist"></a><a name="getanimationvariablelist"></a>CAnimationSize::GetAnimationVariableList  
 Inserisce le variabili dell'animazione incapsulata in un elenco.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Quando la funzione restituisce, contiene i puntatori a due oggetti CAnimationVariable che rappresenta la larghezza e altezza.  
  
##  <a name="a-namegetcxa--canimationsizegetcx"></a><a name="getcx"></a>CAnimationSize::GetCX  
 Fornisce l'accesso a CAnimationVariable che rappresenta la larghezza.  
  
```  
CAnimationVariable& GetCX();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la larghezza.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere l'accesso diretto alla variabile CAnimationVariable sottostante che rappresenta la larghezza.  
  
##  <a name="a-namegetcya--canimationsizegetcy"></a><a name="getcy"></a>CAnimationSize::GetCY  
 Fornisce l'accesso a CAnimationVariable che rappresenta l'altezza.  
  
```  
CAnimationVariable& GetCY();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta l'altezza.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere l'accesso diretto alla variabile CAnimationVariable sottostante che rappresenta l'altezza.  
  
##  <a name="a-namegetdefaultvaluea--canimationsizegetdefaultvalue"></a><a name="getdefaultvalue"></a>CAnimationSize::GetDefaultValue  
 Restituisce i valori predefiniti per la larghezza e altezza.  
  
```  
CSize GetDefaultValue();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CSize contenente i valori predefiniti.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore predefinito, che in precedenza è stato impostato dal costruttore o SetDefaultValue.  
  
##  <a name="a-namegetvaluea--canimationsizegetvalue"></a><a name="getvalue"></a>CAnimationSize::GetValue  
 Restituisce il valore corrente.  
  
```  
BOOL GetValue(CSize& szValue);
```  
  
### <a name="parameters"></a>Parametri  
 `szValue`  
 Output. Quando questo metodo viene restituito, contiene il valore corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore corrente è stato recuperato correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente della dimensione di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per larghezza e le dimensioni non sono stati inizializzati, szValue contiene il valore predefinito, che è stata precedentemente impostato nel costruttore o da SetDefaultValue.  
  
##  <a name="a-namemcxvaluea--canimationsizemcxvalue"></a><a name="m_cxvalue"></a>CAnimationSize::m_cxValue  
 La variabile di animazione incapsulata che rappresenta la larghezza della dimensione di animazione.  
  
```  
CAnimationVariable m_cxValue;  
```  
  
##  <a name="a-namemcyvaluea--canimationsizemcyvalue"></a><a name="m_cyvalue"></a>CAnimationSize::m_cyValue  
 La variabile di animazione incapsulata che rappresenta l'altezza della dimensione di animazione.  
  
```  
CAnimationVariable m_cyValue;  
```  
  
##  <a name="a-nameoperatorcsizea--canimationsizeoperator-csize"></a><a name="operator_csize"></a>CSize CAnimationSize::operator  
 Converte un CAnimationSize in un CSize.  
  
```  
operator CSize();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente della dimensione di animazione come CSize.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, la dimensione restituita conterrà i valori predefiniti per la larghezza e altezza.  
  
##  <a name="a-nameoperatoreqa--canimationsizeoperator"></a><a name="operator_eq"></a>CAnimationSize::operator =  
 Assegna szSrc a CAnimationSize.  
  
```  
void operator=(const CSize& szSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `szSrc`  
 Fa riferimento a CSize o dimensioni.  
  
### <a name="remarks"></a>Note  
 Assegna szSrc a CAnimationSize. Si consiglia di eseguire tale operazione prima dell'inizio dell'animazione perché questo operatore chiama SetDefaultValue che ricrea gli oggetti COM sottostanti per Width e Height se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="a-namesetdefaultvaluea--canimationsizesetdefaultvalue"></a><a name="setdefaultvalue"></a>CAnimationSize::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(const CSize& szDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `szDefault`  
 Specifica nuove dimensioni predefinite.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti per larghezza e l'altezza della dimensione di animazione. Ricrea anche gli oggetti COM sottostanti se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

