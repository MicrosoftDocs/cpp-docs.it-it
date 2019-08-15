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
ms.openlocfilehash: 5b4e39fa4d93893d288bb8de03d8a71b671be087
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497366"
---
# <a name="ccomcoclass-class"></a>Classe CComCoClass

Questa classe fornisce i metodi per creare istanze di una classe e ottenere le relative proprietà.

## <a name="syntax"></a>Sintassi

```
template <class T, const CLSID* pclsid = &CLSID_NULL>
class CComCoClass
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CComCoClass`.

*pclsid*<br/>
Puntatore al CLSID dell'oggetto.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCoClass::CreateInstance](#createinstance)|Statico Crea un'istanza della classe e le query per un'interfaccia.|
|[CComCoClass::Error](#error)|Statico Restituisce informazioni dettagliate sull'errore al client.|
|[CComCoClass::GetObjectCLSID](#getobjectclsid)|Statico Restituisce l'identificatore di classe dell'oggetto.|
|[CComCoClass::GetObjectDescription](#getobjectdescription)|Statico Eseguire l'override per restituire la descrizione dell'oggetto.|

## <a name="remarks"></a>Note

`CComCoClass`fornisce metodi per recuperare il CLSID di un oggetto, impostare informazioni sugli errori e creare istanze della classe. Qualsiasi classe registrata nella mappa degli oggetti deve essere derivata da `CComCoClass`.

`CComCoClass`definisce inoltre il class factory e il modello di aggregazione predefiniti per l'oggetto. `CComCoClass`Usa le due macro seguenti:

- [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory) Dichiara l'class factory [CComClassFactory](../../atl/reference/ccomclassfactory-class.md).

- [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable) Dichiara che l'oggetto può essere aggregato.

È possibile eseguire l'override di uno di questi valori predefiniti specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare la macro [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) :

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomcoclass-class_1.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="createinstance"></a>  CComCoClass::CreateInstance

Usare queste `CreateInstance` funzioni per creare un'istanza di un oggetto com e recuperare un puntatore di interfaccia senza usare l'API com.

```
template <class  Q>
static HRESULT CreateInstance( Q** pp);

template <class  Q>
static HRESULT CreateInstance(IUnknown* punkOuter, Q** pp);
```

### <a name="parameters"></a>Parametri

*Q*<br/>
Interfaccia COM che deve essere restituita tramite *PP*.

*punkOuter*<br/>
in L'oggetto sconosciuto esterno o il controllo sconosciuto dell'aggregazione.

*pp*<br/>
out Indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto se la creazione ha esito positivo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Per una descrizione dei possibili valori restituiti, vedere [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance) nella Windows SDK.

### <a name="remarks"></a>Note

Usare il primo overload di questa funzione per la creazione di oggetti tipici. utilizzare il secondo overload quando è necessario aggregare l'oggetto da creare.

La classe ATL che implementa l'oggetto COM richiesto (ovvero la classe utilizzata come primo parametro di modello per [CComCoClass](../../atl/reference/ccomcoclass-class.md)) deve trovarsi nello stesso progetto del codice chiamante. La creazione dell'oggetto COM viene eseguita dal class factory registrato per questa classe ATL.

Queste funzioni sono utili per la creazione di oggetti che non è stato possibile creare esternamente tramite la macro [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto) . Sono utili anche nelle situazioni in cui si desidera evitare l'API COM per motivi di efficienza.

Si noti che l'interfaccia *Q* deve avere un IID associato che può essere recuperato usando l'operatore [__uuidof](../../cpp/uuidof-operator.md) .

### <a name="example"></a>Esempio

Nell'esempio `CDocument` seguente è una classe ATL generata dalla procedura guidata derivata da `CComCoClass` che implementa l' `IDocument` interfaccia. La classe viene registrata nel mapping degli oggetti con la macro OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO, in modo che i client non possano creare istanze del documento utilizzando [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance). `CApplication`è una coclasse che fornisce un metodo su una delle proprie interfacce COM per creare istanze della classe Document. Il codice seguente mostra quanto sia semplice creare istanze della classe Document usando il `CreateInstance` membro ereditato `CComCoClass` dalla classe base.

[!code-cpp[NVC_ATL_COM#11](../../atl/codesnippet/cpp/ccomcoclass-class_2.cpp)]

##  <a name="error"></a>  CComCoClass::Error

Questa funzione statica imposta l' `IErrorInfo` interfaccia per fornire informazioni sull'errore al client.

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
in Stringa che descrive l'errore. La versione Unicode di `Error` specifica che *lpszDesc* è di tipo LPCOLESTR; la versione ANSI specifica un tipo di LPCSTR.

*iid*<br/>
in IID dell'interfaccia che definisce l'errore o GUID_NULL (valore predefinito) se l'errore è definito dal sistema operativo.

*hRes*<br/>
in HRESULT che si desidera venga restituito al chiamante. Il valore predefinito è 0. Per ulteriori informazioni su *hRes*, vedere la sezione Osservazioni.

*nID*<br/>
in Identificatore di risorsa in cui è archiviata la stringa di descrizione dell'errore. Questo valore deve essere compreso tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug, un'asserzione viene generata se *NID* non indicizza una stringa valida. Nelle build di rilascio, la stringa di descrizione dell'errore verrà impostata su "errore sconosciuto".

*dwHelpID*<br/>
in Identificatore del contesto della Guida per l'errore.

*lpszHelpFile*<br/>
in Il percorso e il nome del file della guida che descrive l'errore.

*hInst*<br/>
in Handle per la risorsa. Per impostazione predefinita, questo parametro `_AtlModule::GetResourceInstance`è, `_AtlModule` dove è l'istanza globale di [CAtlModule](../../atl/reference/catlmodule-class.md).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Per chiamare `Error`, l'oggetto deve implementare l' `ISupportErrorInfo Interface` interfaccia.

Se il parametro *hRes* è diverso da zero, `Error` restituisce il valore di *hRes*. Se *hRes* è zero, le prime quattro versioni di `Error` restituiscono DISP_E_EXCEPTION. Le ultime due versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF,** *NID* **)** .

##  <a name="getobjectclsid"></a>  CComCoClass::GetObjectCLSID

Fornisce un metodo coerente per recuperare il CLSID dell'oggetto.

```
static const CLSID& WINAPI GetObjectCLSID();
```

### <a name="return-value"></a>Valore restituito

Identificatore di classe dell'oggetto.

##  <a name="getobjectdescription"></a>  CComCoClass::GetObjectDescription

Questa funzione statica recupera la descrizione del testo per l'oggetto classe.

```
static LPCTSTR WINAPI GetObjectDescription();
```

### <a name="return-value"></a>Valore restituito

Descrizione dell'oggetto della classe.

### <a name="remarks"></a>Note

L'implementazione predefinita restituisce NULL. È possibile eseguire l'override di questo metodo con la macro [DECLARE_OBJECT_DESCRIPTION](object-map-macros.md#declare_object_description) . Ad esempio:

[!code-cpp[NVC_ATL_COM#12](../../atl/codesnippet/cpp/ccomcoclass-class_3.h)]

`GetObjectDescription`viene chiamato da `IComponentRegistrar::GetComponents`. `IComponentRegistrar`è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto registrar componente con la creazione guidata progetto ATL, l' `IComponentRegistrar` interfaccia verrà implementata automaticamente dalla procedura guidata. `IComponentRegistrar`viene in genere utilizzato da Microsoft Transaction Server.

Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
