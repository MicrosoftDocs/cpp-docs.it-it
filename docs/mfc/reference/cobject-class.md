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
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304067"
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
|[CObject::CObject](#cobject)|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObject::AssertValid](#assertvalid)|Convalida integrità di questo oggetto.|
|[CObject::Dump](#dump)|Genera un dump di diagnostica di questo oggetto.|
|[CObject::GetRuntimeClass](#getruntimeclass)|Restituisce il `CRuntimeClass` struttura corrispondente alla classe dell'oggetto.|
|[CObject::IsKindOf](#iskindof)|Verifica la relazione dell'oggetto in una determinata classe.|
|[CObject::IsSerializable](#isserializable)|Verifica se questo oggetto può essere serializzato.|
|[CObject::Serialize](#serialize)|Carica o archivia un oggetto da e verso un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObject::operator delete](#operator_delete)|Speciale **eliminare** operatore.|
|[Nuovo CObject::operator](#operator_new)|Speciale **nuovo** operatore.|

## <a name="remarks"></a>Note

Funge da radice non solo per le classi della libreria, ad esempio `CFile` e `CObList`, ma anche per le classi che si scrive. `CObject` fornisce servizi di base, tra cui

- Supporto della serializzazione

- Informazioni sulle classi di runtime

- Output di diagnostica oggetti

- Compatibilità con le classi di raccolte

Si noti che `CObject` non supporta l'ereditarietà multipla. Le classi derivate possono avere un solo `CObject` classe di base e che `CObject` deve essere più a sinistra nella gerarchia. È consentito, tuttavia, affinché le strutture e non- `CObject`-classi derivate nello branch ereditarietà multipla a destra.

Si potrà trarre vantaggi principali da `CObject` derivazione se si usa alcune delle macro facoltative nell'implementazione della classe e le dichiarazioni.

Le macro di primo livello, [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) e [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), consentire l'accesso in fase di esecuzione per il nome della classe e la sua posizione nella gerarchia. A sua volta, consente il dump di diagnostica significativi.

Le macro di secondo livello, [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial), includere tutte le funzionalità delle macro di primo livello e consentono un oggetto "serializzazione" in e da un "archive".

Per informazioni sulla derivazione di classi Microsoft Foundation e le classi C++ in generale e l'utilizzo `CObject`, vedere [utilizzo di CObject](../../mfc/using-cobject.md) e [serializzazione](../../mfc/serialization-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="assertvalid"></a>  CObject::AssertValid

Convalida integrità di questo oggetto.

```
virtual void AssertValid() const;
```

### <a name="remarks"></a>Note

`AssertValid` esegue un controllo di validità tohoto objektu controllando lo stato interno. Nella versione di Debug della libreria, `AssertValid` possono asserire e terminare il programma con un messaggio che elenca il numero di riga e il nome file in cui l'asserzione non riuscita.

Quando si scrive una classe personalizzata, è necessario eseguire l'override di `AssertValid` funzione per fornire servizi diagnostici se stessi e agli altri utenti della classe. Sottoposto a override `AssertValid` chiama in genere il `AssertValid` funzione della relativa classe base prima di verificare i membri di dati univoci per la classe derivata.

In quanto `AssertValid` è un **const** (funzione), non è consentito modificare lo stato dell'oggetto durante il test. Una classe derivata `AssertValid` funzioni non devono generare eccezioni, ma piuttosto deve asserire se rilevano i dati oggetto non valido.

La definizione di "validity" dipende dalla classe dell'oggetto. Di norma, la funzione deve eseguire un "controllo shallow". Vale a dire, se un oggetto contiene i puntatori ad altri oggetti, deve verificare se i puntatori non sono null, ma non deve eseguire test per gli oggetti a cui fa riferimento i puntatori di validità.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#7](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]

Per un altro esempio, vedere [AfxDoForAllObjects](diagnostic-services.md#afxdoforallobjects).

##  <a name="cobject"></a>  CObject::CObject

Queste funzioni sono standard `CObject` costruttori.

```
CObject();
CObject(const CObject& objectSrc);
```

### <a name="parameters"></a>Parametri

*objectSrc*<br/>
Un riferimento a un altro `CObject`

### <a name="remarks"></a>Note

La versione predefinita viene automaticamente chiamata dal costruttore della classe derivata.

Se una classe serializzabile (incorpora IMPLEMENT_SERIAL (macro)), è necessario avere un costruttore predefinito (un costruttore senza argomenti) nella dichiarazione di classe. Se non è necessario un costruttore predefinito, dichiarare un privato o protetto costruttore "vuoto". Per altre informazioni, vedere [CObject tramite](../../mfc/using-cobject.md).

Costruttore di copia classe standard di C++ predefinito esegue una copia membro per membro. La presenza di privato `CObject` costruttore di copia garantisce un messaggio di errore del compilatore se il costruttore di copia della classe è necessaria ma non è disponibile. Se la classe è necessaria questa funzionalità, è pertanto necessario fornire un costruttore di copia.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe usata nel `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#8](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]

##  <a name="dump"></a>  CObject::Dump

Esegue il dump dell'oggetto a un [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto.

```
virtual void Dump(CDumpContext& dc) const;
```

### <a name="parameters"></a>Parametri

*dc*<br/>
Il contesto di dump di diagnostica per il dump, in genere `afxDump`.

### <a name="remarks"></a>Note

Quando si scrive una classe personalizzata, è necessario eseguire l'override di `Dump` funzione per fornire servizi diagnostici se stessi e agli altri utenti della classe. Sottoposto a override `Dump` chiama in genere il `Dump` funzione della relativa classe base prima di stampare i membri di dati univoci per la classe derivata. `CObject::Dump` Consente di stampare il nome della classe se la classe Usa il `IMPLEMENT_DYNAMIC` o IMPLEMENT_SERIAL (macro).

> [!NOTE]
>  Il `Dump` funzione non dovrebbe visualizzare un carattere di nuova riga alla fine del relativo output.

`Dump` le chiamate ha senso solo nella versione di Debug della libreria di classi Microsoft Foundation. È necessario racchiudere tra parentesi quadre chiamate, le dichiarazioni di funzione e le implementazioni delle funzioni con **debug #ifdef** /  `#endif` istruzioni per la compilazione condizionale.

Poiché `Dump` è un **const** (funzione), non è consentito modificare lo stato dell'oggetto durante il dump.

Il [CDumpContext inserimento (<<) operator](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) chiamate `Dump` quando un `CObject` puntatore viene inserito.

`Dump` consente solo "aciclici" il dump di oggetti. Ad esempio, è possibile eseguire il dump di un elenco di oggetti, ma se uno degli oggetti è l'elenco stesso, si verrà infine un overflow dello stack.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#9](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]

##  <a name="getruntimeclass"></a>  CObject::GetRuntimeClass

Restituisce il `CRuntimeClass` struttura corrispondente alla classe dell'oggetto.

```
virtual CRuntimeClass* GetRuntimeClass() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente alla classe dell'oggetto; mai **NULL**.

### <a name="remarks"></a>Note

Eventuale `CRuntimeClass` struttura per ogni `CObject`-classe derivata. I membri della struttura sono i seguenti:

- **M_lpszClassName LPCSTR** una stringa con terminazione null che contiene il nome della classe ASCII.

- **int m_nObjectSize** le dimensioni dell'oggetto, in byte. Se l'oggetto ha membri dati di tale punto alla memoria allocata, le dimensioni della memoria non sono inclusa.

- **UINT m_wSchema** il numero di schema (-1 per le classi non serializzabili). Vedere le [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro per una descrizione del numero di schema.

- **CObject\* (PASCAL\* m_pfnCreateObject) ()** un puntatore a funzione al costruttore predefinito che crea un oggetto della classe (valido solo se la classe supporta la creazione dinamica; in caso contrario, restituisce **NULL** ).

- **CRuntimeClass\* (PASCAL\* m_pfn_GetBaseClass) ()** se l'applicazione è collegata in modo dinamico per la versione AFXDLL di MFC, un puntatore a una funzione che restituisce il `CRuntimeClass` struttura della classe di base.

- **CRuntimeClass\* m_pBaseClass** se l'applicazione è staticamente collegata a MFC, un puntatore al `CRuntimeClass` struttura della classe di base.

Questa funzione richiede l'uso del [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate), o [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro nell'implementazione della classe. In caso contrario, si otterranno risultati non corretti.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#10](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]

##  <a name="iskindof"></a>  CObject::IsKindOf

Verifica la relazione dell'oggetto in una determinata classe.

```
BOOL IsKindOf(const CRuntimeClass* pClass) const;
```

### <a name="parameters"></a>Parametri

*pClass*<br/>
Un puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura associata di `CObject`-classe derivata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto corrisponde alla classe. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione verifica *pClass* per vedere se (1) è un oggetto della classe specificata oppure (2) è un oggetto di una classe derivata dalla classe specificata. Questa funzione funziona solo per le classi dichiarate con il [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic), [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate), o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro.

Non usare questa funzione ampiamente perché vanifica la funzionalità di polimorfismo C++. Usare invece le funzioni virtuali.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#11](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]

##  <a name="isserializable"></a>  CObject::IsSerializable

Verifica se questo oggetto è idoneo per la serializzazione.

```
BOOL IsSerializable() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questo oggetto può essere serializzato. in caso contrario 0.

### <a name="remarks"></a>Note

Per una classe venga serializzato, la relativa dichiarazione deve contenere il [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro e l'implementazione deve contenere il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro.

> [!NOTE]
>  Non eseguire l'override di questa funzione.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#12](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]

##  <a name="operator_delete"></a>  CObject::operator delete

Per la versione di rilascio della libreria, operator **eliminare** libera la memoria allocata dall'operatore **nuove**.

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

### <a name="remarks"></a>Note

Nella versione di Debug, operator **eliminare** fa parte di uno schema di allocazione-monitoring consente di rilevare perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima delle implementazioni in una. File di CPP, quindi la terza versione di **eliminare** verrà usata, archiviare il numero di riga e nome file nel blocco allocato per i report in un secondo momento. Non devi preoccuparti fornendo i parametri aggiuntivi; una macro si occupa di che per l'utente.

Anche se non si utilizza DEBUG_NEW in modalità di Debug, è comunque ottenere il rilevamento di perdite di memoria, ma senza il file di origine del numero di riga creazione di report descritto in precedenza.

Se si esegue l'override degli operatori **nuove** e **eliminare**, sarai coperto questa funzionalità di diagnostica.

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe usata nel `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#15](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]

##  <a name="operator_new"></a>  Nuovo CObject::operator

Per la versione di rilascio della libreria, operator **nuove** esegue un'allocazione della memoria ottimale in modo simile a `malloc`.

```
void* PASCAL operator new(size_t nSize);
void* PASCAL operator new(size_t, void* p);

void* PASCAL operator new(
    size_t nSize,
    LPCSTR lpszFileName,
    int nLine);
```

### <a name="remarks"></a>Note

Nella versione di Debug, operator **nuovo** fa parte di uno schema di allocazione-monitoring consente di rilevare perdite di memoria.

Se si usa la riga di codice

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

prima delle implementazioni in una. File di CPP, quindi la seconda versione del **nuovo** verrà usata, archiviare il numero di riga e nome file nel blocco allocato per i report in un secondo momento. Non devi preoccuparti fornendo i parametri aggiuntivi; una macro si occupa di che per l'utente.

Anche se non si utilizza DEBUG_NEW in modalità di Debug, è comunque ottenere il rilevamento di perdite di memoria, ma senza il file di origine del numero di riga creazione di report descritto in precedenza.

> [!NOTE]
>  Se si esegue l'override di questo operatore, è necessario inoltre eseguire l'override **Elimina**. Non usare la libreria standard `_new_handler` (funzione).

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe usata nel `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#16](../../mfc/codesnippet/cpp/cobject-class_9.h)]

##  <a name="serialize"></a>  CObject:: Serialize

Legge o scrive l'oggetto corrente da o in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Oggetto `CArchive` oggetto da serializzare da o verso.

### <a name="remarks"></a>Note

È necessario eseguire l'override `Serialize` per ogni classe che si desidera serializzare. Sottoposto a override `Serialize` necessario chiamare prima il `Serialize` funzione della relativa classe base.

È necessario usare anche il [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro nella dichiarazione della classe ed è necessario utilizzare il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro nell'implementazione.

Uso [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) oppure [CArchive::IsStoring](../../mfc/reference/carchive-class.md#isstoring) per determinare se l'archivio è il caricamento o l'archiviazione.

`Serialize` viene chiamato da [CArchive::ReadObject](../../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../../mfc/reference/carchive-class.md#writeobject). Queste funzioni sono associate le `CArchive` operatore di inserimento ( **< \<**) e l'operatore di estrazione ( **>>**).

Per esempi di serializzazione, vedere l'articolo [serializzazione: Serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

### <a name="example"></a>Esempio

Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti `CObject` esempi.

[!code-cpp[NVC_MFCCObjectSample#13](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
