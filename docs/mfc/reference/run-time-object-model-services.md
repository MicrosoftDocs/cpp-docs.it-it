---
title: Servizi modelli a oggetti runtime
ms.date: 03/27/2019
helpviewer_keywords:
- run-time object model services macros
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
ms.openlocfilehash: f1cefdad368ebcd006dcb4ecf653247147f36d03
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372947"
---
# <a name="run-time-object-model-services"></a>Servizi modelli a oggetti runtime

Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulano diversi servizi oggetto, tra cui l'accesso alle informazioni sulle classi in fase di esecuzione, la serializzazione e la creazione dinamica di oggetti. Tutte le `CObject` classi derivate da ereditano questa funzionalità.

L'accesso alle informazioni sulla classe in fase di esecuzione consente di determinare le informazioni sulla classe di un oggetto in fase di esecuzione. La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario un ulteriore controllo del tipo degli argomenti della funzione e quando è necessario scrivere codice per scopi speciali basato sulla classe di un oggetto. Le informazioni sulla classe in fase di esecuzione non sono supportate direttamente dal linguaggio C.

La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto in o da un file. È possibile utilizzare la serializzazione per archiviare il contenuto di un oggetto anche dopo la chiusura dell'applicazione. L'oggetto può quindi essere letto dal file quando l'applicazione viene riavviata. Tali oggetti dati sono detti "persistenti".

La creazione dinamica di oggetti consente di creare un oggetto di una classe specificata in fase di esecuzione. Ad esempio, gli oggetti documento, visualizzazione e frame devono supportare la creazione dinamica perché il framework deve crearli in modo dinamico.

Nella tabella seguente sono elencate le macro MFC che supportano le informazioni sulle classi in fase di esecuzione, la serializzazione e la creazione dinamica.

Per ulteriori informazioni su questi servizi oggetto di runtime e sulla serializzazione, vedere l'articolo [Classe CObject: accesso alle informazioni](../../mfc/accessing-run-time-class-information.md)sulle classi in fase di esecuzione .

### <a name="run-time-object-model-services-macros"></a>Macro di Servizi modello a oggetti di runtime

|||
|-|-|
|[DECLARE_DYNAMIC](#declare_dynamic)|Consente l'accesso alle informazioni sulla classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|
|[DECLARE_DYNCREATE](#declare_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni sulla classe di runtime (deve essere utilizzato nella dichiarazione di classe).|
|[DECLARE_SERIAL](#declare_serial)|Abilita la serializzazione e l'accesso alle informazioni sulle classi in fase di esecuzione (deve essere utilizzato nella dichiarazione della classe).|
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Consente l'accesso alle informazioni sulla classe in fase di esecuzione (deve essere utilizzato nell'implementazione della classe).|
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni di runtime (deve essere utilizzato nell'implementazione della classe).|
|[IMPLEMENT_SERIAL](#implement_serial)|Consente la serializzazione e l'accesso alle informazioni sulle classi in fase di esecuzione (deve essere utilizzato nell'implementazione della classe).|
|[RUNTIME_CLASS](#runtime_class)|Restituisce `CRuntimeClass` la struttura che corrisponde alla classe denominata.|

OLE richiede spesso la creazione dinamica di oggetti in fase di esecuzione. Ad esempio, un'applicazione server OLE deve essere in grado di creare elementi OLE in modo dinamico in risposta a una richiesta da un client. Analogamente, un server di automazione deve essere in grado di creare elementi in risposta alle richieste dei client di automazione.

La libreria Microsoft Foundation Class fornisce due macro specifiche per OLE.

### <a name="dynamic-creation-of-ole-objects"></a>Creazione dinamica di oggetti OLE

|||
|-|-|
|[AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)|Determina se la libreria Common Controls implementa l'API specificata.|
|[AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)|Determina se la libreria Common Controls implementa l'API specificata.|
|[DECLARE_OLECREATE](#declare_olecreate)|Consente la creazione di oggetti tramite l'automazione OLE.|
|[DECLARE_OLECTLTYPE](#declare_olectltype)|Dichiara le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.|
|[DECLARE_PROPPAGEIDS](#declare_proppageids)|Dichiara che il controllo OLE fornisce un elenco di pagine delle proprietà per visualizzarne le proprietà.|
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Consente la creazione di oggetti da parte del sistema OLE.|
|[IMPLEMENT_OLECTLTYPE](#implement_olectltype)|Implementa `GetUserTypeNameID` le `GetMiscStatus` funzioni membro e della classe del controllo.|
|[IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags)|Questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere visualizzata nel `DECLARE_OLECREATE`file di implementazione per qualsiasi classe che utilizza . |

## <a name="afx_comctl32_if_exists"></a><a name="afx_comctl32_if_exists"></a>AFX_COMCTL32_IF_EXISTS

Determina se la libreria Common Controls implementa l'API specificata.

### <a name="syntax"></a>Sintassi

```
AFX_COMCTL32_IF_EXISTS(  proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null contenente il nome della funzione o specifica il valore ordinale della funzione. Se questo parametro è un valore ordinale, deve essere nella parola in ordine basso; la parola più ordine deve essere zero. Questo parametro deve essere in Unicode.This parameter must be in Unicode.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per determinare se i controlli comuni libreria la funzione specificata da *proc* (anziché chiamare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress).

### <a name="requirements"></a>Requisiti

afxcomctl32.h, afxcomctl32.inl

## <a name="afx_comctl32_if_exists2"></a><a name="afx_comctl32_if_exists2"></a>AFX_COMCTL32_IF_EXISTS2

Determina se la libreria Common Controls implementa l'API specificata (si tratta della versione Unicode di [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)).

### <a name="syntax"></a>Sintassi

```
AFX_COMCTL32_IF_EXISTS2( proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null contenente il nome della funzione o specifica il valore ordinale della funzione. Se questo parametro è un valore ordinale, deve essere nella parola in ordine basso; la parola più ordine deve essere zero. Questo parametro deve essere in Unicode.This parameter must be in Unicode.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per determinare se i controlli comuni libreria la funzione specificata da *proc* (anziché chiamare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress). Questa macro è la versione Unicode di AFX_COMCTL32_IF_EXISTS.

### <a name="requirements"></a>Requisiti

afxcomctl32.h, afxcomctl32.inl

## <a name="declare_dynamic"></a><a name="declare_dynamic"></a>DECLARE_DYNAMIC

Aggiunge la possibilità di accedere alle informazioni di runtime sulla classe `CObject`di un oggetto quando si deriva una classe da .

```
DECLARE_DYNAMIC(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Aggiungere la macro di DECLARE_DYNAMIC al modulo di intestazione (h) per la classe, quindi includere tale modulo in tutti i moduli con estensione cpp che richiedono l'accesso agli oggetti di questa classe.

Se si utilizzano le macro DECLARE_ DYNAMIC e IMPLEMENT_DYNAMIC come descritto, è quindi possibile utilizzare la macro RUNTIME_CLASS e la `CObject::IsKindOf` funzione per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNAMIC è incluso nella dichiarazione di classe, IMPLEMENT_DYNAMIC deve essere incluso nell'implementazione della classe.

Per ulteriori informazioni sulla macro DECLARE_DYNAMIC, vedere Argomenti relativi alla [classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [IMPLEMENT_DYNAMIC](#implement_dynamic).

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="declare_dyncreate"></a><a name="declare_dyncreate"></a>DECLARE_DYNCREATE

Consente di `CObject`creare dinamicamente gli oggetti delle classi derivate in fase di esecuzione.

```
DECLARE_DYNCREATE(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Il framework utilizza questa funzionalità per creare nuovi oggetti in modo dinamico. Ad esempio, la nuova visualizzazione creata quando si apre un nuovo documento. Le classi documento, visualizzazione e frame devono supportare la creazione dinamica perché il framework deve crearle in modo dinamico.

Aggiungere la DECLARE_DYNCREATE macro nel modulo h per la classe, quindi includere tale modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, IMPLEMENT_DYNCREATE deve essere incluso nell'implementazione della classe.

Per ulteriori informazioni sulla macro DECLARE_DYNCREATE, vedere Argomenti relativi alla [classe CObject](../../mfc/using-cobject.md).

> [!NOTE]
> La macro DECLARE_DYNCREATE include tutte le funzionalità di DECLARE_DYNAMIC.

### <a name="example"></a>Esempio

Vedere l'esempio per [IMPLEMENT_DYNCREATE](#implement_dyncreate).

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="declare_olectltype"></a><a name="declare_olectltype"></a>DECLARE_OLECTLTYPE

Dichiara le `GetUserTypeNameID` `GetMiscStatus` funzioni membro e della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name )
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo.

### <a name="remarks"></a>Osservazioni

`GetUserTypeNameID`e `GetMiscStatus` sono funzioni virtuali `COleControl`pure, dichiarate in . Poiché queste funzioni sono virtuali pure, è necessario eseguire l'override nella classe del controllo. Oltre a DECLARE_OLECTLTYPE, è necessario aggiungere la macro di IMPLEMENT_OLECTLTYPE alla dichiarazione della classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="declare_proppageids"></a><a name="declare_proppageids"></a>DECLARE_PROPPAGEIDS

Dichiara che il controllo OLE fornisce un elenco di pagine delle proprietà per visualizzarne le proprietà.

### <a name="syntax"></a>Sintassi

```
DECLARE_PROPPAGEIDS( class_name )
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo proprietaria delle pagine delle proprietà.

### <a name="remarks"></a>Osservazioni

Utilizzare `DECLARE_PROPPAGEIDS` la macro alla fine della dichiarazione di classe. Quindi, nel file cpp che definisce le funzioni membro `BEGIN_PROPPAGEIDS` per la classe, utilizzare la macro, le `END_PROPPAGEIDS` voci di macro per ogni pagina delle proprietà del controllo e la macro per dichiarare la fine dell'elenco delle pagine delle proprietà.

Per ulteriori informazioni sulle pagine delle proprietà, vedere l'articolo [Controlli ActiveX: pagine delle proprietà](../mfc-activex-controls-property-pages.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="declare_serial"></a><a name="declare_serial"></a>DECLARE_SERIAL

Consente di generare il codice `CObject`di intestazione di C, necessario per una classe derivata da C, che può essere serializzata.

```
DECLARE_SERIAL(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto da e verso un file.

Utilizzare la macro DECLARE_SERIAL in un modulo h e quindi includere tale modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_SERIAL è incluso nella dichiarazione di classe, IMPLEMENT_SERIAL deve essere incluso nell'implementazione della classe.

La macro DECLARE_SERIAL include tutte le funzionalità di DECLARE_DYNAMIC e DECLARE_DYNCREATE.

È possibile utilizzare la macro `CArchive` AFX_API per esportare automaticamente l'operatore di estrazione per le classi che utilizzano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere le dichiarazioni di classe (che si trova nel file h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per ulteriori informazioni sulla macro DECLARE_SERIAL, vedere Argomenti relativi alla [classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="implement_dynamic"></a><a name="implement_dynamic"></a>IMPLEMENT_DYNAMIC

Consente di generare il codice `CObject`C, necessario per una classe derivata dalla dinamica con accesso in fase di esecuzione al nome e alla posizione della classe all'interno della gerarchia.

```
IMPLEMENT_DYNAMIC(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome della classe base.

### <a name="remarks"></a>Osservazioni

Utilizzare la IMPLEMENT_DYNAMIC macro in un modulo cpp, quindi collegare il codice oggetto risultante una sola volta.

Per ulteriori informazioni, vedere [Argomenti relativi alla classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]

[!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="implement_dyncreate"></a><a name="implement_dyncreate"></a>IMPLEMENT_DYNCREATE

Consente di `CObject`creare dinamicamente gli oggetti delle classi derivate in fase di esecuzione quando vengono utilizzati con la macro DECLARE_DYNCREATE.

```
IMPLEMENT_DYNCREATE(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome effettivo della classe base.

### <a name="remarks"></a>Osservazioni

Il framework utilizza questa possibilità per creare nuovi oggetti in modo dinamico, ad esempio, quando legge un oggetto dal disco durante la serializzazione. Aggiungere la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe. Per ulteriori informazioni, vedere [Argomenti relativi alla classe CObject](../../mfc/using-cobject.md).

Se si utilizzano le macro DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE, è `CObject::IsKindOf` possibile utilizzare la macro RUNTIME_CLASS e la funzione membro per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, IMPLEMENT_DYNCREATE deve essere incluso nell'implementazione della classe.

Si noti che questa definizione di macro richiamerà il costruttore predefinito per la classe. Se un costruttore non semplice viene implementato in modo esplicito dalla classe, deve implementare in modo esplicito anche il costruttore predefinito. Il costruttore predefinito può essere aggiunto alle sezioni membro **private** o **protected** della classe per impedire che venga chiamato dall'esterno dell'implementazione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]

[!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="implement_olecreate_flags"></a><a name="implement_olecreate_flags"></a>IMPLEMENT_OLECREATE_FLAGS

Questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere visualizzata nel file di implementazione per qualsiasi classe che utilizza DECLARE_OLECREATE.

### <a name="syntax"></a>Sintassi

```
IMPLEMENT_OLECREATE_FLAGS( class_name, external_name, nFlags,
    l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

*external_name*<br/>
Il nome dell'oggetto esposto ad altre applicazioni (racchiuso tra virgolette).

*Nflags*<br/>
Contiene uno o più dei seguenti flag:

- `afxRegInsertable`Consente al controllo di essere visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.
- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel.
- `afxRegFreeThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel-Free.

È possibile combinare `afxRegApartmentThreading` i `afxRegFreeThreading` due flag e impostare ThreadingModel- Entrambi. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) in Windows SDK.

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8* Componenti del CLSID della classe.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si utilizza IMPLEMENT_OLECREATE_FLAGS, è possibile specificare il modello di threading supportato dall'oggetto utilizzando il parametro *nFlags.* Se si desidera supportare solo il modello single-treading, utilizzare IMPLEMENT_OLECREATE.

Il nome esterno è l'identificatore esposto ad altre applicazioni. Le applicazioni client utilizzano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID di classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da un **lungo**, due **WORD**s e otto **BYTE**s, come rappresentato da *l*, *w1*, *w2*e *da b1* a *b8* nella descrizione della sintassi. Creazione guidata applicazione e creazioni guidate codice creare ID di classe OLE univoci in base alle esigenze.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="implement_olectltype"></a><a name="implement_olectltype"></a>IMPLEMENT_OLECTLTYPE

Implementa `GetUserTypeNameID` le `GetMiscStatus` funzioni membro e della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name, idsUserTypeName, dwOleMisc )
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo.

*idsUserTypeName (Nome TipoUtente)*<br/>
ID di risorsa di una stringa contenente il nome esterno del controllo.

*dwOleMisc*<br/>
Enumerazione contenente uno o più flag. Per ulteriori informazioni su questa enumerazione, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Oltre a IMPLEMENT_OLECTLTYPE, è necessario aggiungere la macro di DECLARE_OLECTLTYPE alla dichiarazione della classe del controllo.

La `GetUserTypeNameID` funzione membro restituisce la stringa di risorsa che identifica la classe del controllo. `GetMiscStatus`restituisce i bit OLEMISC per il controllo. Questa enumerazione specifica una raccolta di impostazioni che descrivono le caratteristiche varie del controllo. Per una descrizione completa delle impostazioni OLEMISC, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) in Windows SDK.

> [!NOTE]
> Le impostazioni predefinite utilizzate dalla Creazione guidata controllo ActiveX sono: OLEMISC_ACTIVATEWHENVISIBLE, OLEMISC_SETCLIENTSITEFIRST, OLEMISC_INSIDEOUT, OLEMISC_CANTLINKINSIDE e OLEMISC_RECOMPOSEONRESIZE.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="implement_serial"></a><a name="implement_serial"></a>IMPLEMENT_SERIAL

Consente di generare il codice `CObject`C, necessario per una classe derivata dalla dinamica con accesso in fase di esecuzione al nome e alla posizione della classe all'interno della gerarchia.

```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

*base_class_name*<br/>
Nome della classe base.

*wSchema (informazioni in base al fatto*<br/>
Un "numero di versione" UINT che verrà codificato nell'archivio per consentire a un programma di deserializzazione di identificare e gestire i dati creati dalle versioni precedenti del programma. Il numero dello schema di classe non deve essere -1.The class schema number must not be -1.

### <a name="remarks"></a>Osservazioni

Utilizzare la macro IMPLEMENT_SERIAL in un modulo cpp; quindi collegare il codice oggetto risultante una sola volta.

È possibile utilizzare la macro `CArchive` AFX_API per esportare automaticamente l'operatore di estrazione per le classi che utilizzano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere le dichiarazioni di classe (che si trova nel file h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per ulteriori informazioni, vedere gli argomenti relativi alla [classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="runtime_class"></a><a name="runtime_class"></a>RUNTIME_CLASS

Ottiene la struttura della classe in fase di esecuzione dal nome di una classe C.

```
RUNTIME_CLASS(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe (non racchiuso tra virgolette).

### <a name="remarks"></a>Osservazioni

RUNTIME_CLASS restituisce un puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per la classe specificata da *class_name*. Solo `CObject`le classi derivate dichiarate con DECLARE_DYNAMIC, DECLARE_DYNCREATE `CRuntimeClass` o DECLARE_SERIAL restituiranno puntatori a una struttura.

Per ulteriori informazioni, vedere [Argomenti relativi alla classe CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="declare_olecreate"></a><a name="declare_olecreate"></a>DECLARE_OLECREATE

Consente la `CCmdTarget`creazione di oggetti di classi derivate tramite l'automazione OLE.

```
DECLARE_OLECREATE(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

### <a name="remarks"></a>Osservazioni

Questa macro consente ad altre applicazioni abilitate per OLE di creare oggetti di questo tipo.

Aggiungere la macro DECLARE_OLECREATE nel modulo h per la classe e quindi includere tale modulo in tutti i moduli cpp che devono accedere agli oggetti di questa classe.

Se DECLARE_OLECREATE è incluso nella dichiarazione di classe, IMPLEMENT_OLECREATE deve essere incluso nell'implementazione della classe. Una dichiarazione di classe che utilizza DECLARE_OLECREATE deve utilizzare anche DECLARE_DYNCREATE o DECLARE_SERIAL.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="implement_olecreate"></a><a name="implement_olecreate"></a>IMPLEMENT_OLECREATE

Questa macro o [IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags) deve essere presente nel `DECLARE_OLECREATE`file di implementazione per qualsiasi classe che utilizza .

```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome effettivo della classe.

*external_name*<br/>
Il nome dell'oggetto esposto ad altre applicazioni (racchiuso tra virgolette).

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8* Componenti del CLSID della classe.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si utilizza IMPLEMENT_OLECREATE, per impostazione predefinita, si supporta solo il modello di threading singolo. Se si utilizza IMPLEMENT_OLECREATE_FLAGS, è possibile specificare il modello di threading supportato dall'oggetto utilizzando il parametro *nFlags.*

Il nome esterno è l'identificatore esposto ad altre applicazioni. Le applicazioni client utilizzano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID di classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da un **lungo**, due **WORD**s e otto **BYTE**s, come rappresentato da *l*, *w1*, *w2*e *da b1* a *b8* nella descrizione della sintassi. Creazione guidata applicazione e creazioni guidate codice creare ID di classe OLE univoci in base alle esigenze.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Isolamento della libreria di controlli comuni MFC](../isolation-of-the-mfc-common-controls-library.md)<br/>
[Chiave CLSID](/windows/win32/com/clsid-key-hklm)
