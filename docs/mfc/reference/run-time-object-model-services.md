---
title: Servizi modelli a oggetti runtime
ms.date: 03/27/2019
helpviewer_keywords:
- run-time object model services macros
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
ms.openlocfilehash: 6c2c5d0d9b5b4193cc68421a6bd44755ca9bfc1a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214009"
---
# <a name="run-time-object-model-services"></a>Servizi modelli a oggetti runtime

Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulano diversi servizi oggetto, incluso l'accesso alle informazioni sulle classi in fase di esecuzione, alla serializzazione e alla creazione di oggetti dinamici. Tutte le classi derivate da `CObject` ereditano questa funzionalità.

L'accesso alle informazioni sulle classi in fase di esecuzione consente di determinare le informazioni sulla classe di un oggetto in fase di esecuzione. La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario un controllo dei tipi aggiuntivo degli argomenti della funzione e quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Le informazioni sulle classi in fase di esecuzione non sono supportate direttamente dal linguaggio C++.

La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto in o da un file. È possibile usare la serializzazione per archiviare il contenuto di un oggetto anche dopo la chiusura dell'applicazione. L'oggetto può quindi essere letto dal file quando l'applicazione viene riavviata. Questi oggetti dati sono detti "persistente".

La creazione di oggetti dinamici consente di creare un oggetto di una classe specificata in fase di esecuzione. Ad esempio, gli oggetti Document, View e frame devono supportare la creazione dinamica perché il Framework deve crearli dinamicamente.

Nella tabella seguente sono elencate le macro MFC che supportano le informazioni sulle classi in fase di esecuzione, la serializzazione e la creazione dinamica.

Per ulteriori informazioni su questi servizi oggetto e la serializzazione in fase di esecuzione, vedere l'articolo relativo alla [classe CObject: accesso alle informazioni sulle classi in fase di esecuzione](../../mfc/accessing-run-time-class-information.md).

### <a name="run-time-object-model-services-macros"></a>Macro servizi modello a oggetti in fase di esecuzione

|||
|-|-|
|[DECLARE_DYNAMIC](#declare_dynamic)|Consente l'accesso alle informazioni sulle classi in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|
|[DECLARE_DYNCREATE](#declare_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni sulle classi in fase di esecuzione (devono essere utilizzate nella dichiarazione di classe).|
|[DECLARE_SERIAL](#declare_serial)|Consente la serializzazione e l'accesso alle informazioni sulle classi in fase di esecuzione (devono essere utilizzate nella dichiarazione di classe).|
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Consente l'accesso alle informazioni sulle classi in fase di esecuzione (deve essere utilizzato nell'implementazione della classe).|
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni di runtime (devono essere utilizzate nell'implementazione della classe).|
|[IMPLEMENT_SERIAL](#implement_serial)|Consente la serializzazione e l'accesso alle informazioni sulle classi in fase di esecuzione (devono essere utilizzate nell'implementazione della classe).|
|[RUNTIME_CLASS](#runtime_class)|Restituisce la `CRuntimeClass` struttura che corrisponde alla classe denominata.|

OLE richiede spesso la creazione dinamica di oggetti in fase di esecuzione. Un'applicazione server OLE, ad esempio, deve essere in grado di creare elementi OLE in modo dinamico in risposta a una richiesta di un client. Analogamente, un server di automazione deve essere in grado di creare elementi in risposta alle richieste dei client di automazione.

Il libreria Microsoft Foundation Class fornisce due macro specifiche di OLE.

### <a name="dynamic-creation-of-ole-objects"></a>Creazione dinamica di oggetti OLE

|||
|-|-|
|[AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)|Determina se la libreria di controlli comuni implementa l'API specificata.|
|[AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)|Determina se la libreria di controlli comuni implementa l'API specificata.|
|[DECLARE_OLECREATE](#declare_olecreate)|Consente la creazione di oggetti tramite l'automazione OLE.|
|[DECLARE_OLECTLTYPE](#declare_olectltype)|Dichiara le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.|
|[DECLARE_PROPPAGEIDS](#declare_proppageids)|Dichiara che il controllo OLE fornisce un elenco di pagine delle proprietà per visualizzarne le proprietà.|
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Consente la creazione di oggetti da parte del sistema OLE.|
|[IMPLEMENT_OLECTLTYPE](#implement_olectltype)|Implementa le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.|
|[IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags)|Questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere visualizzata nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE` . |

## <a name="afx_comctl32_if_exists"></a><a name="afx_comctl32_if_exists"></a>AFX_COMCTL32_IF_EXISTS

Determina se la libreria di controlli comuni implementa l'API specificata.

### <a name="syntax"></a>Sintassi

```
AFX_COMCTL32_IF_EXISTS(  proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null che contiene il nome della funzione o specifica il valore ordinale della funzione. Se questo parametro è un valore ordinale, deve trovarsi nella parola di ordine inferiore; la parola di ordine superiore deve essere zero. Questo parametro deve essere in formato Unicode.

### <a name="remarks"></a>Osservazioni

Usare questa macro per determinare se i controlli comuni eseguono la libreria della funzione specificata da *proc* , anziché chiamare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress).

### <a name="requirements"></a>Requisiti

afxcomctl32. h, afxcomctl32. inl

## <a name="afx_comctl32_if_exists2"></a><a name="afx_comctl32_if_exists2"></a>AFX_COMCTL32_IF_EXISTS2

Determina se la libreria di controlli comuni implementa l'API specificata (questa è la versione Unicode di [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)).

### <a name="syntax"></a>Sintassi

```
AFX_COMCTL32_IF_EXISTS2( proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null che contiene il nome della funzione o specifica il valore ordinale della funzione. Se questo parametro è un valore ordinale, deve trovarsi nella parola di ordine inferiore; la parola di ordine superiore deve essere zero. Questo parametro deve essere in formato Unicode.

### <a name="remarks"></a>Osservazioni

Usare questa macro per determinare se i controlli comuni eseguono la libreria della funzione specificata da *proc* , anziché chiamare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress). Questa macro è la versione Unicode di AFX_COMCTL32_IF_EXISTS.

### <a name="requirements"></a>Requisiti

afxcomctl32. h, afxcomctl32. inl

## <a name="declare_dynamic"></a><a name="declare_dynamic"></a>DECLARE_DYNAMIC

Consente di accedere alle informazioni di run-time relative alla classe di un oggetto quando deriva una classe da `CObject` .

```
DECLARE_DYNAMIC(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Aggiungere la macro DECLARE_DYNAMIC al modulo di intestazione (. h) per la classe, quindi includere il modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se si usa la DECLARE_ le macro dinamiche e IMPLEMENT_DYNAMIC come descritto, è possibile usare la macro RUNTIME_CLASS e la `CObject::IsKindOf` funzione per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNAMIC è incluso nella dichiarazione di classe, è necessario includere IMPLEMENT_DYNAMIC nell'implementazione della classe.

Per ulteriori informazioni sulla DECLARE_DYNAMIC macro, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [IMPLEMENT_DYNAMIC](#implement_dynamic).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="declare_dyncreate"></a><a name="declare_dyncreate"></a>DECLARE_DYNCREATE

Consente `CObject` la creazione dinamica di oggetti di classi derivate da in fase di esecuzione.

```
DECLARE_DYNCREATE(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Il Framework utilizza questa funzionalità per creare nuovi oggetti in modo dinamico. Ad esempio, la nuova vista creata quando si apre un nuovo documento. Le classi Document, View e frame devono supportare la creazione dinamica perché il Framework deve crearle dinamicamente.

Aggiungere la macro DECLARE_DYNCREATE nel modulo h per la classe, quindi includere il modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, è necessario includere IMPLEMENT_DYNCREATE nell'implementazione della classe.

Per ulteriori informazioni sulla DECLARE_DYNCREATE macro, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

> [!NOTE]
> La macro DECLARE_DYNCREATE include tutte le funzionalità di DECLARE_DYNAMIC.

### <a name="example"></a>Esempio

Vedere l'esempio per [IMPLEMENT_DYNCREATE](#implement_dyncreate).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="declare_olectltype"></a><a name="declare_olectltype"></a>DECLARE_OLECTLTYPE

Dichiara le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo.

### <a name="remarks"></a>Osservazioni

`GetUserTypeNameID`e `GetMiscStatus` sono funzioni virtuali pure, dichiarate in `COleControl` . Poiché queste funzioni sono virtuali pure, è necessario eseguirne l'override nella classe del controllo. Oltre a DECLARE_OLECTLTYPE, è necessario aggiungere la macro IMPLEMENT_OLECTLTYPE alla dichiarazione della classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="declare_proppageids"></a><a name="declare_proppageids"></a>DECLARE_PROPPAGEIDS

Dichiara che il controllo OLE fornisce un elenco di pagine delle proprietà per visualizzarne le proprietà.

### <a name="syntax"></a>Sintassi

```
DECLARE_PROPPAGEIDS( class_name )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo che possiede le pagine delle proprietà.

### <a name="remarks"></a>Osservazioni

Usare la `DECLARE_PROPPAGEIDS` macro alla fine della dichiarazione di classe. Quindi, nel file con estensione cpp che definisce le funzioni membro per la classe, usare la `BEGIN_PROPPAGEIDS` macro, le voci di macro per ogni pagina delle proprietà del controllo e la `END_PROPPAGEIDS` macro per dichiarare la fine dell'elenco di pagine delle proprietà.

Per ulteriori informazioni sulle pagine delle proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../mfc-activex-controls-property-pages.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="declare_serial"></a><a name="declare_serial"></a>DECLARE_SERIAL

Genera il codice di intestazione C++ necessario per una `CObject` classe derivata da che può essere serializzata.

```
DECLARE_SERIAL(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto in e da un file.

Usare la macro DECLARE_SERIAL in un modulo h, quindi includere il modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_SERIAL è incluso nella dichiarazione di classe, è necessario includere IMPLEMENT_SERIAL nell'implementazione della classe.

La macro DECLARE_SERIAL include tutte le funzionalità di DECLARE_DYNAMIC e DECLARE_DYNCREATE.

È possibile usare la macro AFX_API per esportare automaticamente l' `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere tra parentesi le dichiarazioni di classe (situate nel file con estensione h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per ulteriori informazioni sulla DECLARE_SERIAL macro, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="implement_dynamic"></a><a name="implement_dynamic"></a>IMPLEMENT_DYNAMIC

Genera il codice C++ necessario per una `CObject` classe derivata dinamica con accesso in fase di esecuzione al nome e alla posizione della classe all'interno della gerarchia.

```
IMPLEMENT_DYNAMIC(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome della classe base.

### <a name="remarks"></a>Osservazioni

Usare la macro IMPLEMENT_DYNAMIC in un modulo cpp, quindi collegare il codice oggetto risultante una sola volta.

Per ulteriori informazioni, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]

[!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="implement_dyncreate"></a><a name="implement_dyncreate"></a>IMPLEMENT_DYNCREATE

Consente `CObject` la creazione dinamica di oggetti di classi derivate da in fase di esecuzione quando viene utilizzata con la macro DECLARE_DYNCREATE.

```
IMPLEMENT_DYNCREATE(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome effettivo della classe di base.

### <a name="remarks"></a>Osservazioni

Il Framework utilizza questa funzionalità per creare in modo dinamico nuovi oggetti, ad esempio quando legge un oggetto dal disco durante la serializzazione. Aggiungere la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe. Per ulteriori informazioni, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

Se si usano le macro DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE, è possibile usare la macro RUNTIME_CLASS e la `CObject::IsKindOf` funzione membro per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, è necessario includere IMPLEMENT_DYNCREATE nell'implementazione della classe.

Si noti che questa definizione di macro richiama il costruttore predefinito per la classe. Se un costruttore non semplice viene implementato in modo esplicito dalla classe, deve anche implementare in modo esplicito anche il costruttore predefinito. Il costruttore predefinito può essere aggiunto alle sezioni della classe **`private`** o del **`protected`** membro per impedire che venga chiamato dall'esterno dell'implementazione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]

[!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="implement_olecreate_flags"></a><a name="implement_olecreate_flags"></a>IMPLEMENT_OLECREATE_FLAGS

Questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere visualizzata nel file di implementazione per qualsiasi classe che usa DECLARE_OLECREATE.

### <a name="syntax"></a>Sintassi

```
IMPLEMENT_OLECREATE_FLAGS( class_name, external_name, nFlags,
    l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

*external_name*<br/>
Nome dell'oggetto esposto ad altre applicazioni (racchiuso tra virgolette).

*nFlags*<br/>
Contiene uno o più dei flag seguenti:

- `afxRegInsertable`Consente di visualizzare il controllo nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.
- `afxRegApartmentThreading`Imposta il modello di threading nel registro di sistema su ThreadingModel = Apartment.
- `afxRegFreeThreading`Imposta il modello di threading nel registro di sistema su ThreadingModel = Free.

È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel = both. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) nel Windows SDK.

componenti *l*, *W1*, *W2*, *B1*, *B2*, *B3*, *B4*, *B5*, *B6*, *B7*, *B8* del CLSID della classe.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si utilizza IMPLEMENT_OLECREATE_FLAGS, è possibile specificare il modello di threading supportato dall'oggetto utilizzando il parametro *nFlags* . Se si desidera supportare solo il modello a battistrada singolo, utilizzare IMPLEMENT_OLECREATE.

Il nome esterno è l'identificatore esposto ad altre applicazioni. Le applicazioni client utilizzano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID della classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da **`long`** una, **due parole**s e otto **byte**, come rappresentato da *l*, *W1*, *W2*e *B1* tramite *B8* nella descrizione della sintassi. La creazione guidata applicazione e le creazioni guidate codice creano ID di classi OLE univoche come richiesto.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="implement_olectltype"></a><a name="implement_olectltype"></a>IMPLEMENT_OLECTLTYPE

Implementa le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name, idsUserTypeName, dwOleMisc )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo.

*idsUserTypeName*<br/>
ID risorsa di una stringa contenente il nome esterno del controllo.

*dwOleMisc*<br/>
Enumerazione contenente uno o più flag. Per ulteriori informazioni su questa enumerazione, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Oltre a IMPLEMENT_OLECTLTYPE, è necessario aggiungere la macro DECLARE_OLECTLTYPE alla dichiarazione della classe del controllo.

La `GetUserTypeNameID` funzione membro restituisce la stringa di risorsa che identifica la classe del controllo. `GetMiscStatus`Restituisce i bit OLEMISC per il controllo. Questa enumerazione specifica una raccolta di impostazioni che descrivono le varie caratteristiche del controllo. Per una descrizione completa delle impostazioni OLEMISC, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) nel Windows SDK.

> [!NOTE]
> Le impostazioni predefinite utilizzate dai ControlWizard ActiveX sono: OLEMISC_ACTIVATEWHENVISIBLE, OLEMISC_SETCLIENTSITEFIRST, OLEMISC_INSIDEOUT, OLEMISC_CANTLINKINSIDE e OLEMISC_RECOMPOSEONRESIZE.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="implement_serial"></a><a name="implement_serial"></a>IMPLEMENT_SERIAL

Genera il codice C++ necessario per una `CObject` classe derivata dinamica con accesso in fase di esecuzione al nome e alla posizione della classe all'interno della gerarchia.

```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome della classe base.

*wSchema*<br/>
Un "numero di versione" UINT che verrà codificato nell'archivio per consentire a un programma di deserializzazione di identificare e gestire i dati creati dalle versioni precedenti del programma. Il numero dello schema della classe non deve essere-1.

### <a name="remarks"></a>Osservazioni

Usare la macro IMPLEMENT_SERIAL in un modulo. cpp; quindi collegare il codice oggetto risultante una sola volta.

È possibile usare la macro AFX_API per esportare automaticamente l' `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere tra parentesi le dichiarazioni di classe (situate nel file con estensione h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per ulteriori informazioni, vedere gli [argomenti della classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="runtime_class"></a><a name="runtime_class"></a>RUNTIME_CLASS

Ottiene la struttura della classe in fase di esecuzione dal nome di una classe C++.

```
RUNTIME_CLASS(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe (non racchiuso tra virgolette).

### <a name="remarks"></a>Osservazioni

RUNTIME_CLASS restituisce un puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per la classe specificata da *class_name*. Solo `CObject` le classi derivate da dichiarate con DECLARE_DYNAMIC, DECLARE_DYNCREATE o DECLARE_SERIAL restituiranno puntatori a una `CRuntimeClass` struttura.

Per ulteriori informazioni, vedere [argomenti della classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="declare_olecreate"></a><a name="declare_olecreate"></a>DECLARE_OLECREATE

Consente la creazione di oggetti di `CCmdTarget` classi derivate da tramite l'automazione OLE.

```
DECLARE_OLECREATE(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Questa macro consente ad altre applicazioni abilitate per OLE di creare oggetti di questo tipo.

Aggiungere la macro DECLARE_OLECREATE nel modulo h per la classe e quindi includere il modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_OLECREATE è incluso nella dichiarazione di classe, è necessario includere IMPLEMENT_OLECREATE nell'implementazione della classe. Una dichiarazione di classe che usa DECLARE_OLECREATE deve usare anche DECLARE_DYNCREATE o DECLARE_SERIAL.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

## <a name="implement_olecreate"></a><a name="implement_olecreate"></a>IMPLEMENT_OLECREATE

Questa macro o [IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags) deve essere visualizzata nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE` .

```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome effettivo della classe.

*external_name*<br/>
Nome dell'oggetto esposto ad altre applicazioni (racchiuso tra virgolette).

componenti *l*, *W1*, *W2*, *B1*, *B2*, *B3*, *B4*, *B5*, *B6*, *B7*, *B8* del CLSID della classe.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si utilizza IMPLEMENT_OLECREATE, per impostazione predefinita si supporta solo il modello a thread singolo. Se si utilizza IMPLEMENT_OLECREATE_FLAGS, è possibile specificare il modello di threading supportato dall'oggetto utilizzando il parametro *nFlags* .

Il nome esterno è l'identificatore esposto ad altre applicazioni. Le applicazioni client utilizzano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID della classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da **`long`** una, **due parole**s e otto **byte**, come rappresentato da *l*, *W1*, *W2*e *B1* tramite *B8* nella descrizione della sintassi. La creazione guidata applicazione e le creazioni guidate codice creano ID di classi OLE univoche come richiesto.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Isolamento della libreria di controlli comuni MFC](../isolation-of-the-mfc-common-controls-library.md)<br/>
[Chiave CLSID](/windows/win32/com/clsid-key-hklm)
