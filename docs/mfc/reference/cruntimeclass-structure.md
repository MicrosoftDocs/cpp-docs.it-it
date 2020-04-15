---
title: Struttura CRuntimeClass
ms.date: 11/04/2016
f1_keywords:
- CRuntimeClass
helpviewer_keywords:
- CRuntimeClass structure [MFC]
- dynamic class information [MFC]
- runtime [MFC], class information
- run-time class [MFC], CRuntimeClass structure
ms.assetid: de62b6ef-90d4-420f-8c70-f58b36976a2b
ms.openlocfilehash: a58b9c97d5683423a0f81f6b5424f19f987943bf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318555"
---
# <a name="cruntimeclass-structure"></a>Struttura CRuntimeClass

Ogni classe `CObject` derivata da `CRuntimeClass` è associata a una struttura che è possibile utilizzare per ottenere informazioni su un oggetto o la relativa classe base in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```
struct CRuntimeClass
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Classe CRuntimeClass::CreateObject](#createobject)|Crea un oggetto in fase di esecuzione.|
|[CRuntimeClass::FromName](#fromname)|Crea un oggetto in fase di esecuzione utilizzando il nome della classe familiare.|
|[CRuntimeClass::IsDerivedFrom](#isderivedfrom)|Determina se la classe è derivata dalla classe specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRuntimeClass::m_lpszClassName](#m_lpszclassname)|Nome della classe.|
|[CRuntimeClass::m_nObjectSize](#m_nobjectsize)|Dimensione dell'oggetto in byte.|
|[CRuntimeClass::m_pBaseClass](#m_pbaseclass)|Puntatore alla `CRuntimeClass` struttura della classe base.|
|[CRuntimeClass::m_pfnCreateObject](#m_pfncreateobject)|Puntatore alla funzione che crea dinamicamente l'oggetto.|
|[CRuntimeClass::m_pfnGetBaseClass](#m_pfngetbaseclass)|Restituisce `CRuntimeClass` la struttura (disponibile solo se collegata dinamicamente).|
|[CRuntimeClass::m_wSchema](#m_wschema)|Numero dello schema della classe.|

## <a name="remarks"></a>Osservazioni

`CRuntimeClass`è una struttura e pertanto non dispone di una classe base.

La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario un controllo di tipo aggiuntivo degli argomenti della funzione o quando è necessario scrivere codice per scopi speciali basato sulla classe di un oggetto. Le informazioni sulla classe in fase di esecuzione non sono supportate direttamente dal linguaggio C.

`CRuntimeClass`fornisce informazioni sull'oggetto correlato di C, ad `CRuntimeClass` esempio un puntatore alla classe base e il nome della classe ASCII della classe correlata. Questa struttura implementa anche varie funzioni che possono essere utilizzate per creare in modo dinamico gli oggetti, specificando il tipo di oggetto utilizzando un nome familiare e determinando se la classe correlata è derivata da una classe specifica.

Per ulteriori informazioni `CRuntimeClass`sull'utilizzo di , vedere l'articolo [Accesso alle informazioni sulle classi](../../mfc/accessing-run-time-class-information.md)in fase di esecuzione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRuntimeClass`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cruntimeclasscreateobject"></a><a name="createobject"></a>Classe CRuntimeClass::CreateObject

Chiamare questa funzione per creare dinamicamente la classe specificata in fase di esecuzione.

```
CObject* CreateObject();

static CObject* PASCAL CreateObject(LPCSTR lpszClassName);

static CObject* PASCAL CreateObject(LPCWSTR lpszClassName);
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>
Nome familiare della classe da creare.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto appena creato oppure NULL se il nome della classe non viene trovato o la memoria non è sufficiente per creare l'oggetto.

### <a name="remarks"></a>Osservazioni

Le classi `CObject` derivate da possono supportare la creazione dinamica, ovvero la possibilità di creare un oggetto di una classe specificata in fase di esecuzione. Le classi documento, visualizzazione e frame, ad esempio, devono supportare la creazione dinamica. Per ulteriori informazioni sulla `CreateObject` creazione dinamica e sul membro, vedere [Classe CObject](../../mfc/using-cobject.md) e [Classe CObject: Specifica dei livelli di funzionalità](../../mfc/specifying-levels-of-functionality.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassfromname"></a><a name="fromname"></a>CRuntimeClass::FromName

Chiamare questa funzione `CRuntimeClass` per recuperare la struttura associata al nome familiare.

```
static CRuntimeClass* PASCAL FromName(LPCSTR lpszClassName);

static CRuntimeClass* PASCAL FromName(LPCWSTR lpszClassName);
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>
Nome familiare di una `CObject`classe derivata da .

### <a name="return-value"></a>Valore restituito

Puntatore a `CRuntimeClass` un oggetto , corrispondente al nome passato in *lpszClassName*. La funzione restituisce NULL se non è stato trovato alcun nome di classe corrispondente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#17](../../mfc/codesnippet/cpp/cruntimeclass-structure_1.cpp)]

## <a name="cruntimeclassisderivedfrom"></a><a name="isderivedfrom"></a>CRuntimeClass::IsDerivedFrom

Chiamare questa funzione per determinare se la classe chiamante è derivata dalla classe specificata nel *pBaseClass* parametro.

```
BOOL IsDerivedFrom(const CRuntimeClass* pBaseClass) const;
```

### <a name="parameters"></a>Parametri

*pBaseClass (classe pBaseClass)*<br/>
Nome familiare di una `CObject`classe derivata da .

### <a name="return-value"></a>Valore restituito

TRUESe la `IsDerivedFrom` chiamata alla classe è `CRuntimeClass` derivata dalla classe base la cui struttura viene fornita come parametro; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La relazione è determinata da "camminare" dalla classe del membro fino alla catena di classi derivate fino all'inizio. Questa funzione restituisce FALSE solo se non viene trovata alcuna corrispondenza per la classe base.

> [!NOTE]
> Per utilizzare `CRuntimeClass` la struttura, è necessario includere la macro IMPLEMENT_DYNAMIC, IMPLEMENT_DYNCREATE o IMPLEMENT_SERIAL nell'implementazione della classe per la quale si desidera recuperare le informazioni sugli oggetti di runtime.

Per ulteriori informazioni `CRuntimeClass`sull'utilizzo di , vedere l'articolo [Classe CObject: Accesso alle informazioni](../../mfc/accessing-run-time-class-information.md)sulle classi in fase di esecuzione .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#18](../../mfc/codesnippet/cpp/cruntimeclass-structure_2.cpp)]

## <a name="cruntimeclassm_lpszclassname"></a><a name="m_lpszclassname"></a>CRuntimeClass::m_lpszClassName

Stringa con terminazione null contenente il nome della classe ASCII.

### <a name="remarks"></a>Osservazioni

Questo nome può essere utilizzato per creare `FromName` un'istanza della classe utilizzando la funzione membro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_nobjectsize"></a><a name="m_nobjectsize"></a>CRuntimeClass::m_nObjectSize

Dimensione dell'oggetto, in byte.

### <a name="remarks"></a>Osservazioni

Se l'oggetto dispone di membri dati che puntano alla memoria allocata, la dimensione di tale memoria non è inclusa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_pbaseclass"></a><a name="m_pbaseclass"></a>CRuntimeClass::m_pBaseClass

Se l'applicazione si collega in modo statico a `CRuntimeClass` MFC, questo membro dati contiene un puntatore alla struttura della classe base.

### <a name="remarks"></a>Osservazioni

Se l'applicazione si collega dinamicamente alla libreria MFC, vedere [m_pfnGetBaseClass](#m_pfngetbaseclass).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_pfncreateobject"></a><a name="m_pfncreateobject"></a>CRuntimeClass::m_pfnCreateObject

Puntatore a funzione per il costruttore predefinito che crea un oggetto della classe.

### <a name="remarks"></a>Osservazioni

Questo puntatore è valido solo se la classe supporta la creazione dinamica; in caso contrario, la funzione restituisce NULL.

## <a name="cruntimeclassm_pfngetbaseclass"></a><a name="m_pfngetbaseclass"></a>CRuntimeClass::m_pfnGetBaseClass

Se l'applicazione utilizza la libreria MFC come DLL condivisa, questo `CRuntimeClass` membro dati punta a una funzione che restituisce la struttura della classe base.

### <a name="remarks"></a>Osservazioni

Se l'applicazione si collega in modo statico alla libreria MFC, vedere [m_pBaseClass](#m_pbaseclass).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_wschema"></a><a name="m_wschema"></a>CRuntimeClass::m_wSchema

Numero dello schema ( -1 per le classi non serializzabili).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui numeri di schema, vedere la macro [IMPLEMENT_SERIAL.](run-time-object-model-services.md#implement_serial)

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Oggetto::GetRuntimeClass](../../mfc/reference/cobject-class.md#getruntimeclass)<br/>
[Oggetto CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof)<br/>
[RUNTIME_CLASS](run-time-object-model-services.md#runtime_class)<br/>
[IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic)<br/>
[IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate)<br/>
[IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial)
