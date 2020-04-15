---
title: Classe CComCoClass
ms.date: 11/04/2016
f1_keywords:
- CComCoClass
- ATLCOM/ATL::CComCoClass
- ATLCOM/ATL::CComCoClass::CreateInstance
- ATLCOM/ATL::CComCoClass::Error
- ATLCOM/ATL::CComCoClass::GetObjectCLSID
- ATLCOM/ATL::CComCoClass::GetObjectDescription
helpviewer_keywords:
- CComCoClass class
- aggregation [C++], aggregation models
ms.assetid: 67cfefa4-8df9-47fa-ad58-2d1a1ae25762
ms.openlocfilehash: 11e724a982f3a2f404473dbdd34d848842cc8e14
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320831"
---
# <a name="ccomcoclass-class"></a>Classe CComCoClass

Questa classe fornisce metodi per la creazione di istanze di una classe e ottenere le relative proprietà.

## <a name="syntax"></a>Sintassi

```
template <class T, const CLSID* pclsid = &CLSID_NULL>
class CComCoClass
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `CComCoClass`derivata da .

*pclsid (pclsid)*<br/>
Puntatore al CLSID dell'oggetto.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCoClass::CreateInstance](#createinstance)|(Statico) Crea un'istanza della classe ed esegue una query per un'interfaccia.|
|[CComCoClass::Errore](#error)|(Statico) Restituisce informazioni dettagliate sull'errore al client.|
|[CComCoClass::GetObjectCLSID](#getobjectclsid)|(Statico) Restituisce l'identificatore di classe dell'oggetto.|
|[CComCoClass::GetObjectDescrizione](#getobjectdescription)|(Statico) Eseguire l'override per restituire la descrizione dell'oggetto.|

## <a name="remarks"></a>Osservazioni

`CComCoClass`fornisce metodi per il recupero del CLSID di un oggetto, l'impostazione delle informazioni sugli errori e la creazione di istanze della classe. Qualsiasi classe registrata nella mappa oggetti `CComCoClass`deve essere derivata da .

`CComCoClass`definisce anche la class factory predefinita e il modello di aggregazione per l'oggetto. `CComCoClass`utilizza le due macro seguenti:

- [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory) Dichiara la class factory [come CComClassFactory](../../atl/reference/ccomclassfactory-class.md).

- [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable) Dichiara che l'oggetto può essere aggregato.

È possibile eseguire l'override di uno di questi valori predefiniti specificando un'altra macro nella definizione della classe. Ad esempio, per utilizzare [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare la macro [DECLARE_CLASSFACTORY2:](aggregation-and-class-factory-macros.md#declare_classfactory2)

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomcoclass-class_1.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomcoclasscreateinstance"></a><a name="createinstance"></a>CComCoClass::CreateInstance

Utilizzare `CreateInstance` queste funzioni per creare un'istanza di un oggetto COM e recuperare un puntatore a interfaccia senza utilizzare l'API COM.

```
template <class  Q>
static HRESULT CreateInstance( Q** pp);

template <class  Q>
static HRESULT CreateInstance(IUnknown* punkOuter, Q** pp);
```

### <a name="parameters"></a>Parametri

*D*<br/>
L'interfaccia COM che deve essere restituita tramite *pp*.

*punkOuter*<br/>
[in] L'esterno sconosciuto o il controllo sconosciuto dell'aggregato.

*Pp*<br/>
[fuori] Indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto se la creazione ha esito positivo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Vedere [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance) in Windows SDK per una descrizione dei possibili valori restituiti.

### <a name="remarks"></a>Osservazioni

Utilizzare il primo overload di questa funzione per la creazione di oggetti tipici; utilizzare il secondo overload quando è necessario aggregare l'oggetto creato.

La classe ATL che implementa l'oggetto COM richiesto, ovvero la classe utilizzata come primo parametro di modello per [CComCoClass](../../atl/reference/ccomcoclass-class.md), deve trovarsi nello stesso progetto del codice chiamante. La creazione dell'oggetto COM viene eseguita dalla class factory registrata per questa classe ATL.

Queste funzioni sono utili per la creazione di oggetti che non sono stati creati dall'esterno utilizzando la macro [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.](object-map-macros.md#object_entry_non_createable_ex_auto) Sono utili anche nelle situazioni in cui si desidera evitare l'API COM per motivi di efficienza.

Si noti che all'interfaccia *Q* deve essere associato un IID che può essere recuperato utilizzando l'operatore [__uuidof.](../../cpp/uuidof-operator.md)

### <a name="example"></a>Esempio

Nell'esempio seguente `CDocument` è una classe ATL `CComCoClass` generata `IDocument` dalla procedura guidata derivata da che implementa l'interfaccia. La classe viene registrata nella mappa oggetti con la macro OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO in modo che i client non possano creare istanze del documento utilizzando [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance). `CApplication`è un CoClass che fornisce un metodo su una delle proprie interfacce COM per creare istanze della classe documento. Il codice seguente mostra come creare facilmente istanze `CreateInstance` della classe `CComCoClass` documento utilizzando il membro ereditato dalla classe base.

[!code-cpp[NVC_ATL_COM#11](../../atl/codesnippet/cpp/ccomcoclass-class_2.cpp)]

## <a name="ccomcoclasserror"></a><a name="error"></a>CComCoClass::Errore

Questa funzione statica `IErrorInfo` imposta l'interfaccia per fornire informazioni sugli errori al client.

```
static HRESULT WINAPI Error(
    LPCOLESTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

static HRESULT WINAPI Error(
    LPCOLESTR lpszDesc,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

static HRESULT WINAPI Error(
    LPCSTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

static HRESULT WINAPI Error(
    LPCSTR lpszDesc,
    DWORD dwHelpID,
    LPCSTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

static HRESULT WINAPI Error(
    UINT nID,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance ());

static HRESULT Error(
    UINT nID,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance());
```

### <a name="parameters"></a>Parametri

*lpszDesc*<br/>
[in] Stringa che descrive l'errore. La versione `Error` Unicode di specifica che *lpszDesc* è di tipo LPCOLESTR; la versione ANSI specifica un tipo di LPCSTR.

*Iid*<br/>
[in] IID dell'interfaccia che definisce l'errore o GUID_NULL (valore predefinito) se l'errore è definito dal sistema operativo.

*hRes*<br/>
[in] HRESULT che si desidera venga restituito al chiamante. Il valore predefinito è 0. Per ulteriori informazioni su *hRes*, vedere Osservazioni.

*nID*<br/>
[in] Identificatore di risorsa in cui è archiviata la stringa di descrizione dell'errore. Questo valore deve essere compreso tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug, un **ASSERT** verrà risultato se *nID* non indicizza una stringa valida. Nelle build di rilascio, la stringa di descrizione dell'errore verrà impostata su "Errore sconosciuto".

*dwHelpID (ID DwHelp)*<br/>
[in] Identificatore del contesto della Guida per l'errore.

*lpszHelpFile (file)*<br/>
[in] Il percorso e il nome del file della Guida che descrive l'errore.

*hInst*<br/>
[in] Handle per la risorsa. Per impostazione predefinita, questo parametro è `_AtlModule::GetResourceInstance`, dove `_AtlModule` è l'istanza globale di [CAtlModule](../../atl/reference/catlmodule-class.md).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Per `Error`chiamare , l'oggetto deve implementare l'interfaccia. `ISupportErrorInfo Interface`

Se il parametro *hRes* `Error` è diverso da zero, restituisce il valore di *hRes*. Se *hRes* è zero, le `Error` prime quattro versioni di return DISP_E_EXCEPTION. Le ultime due versioni restituiscono il risultato della macro **MAKE_HRESULT( 1, FACILITY_ITF,** *nID* **)**.

## <a name="ccomcoclassgetobjectclsid"></a><a name="getobjectclsid"></a>CComCoClass::GetObjectCLSID

Fornisce un modo coerente per recuperare il CLSID dell'oggetto.

```
static const CLSID& WINAPI GetObjectCLSID();
```

### <a name="return-value"></a>Valore restituito

Identificatore di classe dell'oggetto.

## <a name="ccomcoclassgetobjectdescription"></a><a name="getobjectdescription"></a>CComCoClass::GetObjectDescrizione

Questa funzione statica recupera la descrizione di testo per l'oggetto classe.

```
static LPCTSTR WINAPI GetObjectDescription();
```

### <a name="return-value"></a>Valore restituito

Descrizione dell'oggetto classe.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce NULL. È possibile eseguire l'override di questo metodo con la macro [DECLARE_OBJECT_DESCRIPTION.](object-map-macros.md#declare_object_description) Ad esempio:

[!code-cpp[NVC_ATL_COM#12](../../atl/codesnippet/cpp/ccomcoclass-class_3.h)]

`GetObjectDescription`viene chiamato `IComponentRegistrar::GetComponents`da . `IComponentRegistrar`è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto Component Registrar con la Creazione `IComponentRegistrar` guidata progetto ATL, la procedura guidata implementerà automaticamente l'interfaccia. `IComponentRegistrar`viene in genere utilizzato da Microsoft Transaction Server.

Per ulteriori informazioni sulla Creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
