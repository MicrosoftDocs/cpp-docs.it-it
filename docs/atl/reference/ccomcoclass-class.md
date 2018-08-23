---
title: Classe CComCoClass | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComCoClass
- ATLCOM/ATL::CComCoClass
- ATLCOM/ATL::CComCoClass::CreateInstance
- ATLCOM/ATL::CComCoClass::Error
- ATLCOM/ATL::CComCoClass::GetObjectCLSID
- ATLCOM/ATL::CComCoClass::GetObjectDescription
dev_langs:
- C++
helpviewer_keywords:
- CComCoClass class
- aggregation [C++], aggregation models
ms.assetid: 67cfefa4-8df9-47fa-ad58-2d1a1ae25762
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6043277eff17340cd57d0a6ee1bb8e84625f45b9
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42572835"
---
# <a name="ccomcoclass-class"></a>Classe CComCoClass
Questa classe fornisce metodi per la creazione di istanze di una classe e ottenere le relative proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, const CLSID* pclsid = &CLSID_NULL>  
class CComCoClass
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `CComCoClass`.  
  
 *pclsid*  
 Puntatore al CLSID dell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCoClass](#createinstance)|(Statico) Crea un'istanza della classe e le query per un'interfaccia.|  
|[CComCoClass::Error](#error)|(Statico) Restituisce informazioni dettagliate sull'errore al client.|  
|[CComCoClass::GetObjectCLSID](#getobjectclsid)|(Statico) Restituisce l'identificatore di classe oggetto.|  
|[CComCoClass::GetObjectDescription](#getobjectdescription)|(Statico) Eseguire l'override per restituire la descrizione dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComCoClass` fornisce metodi per il recupero CLSID di un oggetto, l'impostazione di informazioni sugli errori e la creazione di istanze della classe. Qualsiasi classe registrata nel [mappa di oggetti](http://msdn.microsoft.com/b57619cc-534f-4b8f-bfd4-0c12f937202f) deve essere derivato da `CComCoClass`.  
  
 `CComCoClass` definisce anche la classe factory e l'aggregazione modello predefinito per l'oggetto. `CComCoClass` Usa le due macro seguenti:  
  
- [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory) dichiara la class factory per essere [CComClassFactory](../../atl/reference/ccomclassfactory-class.md).  
  
- [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable) dichiara che è possibile aggregare l'oggetto.  
  
 È possibile eseguire l'override di uno di questi valori predefiniti specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) invece di `CComClassFactory`, specificare il [macro DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) macro:  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomcoclass-class_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>  CComCoClass  
 Usare questi `CreateInstance` funzioni per creare un'istanza di COM e recuperare un puntatore a interfaccia senza usare l'API COM.  
  
```
template <class  Q>
static HRESULT CreateInstance( Q** pp);

template <class  Q>
static HRESULT CreateInstance(IUnknown* punkOuter, Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 *Q*  
 L'interfaccia COM che deve essere restituito attraverso *pp*.  
  
 *punkOuter*  
 [in] Unknown esterno o controllo sconosciuto della funzione di aggregazione.  
  
 *profilo di porta*  
 [out] L'indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto se la creazione ha esito positivo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard. Visualizzare [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance) nel SDK di Windows per una descrizione dei possibili valori restituiti.  
  
### <a name="remarks"></a>Note  
 Usare il primo overload di questa funzione per la creazione di oggetti tipici. usare il secondo overload quando è necessario aggregare l'oggetto da creare.  
  
 Classe ATL che implementa l'oggetto COM necessario (vale a dire, la classe utilizzata come primo parametro di modello [CComCoClass](../../atl/reference/ccomcoclass-class.md)) deve essere nello stesso progetto del codice chiamante. La creazione dell'oggetto COM viene eseguita la class factory registrata per questa classe ATL.  
  
 Queste funzioni sono utili per la creazione di oggetti che hanno impedito di essere creabile esternamente tramite il [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto) macro. Sono inoltre utili in situazioni in cui si desidera evitare l'API COM per motivi di efficienza.  
  
 Si noti che l'interfaccia *Q* deve avere un IID associato che può essere recuperato tramite il [uuidof](../../cpp/uuidof-operator.md) operatore.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito `CDocument` è una classe ATL generato dalla procedura guidata derivata da `CComCoClass` che implementa il `IDocument` interfaccia. La classe è registrata nella mappa oggetto con la macro OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO in modo che i client non è possibile creare istanze del documento utilizzando [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance). `CApplication` è una coclasse che fornisce un metodo in uno dei propri interfacce COM per creare istanze della classe di documenti. Il codice seguente viene illustrato quanto è facile per creare istanze della classe documento utilizzando il `CreateInstance` membro ereditato dal `CComCoClass` classe di base.  
  
 [!code-cpp[NVC_ATL_COM#11](../../atl/codesnippet/cpp/ccomcoclass-class_2.cpp)]  
  
##  <a name="error"></a>  CComCoClass::Error  
 Questa funzione statica imposta il `IErrorInfo` interfaccia per fornire informazioni sull'errore al client.  
  
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
 *lpszDesc*  
 [in] Stringa che descrive l'errore. La versione di Unicode `Error` specifica che *lpszDesc* è di tipo LPCOLESTR; la versione ANSI specifica un tipo di LPCSTR.  
 *IID*  
 [in] IID dell'interfaccia che definisce l'errore o GUID_NULL (valore predefinito) se l'errore è definito dal sistema operativo.  
  
 *HRESULT*  
 [in] Il valore HRESULT desiderato restituito al chiamante. Il valore predefinito è 0. Per altre informazioni sulle *HRESULT*, vedere la sezione Osservazioni.  
  
 *nID*  
 [in] L'identificatore di risorsa in cui è archiviata la stringa di descrizione di errore. Questo valore deve trovarsi tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug, un' **ASSERT** determinerà se *nID* non esegue l'indicizzazione di una stringa valida. Nelle build di rilascio, imposterà la stringa di descrizione di errore a "Errore sconosciuto".  
  
 *dwHelpID*  
 [in] L'identificatore di contesto della Guida per l'errore.  
  
 *lpszHelpFile*  
 [in] Il percorso e il nome del file della Guida che descrive l'errore.  
  
 *hInst*  
 [in] Handle per la risorsa. Per impostazione predefinita, questo parametro è `_AtlModule::GetResourceInstance`, dove `_AtlModule` è l'istanza di global [CAtlModule](../../atl/reference/catlmodule-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Per chiamare `Error`, l'oggetto deve implementare il `ISupportErrorInfo Interface` interfaccia.  
  
 Se il *HRESULT* parametro è diverso da zero, quindi `Error` restituisce il valore di *HRESULT*. Se *HRESULT* è zero, le prime quattro versioni di `Error` restituisce DISP_E_EXCEPTION. Le ultime due versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF** *nID* **)**.  
  
##  <a name="getobjectclsid"></a>  CComCoClass::GetObjectCLSID  
 Fornisce un modo coerente di recupero CLSID dell'oggetto.  
  
```
static const CLSID& WINAPI GetObjectCLSID();
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore di classe dell'oggetto.  
  
##  <a name="getobjectdescription"></a>  CComCoClass::GetObjectDescription  
 Questa funzione statica recupera la descrizione di testo per l'oggetto della classe.  
  
```
static LPCTSTR WINAPI GetObjectDescription();
```  
  
### <a name="return-value"></a>Valore restituito  
 Descrizione dell'oggetto classe.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce NULL. È possibile eseguire l'override di questo metodo con il [DECLARE_OBJECT_DESCRIPTION](object-map-macros.md#declare_object_description) macro. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#12](../../atl/codesnippet/cpp/ccomcoclass-class_3.h)]  
  
 `GetObjectDescription` viene chiamato da `IComponentRegistrar::GetComponents`. `IComponentRegistrar` è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto di registrazione componenti con la creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il `IComponentRegistrar` interfaccia. `IComponentRegistrar` in genere viene utilizzata da Microsoft Transaction Server.  
  
 Per altre informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
