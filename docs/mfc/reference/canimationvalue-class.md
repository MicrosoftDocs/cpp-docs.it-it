---
description: 'Altre informazioni su: Classe CAnimationValue'
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
ms.openlocfilehash: d704e83d286b4078af90d09edef35e8445d149d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336739"
---
# <a name="canimationvalue-class"></a>Classe CAnimationValue

Implementa la funzionalità di oggetto di animazione con un valore.

## <a name="syntax"></a>Sintassi

```
class CAnimationValue : public CAnimationBaseObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationValue:: CAnimationValue](#canimationvalue)|Di overload. Costruisce un oggetto CAnimationValue.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationValue:: AddTransition](#addtransition)|Aggiunge una transizione da applicare a un valore.|
|[CAnimationValue:: GetValue](#getvalue)|Di overload. Recupera il valore corrente.|
|[CAnimationValue:: getvariabile](#getvariable)|Consente di accedere alla variabile di animazione incapsulata.|
|[CAnimationValue:: sedefaultvalue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationValue:: GetAnimationVariableList](#getanimationvariablelist)|Inserisce la variabile di animazione incapsulata in un elenco. Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationValue:: operator DOUBLE](#operator_double)|Fornisce la conversione tra CAnimationValue e DOUBLE.|
|[CAnimationValue:: operator INT32](#operator_int32)|Fornisce la conversione tra CAnimationValue e INT32.|
|[CAnimationValue:: operator =](#operator_eq)|Di overload. Assegna un valore INT32 a CAnimationValue.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationValue:: m_value](#m_value)|Variabile di animazione incapsulata che rappresenta il valore dell'animazione.|

## <a name="remarks"></a>Commenti

La classe CAnimationValue incapsula un singolo oggetto CAnimationVariable e può rappresentare nelle applicazioni un singolo valore animato. Ad esempio, è possibile usare questa classe per la trasparenza animata (effetto dissolvenza), l'angolo (per ruotare gli oggetti) o per qualsiasi altro caso quando è necessario creare un'animazione a seconda di un singolo valore animato. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerla al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare al valore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationValue`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvalueaddtransition"></a><a name="addtransition"></a> CAnimationValue:: AddTransition

Aggiunge una transizione da applicare a un valore.

```cpp
void AddTransition(CBaseTransition* pTransition);
```

### <a name="parameters"></a>Parametri

*pTransition*<br/>
Puntatore all'oggetto di transizione.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere una transizione all'elenco interno di transizioni da applicare a una variabile di animazione. Quando si aggiungono transizioni, queste non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup.

## <a name="canimationvaluecanimationvalue"></a><a name="canimationvalue"></a> CAnimationValue:: CAnimationValue

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
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Commenti

Costruisce l'oggetto CAnimationValue con le proprietà predefinite: valore predefinito, ID gruppo e ID oggetto sono impostati su 0.

## <a name="canimationvaluegetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationValue:: GetAnimationVariableList

Inserisce la variabile di animazione incapsulata in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
Quando la funzione restituisce, contiene un puntatore a CAnimationVariable che rappresenta il valore animato.

## <a name="canimationvaluegetvalue"></a><a name="getvalue"></a> CAnimationValue:: GetValue

Recupera il valore corrente.

```
BOOL GetValue(DOUBLE& dblValue);
BOOL GetValue(INT32& nValue);
```

### <a name="parameters"></a>Parametri

*dblValue*<br/>
Output: Quando la funzione la restituisce, contiene un valore corrente della variabile di animazione.

*nValue*<br/>
Output: Quando la funzione la restituisce, contiene un valore corrente della variabile di animazione.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore corrente. Questa implementazione chiama l'oggetto COM incapsulato e, se la chiamata ha esito negativo, questo metodo restituisce il valore predefinito precedentemente impostato nel costruttore o con l'oggetto DefaultValue.

## <a name="canimationvaluegetvariable"></a><a name="getvariable"></a> CAnimationValue:: getvariabile

Consente di accedere alla variabile di animazione incapsulata.

```
CAnimationVariable& GetVariable();
```

### <a name="return-value"></a>Valore restituito

Riferimento alla variabile di animazione incapsulata.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per accedere alla variabile di animazione incapsulata. Da CAnimationVariable si ottiene l'accesso all'oggetto IUIAnimationVariable sottostante, il cui puntatore può essere NULL se non è stata creata una variabile di animazione.

## <a name="canimationvaluem_value"></a><a name="m_value"></a> CAnimationValue:: m_value

Variabile di animazione incapsulata che rappresenta il valore dell'animazione.

```
CAnimationVariable m_value;
```

## <a name="canimationvalueoperator-double"></a><a name="operator_double"></a> CAnimationValue:: operator DOUBLE

Fornisce la conversione tra CAnimationValue e DOUBLE.

```
operator DOUBLE();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del valore dell'animazione.

### <a name="remarks"></a>Commenti

Fornisce la conversione tra CAnimationValue e DOUBLE. Questo metodo chiama internamente GetValue e non controlla la presenza di errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito precedentemente impostato nel costruttore o con l'oggetto DefaultValue.

## <a name="canimationvalueoperator-int32"></a><a name="operator_int32"></a> CAnimationValue:: operator INT32

Fornisce la conversione tra CAnimationValue e INT32.

```
operator INT32();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del valore di animazione come Integer.

### <a name="remarks"></a>Commenti

Fornisce la conversione tra CAnimationValue e INT32. Questo metodo chiama internamente GetValue e non controlla la presenza di errori. Se GetValue ha esito negativo, il valore restituito conterrà un valore predefinito precedentemente impostato nel costruttore o con l'oggetto DefaultValue.

## <a name="canimationvalueoperator"></a><a name="operator_eq"></a> CAnimationValue:: operator =

Assegna un valore DOUBLE a CAnimationValue.

```cpp
void operator=(DOUBLE dblVal);
void operator=(INT32 nVal);
```

### <a name="parameters"></a>Parametri

*dblVal*<br/>
Specifica il valore da assegnare al valore dell'animazione.

*nVal*<br/>
Specifica il valore da assegnare al valore dell'animazione.

### <a name="remarks"></a>Commenti

Assegna un valore DOUBLE a CAnimationValue. Questo valore viene impostato come valore predefinito per la variabile di animazione incapsulata. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="canimationvaluesetdefaultvalue"></a><a name="setdefaultvalue"></a> CAnimationValue:: sedefaultvalue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### <a name="parameters"></a>Parametri

*dblDefaultValue*<br/>
Specifica il valore predefinito.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare un valore predefinito. Un valore predefinito viene restituito all'applicazione quando l'animazione non è stata avviata e/o l'oggetto COM sottostante non è stato creato. Se l'oggetto COM sottostante incapsulato in CAnimationVarible è già stato creato, questo metodo lo ricrea, quindi potrebbe essere necessario chiamare nuovamente i metodi EnableValueChanged/EnableIntegerValueChanged.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
