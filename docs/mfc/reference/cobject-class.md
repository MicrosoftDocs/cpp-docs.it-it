---
description: 'Altre informazioni su: classe CObject'
title: Classe CObject
ms.date: 1/12/2021
f1_keywords:
- CObject
- AFX/CObject
- AFX/CObject::CObject
- AFX/CObject::AssertValid
- AFX/CObject::Dump
- AFX/CObject::GetRuntimeClass
- AFX/CObject::IsKindOf
- AFX/CObject::IsSerializable
- AFX/CObject::Serialize
helpviewer_keywords:
- CObject [MFC], CObject
- CObject [MFC], AssertValid
- CObject [MFC], Dump
- CObject [MFC], GetRuntimeClass
- CObject [MFC], IsKindOf
- CObject [MFC], IsSerializable
- CObject [MFC], Serialize
ms.openlocfilehash: ba152a9cbbe6e2fa217d6c2e24d13ea48dd37c87
ms.sourcegitcommit: b51f79b5394e12cd90cb65c85cc01716f90bfc90
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/13/2021
ms.locfileid: "98167008"
---
# <a name="cobject-class"></a>Classe `CObject`

Classe base principale per la libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```cpp
class AFX_NOVTABLE CObject
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[`CObject::CObject`](#cobject)|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[`CObject::AssertValid`](#assertvalid)|Convalida l'integrità di questo oggetto.|
|[`CObject::Dump`](#dump)|Produce un dump di diagnostica dell'oggetto.|
|[`CObject::GetRuntimeClass`](#getruntimeclass)|Restituisce la `CRuntimeClass` struttura corrispondente alla classe di questo oggetto.|
|[`CObject::IsKindOf`](#iskindof)|Verifica la relazione di questo oggetto con una classe specificata.|
|[`CObject::IsSerializable`](#isserializable)|Esegue un test per verificare se l'oggetto può essere serializzato.|
|[`CObject::Serialize`](#serialize)|Carica o archivia un oggetto da/in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[`CObject::operator delete`](#operator_delete)|**`delete`** Operatore speciale.|
|[`CObject::operator new`](#operator_new)|**`new`** Operatore speciale.|

## <a name="remarks"></a>Commenti

Funge da radice non solo per le classi di libreria come `CFile` e `CObList` , ma anche per le classi scritte. `CObject` fornisce servizi di base, tra cui

- Supporto della serializzazione
- Informazioni sulle classi in fase di esecuzione
- Output di diagnostica oggetti
- Compatibilità con le classi di raccolta

`CObject` non supporta l'ereditarietà multipla. Nelle classi derivate può essere presente una sola `CObject` classe di base, che `CObject` deve essere più a sinistra nella gerarchia. È tuttavia possibile avere strutture e `CObject` classi non derivate in Branch di ereditarietà multipla a destra.

Si otterranno i principali vantaggi della `CObject` derivazione se si usano alcune macro facoltative nell'implementazione della classe e nelle dichiarazioni.

Le macro di primo livello, [`DECLARE_DYNAMIC`](run-time-object-model-services.md#declare_dynamic) e [`IMPLEMENT_DYNAMIC`](run-time-object-model-services.md#implement_dynamic) , consentono l'accesso in fase di esecuzione al nome della classe e alla relativa posizione nella gerarchia. Questo, a sua volta, consente il dump di diagnostica significativo.

Le macro di secondo livello [`DECLARE_SERIAL`](run-time-object-model-services.md#declare_serial) e [`IMPLEMENT_SERIAL`](run-time-object-model-services.md#implement_serial) includono tutte le funzionalità delle macro di primo livello e consentono a un oggetto di essere "serializzato" da e verso un "archivio".

Per informazioni sulla derivazione di classi Microsoft Foundation e C++ in generale e sull'uso di `CObject` , vedere [using CObject](../../mfc/using-cobject.md) and [Serialization](../../mfc/serialization-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CObject`

## <a name="requirements"></a>Requisiti

**Intestazione:**`afx.h`

## <a name="cobjectassertvalid"></a><a name="assertvalid"></a> CObject:: AssertValid

Convalida l'integrità di questo oggetto.

```cpp
virtual void AssertValid() const;
```

### <a name="remarks"></a>Commenti

`AssertValid` esegue un controllo di validità su questo oggetto controllando lo stato interno. Nella versione di debug della libreria, `AssertValid` può dichiarare e quindi terminare il programma con un messaggio in cui sono elencati il numero di riga e il nome del file in cui l'asserzione non è riuscita.

Quando si scrive una classe personalizzata, è necessario eseguire l'override della `AssertValid` funzione per fornire servizi di diagnostica per se stessi e per altri utenti della classe. L'oggetto sottoposto `AssertValid` a override in genere chiama la `AssertValid` funzione della relativa classe base prima di controllare i membri dati univoci per la classe derivata.

Poiché `AssertValid` è una **`const`** funzione, non è consentito modificare lo stato dell'oggetto durante il test. Le funzioni della classe derivata `AssertValid` non devono generare eccezioni, bensì dichiarare se rilevano dati di oggetti non validi.

La definizione di "validità" dipende dalla classe dell'oggetto. Di norma, la funzione deve eseguire un "controllo superficiale". Ovvero, se un oggetto contiene puntatori ad altri oggetti, deve verificare se i puntatori non sono `NULL` , ma non devono eseguire test di validità sugli oggetti a cui fanno riferimento i puntatori.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#7](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]

Per un altro esempio, vedere [`AfxDoForAllObjects`](diagnostic-services.md#afxdoforallobjects) .

## <a name="cobjectcobject"></a><a name="cobject"></a> CObject:: CObject

Queste funzioni sono i `CObject` costruttori standard.

```cpp
CObject();
CObject(const CObject& objectSrc);
```

### <a name="parameters"></a>Parametri

*objectSrc*\
Un riferimento a un altro `CObject`

### <a name="remarks"></a>Commenti

La versione predefinita viene chiamata automaticamente dal costruttore della classe derivata.

Se la classe è serializzabile (la macro viene incorporata `IMPLEMENT_SERIAL` ), è necessario disporre di un costruttore predefinito (un costruttore senza argomenti) nella dichiarazione della classe. Se non è necessario un costruttore predefinito, dichiarare un costruttore "Empty" privato o protetto. Per ulteriori informazioni, vedere [using `CObject` ](../../mfc/using-cobject.md).

Il costruttore di copia di classe predefinito C++ standard esegue una copia membro per membro. La presenza del costruttore di `CObject` copia privata garantisce un messaggio di errore del compilatore se il costruttore di copia della classe è necessario ma non disponibile. Fornire un costruttore di copia se questa funzionalità è necessaria per la classe.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata negli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#8](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]

## <a name="cobjectdump"></a><a name="dump"></a> CObject::D UMP

Consente di eseguire il dump del contenuto dell'oggetto in un [`CDumpContext`](../../mfc/reference/cdumpcontext-class.md) oggetto.

```cpp
virtual void Dump(CDumpContext& dc) const;
```

### <a name="parameters"></a>Parametri

*DC*\
Contesto del dump di diagnostica per il dump, in genere `afxDump` .

### <a name="remarks"></a>Commenti

Quando si scrive una classe personalizzata, è necessario eseguire l'override della `Dump` funzione per fornire servizi di diagnostica per se stessi e per altri utenti della classe. L'oggetto sottoposto `Dump` a override in genere chiama la `Dump` funzione della relativa classe base prima di stampare i membri dati univoci per la classe derivata. `CObject::Dump` stampa il nome della classe se la classe USA `IMPLEMENT_DYNAMIC` la `IMPLEMENT_SERIAL` macro o.

> [!NOTE]
> La `Dump` funzione non deve stampare un carattere di nuova riga alla fine dell'output.

`Dump` le chiamate sono sensate solo nella versione di debug del libreria Microsoft Foundation Class. È necessario racchiudere tra parentesi le chiamate, le dichiarazioni di funzione e le implementazioni di funzioni con le `#ifdef _DEBUG` `#endif` istruzioni per la compilazione condizionale.

Poiché `Dump` è una **`const`** funzione, non è consentito modificare lo stato dell'oggetto durante il dump.

L' [ `CDumpContext` operatore di inserimento (<<)](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) chiama `Dump` quando `CObject` viene inserito un puntatore.

`Dump` consente solo il dump "aciclici" degli oggetti. È possibile scaricare un elenco di oggetti, ad esempio, ma se uno degli oggetti è l'elenco stesso, sarà possibile che lo stack venga sottoposto a overflow.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#9](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]

## <a name="cobjectgetruntimeclass"></a><a name="getruntimeclass"></a> CObject:: GetRuntimeClass

Restituisce la `CRuntimeClass` struttura corrispondente alla classe di questo oggetto.

```cpp
virtual CRuntimeClass* GetRuntimeClass() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla [`CRuntimeClass`](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente alla classe di questo oggetto; mai **`NULL`** .

### <a name="remarks"></a>Commenti

Esiste una `CRuntimeClass` struttura per ogni `CObject` classe derivata da. I membri della struttura sono i seguenti:

- **`LPCSTR m_lpszClassName`** Stringa con terminazione null che contiene il nome della classe ASCII.
- **`int m_nObjectSize`** Dimensioni, in byte, dell'oggetto. Se l'oggetto dispone di membri dati che puntano a memoria allocata, la dimensione della memoria non è inclusa.
- **`UINT m_wSchema`** Numero dello schema (-1 per le classi non serializzabili). [`IMPLEMENT_SERIAL`](run-time-object-model-services.md#implement_serial)Per una descrizione del numero dello schema, vedere la macro.

- **`CObject* (PASCAL* m_pfnCreateObject)()`** Puntatore a funzione per il costruttore predefinito che crea un oggetto della classe (valido solo se la classe supporta la creazione dinamica; in caso contrario, restituisce **`NULL`** ).

- **`CRuntimeClass* (PASCAL* m_pfn_GetBaseClass )()`** Se l'applicazione è collegata dinamicamente alla versione AFXDLL di MFC, un puntatore a una funzione che restituisce la `CRuntimeClass` struttura della classe di base.

- **`CRuntimeClass* m_pBaseClass`** Se l'applicazione è collegata in modo statico a MFC, un puntatore alla `CRuntimeClass` struttura della classe di base.

Questa funzione richiede l'uso della [`IMPLEMENT_DYNAMIC`](run-time-object-model-services.md#implement_dynamic) [`IMPLEMENT_DYNCREATE`](run-time-object-model-services.md#implement_dyncreate) macro, o [`IMPLEMENT_SERIAL`](run-time-object-model-services.md#implement_serial) nell'implementazione della classe. In caso contrario, si otterranno risultati non corretti.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#10](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]

## <a name="cobjectiskindof"></a><a name="iskindof"></a> CObject:: IsKindOf

Verifica la relazione di questo oggetto con una classe specificata.

```cpp
BOOL IsKindOf(const CRuntimeClass* pClass) const;
```

### <a name="parameters"></a>Parametri

*`pClass`*\
Puntatore a una [`CRuntimeClass`](../../mfc/reference/cruntimeclass-structure.md) struttura associata alla `CObject` classe derivata da.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto corrisponde alla classe; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione testa *`pClass`* per verificare se (1) è un oggetto della classe specificata o (2) è un oggetto di una classe derivata dalla classe specificata. Questa funzione funziona solo per le classi dichiarate con la [`DECLARE_DYNAMIC`](run-time-object-model-services.md#declare_dynamic) [`DECLARE_DYNCREATE`](run-time-object-model-services.md#declare_dyncreate) macro, o [`DECLARE_SERIAL`](run-time-object-model-services.md#declare_serial) .

Non usare questa funzione in maniera estensiva perché sconfigge la funzionalità di polimorfismo C++. Usare invece le funzioni virtuali.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#11](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]

## <a name="cobjectisserializable"></a><a name="isserializable"></a> CObject:: serializzabile

Verifica se l'oggetto è idoneo per la serializzazione.

```cpp
BOOL IsSerializable() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto può essere serializzato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Affinché una classe sia serializzabile, la relativa dichiarazione deve contenere la [`DECLARE_SERIAL`](run-time-object-model-services.md#declare_serial) macro e l'implementazione deve contenere la [`IMPLEMENT_SERIAL`](run-time-object-model-services.md#implement_serial) macro.

> [!NOTE]
> Non eseguire l'override di questa funzione.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#12](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]

## <a name="cobjectoperator-delete"></a><a name="operator_delete"></a> CObject:: operator delete

Per la versione di rilascio della libreria, **`delete`** l'operatore libera la memoria allocata dall'operatore **`new`** .

```cpp
void PASCAL operator delete(void* p);

void PASCAL operator delete(
    void* p,
    void* pPlace);

void PASCAL operator delete(
    void* p,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Commenti

Nella versione di debug, l'operatore **`delete`** partecipa a uno schema di monitoraggio dell'allocazione progettato per rilevare le perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di qualsiasi implementazione di in un oggetto. File CPP, viene usata la terza versione di **`delete`** , che archivia il nome file e il numero di riga nel blocco allocato per la creazione di report successivi. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa automaticamente di questa.

Anche se non si usa `DEBUG_NEW` in modalità di debug, si ottiene comunque il rilevamento delle perdite, ma senza la creazione di report sul numero di riga del file di origine descritto in precedenza.

Se si esegue l'override degli operatori **`new`** e **`delete`** si perde questa funzionalità di diagnostica.

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata negli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#15](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]

## <a name="cobjectoperator-new"></a><a name="operator_new"></a> CObject:: operator new

Per la versione di rilascio della libreria, l'operatore **`new`** esegue un'allocazione ottimale della memoria in modo analogo a `malloc` .

```cpp
void* PASCAL operator new(size_t nSize);
void* PASCAL operator new(size_t, void* p);

void* PASCAL operator new(
    size_t nSize,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Commenti

Nella versione di debug, l'operatore **`new`** partecipa a uno schema di monitoraggio dell'allocazione progettato per rilevare le perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di qualsiasi implementazione di in un oggetto. File CPP, viene usata la seconda versione di **`new`** , che archivia il nome file e il numero di riga nel blocco allocato per la creazione di report successivi. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa automaticamente di questa.

Anche se non si usa `DEBUG_NEW` in modalità di debug, si ottiene comunque il rilevamento delle perdite, ma senza la creazione di report sul numero di riga del file di origine descritto in precedenza.

> [!NOTE]
> Se si esegue l'override di questo operatore, è necessario anche eseguire l'override di **`delete`** . Non usare la funzione della libreria standard `_new_handler` .

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata negli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#16](../../mfc/codesnippet/cpp/cobject-class_9.h)]

## <a name="cobjectserialize"></a><a name="serialize"></a> CObject:: Serialize

Legge o scrive l'oggetto corrente da o in un archivio.

```cpp
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*`ar`*\
`CArchive`Oggetto da serializzare in o da.

### <a name="remarks"></a>Commenti

Eseguire l'override `Serialize` di per ogni classe che si intende serializzare. L'oggetto sottoposto `Serialize` a override deve prima chiamare la `Serialize` funzione della relativa classe base.

È anche necessario usare la [`DECLARE_SERIAL`](run-time-object-model-services.md#declare_serial) macro nella dichiarazione di classe ed è necessario usare la [`IMPLEMENT_SERIAL`](run-time-object-model-services.md#implement_serial) macro nell'implementazione.

Utilizzare [`CArchive::IsLoading`](../../mfc/reference/carchive-class.md#isloading) o [`CArchive::IsStoring`](../../mfc/reference/carchive-class.md#isstoring) per determinare se l'archivio è in corso di caricamento o archiviazione.

`Serialize` viene chiamato da [`CArchive::ReadObject`](../../mfc/reference/carchive-class.md#readobject) e [`CArchive::WriteObject`](../../mfc/reference/carchive-class.md#writeobject) . Queste funzioni sono associate all' `CArchive` operatore di inserimento ( **`<<`** ) e all'operatore di estrazione ( **`>>`** ).

Per esempi di serializzazione, vedere l'articolo [serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

### <a name="example"></a>Esempio

[`CObList::CObList`](../../mfc/reference/coblist-class.md#coblist)Per un elenco della `CAge` classe utilizzata in tutti gli `CObject` esempi, vedere.

[!code-cpp[NVC_MFCCObjectSample#13](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
