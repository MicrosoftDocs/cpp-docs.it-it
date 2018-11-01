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
ms.openlocfilehash: 9a43536e3f9f90b70d5d68eb5ce5d277f9b42e00
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613798"
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
|[CAnimationValue::AddTransition](#addtransition)|Aggiunge una transizione a essere applicato a un valore.|
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
|[CAnimationValue::operator DOUBLE](#operator_double)|Fornisce la conversione tra CAnimationValue e DOUBLE.|
|[INT32 CAnimationValue::operator](#operator_int32)|Fornisce la conversione tra CAnimationValue e INT32.|
|[CAnimationValue::operator =](#operator_eq)|Di overload. Assegna un valore INT32 CAnimationValue.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAnimationValue::m_value](#m_value)|La variabile di animazione incapsulato che rappresenta il valore di animazione.|

## <a name="remarks"></a>Note

Classe CAnimationValue incapsula un singolo oggetto CAnimationVariable e può rappresentare un singolo valore animato nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per la trasparenza animata (effetto dissolvenza), angolare (per ruotare gli oggetti), o per tutti gli altri casi, quando è necessario creare un'animazione in base a un singolo valore animato. Per usare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare al valore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationValue`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtransition"></a>  CAnimationValue::AddTransition

Aggiunge una transizione a essere applicato a un valore.

```
void AddTransition(CBaseTransition* pTransition);
```

### <a name="parameters"></a>Parametri

*pTransition*<br/>
Un puntatore all'oggetto di transizione.

### <a name="remarks"></a>Note

Chiamare questa funzione per aggiungere una transizione a un elenco interno delle transizioni da applicare a una variabile di animazione. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup.

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

*dblDefaultValue*<br/>
Specifica il valore predefinito.

*nGroupID*<br/>
Specifica l'ID del gruppo.

*nObjectID*<br/>
Specifica l'ID dell'oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Note

Costruisce l'oggetto CAnimationValue con proprietà predefinite: valore predefinito, ID del gruppo e ID di oggetto vengono impostati su 0.

##  <a name="getanimationvariablelist"></a>  CAnimationValue::GetAnimationVariableList

Inserisce la variabile di animazione incapsulato in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*lst*<br/>
Quando la funzione viene restituito, contiene un puntatore a CAnimationVariable che rappresenta il valore animato.

##  <a name="getvalue"></a>  CAnimationValue::GetValue

Recupera il valore corrente.

```
BOOL GetValue(DOUBLE& dblValue);
BOOL GetValue(INT32& nValue);
```

### <a name="parameters"></a>Parametri

*dblValue*<br/>
Output. Quando la funzione restituisce contiene un valore corrente della variabile di animazione.

*nValore*<br/>
Output. Quando la funzione restituisce contiene un valore corrente della variabile di animazione.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore corrente. Questa implementazione chiama l'oggetto COM incapsulato e se la chiamata ha esito negativo, questo metodo restituisce il valore predefinito è stato precedentemente impostato nel costruttore o con SetDefaultValue.

##  <a name="getvariable"></a>  CAnimationValue::GetVariable

Fornisce l'accesso alla variabile di animazione incapsulato.

```
CAnimationVariable& GetVariable();
```

### <a name="return-value"></a>Valore restituito

Un riferimento alla variabile di animazione incapsulato.

### <a name="remarks"></a>Note

Utilizzare questo metodo per accedere alla variabile di animazione incapsulato. Da CAnimationVariable è possibile accedere all'oggetto IUIAnimationVariable sottostante, la cui puntatore può essere NULL se non è stata creata la variabile di animazione.

##  <a name="m_value"></a>  CAnimationValue::m_value

La variabile di animazione incapsulato che rappresenta il valore di animazione.

```
CAnimationVariable m_value;
```

##  <a name="operator_double"></a>  CAnimationValue::operator DOUBLE

Fornisce la conversione tra CAnimationValue e DOUBLE.

```
operator DOUBLE();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di animazione.

### <a name="remarks"></a>Note

Fornisce la conversione tra CAnimationValue e DOUBLE. Questo metodo chiama GetValue internamente e non controlla gli errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore precedentemente impostato nel costruttore o con SetDefaultValue.

##  <a name="operator_int32"></a>  INT32 CAnimationValue::operator

Fornisce la conversione tra CAnimationValue e INT32.

```
operator INT32();
```

### <a name="return-value"></a>Valore restituito

Valore corrente dell'animazione valore come numero intero.

### <a name="remarks"></a>Note

Fornisce la conversione tra CAnimationValue e INT32. Questo metodo chiama GetValue internamente e non controlla gli errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore precedentemente impostato nel costruttore o con SetDefaultValue.

##  <a name="operator_eq"></a>  CAnimationValue::operator =

Assegna un valore DOUBLE a CAnimationValue.

```
void operator=(DOUBLE dblVal);
void operator=(INT32 nVal);
```

### <a name="parameters"></a>Parametri

*dblVal*<br/>
Specifica il valore da assegnare al valore dell'animazione.

*nVal*<br/>
Specifica il valore da assegnare al valore dell'animazione.

### <a name="remarks"></a>Note

Assegna un valore DOUBLE a CAnimationValue. Questo valore è impostato come valore predefinito per la variabile di animazione incapsulato. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

##  <a name="setdefaultvalue"></a>  CAnimationValue::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### <a name="parameters"></a>Parametri

*dblDefaultValue*<br/>
Specifica il valore predefinito.

### <a name="remarks"></a>Note

Utilizzare questo metodo per impostare un valore predefinito. Un valore predefinito viene restituito all'applicazione quando l'animazione non è stata avviata e/o oggetto COM sottostante non è stato creato. Se l'oggetto COM sottostante incapsulato in CAnimationVarible è già stato creato, questo metodo lo ricrea, pertanto potrebbe essere necessario chiamare metodi EnableValueChanged/EnableIntegerValueChanged nuovamente.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
