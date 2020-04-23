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
ms.openlocfilehash: 66d76e0062d13b2bd5a16d9b07f99db9e989805a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753986"
---
# <a name="cobject-class"></a>Classe CObject

Classe base principale per la libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CObject
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CObject::CObject](#cobject)|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CObject::AssertValid](#assertvalid)|Convalida l'integrità di questo oggetto.|
|[Oggetto CObject::Dump](#dump)|Produce un dump diagnostico di questo oggetto.|
|[Oggetto::GetRuntimeClass](#getruntimeclass)|Restituisce `CRuntimeClass` la struttura corrispondente alla classe dell'oggetto.|
|[Oggetto CObject::IsKindOf](#iskindof)|Verifica la relazione di questo oggetto con una classe specificata.|
|[Oggetto CObject::IsSerializableCObject::IsSerializable](#isserializable)|Verifica se l'oggetto può essere serializzato.|
|[Oggetto CObject::Serialize](#serialize)|Carica o archivia un oggetto da/in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObject::operator delete](#operator_delete)|Operatore **di eliminazione** speciale.|
|[CObject::operator new](#operator_new)|Speciale **nuovo** operatore.|

## <a name="remarks"></a>Osservazioni

Funge da radice non solo per `CFile` le `CObList`classi di libreria, ad esempio e , ma anche per le classi scritte. `CObject`fornisce servizi di base, tra cui

- Supporto della serializzazione

- Informazioni sulla classe in fase di esecuzioneRun-time class information

- Output di diagnostica dell'oggettoObject diagnostic output

- Compatibilità con le classi di raccolta

Si `CObject` noti che non supporta l'ereditarietà multipla. Le classi derivate `CObject` possono avere una `CObject` sola classe base e che devono essere più a sinistra nella gerarchia. È tuttavia consentito avere strutture e classi `CObject`non derivate in rami a ereditarietà multipla a destra.

Se si utilizzano `CObject` alcune delle macro facoltative nell'implementazione e nelle dichiarazioni della classe, si trarranno i vantaggi principali derivanti dalla derivazione.

Le macro di primo livello, [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) e [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), consentono l'accesso in fase di esecuzione al nome della classe e alla relativa posizione nella gerarchia. Questo, a sua volta, consente un dumping diagnostico significativo.

Le macro di secondo livello, [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial), includono tutte le funzionalità delle macro di primo livello e consentono di "serializzare" un oggetto da e verso un "archivio".

Per informazioni sulla derivazione delle classi di Microsoft `CObject`Foundation e delle classi in linguaggio C, in generale e sull'utilizzo, vedere [Utilizzo di CObject](../../mfc/using-cobject.md) e [serializzazione](../../mfc/serialization-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cobjectassertvalid"></a><a name="assertvalid"></a>Oggetto CObject::AssertValid

Convalida l'integrità di questo oggetto.

```
virtual void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

`AssertValid`esegue un controllo di validità su questo oggetto controllandone lo stato interno. Nella versione di debug `AssertValid` della libreria, può eseguire l'asserzione e quindi terminare il programma con un messaggio che elenca il numero di riga e il nome del file in cui l'asserzione non è riuscita.

Quando si scrive una classe personalizzata, è necessario eseguire l'override della `AssertValid` funzione per fornire servizi di diagnostica per se stessi e altri utenti della classe. L'oggetto `AssertValid` sottoposto `AssertValid` a override chiama in genere la funzione della relativa classe base prima di controllare i membri dati univoci per la classe derivata.

Poiché `AssertValid` è una funzione **const,** non è consentito modificare lo stato dell'oggetto durante il test. Le funzioni `AssertValid` della classe derivata non devono generare eccezioni, ma piuttosto devono asserire se rilevano dati oggetto non validi.

La definizione di "validità" dipende dalla classe dell'oggetto. Di norma, la funzione deve eseguire un "controllo superficiale". Ovvero, se un oggetto contiene puntatori ad altri oggetti, deve verificare se i puntatori non sono null, ma non deve eseguire test di validità sugli oggetti a cui fanno riferimento i puntatori.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#7](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]

Per un altro esempio, vedere [AfxDoForAllObjects](diagnostic-services.md#afxdoforallobjects).

## <a name="cobjectcobject"></a><a name="cobject"></a>Oggetto CObject::CObject

Queste funzioni sono `CObject` i costruttori standard.

```
CObject();
CObject(const CObject& objectSrc);
```

### <a name="parameters"></a>Parametri

*objectSrc (oggetti)*<br/>
Un riferimento ad un altro`CObject`

### <a name="remarks"></a>Osservazioni

La versione predefinita viene chiamata automaticamente dal costruttore della classe derivata.

Se la classe è serializzabile (incorpora la macro IMPLEMENT_SERIAL), è necessario disporre di un costruttore predefinito (un costruttore senza argomenti) nella dichiarazione di classe. Se non è necessario un costruttore predefinito, dichiarare un costruttore "vuoto" privato o protetto. Per ulteriori informazioni, vedere [Utilizzo di CObject](../../mfc/using-cobject.md).

Il costruttore di copia di classe predefinito di C' standard esegue una copia membro per membro. La presenza del `CObject` costruttore di copia privata garantisce un messaggio di errore del compilatore se il costruttore di copia della classe è necessario ma non disponibile. È pertanto necessario fornire un costruttore di copia se la classe richiede questa funzionalità.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata negli esempi.

[!code-cpp[NVC_MFCCObjectSample#8](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]

## <a name="cobjectdump"></a><a name="dump"></a>Oggetto CObject::Dump

Esegue il dump del contenuto dell'oggetto in un oggetto [CDumpContext.](../../mfc/reference/cdumpcontext-class.md)

```
virtual void Dump(CDumpContext& dc) const;
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
Il contesto del dump `afxDump`di diagnostica per il dump, in genere .

### <a name="remarks"></a>Osservazioni

Quando si scrive una classe personalizzata, è necessario eseguire l'override della `Dump` funzione per fornire servizi di diagnostica per se stessi e altri utenti della classe. L'oggetto `Dump` sottoposto `Dump` a override chiama in genere la funzione della relativa classe base prima di stampare i membri dati univoci per la classe derivata. `CObject::Dump`stampa il nome della classe `IMPLEMENT_DYNAMIC` se la classe utilizza la macro o IMPLEMENT_SERIAL.

> [!NOTE]
> La `Dump` funzione non deve stampare un carattere di nuova riga alla fine dell'output.

`Dump`chiamate hanno senso solo nella versione di debug della libreria Microsoft Foundation Class. È necessario racchiudere tra parentesi chiamate, dichiarazioni di funzione e implementazioni di funzioni con **istruzioni #ifdef _DEBUG** /  `#endif` per la compilazione condizionale.

Poiché `Dump` è una funzione **const,** non è consentito modificare lo stato dell'oggetto durante il dump.

L'operatore di [inserimento CDumpContext (<<)](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) chiama `Dump` quando viene inserito un `CObject` puntatore.

`Dump`permette solo lo scarico "aciclico" di oggetti. È possibile eseguire il dump di un elenco di oggetti, ad esempio, ma se uno degli oggetti è l'elenco stesso, alla fine si equiva lo stack.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#9](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]

## <a name="cobjectgetruntimeclass"></a><a name="getruntimeclass"></a>Oggetto::GetRuntimeClass

Restituisce `CRuntimeClass` la struttura corrispondente alla classe dell'oggetto.

```
virtual CRuntimeClass* GetRuntimeClass() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) corrispondente alla classe di questo oggetto; mai **NULL**.

### <a name="remarks"></a>Osservazioni

Esiste una `CRuntimeClass` struttura `CObject`per ogni classe derivata. I membri della struttura sono i seguenti:

- **m_lpszClassName LPCSTR** Stringa con terminazione null contenente il nome della classe ASCII.

- **int m_nObjectSize** Dimensione dell'oggetto, in byte. Se l'oggetto dispone di membri dati che puntano alla memoria allocata, la dimensione di tale memoria non è inclusa.

- **m_wSchema UINT** Numero dello schema ( - 1 per le classi non serializzabili). Vedere [la](run-time-object-model-services.md#implement_serial) IMPLEMENT_SERIAL per una descrizione del numero di schema.

- **CObject\* (\* PASCAL m_pfnCreateObject ) (** Un puntatore a funzione al costruttore predefinito che crea un oggetto della classe (valido solo se la classe supporta la creazione dinamica; in caso contrario, restituisce **NULL**).

- **CRuntimeClass\* (\* PASCAL m_pfn_GetBaseClass )** Se l'applicazione è collegata in modo dinamico alla `CRuntimeClass` versione AFXDLL di MFC, un puntatore a una funzione che restituisce la struttura della classe base.

- **CRuntimeClass\* m_pBaseClass** Se l'applicazione è collegata in `CRuntimeClass` modo statico a MFC, un puntatore alla struttura della classe base.

Questa funzione richiede l'utilizzo della macro [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) [, IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate)o [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione della classe. In caso contrario, si otterranno risultati non corretti.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#10](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]

## <a name="cobjectiskindof"></a><a name="iskindof"></a>Oggetto CObject::IsKindOf

Verifica la relazione di questo oggetto con una classe specificata.

```
BOOL IsKindOf(const CRuntimeClass* pClass) const;
```

### <a name="parameters"></a>Parametri

*pClasse*<br/>
Puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associata `CObject`alla classe derivata dall'oggetto derivato dall'oggetto .

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto corrisponde alla classe; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione verifica *pClass* per vedere se (1) è un oggetto della classe specificata o (2) è un oggetto di una classe derivata dalla classe specificata. Questa funzione funziona solo per le classi dichiarate con la macro [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) [, DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate)o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) .

Non utilizzare questa funzione in modo estensivo perché sconfigge la funzionalità di polimorfismo di C. Utilizzare invece le funzioni virtuali.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#11](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]

## <a name="cobjectisserializable"></a><a name="isserializable"></a>Oggetto CObject::IsSerializableCObject::IsSerializable

Verifica se questo oggetto è idoneo per la serializzazione.

```
BOOL IsSerializable() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questo oggetto può essere serializzato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Affinché una classe sia serializzabile, la relativa dichiarazione deve contenere la macro [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e l'implementazione deve contenere la macro [IMPLEMENT_SERIAL.](run-time-object-model-services.md#implement_serial)

> [!NOTE]
> Non eseguire l'override di questa funzione.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#12](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]

## <a name="cobjectoperator-delete"></a><a name="operator_delete"></a>CObject::operator delete

Per la versione finale della libreria, operator **delete** libera la memoria allocata dall'operatore **new**.

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

### <a name="remarks"></a>Osservazioni

Nella versione di debug, l'operatore **delete** fa parte di uno schema di monitoraggio dell'allocazione progettato per rilevare perdite di memoria.

Se si utilizza la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di una qualsiasi delle implementazioni in un file . CPP, verrà utilizzata la terza versione di **delete,** memorizzando il nome del file e il numero di riga nel blocco allocato per la creazione di report successivi. Non devi preoccuparti di fornire i parametri extra; una macro si prende cura di questo per voi.

Anche se non si utilizza DEBUG_NEW in modalità Debug, si ottiene comunque il rilevamento delle perdite, ma senza il reporting del numero di riga del file di origine descritto in precedenza.

Se si esegue l'override degli operatori **new** ed **delete**, questa funzionalità di diagnostica consente di annullare questa funzionalità.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata negli esempi.

[!code-cpp[NVC_MFCCObjectSample#15](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]

## <a name="cobjectoperator-new"></a><a name="operator_new"></a>CObject::operator new

Per la versione finale della libreria, operator **new** esegue un'allocazione di memoria ottimale in modo simile a `malloc`.

```cpp
void* PASCAL operator new(size_t nSize);
void* PASCAL operator new(size_t, void* p);

void* PASCAL operator new(
    size_t nSize,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Osservazioni

Nella versione di debug, operator **new** partecipa a uno schema di monitoraggio dell'allocazione progettato per rilevare perdite di memoria.

Se si utilizza la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima di una qualsiasi delle implementazioni in un file . CPP, verrà utilizzata la seconda versione di **new,** memorizzando il nome del file e il numero di riga nel blocco allocato per la creazione di report successivi. Non devi preoccuparti di fornire i parametri extra; una macro si prende cura di questo per voi.

Anche se non si utilizza DEBUG_NEW in modalità Debug, si ottiene comunque il rilevamento delle perdite, ma senza il reporting del numero di riga del file di origine descritto in precedenza.

> [!NOTE]
> Se si esegue l'override di questo operatore, è necessario eseguire anche l'override di **delete**. Non utilizzare la `_new_handler` funzione di libreria standard.

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata negli esempi.

[!code-cpp[NVC_MFCCObjectSample#16](../../mfc/codesnippet/cpp/cobject-class_9.h)]

## <a name="cobjectserialize"></a><a name="serialize"></a>Oggetto CObject::Serialize

Legge o scrive l'oggetto corrente da o in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Oggetto `CArchive` da serializzare in o da cui.

### <a name="remarks"></a>Osservazioni

È necessario `Serialize` eseguire l'override per ogni classe che si intende serializzare. L'override `Serialize` deve prima `Serialize` chiamare la funzione della relativa classe base.

È inoltre necessario utilizzare la macro [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) nella dichiarazione di classe ed è necessario utilizzare la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione.

Utilizzare [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) o [CArchive::IsStoring](../../mfc/reference/carchive-class.md#isstoring) per determinare se l'archivio è in corso il caricamento o l'archiviazione.

`Serialize`viene chiamato da [CArchive::ReadObject](../../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../../mfc/reference/carchive-class.md#writeobject). Queste funzioni sono `CArchive` associate all'operatore di **>>** inserimento ( ** < **) e all'operatore di estrazione ( ).

Per esempi di serializzazione, vedere l'articolo [Serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della `CObject` classe utilizzata in tutti gli esempi.

[!code-cpp[NVC_MFCCObjectSample#13](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
