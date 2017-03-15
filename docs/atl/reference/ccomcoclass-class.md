---
title: Classe CComCoClass | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComCoClass
- ATL.CComCoClass
- ATL::CComCoClass
dev_langs:
- C++
helpviewer_keywords:
- CComCoClass class
- aggregation [C++], aggregation models
ms.assetid: 67cfefa4-8df9-47fa-ad58-2d1a1ae25762
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6201051a38ac65788086dcf7ee4c3f3441988e71
ms.lasthandoff: 02/24/2017

---
# <a name="ccomcoclass-class"></a>CComCoClass (classe)
Questa classe fornisce metodi per la creazione di istanze di una classe e ottenere le relative proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, const CLSID* pclsid = &CLSID_NULL>  
class CComCoClass
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CComCoClass`.  
  
 *pclsid*  
 Puntatore al CLSID dell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CreateInstance](#createinstance)|(Statico) Crea un'istanza della classe e le query per un'interfaccia.|  
|[CComCoClass::Error](#error)|(Statico) Restituisce informazioni dettagliate sull'errore al client.|  
|[CComCoClass::GetObjectCLSID](#getobjectclsid)|(Statico) Restituisce l'identificatore di classe dell'oggetto.|  
|[CComCoClass::GetObjectDescription](#getobjectdescription)|(Statico) Eseguire l'override per restituire la descrizione dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComCoClass`fornisce metodi per il recupero CLSID di un oggetto, l'impostazione informazioni sull'errore e la creazione di istanze della classe. Qualsiasi classe registrata nel [mappa oggetto](http://msdn.microsoft.com/en-us/b57619cc-534f-4b8f-bfd4-0c12f937202f) devono essere derivati da `CComCoClass`.  
  
 `CComCoClass`definisce inoltre la classe factory e l'aggregazione modello predefinito per l'oggetto. `CComCoClass`utilizza le due macro seguenti:  
  
- [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4) dichiara la class factory per essere [CComClassFactory](../../atl/reference/ccomclassfactory-class.md).  
  
- [DECLARE_AGGREGATABLE](http://msdn.microsoft.com/library/e7e568d7-04e0-4226-b5dc-224deed229ab) dichiara che l'oggetto può essere aggregato.  
  
 È possibile eseguire l'override di queste impostazioni predefinite specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare il [macro DECLARE_CLASSFACTORY2](http://msdn.microsoft.com/library/38a6c969-7297-4bb1-9ba6-1fe2d355b285) macro:  
  
 [!code-cpp[NVC_ATL_COM N.&2;](../../atl/codesnippet/cpp/ccomcoclass-class_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namecreateinstancea--ccomcoclasscreateinstance"></a><a name="createinstance"></a>CreateInstance  
 Usare questi `CreateInstance` le funzioni per creare un'istanza di COM dell'oggetto e recuperare un puntatore a interfaccia senza utilizzare l'API COM.  
  
```
template <class  Q>
static HRESULT CreateInstance( Q** pp);

template <class  Q>
static HRESULT CreateInstance(IUnknown* punkOuter, Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `Q`  
 L'interfaccia COM che deve essere restituito tramite `pp`.  
  
 *punkOuter*  
 [in] Unknown esterno o controllo sconosciuto della funzione di aggregazione.  
  
 `pp`  
 [out] L'indirizzo di una variabile puntatore che riceve il puntatore di interfaccia richiesto se la creazione ha esito positivo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard. Vedere [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una descrizione dei possibili valori restituiti.  
  
### <a name="remarks"></a>Note  
 Utilizzare il primo overload di questa funzione per la creazione di oggetti tipico. Utilizzare il secondo overload quando è necessario aggregare l'oggetto da creare.  
  
 La classe ATL che implementa l'oggetto COM richiesto (ovvero, la classe utilizzata come primo parametro di modello [CComCoClass](../../atl/reference/ccomcoclass-class.md)) deve essere nello stesso progetto del codice chiamante. La creazione dell'oggetto COM viene eseguita la class factory registrata per questa classe ATL.  
  
 Queste funzioni sono utili per la creazione di oggetti che hanno impedito di essere creabili esternamente tramite il [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](http://msdn.microsoft.com/library/abdc093c-6502-42de-8419-b7ebf45299d1) (macro). Sono inoltre utili in situazioni in cui si desidera evitare l'API COM per motivi di efficienza.  
  
 Si noti che l'interfaccia `Q` deve avere un IID associato che può essere recuperato tramite il [uuidof](../../cpp/uuidof-operator.md) operatore.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, `CDocument` è una classe ATL generato dalla procedura guidata derivata da `CComCoClass` che implementa il **IDocument** interfaccia. La classe viene registrata nella mappa oggetto con il `OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO` (macro), i client non possono creare istanze del documento utilizzando [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615). `CApplication`è una coclasse che fornisce un metodo su una delle proprie interfacce COM per creare istanze della classe del documento. Il codice seguente mostra come semplice per creare istanze della classe del documento utilizzando il `CreateInstance` membro ereditato dalla `CComCoClass` classe di base.  
  
 [!code-cpp[NVC_ATL_COM&#11;](../../atl/codesnippet/cpp/ccomcoclass-class_2.cpp)]  
  
##  <a name="a-nameerrora--ccomcoclasserror"></a><a name="error"></a>CComCoClass::Error  
 Questa funzione statica imposta il `IErrorInfo` interfaccia per fornire informazioni sugli errori al client.  
  
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
 `lpszDesc`  
 [in] Stringa che descrive l'errore. La versione Unicode di `Error` specifica che `lpszDesc` è di tipo **LPCOLESTR**; la versione ANSI specifica un tipo di `LPCSTR`.  
  
 `iid`  
 [in] L'IID dell'interfaccia che definisce l'errore o `GUID_NULL` (il valore predefinito) se l'errore è definito dal sistema operativo.  
  
 `hRes`  
 [in] Il `HRESULT` si desidera venga restituito al chiamante. Il valore predefinito è 0. Per ulteriori informazioni su `hRes`, vedere la sezione Osservazioni.  
  
 `nID`  
 [in] Identificatore di risorsa in cui è archiviata la stringa di descrizione di errore. Questo valore deve essere tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug un **ASSERT** determinerà se `nID` non indicizza una stringa valida. Nelle build di rilascio, imposterà la stringa di descrizione di errore "Errore sconosciuto".  
  
 `dwHelpID`  
 [in] L'identificatore di contesto della Guida per l'errore.  
  
 `lpszHelpFile`  
 [in] Il percorso e il nome del file della Guida che descrive l'errore.  
  
 `hInst`  
 [in] Handle per la risorsa. Per impostazione predefinita, questo parametro è **_AtlModule::GetResourceInstance**, dove **_AtlModule** è l'istanza globale di [CAtlModule](../../atl/reference/catlmodule-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Per chiamare `Error`, l'oggetto deve implementare il `ISupportErrorInfo Interface` interfaccia.  
  
 Se il `hRes` parametro è diverso da zero, quindi `Error` restituisce il valore di `hRes`. Se `hRes` è zero, le prime quattro versioni di `Error` restituire `DISP_E_EXCEPTION`. Le due ultime versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF,** `nID` **)**.  
  
##  <a name="a-namegetobjectclsida--ccomcoclassgetobjectclsid"></a><a name="getobjectclsid"></a>CComCoClass::GetObjectCLSID  
 Fornisce un sistema coerente di recupero CLSID dell'oggetto.  
  
```
static const CLSID& WINAPI GetObjectCLSID();
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore di classe dell'oggetto.  
  
##  <a name="a-namegetobjectdescriptiona--ccomcoclassgetobjectdescription"></a><a name="getobjectdescription"></a>CComCoClass::GetObjectDescription  
 Questa funzione statica recupera la descrizione di testo per l'oggetto della classe.  
  
```
static LPCTSTR WINAPI GetObjectDescription();
```  
  
### <a name="return-value"></a>Valore restituito  
 Descrizione dell'oggetto classe.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce **NULL**. È possibile eseguire l'override di questo metodo con il [DECLARE_OBJECT_DESCRIPTION](http://msdn.microsoft.com/library/32ac881c-97b1-44e2-a017-0e23eb99ac93) (macro). Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM&#12;](../../atl/codesnippet/cpp/ccomcoclass-class_3.h)]  
  
 `GetObjectDescription`viene chiamato da **IComponentRegistrar::GetComponents**. **IComponentRegistrar** è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto di registrazione componenti con la creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il **IComponentRegistrar** interfaccia. **IComponentRegistrar** in genere viene utilizzato da Microsoft Transaction Server.  
  
 Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

