---
description: 'Altre informazioni su: struttura CRuntimeClass'
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
ms.openlocfilehash: e02732ec595026f028ad4b8f9bd3d8898a40cbc0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342917"
---
# <a name="cruntimeclass-structure"></a>Struttura CRuntimeClass

Ogni classe derivata da `CObject` è associata a una `CRuntimeClass` struttura che è possibile usare per ottenere informazioni su un oggetto o sulla relativa classe di base in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```
struct CRuntimeClass
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRuntimeClass:: CreateObject](#createobject)|Crea un oggetto in fase di esecuzione.|
|[CRuntimeClass:: FromName](#fromname)|Crea un oggetto in fase di esecuzione usando il nome della classe familiare.|
|[CRuntimeClass:: IsDerivedFrom](#isderivedfrom)|Determina se la classe è derivata dalla classe specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CRuntimeClass:: m_lpszClassName](#m_lpszclassname)|Nome della classe.|
|[CRuntimeClass:: m_nObjectSize](#m_nobjectsize)|Dimensione dell'oggetto in byte.|
|[CRuntimeClass:: m_pBaseClass](#m_pbaseclass)|Puntatore alla `CRuntimeClass` struttura della classe di base.|
|[CRuntimeClass:: m_pfnCreateObject](#m_pfncreateobject)|Puntatore alla funzione che crea dinamicamente l'oggetto.|
|[CRuntimeClass:: m_pfnGetBaseClass](#m_pfngetbaseclass)|Restituisce la `CRuntimeClass` struttura (disponibile solo quando collegato dinamicamente).|
|[CRuntimeClass:: m_wSchema](#m_wschema)|Numero dello schema della classe.|

## <a name="remarks"></a>Commenti

`CRuntimeClass` è una struttura e pertanto non dispone di una classe base.

La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario il controllo dei tipi aggiuntivi degli argomenti della funzione o quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Le informazioni sulle classi in fase di esecuzione non sono supportate direttamente dal linguaggio C++.

`CRuntimeClass` fornisce informazioni sull'oggetto C++ correlato, ad esempio un puntatore a `CRuntimeClass` della classe di base e il nome della classe ASCII della classe correlata. Questa struttura implementa inoltre varie funzioni che possono essere utilizzate per creare dinamicamente oggetti, specificando il tipo di oggetto utilizzando un nome familiare e determinando se la classe correlata è derivata da una classe specifica.

Per ulteriori informazioni sull'utilizzo di `CRuntimeClass` , vedere l'articolo [accesso alle informazioni sulla classe di Run-Time](../../mfc/accessing-run-time-class-information.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRuntimeClass`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cruntimeclasscreateobject"></a><a name="createobject"></a> CRuntimeClass:: CreateObject

Chiamare questa funzione per creare dinamicamente la classe specificata durante la fase di esecuzione.

```
CObject* CreateObject();

static CObject* PASCAL CreateObject(LPCSTR lpszClassName);

static CObject* PASCAL CreateObject(LPCWSTR lpszClassName);
```

### <a name="parameters"></a>Parametri

*lpszClassName*<br/>
Nome familiare della classe da creare.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto appena creato oppure NULL se il nome della classe non viene trovato o la memoria disponibile non è sufficiente per creare l'oggetto.

### <a name="remarks"></a>Commenti

Le classi derivate da `CObject` possono supportare la creazione dinamica, ovvero la possibilità di creare un oggetto di una classe specificata in fase di esecuzione. Le classi Document, View e frame, ad esempio, devono supportare la creazione dinamica. Per altre informazioni sulla creazione dinamica e sul `CreateObject` membro, vedere [classe CObject](../../mfc/using-cobject.md) e [classe CObject: specifica dei livelli di funzionalità](../../mfc/specifying-levels-of-functionality.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassfromname"></a><a name="fromname"></a> CRuntimeClass:: FromName

Chiamare questa funzione per recuperare la `CRuntimeClass` struttura associata al nome familiare.

```
static CRuntimeClass* PASCAL FromName(LPCSTR lpszClassName);

static CRuntimeClass* PASCAL FromName(LPCWSTR lpszClassName);
```

### <a name="parameters"></a>Parametri

*lpszClassName*<br/>
Nome familiare di una classe derivata da `CObject` .

### <a name="return-value"></a>Valore restituito

Puntatore a un `CRuntimeClass` oggetto, corrispondente al nome come passato in *lpszClassName*. La funzione restituisce NULL se non è stato trovato alcun nome di classe corrispondente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#17](../../mfc/codesnippet/cpp/cruntimeclass-structure_1.cpp)]

## <a name="cruntimeclassisderivedfrom"></a><a name="isderivedfrom"></a> CRuntimeClass:: IsDerivedFrom

Chiamare questa funzione per determinare se la classe chiamante è derivata dalla classe specificata nel parametro *pBaseClass* .

```
BOOL IsDerivedFrom(const CRuntimeClass* pBaseClass) const;
```

### <a name="parameters"></a>Parametri

*pBaseClass*<br/>
Nome familiare di una classe derivata da `CObject` .

### <a name="return-value"></a>Valore restituito

TRUE se la classe `IsDerivedFrom` che chiama è derivata dalla classe di base la cui `CRuntimeClass` struttura viene fornita come parametro; in caso contrario, false.

### <a name="remarks"></a>Commenti

La relazione viene determinata da "Walking" dalla classe del membro fino alla catena di classi derivate fino alla parte superiore. Questa funzione restituisce FALSE solo se non viene trovata alcuna corrispondenza per la classe base.

> [!NOTE]
> Per utilizzare la `CRuntimeClass` struttura, è necessario includere la macro IMPLEMENT_DYNAMIC, IMPLEMENT_DYNCREATE o IMPLEMENT_SERIAL nell'implementazione della classe per la quale si desidera recuperare informazioni sull'oggetto in fase di esecuzione.

Per ulteriori informazioni sull'utilizzo di `CRuntimeClass` , vedere l'articolo relativo alla [classe CObject: accesso alle informazioni sulla classe di Run-Time](../../mfc/accessing-run-time-class-information.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#18](../../mfc/codesnippet/cpp/cruntimeclass-structure_2.cpp)]

## <a name="cruntimeclassm_lpszclassname"></a><a name="m_lpszclassname"></a> CRuntimeClass:: m_lpszClassName

Stringa con terminazione null che contiene il nome della classe ASCII.

### <a name="remarks"></a>Commenti

Questo nome può essere utilizzato per creare un'istanza della classe utilizzando la `FromName` funzione membro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_nobjectsize"></a><a name="m_nobjectsize"></a> CRuntimeClass:: m_nObjectSize

Dimensioni, in byte, dell'oggetto.

### <a name="remarks"></a>Commenti

Se l'oggetto dispone di membri dati che puntano a memoria allocata, le dimensioni della memoria non vengono incluse.

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_pbaseclass"></a><a name="m_pbaseclass"></a> CRuntimeClass:: m_pBaseClass

Se l'applicazione si collega a MFC in modo statico, questo membro dati contiene un puntatore alla `CRuntimeClass` struttura della classe di base.

### <a name="remarks"></a>Commenti

Se l'applicazione si collega in modo dinamico alla libreria MFC, vedere [m_pfnGetBaseClass](#m_pfngetbaseclass).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_pfncreateobject"></a><a name="m_pfncreateobject"></a> CRuntimeClass:: m_pfnCreateObject

Puntatore a funzione per il costruttore predefinito che crea un oggetto della classe.

### <a name="remarks"></a>Commenti

Questo puntatore è valido solo se la classe supporta la creazione dinamica. in caso contrario, la funzione restituisce NULL.

## <a name="cruntimeclassm_pfngetbaseclass"></a><a name="m_pfngetbaseclass"></a> CRuntimeClass:: m_pfnGetBaseClass

Se l'applicazione usa la libreria MFC come DLL condivisa, questo membro dati punta a una funzione che restituisce la `CRuntimeClass` struttura della classe di base.

### <a name="remarks"></a>Commenti

Se l'applicazione si collega in modo statico alla libreria MFC, vedere [m_pBaseClass](#m_pbaseclass).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="cruntimeclassm_wschema"></a><a name="m_wschema"></a> CRuntimeClass:: m_wSchema

Numero dello schema (-1 per le classi non serializzabili).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sui numeri di schema, vedere la [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsDerivedFrom](#isderivedfrom).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CObject:: GetRuntimeClass](../../mfc/reference/cobject-class.md#getruntimeclass)<br/>
[CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)<br/>
[RUNTIME_CLASS](run-time-object-model-services.md#runtime_class)<br/>
[IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic)<br/>
[IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate)<br/>
[IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial)
