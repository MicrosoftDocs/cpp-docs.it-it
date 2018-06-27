---
title: Classe CAnimationValue | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimationValue
- AFXANIMATIONCONTROLLER/CAnimationValue
- AFXANIMATIONCONTROLLER/CAnimationValue::CAnimationValue
- AFXANIMATIONCONTROLLER/CAnimationValue::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationValue::GetValue
- AFXANIMATIONCONTROLLER/CAnimationValue::GetVariable
- AFXANIMATIONCONTROLLER/CAnimationValue::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationValue::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationValue::m_value
dev_langs:
- C++
helpviewer_keywords:
- CAnimationValue [MFC], CAnimationValue
- CAnimationValue [MFC], AddTransition
- CAnimationValue [MFC], GetValue
- CAnimationValue [MFC], GetVariable
- CAnimationValue [MFC], SetDefaultValue
- CAnimationValue [MFC], GetAnimationVariableList
- CAnimationValue [MFC], m_value
ms.assetid: 78c5ae19-ede5-4f20-bfbe-68b467b603c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b762c3abb5f57574dc2a60d6b2145af2e0c0484b
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952098"
---
# <a name="canimationvalue-class"></a>Classe CAnimationValue
Implementa la funzionalità di oggetto di animazione con un valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationValue : public CAnimationBaseObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::CAnimationValue](#canimationvalue)|Di overload. Costruisce un oggetto CAnimationValue.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::AddTransition](#addtransition)|Aggiunge una transizione da applicare a un valore.|  
|[CAnimationValue::GetValue](#getvalue)|Di overload. Recupera il valore corrente.|  
|[CAnimationValue::GetVariable](#getvariable)|Fornisce l'accesso alla variabile di animazione incapsulato.|  
|[CAnimationValue::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::GetAnimationVariableList](#getanimationvariablelist)|Inserisce la variabile di animazione incapsulato in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::operator doppia](#operator_double)|Fornisce la conversione tra CAnimationValue e DOUBLE.|  
|[CAnimationValue::operator INT32](#operator_int32)|Fornisce la conversione tra CAnimationValue e INT32.|  
|[CAnimationValue::operator =](#operator_eq)|Di overload. Assegna un valore INT32 a CAnimationValue.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::m_value](#m_value)|La variabile di animazione incapsulata che rappresenta il valore di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationValue incapsula un singolo oggetto CAnimationVariable e può rappresentare un singolo valore animato nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per la trasparenza animata (effetto di dissolvenza), angolare (per ruotare gli oggetti), o per qualsiasi altro caso, quando è necessario creare un'animazione a seconda del valore singolo animata. Per usare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare al valore.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationValue`
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtransition"></a>  CAnimationValue::AddTransition  
 Aggiunge una transizione da applicare a un valore.  
  
```  
void AddTransition(CBaseTransition* pTransition);
```  
  
### <a name="parameters"></a>Parametri  
 *pTransition*  
 Un puntatore all'oggetto di transizione.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere una transizione a un elenco interno di transizioni da applicare a una variabile di animazione. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup.  
  
##  <a name="canimationvalue"></a>  CAnimationValue::CAnimationValue  
 Costruisce un oggetto CAnimationValue.  
  
```  
CAnimationValue();

 
CAnimationValue(
    DOUBLE dblDefaultValue,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *dblDefaultValue*  
 Specifica il valore predefinito.  
  
 *nGroupID*  
 Specifica l'ID del gruppo.  
  
 *nObjectID*  
 Specifica l'ID oggetto.  
  
 *dwUserData*  
 Specifica i dati definiti dall'utente.  
  
### <a name="remarks"></a>Note  
 Costruisce l'oggetto CAnimationValue con le proprietà predefinite: valore predefinito, ID di gruppo e ID di oggetto sono impostati su 0.  
  
##  <a name="getanimationvariablelist"></a>  CAnimationValue::GetAnimationVariableList  
 Inserisce la variabile di animazione incapsulato in un elenco.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 *lst*  
 Quando la funzione viene restituito, contiene un puntatore a CAnimationVariable che rappresenta il valore di animazione.  
  
##  <a name="getvalue"></a>  CAnimationValue::GetValue  
 Recupera il valore corrente.  
  
```  
BOOL GetValue(DOUBLE& dblValue);  
BOOL GetValue(INT32& nValue);
```  
  
### <a name="parameters"></a>Parametri  
 *dblValue*  
 Output. Quando termina la funzione contiene un valore corrente della variabile di animazione.  
  
 *nValore*  
 Output. Quando termina la funzione contiene un valore corrente della variabile di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente. Questa implementazione chiama l'oggetto COM incapsulato e se la chiamata ha esito negativo, questo metodo restituisce il valore predefinito che è stata precedentemente impostato nel costruttore o con SetDefaultValue.  
  
##  <a name="getvariable"></a>  CAnimationValue::GetVariable  
 Fornisce l'accesso alla variabile di animazione incapsulato.  
  
```  
CAnimationVariable& GetVariable();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento alla variabile di animazione incapsulato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per accedere alla variabile di animazione incapsulato. Da CAnimationVariable si ottiene l'accesso all'oggetto IUIAnimationVariable sottostante, il cui puntatore può essere NULL se non è stata creata la variabile di animazione.  
  
##  <a name="m_value"></a>  CAnimationValue::m_value  
 La variabile di animazione incapsulata che rappresenta il valore di animazione.  
  
```  
CAnimationVariable m_value;  
```  
  
##  <a name="operator_double"></a>  CAnimationValue::operator doppia  
 Fornisce la conversione tra CAnimationValue e DOUBLE.  
  
```  
operator DOUBLE();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del valore di animazione.  
  
### <a name="remarks"></a>Note  
 Fornisce la conversione tra CAnimationValue e DOUBLE. Questo metodo chiama GetValue internamente e non controllare gli errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito impostato in precedenza nel costruttore o con SetDefaultValue.  
  
##  <a name="operator_int32"></a>  CAnimationValue::operator INT32  
 Fornisce la conversione tra CAnimationValue e INT32.  
  
```  
operator INT32();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente dell'animazione valore come numero intero.  
  
### <a name="remarks"></a>Note  
 Fornisce la conversione tra CAnimationValue e INT32. Questo metodo chiama GetValue internamente e non controllare gli errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito impostato in precedenza nel costruttore o con SetDefaultValue.  
  
##  <a name="operator_eq"></a>  CAnimationValue::operator =  
 Assegna un valore DOUBLE a CAnimationValue.  
  
```  
void operator=(DOUBLE dblVal);  
void operator=(INT32 nVal);
```  
  
### <a name="parameters"></a>Parametri  
 *dblVal*  
 Specifica il valore da assegnare al valore di animazione.  
  
 *nVal*  
 Specifica il valore da assegnare al valore di animazione.  
  
### <a name="remarks"></a>Note  
 Assegna un valore DOUBLE a CAnimationValue. Questo valore è impostato come valore predefinito per la variabile di animazione incapsulato. Se si ha sottoscritto l'oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="setdefaultvalue"></a>  CAnimationValue::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(DOUBLE dblDefaultValue);
```  
  
### <a name="parameters"></a>Parametri  
 *dblDefaultValue*  
 Specifica il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare un valore predefinito. Un valore predefinito viene restituito all'applicazione quando l'animazione non è stato avviato e/o non è stato creato l'oggetto COM sottostante. Se è già stato creato l'oggetto COM sottostante incapsulato in CAnimationVarible, questo metodo ricreato, pertanto potrebbe essere necessario chiamare metodi EnableValueChanged/EnableIntegerValueChanged nuovamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
