---
title: Classe CObject
ms.date: 11/04/2016
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
ms.assetid: 95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a
ms.openlocfilehash: 515c4e90ee6ab77a6c7c1ae108393ea1aafb7c17
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79416858"
---
# <a name="cobject-class"></a>Classe CObject

Classe base principale per la libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CObject
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CObject:: CObject](#cobject)|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObject:: AssertValid](#assertvalid)|Convalida l'integrità di questo oggetto.|
|[CObject::D UMP](#dump)|Produce un dump di diagnostica dell'oggetto.|
|[CObject:: GetRuntimeClass](#getruntimeclass)|Restituisce la struttura di `CRuntimeClass` corrispondente alla classe di questo oggetto.|
|[CObject:: IsKindOf](#iskindof)|Verifica la relazione di questo oggetto con una classe specificata.|
|[CObject:: serializzabile](#isserializable)|Esegue un test per verificare se l'oggetto può essere serializzato.|
|[CObject:: Serialize](#serialize)|Carica o archivia un oggetto da/in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObject:: operator delete](#operator_delete)|Operatore **Delete** speciale.|
|[CObject:: operator new](#operator_new)|**Nuovo** operatore speciale.|

## <a name="remarks"></a>Osservazioni

Funge da radice non solo per le classi di libreria, ad esempio `CFile` e `CObList`, ma anche per le classi scritte. `CObject` fornisce servizi di base, tra cui

- Supporto della serializzazione

- Informazioni sulle classi in fase di esecuzione

- Output di diagnostica oggetti

- Compatibilità con le classi di raccolta

Si noti che `CObject` non supporta l'ereditarietà multipla. Le classi derivate possono avere una sola classe di base `CObject` e tale `CObject` deve essere più a sinistra nella gerarchia. È tuttavia consentito avere strutture e classi non derivate da `CObject`nei rami di ereditarietà multipla a destra.

Si otterranno vantaggi principali dalla derivazione `CObject` se si usano alcune delle macro facoltative nell'implementazione della classe e nelle dichiarazioni.

Le macro di primo livello, [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) e [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), consentono l'accesso in fase di esecuzione al nome della classe e alla relativa posizione nella gerarchia. Questo, a sua volta, consente il dump di diagnostica significativo.

Le macro di secondo livello, [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial), includono tutte le funzionalità delle macro di primo livello e consentono a un oggetto di essere "serializzato" da e verso un "archivio".

Per informazioni sulla derivazione di classi e C++ classi Microsoft Foundation in generale e sull'uso di `CObject`, vedere [uso di CObject](../../mfc/using-cobject.md) e [serializzazione](../../mfc/serialization-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="assertvalid"></a>CObject:: AssertValid

Convalida l'integrità di questo oggetto.

```
virtual void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

`AssertValid` esegue un controllo di validità su questo oggetto controllando lo stato interno. Nella versione di debug della libreria `AssertValid` possibile dichiarare e quindi terminare il programma con un messaggio in cui sono elencati il numero di riga e il nome del file in cui l'asserzione non è riuscita.

Quando si scrive una classe personalizzata, è necessario eseguire l'override della funzione `AssertValid` per fornire servizi di diagnostica per se stessi e per altri utenti della classe. Il `AssertValid` sottoposto a override in genere chiama la funzione `AssertValid` della relativa classe di base prima di verificare i membri dati univoci per la classe derivata.

Poiché `AssertValid` è una funzione **const** , non è consentito modificare lo stato dell'oggetto durante il test. La classe derivata `AssertValid` funzioni non devono generare eccezioni, bensì dichiarare se rilevano dati di oggetti non validi.

La definizione di "validità" dipende dalla classe dell'oggetto. Di norma, la funzione deve eseguire un "controllo superficiale". Ovvero, se un oggetto contiene puntatori ad altri oggetti, deve verificare se i puntatori non sono null, ma non deve eseguire test di validità sugli oggetti a cui fanno riferimento i puntatori.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#7](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]

Per un altro esempio, vedere [AfxDoForAllObjects](diagnostic-services.md#afxdoforallobjects).

##  <a name="cobject"></a>CObject:: CObject

Queste funzioni sono i costruttori di `CObject` standard.

```
CObject();
CObject(const CObject& objectSrc);
```

### <a name="parameters"></a>Parametri

*objectSrc*<br/>
Riferimento a un altro `CObject`

### <a name="remarks"></a>Osservazioni

La versione predefinita viene chiamata automaticamente dal costruttore della classe derivata.

Se la classe è serializzabile (incorpora la macro IMPLEMENT_SERIAL), è necessario disporre di un costruttore predefinito (un costruttore senza argomenti) nella dichiarazione della classe. Se non è necessario un costruttore predefinito, dichiarare un costruttore "Empty" privato o protetto. Per ulteriori informazioni, vedere [utilizzo di CObject](../../mfc/using-cobject.md).

Il costruttore C++ di copia di classe predefinito standard esegue una copia membro per membro. La presenza del costruttore di copia `CObject` privato garantisce un messaggio di errore del compilatore se il costruttore di copia della classe è necessario ma non disponibile. È pertanto necessario fornire un costruttore di copia se la classe richiede questa funzionalità.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata negli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#8](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]

##  <a name="dump"></a>CObject::D UMP

Consente di eseguire il dump del contenuto dell'oggetto in un oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) .

```
virtual void Dump(CDumpContext& dc) const;
```

### <a name="parameters"></a>Parametri

*dc*<br/>
Contesto del dump di diagnostica per il dump, in genere `afxDump`.

### <a name="remarks"></a>Osservazioni

Quando si scrive una classe personalizzata, è necessario eseguire l'override della funzione `Dump` per fornire servizi di diagnostica per se stessi e per altri utenti della classe. Il `Dump` sottoposto a override in genere chiama la funzione `Dump` della relativa classe di base prima di stampare i membri dati univoci per la classe derivata. `CObject::Dump` stampa il nome della classe se la classe usa la macro `IMPLEMENT_DYNAMIC` o IMPLEMENT_SERIAL.

> [!NOTE]
>  La funzione `Dump` non deve stampare un carattere di nuova riga alla fine dell'output.

`Dump` le chiamate sono sensate solo nella versione di debug del libreria Microsoft Foundation Class. È necessario racchiudere tra parentesi le chiamate, le dichiarazioni di funzione e le implementazioni di funzioni con **#ifdef _DEBUG**/ istruzioni `#endif` per la compilazione condizionale.

Poiché `Dump` è una funzione **const** , non è consentito modificare lo stato dell'oggetto durante il dump.

L' [operatore di inserimento CDumpContext (< <)](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) chiama `Dump` quando viene inserito un puntatore `CObject`.

`Dump` consente solo il dump "aciclici" degli oggetti. È possibile scaricare un elenco di oggetti, ad esempio, ma se uno degli oggetti è l'elenco stesso, si verificherà un overflow dello stack.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#9](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]

##  <a name="getruntimeclass"></a>CObject:: GetRuntimeClass

Restituisce la struttura di `CRuntimeClass` corrispondente alla classe di questo oggetto.

```
virtual CRuntimeClass* GetRuntimeClass() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) corrispondente alla classe di questo oggetto. mai **null**.

### <a name="remarks"></a>Osservazioni

Esiste una struttura di `CRuntimeClass` per ogni classe derivata da `CObject`. I membri della struttura sono i seguenti:

- **M_lpszClassName LPCSTR** Stringa con terminazione null che contiene il nome della classe ASCII.

- **int m_nObjectSize** Dimensioni, in byte, dell'oggetto. Se l'oggetto dispone di membri dati che puntano a memoria allocata, le dimensioni della memoria non vengono incluse.

- **M_wSchema uint** Numero dello schema (-1 per le classi non serializzabili). Per una descrizione del numero dello schema, vedere la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) .

- **\* CObject (PASCAL\* m_pfnCreateObject) ()** Puntatore a funzione per il costruttore predefinito che crea un oggetto della classe (valido solo se la classe supporta la creazione dinamica; in caso contrario, restituisce **null**).

- **\* CRuntimeClass (PASCAL\* m_pfn_GetBaseClass) ()** Se l'applicazione è collegata dinamicamente alla versione AFXDLL di MFC, un puntatore a una funzione che restituisce la struttura `CRuntimeClass` della classe di base.

- **CRuntimeClass\* m_pBaseClass** Se l'applicazione è collegata in modo statico a MFC, un puntatore alla struttura `CRuntimeClass` della classe di base.

Questa funzione richiede l'uso della macro [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate)o [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione della classe. In caso contrario, si otterranno risultati non corretti.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#10](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]

##  <a name="iskindof"></a>CObject:: IsKindOf

Verifica la relazione di questo oggetto con una classe specificata.

```
BOOL IsKindOf(const CRuntimeClass* pClass) const;
```

### <a name="parameters"></a>Parametri

*pClass*<br/>
Puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associata alla classe derivata da `CObject`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto corrisponde alla classe; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione verifica *pClass* per verificare se (1) è un oggetto della classe specificata o (2) è un oggetto di una classe derivata dalla classe specificata. Questa funzione funziona solo per le classi dichiarate con [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic), [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate)o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro.

Non usare questa funzione in maniera estensiva perché sconfigge la funzionalità C++ di polimorfismo. Usare invece le funzioni virtuali.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#11](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]

##  <a name="isserializable"></a>CObject:: serializzabile

Verifica se l'oggetto è idoneo per la serializzazione.

```
BOOL IsSerializable() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto può essere serializzato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Affinché una classe sia serializzabile, la relativa dichiarazione deve contenere la macro [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e l'implementazione deve contenere la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) .

> [!NOTE]
>  Non eseguire l'override di questa funzione.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#12](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]

##  <a name="operator_delete"></a>CObject:: operator delete

Per la versione di rilascio della libreria, Operator **Delete** libera la memoria allocata da operator **New**.

```
void PASCAL operator delete(void* p);

void PASCAL operator delete(
    void* p,
    void* pPlace);

void PASCAL operator delete(
    void* p,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Osservazioni

Nella versione di debug, Operator **Delete** partecipa a uno schema di monitoraggio dell'allocazione progettato per rilevare le perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di qualsiasi implementazione di in un oggetto. File CPP, viene usata la terza versione di **Delete** , che archivia il nome file e il numero di riga nel blocco allocato per la creazione di report successivi. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa automaticamente di questa.

Anche se non si usa DEBUG_NEW in modalità di debug, si ottiene comunque il rilevamento delle perdite, ma senza la creazione di report sul numero di riga del file di origine descritto in precedenza.

Se si esegue l'override di Operators **New** e **Delete**, si perde questa funzionalità di diagnostica.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata negli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#15](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]

##  <a name="operator_new"></a>CObject:: operator new

Per la versione di rilascio della libreria, Operator **New** esegue un'allocazione ottimale della memoria in modo analogo a `malloc`.

```
void* PASCAL operator new(size_t nSize);
void* PASCAL operator new(size_t, void* p);

void* PASCAL operator new(
    size_t nSize,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Osservazioni

Nella versione di debug, Operator **New** partecipa a uno schema di monitoraggio dell'allocazione progettato per rilevare le perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di qualsiasi implementazione di in un oggetto. File CPP, viene usata la seconda versione di **New** , che archivia il nome file e il numero di riga nel blocco allocato per la creazione di report successivi. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa automaticamente di questa.

Anche se non si usa DEBUG_NEW in modalità di debug, si ottiene comunque il rilevamento delle perdite, ma senza la creazione di report sul numero di riga del file di origine descritto in precedenza.

> [!NOTE]
>  Se si esegue l'override di questo operatore, è necessario anche eseguire l'override di **Delete**. Non utilizzare la libreria standard `_new_handler` funzione.

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` utilizzata negli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#16](../../mfc/codesnippet/cpp/cobject-class_9.h)]

##  <a name="serialize"></a>CObject:: Serialize

Legge o scrive l'oggetto corrente da o in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*AR*<br/>
Oggetto `CArchive` da cui eseguire la serializzazione.

### <a name="remarks"></a>Osservazioni

È necessario eseguire l'override di `Serialize` per ogni classe che si intende serializzare. Il `Serialize` sottoposto a override deve prima chiamare la funzione `Serialize` della relativa classe di base.

È anche necessario usare la macro [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) nella dichiarazione di classe ed è necessario usare la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione.

Usare [CArchive:: Uploading](../../mfc/reference/carchive-class.md#isloading) o [CArchive:: instorage](../../mfc/reference/carchive-class.md#isstoring) per determinare se l'archivio è in corso di caricamento o archiviazione.

`Serialize` viene chiamato da [CArchive:: ReadObject](../../mfc/reference/carchive-class.md#readobject) e [CArchive:: WriteObject](../../mfc/reference/carchive-class.md#writeobject). Queste funzioni sono associate all'operatore di inserimento `CArchive` ( **<\<** ) e all'operatore di estrazione ( **>>** ).

Per esempi di serializzazione, vedere l'articolo [serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

### <a name="example"></a>Esempio

Per un elenco della classe `CAge` usata in tutti gli esempi di `CObject`, vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) .

[!code-cpp[NVC_MFCCObjectSample#13](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
