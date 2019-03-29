---
title: Servizi modelli a oggetti runtime
ms.date: 03/27/2019
f1_keywords:
- vc.mfc.macros
helpviewer_keywords:
- run-time object model services macros
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
ms.openlocfilehash: 59f5be1d8bb38295b50732583fea47924160cecf
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58565892"
---
# <a name="run-time-object-model-services"></a>Servizi modelli a oggetti runtime

Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulare diversi servizi oggetto, incluso l'accesso alle informazioni sulle classi in fase di esecuzione, la serializzazione e creazione di oggetti dinamici. Tutte le classi derivate da `CObject` ereditano questa funzionalità.

Accesso alle informazioni sulle classi di runtime consente di determinare le informazioni sulla classe di un oggetto in fase di esecuzione. La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando occorre extra-controllo dei tipi degli argomenti della funzione e quando è necessario scrivere codice speciale in base alla classe di un oggetto. Informazioni sulle classi di runtime non è supportate direttamente dal linguaggio C++.

La serializzazione è il processo di scrittura o lettura dei contenuti di un oggetto a o da un file. È possibile utilizzare la serializzazione per archiviare il contenuto di un oggetto anche dopo la chiusura dell'applicazione. L'oggetto può essere letti dal file quando l'applicazione viene riavviata. Tali oggetti dati vengono definiti "permanenti".

Creazione di oggetti dinamici consente di creare un oggetto di una classe specificata in fase di esecuzione. Ad esempio, documenti, visualizzazione e gli oggetti nel frame devono supportare la creazione dinamica perché il framework è necessario crearli in modo dinamico.

Nella tabella seguente elenca le macro MFC che supportano le informazioni sulla classe in fase di esecuzione, la serializzazione e la creazione dinamica.

Per altre informazioni su questi servizi oggetto di run-time e la serializzazione, vedere l'articolo [classe CObject: Accesso alle informazioni sulle classi di runtime](../../mfc/accessing-run-time-class-information.md).

### <a name="run-time-object-model-services-macros"></a>Macro servizi modelli a oggetti di Run-Time

|||
|-|-|
|[DECLARE_DYNAMIC](#declare_dynamic)|Consente l'accesso a informazioni sulle classi di runtime (deve essere usato nella dichiarazione di classe).|
|[DECLARE_DYNCREATE](#declare_dyncreate)|Consente la creazione dinamica e l'accesso a informazioni sulle classi di runtime (deve essere usato nella dichiarazione di classe).|
|[DECLARE_SERIAL](#declare_serial)|Abilita la serializzazione e l'accesso alle informazioni sulle classi di runtime (deve essere usato nella dichiarazione di classe).|
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Consente l'accesso a informazioni sulle classi di runtime (deve essere usato nell'implementazione della classe).|
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Consente la creazione dinamica e l'accesso a informazioni di run-time (deve essere usato nell'implementazione della classe).|
|[IMPLEMENT_SERIAL](#implement_serial)|Consente la serializzazione e l'accesso alle informazioni sulle classi di runtime (deve essere usato nell'implementazione della classe).|
|[RUNTIME_CLASS](#runtime_class)|Restituisce il `CRuntimeClass` struttura che corrisponde alla classe denominata.|

OLE spesso richiede la creazione dinamica di oggetti in fase di esecuzione. Ad esempio, un'applicazione server OLE deve essere in grado di creare elementi OLE dinamicamente in risposta a una richiesta da un client. Analogamente, un server di automazione deve essere in grado di creare gli elementi in risposta alle richieste dei client di automazione.

La libreria Microsoft Foundation Class fornisce due macro specifiche OLE.

### <a name="dynamic-creation-of-ole-objects"></a>Creazione dinamica di oggetti OLE

|||
|-|-|
|[AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)|Determina se la libreria di controlli comuni implementa l'API specificata.|
|[AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)|Determina se la libreria di controlli comuni implementa l'API specificata.|
|[DECLARE_OLECREATE](#declare_olecreate)|Consente agli oggetti deve essere creato tramite l'automazione OLE.|
|[DECLARE_OLECTLTYPE](#declare_olectltype)|Consente di dichiarare la `GetUserTypeNameID` e `GetMiscStatus` funzioni membro della classe del controllo.|
|[DECLARE_PROPPAGEIDS](#declare_proppageids)|Dichiara che il controllo OLE fornisce un elenco delle pagine delle proprietà per visualizzarne le proprietà.|
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Abilita gli oggetti vengano creati per il sistema OLE.|
|[IMPLEMENT_OLECTLTYPE](#implement_olectltype)|Implementa il `GetUserTypeNameID` e `GetMiscStatus` funzioni membro della classe del controllo.|
|[IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags)|Entrambi questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere presente nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE`. |

## <a name="afx_comctl32_if_exists"></a> AFX_COMCTL32_IF_EXISTS

Determina se la libreria di controlli comuni implementa l'API specificata.

### <a name="syntax"></a>Sintassi

  ```
AFX_COMCTL32_IF_EXISTS(  proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null che contiene il nome della funzione, o valore ordinale della funzione specifica. Se questo parametro è un valore ordinale, deve essere la parola meno significativa; la parola più significativa deve essere zero. Questo parametro deve essere in formato Unicode.

### <a name="remarks"></a>Note

Usare questa macro per determinare se la libreria di controlli comuni di funzione specificato dalla *proc* (invece di chiamare [GetProcAddress](/windows/desktop/api/libloaderapi/nf-libloaderapi-getprocaddress).

### <a name="requirements"></a>Requisiti

afxcomctl32.h, afxcomctl32.inl

## <a name="afx_comctl32_if_exists2"></a>  AFX_COMCTL32_IF_EXISTS2

Determina se la libreria di controlli comuni implementa l'API specificata (si tratta della versione Unicode del [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)).

### <a name="syntax"></a>Sintassi

```
AFX_COMCTL32_IF_EXISTS2( proc );
```

### <a name="parameters"></a>Parametri

*proc*<br/>
Puntatore a una stringa con terminazione null che contiene il nome della funzione, o valore ordinale della funzione specifica. Se questo parametro è un valore ordinale, deve essere la parola meno significativa; la parola più significativa deve essere zero. Questo parametro deve essere in formato Unicode.

### <a name="remarks"></a>Note

Usare questa macro per determinare se la libreria di controlli comuni di funzione specificato dalla *proc* (invece di chiamare [GetProcAddress](/windows/desktop/api/libloaderapi/nf-libloaderapi-getprocaddress). Questa macro è la versione Unicode di AFX_COMCTL32_IF_EXISTS.

### <a name="requirements"></a>Requisiti

afxcomctl32.h, afxcomctl32.inl

##  <a name="declare_dynamic"></a>  DECLARE_DYNAMIC

Aggiunge la possibilità di accedere alle informazioni di runtime su classe un oggetto quando si deriva una classe dalla classe `CObject`.

```
DECLARE_DYNAMIC(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

### <a name="remarks"></a>Note

Aggiungere il modulo di intestazione (h) per la classe DECLARE_DYNAMIC (macro), quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.

Se si usano la macro viene dinamico e IMPLEMENT_DYNAMIC come descritto, è quindi possibile usare la macro RUNTIME_CLASS e `CObject::IsKindOf` funzione per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNAMIC è incluso nella dichiarazione di classe, IMPLEMENT_DYNAMIC deve essere incluso nell'implementazione della classe.

Per altre informazioni su DECLARE_DYNAMIC (macro), vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [IMPLEMENT_DYNAMIC](#implement_dynamic).

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="declare_dyncreate"></a>  DECLARE_DYNCREATE

Consente agli oggetti di `CObject`-alle classi derivate di essere creati dinamicamente in fase di esecuzione.

```
DECLARE_DYNCREATE(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

### <a name="remarks"></a>Note

Il framework utilizza questa possibilità per creare nuovi oggetti in modo dinamico. Ad esempio, la nuova vista creata quando si apre un nuovo documento. Documento vista e le classi di frame devono supportare la creazione dinamica poiché è necessario crearli in modo dinamico il framework.

Aggiungere il DECLARE_DYNCREATE (macro) nel modulo. h per la classe, quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, IMPLEMENT_DYNCREATE deve essere incluso nell'implementazione della classe.

Per altre informazioni su DECLARE_DYNCREATE (macro), vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

> [!NOTE]
>  DECLARE_DYNCREATE (macro) include tutte le funzionalità di DECLARE_DYNAMIC.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [IMPLEMENT_DYNCREATE](#implement_dyncreate).

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="declareolectltype"></a>DECLARE_OLECTLTYPE

Consente di dichiarare la `GetUserTypeNameID` e `GetMiscStatus` funzioni membro della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome della classe del controllo.

### <a name="remarks"></a>Note

`GetUserTypeNameID` e `GetMiscStatus` sono funzioni virtuali pure, dichiarate in `COleControl`. Poiché queste funzioni sono pure virtuale, è necessario eseguirne l'override nella classe del controllo. Oltre a DECLARE_OLECTLTYPE, è necessario aggiungere implement_olectltype (macro) alla dichiarazione della classe di controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="declareproppageids"></a>DECLARE_PROPPAGEIDS

Dichiara che il controllo OLE fornisce un elenco delle pagine delle proprietà per visualizzarne le proprietà.

### <a name="syntax"></a>Sintassi

```
DECLARE_PROPPAGEIDS( class_name )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome della classe del controllo che possiede le pagine delle proprietà.

### <a name="remarks"></a>Note

Usare il `DECLARE_PROPPAGEIDS` macro alla fine della dichiarazione di classe. Quindi, nel file con estensione cpp che definisce le funzioni membro della classe, usare il `BEGIN_PROPPAGEIDS` macro, le voci di macro per ognuna delle pagine delle proprietà del controllo e il `END_PROPPAGEIDS` macro per dichiarare la fine dell'elenco di pagina di proprietà.

Per altre informazioni sulle pagine delle proprietà, vedere l'articolo [controlli ActiveX: Pagine delle proprietà](../mfc-activex-controls-property-pages.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="declare_serial"></a>  DECLARE_SERIAL

Genera il codice di intestazione C++ necessario per un `CObject`-classe derivata che può essere serializzato.

```
DECLARE_SERIAL(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

### <a name="remarks"></a>Note

La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto a e da un file.

Usare il DECLARE_SERIAL (macro) in un modulo. h e quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.

Se DECLARE_SERIAL è incluso nella dichiarazione di classe, IMPLEMENT_SERIAL deve essere incluso nell'implementazione della classe.

DECLARE_SERIAL (macro) include tutte le funzionalità di DECLARE_DYNAMIC e DECLARE_DYNCREATE.

È possibile usare la macro AFX_API per l'esportazione automatica il `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere tra parentesi quadre le dichiarazioni di classe (che si trova nel file con estensione h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per altre informazioni su DECLARE_SERIAL (macro), vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="implement_dynamic"></a>  IMPLEMENT_DYNAMIC

Genera il codice C++ necessario per una dinamica `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.

```
IMPLEMENT_DYNAMIC(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

*base_class_name*<br/>
Il nome della classe di base.

### <a name="remarks"></a>Note

Utilizzare IMPLEMENT_DYNAMIC (macro) in un modulo con estensione cpp e quindi collegare il codice risultante dell'oggetto una sola volta.

Per altre informazioni, vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]

[!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="implement_dyncreate"></a>  IMPLEMENT_DYNCREATE

Consente agli oggetti di `CObject`-alle classi derivate di essere creati dinamicamente in fase di esecuzione quando usato con DECLARE_DYNCREATE (macro).

```
IMPLEMENT_DYNCREATE(class_name, base_class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

*base_class_name*<br/>
Il nome effettivo della classe di base.

### <a name="remarks"></a>Note

Il framework utilizza questa possibilità per creare nuovi oggetti in modo dinamico, ad esempio, quando un oggetto che legge dal disco durante la serializzazione. Aggiungere la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe. Per altre informazioni, vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

Se si usano le macro IMPLEMENT_DYNCREATE e DECLARE_DYNCREATE, è quindi possibile usare la macro RUNTIME_CLASS e `CObject::IsKindOf` funzione membro per determinare la classe degli oggetti in fase di esecuzione.

Se DECLARE_DYNCREATE è incluso nella dichiarazione di classe, IMPLEMENT_DYNCREATE deve essere incluso nell'implementazione della classe.

Si noti che questa definizione di macro verrà richiamato il costruttore predefinito per la classe. Se un costruttore non superfluo viene implementato in modo esplicito dalla classe, anche in modo esplicito deve implementare anche il costruttore predefinito. Il costruttore predefinito può essere aggiunto alla classe **privati** oppure **protetto** sezioni di membri per impedire che viene chiamato dall'esterno dell'implementazione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]

[!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="implement_olecreate_flags"></a>  IMPLEMENT_OLECREATE_FLAGS

Entrambi questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere presente nel file di implementazione per qualsiasi classe che usa DECLARE_OLECREATE.

### <a name="syntax"></a>Sintassi

```
IMPLEMENT_OLECREATE_FLAGS( class_name, external_name, nFlags,
    l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

*external_name*<br/>
Il nome dell'oggetto esposto ad altre applicazioni (racchiusa tra virgolette).

*nFlags*<br/>
Contiene uno o più dei flag seguenti:

   - `afxRegInsertable` Consente il controllo venga visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.
   - `afxRegApartmentThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.
   - `afxRegFreeThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.

         You can combine the two flags `afxRegApartmentThreading` and `afxRegFreeThreading` to set ThreadingModel=Both. See [InprocServer32](/windows/desktop/com/inprocserver32) in the Windows SDK for more information on threading model registration.

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4* , *b5*, *b6*, *b7*, *b8* i componenti di CLSID della classe.

### <a name="remarks"></a>Note

> [!NOTE]
>  Se si usa IMPLEMENT_OLECREATE_FLAGS, è possibile specificare quale modello di threading supportati dall'oggetto utilizzando il *nFlags* parametro. Se si desidera supportare solo il modello il procedere singolo, utilizzare IMPLEMENT_OLECREATE.

Il nome esterno è l'identificatore esposta ad altre applicazioni. Le applicazioni client usano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID della classe OLE è un identificatore a 128 bit univoco per l'oggetto. È costituito da uno **lungo**, due **WORD**s e otto **BYTE**s, come rappresentate da *l*, *w1*, *w2*, e *b1* attraverso *b8* nella descrizione della sintassi. Le procedure guidate di creazione guidata applicazione e il codice crea gli ID di classe OLE univoco in base alle esigenze.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="implementolectltype"></a>IMPLEMENT_OLECTLTYPE

Implementa il `GetUserTypeNameID` e `GetMiscStatus` funzioni membro della classe del controllo.

### <a name="syntax"></a>Sintassi

```
DECLARE_OLECTLTYPE( class_name, idsUserTypeName, dwOleMisc )
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome della classe del controllo.

*idsUserTypeName*<br/>
L'ID di risorsa di una stringa contenente il nome esterno del controllo.

*dwOleMisc*<br/>
Enumerazione che contiene uno o più flag. Per altre informazioni su questa enumerazione, vedere [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc) nel SDK di Windows.

### <a name="remarks"></a>Note

Oltre a IMPLEMENT_OLECTLTYPE, è necessario aggiungere declare_olectltype (macro) alla dichiarazione della classe di controllo.

Il `GetUserTypeNameID` funzione membro restituisce la stringa di risorsa che identifica la classe del controllo. `GetMiscStatus` Restituisce i bit OLEMISC per il controllo. Questa enumerazione specifica una raccolta di impostazioni che descrive le varie caratteristiche del controllo. Per una descrizione completa delle impostazioni OLEMISC, vedere [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc) nel SDK di Windows.

> [!NOTE]
>  Le impostazioni predefinite utilizzate dal ActiveX ControlWizard sono: OLEMISC_ACTIVATEWHENVISIBLE OLEMISC_SETCLIENTSITEFIRST, OLEMISC_INSIDEOUT, OLEMISC_CANTLINKINSIDE e OLEMISC_RECOMPOSEONRESIZE.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="implement_serial"></a>  IMPLEMENT_SERIAL

Genera il codice C++ necessario per una dinamica `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.

```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

*base_class_name*<br/>
Il nome della classe di base.

*wSchema*<br/>
Un UINT "numero di versione" che verrà codificato nell'archivio per abilitare un programma durante la deserializzazione identificare e gestire i dati creati dalle versioni del programma in precedenza. Il numero di schema classe non deve essere -1.

### <a name="remarks"></a>Note

Utilizzare l'IMPLEMENT_SERIAL (macro) in un modulo. cpp; collegare quindi il codice risultante dell'oggetto una sola volta.

È possibile usare la macro AFX_API per l'esportazione automatica il `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Racchiudere tra parentesi quadre le dichiarazioni di classe (che si trova nel file con estensione h) con il codice seguente:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

Per altre informazioni, vedere la [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="runtime_class"></a>  RUNTIME_CLASS

Ottiene la struttura della classe in fase di esecuzione dal nome di una classe C++.

```
RUNTIME_CLASS(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe (non racchiuso tra virgolette).

### <a name="remarks"></a>Note

RUNTIME_CLASS restituisce un puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura per la classe specificata da *class_name*. Solo `CObject`-le classi derivate dichiarate con DECLARE_DYNAMIC, DECLARE_DYNCREATE o DECLARE_SERIAL restituiscono puntatori a un `CRuntimeClass` struttura.

Per altre informazioni, vedere [negli argomenti di classe da CObject](../../mfc/using-cobject.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="declare_olecreate"></a>  DECLARE_OLECREATE

Consente agli oggetti di `CCmdTarget`-alle classi derivate di essere creato tramite l'automazione OLE.

```
DECLARE_OLECREATE(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

### <a name="remarks"></a>Note

Questa macro consente alle altre applicazioni basate su OLE creare oggetti di questo tipo.

Aggiungere il declare_olecreate (macro) nel modulo. h per la classe e quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.

Se DECLARE_OLECREATE è incluso nella dichiarazione di classe, IMPLEMENT_OLECREATE deve essere incluso nell'implementazione della classe. Una dichiarazione di classe utilizzando DECLARE_OLECREATE deve utilizzare anche DECLARE_DYNCREATE o DECLARE_SERIAL.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="implement_olecreate"></a>  IMPLEMENT_OLECREATE

Entrambi questa macro o [IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags) deve essere presente nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE`.

```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome effettivo della classe.

*external_name*<br/>
Il nome dell'oggetto esposto ad altre applicazioni (racchiusa tra virgolette).

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4* , *b5*, *b6*, *b7*, *b8* i componenti di CLSID della classe.

### <a name="remarks"></a>Note

> [!NOTE]
>  Se si usa IMPLEMENT_OLECREATE, per impostazione predefinita, si supporta solo il singolo modello di threading. Se si usa IMPLEMENT_OLECREATE_FLAGS, è possibile specificare quale modello di threading supportati dall'oggetto utilizzando il *nFlags* parametro.

Il nome esterno è l'identificatore esposta ad altre applicazioni. Le applicazioni client usano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.

L'ID della classe OLE è un identificatore a 128 bit univoco per l'oggetto. È costituito da uno **lungo**, due **WORD**s e otto **BYTE**s, come rappresentate da *l*, *w1*, *w2*, e *b1* attraverso *b8* nella descrizione della sintassi. Le procedure guidate di creazione guidata applicazione e il codice crea gli ID di classe OLE univoco in base alle esigenze.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Isolamento della libreria di controlli comuni MFC](../isolation-of-the-mfc-common-controls-library.md)<br/>
[Chiave CLSID](/windows/desktop/com/clsid-key-hklm)
