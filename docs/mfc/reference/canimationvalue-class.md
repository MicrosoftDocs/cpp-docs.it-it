---
title: Classe CAnimationValue
ms.date: 11/04/2016
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
helpviewer_keywords:
- CAnimationValue [MFC], CAnimationValue
- CAnimationValue [MFC], AddTransition
- CAnimationValue [MFC], GetValue
- CAnimationValue [MFC], GetVariable
- CAnimationValue [MFC], SetDefaultValue
- CAnimationValue [MFC], GetAnimationVariableList
- CAnimationValue [MFC], m_value
ms.assetid: 78c5ae19-ede5-4f20-bfbe-68b467b603c2
ms.openlocfilehash: e020e3e123bb5dc96a623e7a41896d75c611b81e
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81755079"
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
|[Valore di Animazione::CAnimationValueCAnimationValue::CAnimationValue](#canimationvalue)|Di overload. Costruisce un CAnimationValue oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Valore di Animazione::AddTransitionCAnimationValue::AddTransition](#addtransition)|Aggiunge una transizione da applicare a un valore.|
|[Valore di CAnimation::GetValueCAnimationValue::GetValue](#getvalue)|Di overload. Recupera il valore corrente.|
|[Valore di Animazione::GetVariableCAnimationValue::GetVariable](#getvariable)|Fornisce l'accesso alla variabile di animazione incapsulata.|
|[Valore di Animazione::SetDefaultValueCAnimationValue::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Valore di Animazione::GetAnimationVariableListCAnimationValue::GetAnimationVariableList](#getanimationvariablelist)|Inserisce la variabile di animazione incapsulata in un elenco. (OverrideS [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationValue::operatorDOUBLE](#operator_double)|Fornisce la conversione tra CAnimationValue e DOUBLE.|
|[CAnimationValue::operator INT32](#operator_int32)|Fornisce la conversione tra CAnimationValue e INT32.|
|[CAnimationValue::operatore](#operator_eq)|Di overload. Assegna un VALORE INT32 a CAnimationValue.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationValue::m_value](#m_value)|Variabile di animazione incapsulata che rappresenta il valore dell'animazione.|

## <a name="remarks"></a>Osservazioni

Il CAnimationValue classe incapsula un singolo CAnimationVariable oggetto e può rappresentare nelle applicazioni un singolo valore animato. Ad esempio, è possibile utilizzare questa classe per la trasparenza animata (effetto dissolvenza), l'angolo (per ruotare gli oggetti) o per qualsiasi altro caso in cui è necessario creare un'animazione in base a un singolo valore animato. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare al valore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[Oggetto CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationValue`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvalueaddtransition"></a><a name="addtransition"></a>Valore di Animazione::AddTransitionCAnimationValue::AddTransition

Aggiunge una transizione da applicare a un valore.

```cpp
void AddTransition(CBaseTransition* pTransition);
```

### <a name="parameters"></a>Parametri

*pTransizione*<br/>
Puntatore all'oggetto di transizione.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere una transizione all'elenco interno di transizioni da applicare a una variabile di animazione. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un determinato valore) quando si chiama CAnimationController::AnimateGroup.Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup.

## <a name="canimationvaluecanimationvalue"></a><a name="canimationvalue"></a>Valore di Animazione::CAnimationValueCAnimationValue::CAnimationValue

Costruisce un CAnimationValue oggetto.

```
CAnimationValue();

CAnimationValue(
    DOUBLE dblDefaultValue,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*DblDefaultValue (valore dblDefaultValue)*<br/>
Specifica il valore predefinito.

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
specifica i dati definiti dall'utente.

### <a name="remarks"></a>Osservazioni

Costruisce l'oggetto CAnimationValue con le proprietà predefinite: valore predefinito, ID gruppo e ID oggetto sono impostati su 0.

## <a name="canimationvaluegetanimationvariablelist"></a><a name="getanimationvariablelist"></a>Valore di Animazione::GetAnimationVariableListCAnimationValue::GetAnimationVariableList

Inserisce la variabile di animazione incapsulata in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
Quando la funzione restituisce, contiene un puntatore a CAnimationVariable che rappresenta il valore animato.

## <a name="canimationvaluegetvalue"></a><a name="getvalue"></a>Valore di CAnimation::GetValueCAnimationValue::GetValue

Recupera il valore corrente.

```
BOOL GetValue(DOUBLE& dblValue);
BOOL GetValue(INT32& nValue);
```

### <a name="parameters"></a>Parametri

*dblValue (valore dblValue)*<br/>
Output: Quando la funzione restituisce contiene un valore corrente della variabile di animazione.

*nValore*<br/>
Output: Quando la funzione restituisce contiene un valore corrente della variabile di animazione.

### <a name="return-value"></a>Valore restituito

TRUESe il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore corrente. This implementation calls the encapsulated COM object, and if the call fails, this method returns the default value that was previously set in constructor or with SetDefaultValue.

## <a name="canimationvaluegetvariable"></a><a name="getvariable"></a>Valore di Animazione::GetVariableCAnimationValue::GetVariable

Fornisce l'accesso alla variabile di animazione incapsulata.

```
CAnimationVariable& GetVariable();
```

### <a name="return-value"></a>Valore restituito

Riferimento alla variabile di animazione incapsulata.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per accedere alla variabile di animazione incapsulata. Da CAnimationVariable si ottiene l'accesso all'oggetto iUIAnimationVariable sottostante, il cui puntatore può essere NULL se la variabile di animazione non è stata creata.

## <a name="canimationvaluem_value"></a><a name="m_value"></a>CAnimationValue::m_value

Variabile di animazione incapsulata che rappresenta il valore dell'animazione.

```
CAnimationVariable m_value;
```

## <a name="canimationvalueoperator-double"></a><a name="operator_double"></a>CAnimationValue::operatorDOUBLE

Fornisce la conversione tra CAnimationValue e DOUBLE.

```
operator DOUBLE();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di Valore animazione.

### <a name="remarks"></a>Osservazioni

Fornisce la conversione tra CAnimationValue e DOUBLE. Questo metodo chiama internamente GetValue e non verifica la presenza di errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito impostato in precedenza nel costruttore o con SetDefaultValue.If GetValue fails, the returned value will contain a default value previously set in constructor or with SetDefaultValue.

## <a name="canimationvalueoperator-int32"></a><a name="operator_int32"></a>CAnimationValue::operator INT32

Fornisce la conversione tra CAnimationValue e INT32.

```
operator INT32();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di Animation Value come integer.

### <a name="remarks"></a>Osservazioni

Fornisce la conversione tra CAnimationValue e INT32. Questo metodo chiama internamente GetValue e non verifica la presenza di errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito impostato in precedenza nel costruttore o con SetDefaultValue.If GetValue fails, the returned value will contain a default value previously set in constructor or with SetDefaultValue.

## <a name="canimationvalueoperator"></a><a name="operator_eq"></a>CAnimationValue::operatore

Assegna un valore DOUBLE a CAnimationValue.

```cpp
void operator=(DOUBLE dblVal);
void operator=(INT32 nVal);
```

### <a name="parameters"></a>Parametri

*dblVal*<br/>
Specifica il valore da assegnare a Valore animazione.

*nVal (invalore)*<br/>
Specifica il valore da assegnare a Valore animazione.

### <a name="remarks"></a>Osservazioni

Assegna un valore DOUBLE a CAnimationValue. Questo valore viene impostato come valore predefinito per la variabile di animazione incapsulata. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="canimationvaluesetdefaultvalue"></a><a name="setdefaultvalue"></a>Valore di Animazione::SetDefaultValueCAnimationValue::SetDefaultValue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### <a name="parameters"></a>Parametri

*DblDefaultValue (valore dblDefaultValue)*<br/>
Specifica il valore predefinito.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare un valore predefinito. Un valore predefinito viene restituito all'applicazione quando l'animazione non è stata avviata e/o l'oggetto COM sottostante non è stato creato. Se l'oggetto COM sottostante incapsulato in CAnimationVarible è già stato creato, questo metodo lo ricrea, pertanto potrebbe essere necessario chiamare nuovamente i metodi EnableValueChanged/EnableIntegerValueChanged.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
