---
title: Macro di aggregazione e class factory
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_AGGREGATABLE
- atlcom/ATL::DECLARE_CLASSFACTORY
- atlcom/ATL::DECLARE_CLASSFACTORY_EX
- atlcom/ATL::DECLARE_CLASSFACTORY_AUTO_THREAD
- atlcom/ATL::DECLARE_CLASSFACTORY_SINGLETON
- atlcom/ATL::DECLARE_GET_CONTROLLING_UNKNOWN
- atlcom/ATL::DECLARE_NOT_AGGREGATABLE
- atlcom/ATL::DECLARE_ONLY_AGGREGATABLE
- atlcom/ATL::DECLARE_POLY_AGGREGATABLE
- atlcom/ATL::DECLARE_PROTECT_FINAL_CONSTRUCT
- atlcom/ATL::DECLARE_VIEW_STATUS
helpviewer_keywords:
- class factories, ATL macros
- aggregation [C++], ATL macros
ms.assetid: d99d379a-0eec-481f-8daa-252dac18f163
ms.openlocfilehash: 33f33043d1a2c824ada26399365541796178d21d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319330"
---
# <a name="aggregation-and-class-factory-macros"></a>Macro di aggregazione e class factory

Queste macro forniscono modi per controllare l'aggregazione e dichiarare le class factory.

|||
|-|-|
|[DECLARE_AGGREGATABLE](#declare_aggregatable)|Dichiara che l'oggetto può essere aggregato (impostazione predefinita).|
|[DECLARE_CLASSFACTORY](#declare_classfactory)|Dichiara la class factory [come CComClassFactory](../../atl/reference/ccomclassfactory-class.md), la class factory predefinita ATL.|
|[DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex)|Dichiara l'oggetto class factory come class factory.|
|[DECLARE_CLASSFACTORY2](#declare_classfactory2)|Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) come class factory.|
|[DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread)|Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.|
|[DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton)|Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) come class factory.|
|[DECLARE_GET_CONTROLLING_UNKNOWN](#declare_get_controlling_unknown)|Dichiara una `GetControllingUnknown` funzione virtuale.|
|[DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable)|Dichiara che l'oggetto non può essere aggregato.|
|[DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable)|Dichiara che l'oggetto deve essere aggregato.|
|[DECLARE_POLY_AGGREGATABLE](#declare_poly_aggregatable)|Controlla il valore dell'oggetto outer unknown e dichiara l'oggetto aggregabile o non aggregabile, a seconda dei casi.|
|[DECLARE_PROTECT_FINAL_CONSTRUCT](#declare_protect_final_construct)|Protegge l'oggetto esterno dall'eliminazione durante la costruzione di un oggetto interno.|
|[DECLARE_VIEW_STATUS](#declare_view_status)|Specifica i flag VIEWSTATUS per il contenitore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="declare_aggregatable"></a><a name="declare_aggregatable"></a>DECLARE_AGGREGATABLE

Specifica che l'oggetto può essere aggregato.

```
DECLARE_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome della classe che si sta definendo come aggregabile.

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene questa macro per specificare il modello di aggregazione predefinito. Per ignorare questa impostazione predefinita, specificare la [macro DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) o [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

## <a name="declare_classfactory"></a><a name="declare_classfactory"></a>DECLARE_CLASSFACTORY

Dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory.

```
DECLARE_CLASSFACTORY()
```

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) utilizza questa macro per dichiarare la class factory predefinita per l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#55](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_2.h)]

## <a name="ccomclassfactory-class"></a><a name="ccomclassfactory_class"></a>CComClassFactory (classe)

Questa classe implementa l'interfaccia [IClassFactory.](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)

```
class CComClassFactory : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Osservazioni

`CComClassFactory`implementa l'interfaccia [IClassFactory,](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) che contiene metodi per la creazione di un oggetto di un particolare CLSID, nonché il blocco della class factory in memoria per consentire la creazione più rapida di nuovi oggetti. `IClassFactory`deve essere implementato per ogni classe che si registra nel Registro di sistema e a cui si assegna un CLSID.

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include [DECLARE_CLASSFACTORY](#declare_classfactory)la macro `CComClassFactory` DECLARE_CLASSFACTORY , che viene dichiarata come class factory predefinita. Per ignorare questa impostazione predefinita, specificare una delle DECLARE_CLASSFACTORY macro*XXX* nella definizione della classe. Ad esempio, la macro [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) utilizza la classe specificata per la class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

La definizione di `CMyClassFactory` classe precedente specifica che verrà utilizzato come class factory predefinita dell'oggetto. `CMyClassFactory`deve derivare `CreateInstance`da ed eseguire l'override di `CComClassFactory` .

ATL fornisce altre tre macro che dichiarano una class factory:

- [DECLARE_CLASSFACTORY2](#declare_classfactory2) Utilizza [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) Utilizza [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che crea oggetti in più apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) Utilizza [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) .

## <a name="declare_classfactory_ex"></a><a name="declare_classfactory_ex"></a>DECLARE_CLASSFACTORY_EX

Dichiara `cf` di essere la class factory.

```
DECLARE_CLASSFACTORY_EX( cf )
```

### <a name="parameters"></a>Parametri

*Cfr*<br/>
[in] Nome della classe che implementa l'oggetto class factory.

### <a name="remarks"></a>Osservazioni

Il parametro *cf* deve derivare da `CreateInstance` [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) ed eseguire l'override del metodo.

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY,](#declare_classfactory) che specifica `CComClassFactory` come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_EX nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

## <a name="declare_classfactory2"></a><a name="declare_classfactory2"></a>DECLARE_CLASSFACTORY2

Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) come class factory.

```
DECLARE_CLASSFACTORY2( lic )
```

### <a name="parameters"></a>Parametri

*Lic*<br/>
[in] Classe che `VerifyLicenseKey`implementa `GetLicenseKey`, `IsLicenseValid`, e .

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY,](#declare_classfactory) che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY2 nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

## <a name="ccomclassfactory2-class"></a><a name="ccomclassfactory2_class"></a>Classe CComClassFactory2

Questa classe implementa l'interfaccia [IClassFactory2.](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2)

```
template <class license>
class  CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

### <a name="parameters"></a>Parametri

*Licenza*<br/>
Una classe che implementa le funzioni statiche seguenti:A class that implements the following static functions:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

### <a name="remarks"></a>Osservazioni

`CComClassFactory2`implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) , che è un'estensione di [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2`controlla la creazione di oggetti tramite una licenza. Una class factory in esecuzione su un computer con licenza può fornire un codice di licenza di runtime. Questo codice di licenza consente a un'applicazione di creare un'istanza di oggetti quando non esiste una licenza completa del computer.

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Per `CComClassFactory2`utilizzare , specificare la macro [DECLARE_CLASSFACTORY2](#declare_classfactory2) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

`CMyLicense`, il parametro di modello `CComClassFactory2`per , deve implementare le `VerifyLicenseKey`funzioni statiche , `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di classe di licenza semplice:The following is an example of a simple license class:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_5.h)]

`CComClassFactory2`deriva sia `CComClassFactory2Base` dalla licenza che dalla *licenza*. `CComClassFactory2Base`, a sua volta, deriva da `IClassFactory2` e **CComObjectRootEx\< CComGlobalsThreadModel >**.

## <a name="declare_classfactory_auto_thread"></a><a name="declare_classfactory_auto_thread"></a>DECLARE_CLASSFACTORY_AUTO_THREAD

Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.

```
DECLARE_CLASSFACTORY_AUTO_THREAD()
```

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY,](#declare_classfactory) che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_AUTO_THREAD nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.

Quando si creano oggetti in più apartment (in un server out-of-process), aggiungere DECLARE_CLASSFACTORY_AUTO_THREAD alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

## <a name="ccomclassfactoryautothread-class"></a><a name="ccomclassfactoryautothread_class"></a>CComClassFactoryAutoThread (classe)

Questa classe implementa il [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia e consente di creare oggetti in più apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

```
class CComClassFactoryAutoThread : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Osservazioni

`CComClassFactoryAutoThread`è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente di creare oggetti in più apartment. Per sfruttare questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Per `CComClassFactoryAutoThread`utilizzare , specificare la [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

## <a name="declare_classfactory_singleton"></a><a name="declare_classfactory_singleton"></a>DECLARE_CLASSFACTORY_SINGLETON

Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) come class factory.

```
DECLARE_CLASSFACTORY_SINGLETON( obj )
```

### <a name="parameters"></a>Parametri

*obj*<br/>
[in] Nome dell'oggetto classe.

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY,](#declare_classfactory) che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la DECLARE_CLASSFACTORY_SINGLETON macro nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

## <a name="ccomclassfactorysingleton-class"></a><a name="ccomclassfactorysingleton_class"></a>CComClassFactorySingleton (classe)

Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

### <a name="parameters"></a>Parametri

*T*<br/>
La tua classe.

`CComClassFactorySingleton`deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata `CreateInstance` al metodo esegue semplicemente una query su questo oggetto per un puntatore a interfaccia.

### <a name="remarks"></a>Osservazioni

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include [DECLARE_CLASSFACTORY](#declare_classfactory)la macro `CComClassFactory` DECLARE_CLASSFACTORY , che viene dichiarata come class factory predefinita. Per `CComClassFactorySingleton`utilizzare , specificare la macro [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

## <a name="declare_get_controlling_unknown"></a><a name="declare_get_controlling_unknown"></a>DECLARE_GET_CONTROLLING_UNKNOWN

Dichiara una funzione `GetControllingUnknown`virtuale.

```
DECLARE_GET_CONTROLLING_UNKNOWN()
```

### <a name="remarks"></a>Osservazioni

Aggiungere questa macro all'oggetto se viene `GetControllingUnknown` visualizzato il messaggio di `CComAggregateCreator`errore del compilatore non definito, ad esempio in .

## <a name="declare_not_aggregatable"></a><a name="declare_not_aggregatable"></a>DECLARE_NOT_AGGREGATABLE

Specifica che l'oggetto non può essere aggregato.

```
DECLARE_NOT_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome dell'oggetto classe che si sta definendo come non aggregabile.

### <a name="remarks"></a>Osservazioni

DECLARE_NOT_AGGREGATABLE `CreateInstance` causa la restituzione di un errore (CLASS_E_NOAGGREGATION) se viene effettuato un tentativo di aggregazione nell'oggetto.

Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene la macro [DECLARE_AGGREGATABLE,](#declare_aggregatable) che specifica che l'oggetto può essere aggregato. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_NOT_AGGREGATABLE nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

## <a name="declare_only_aggregatable"></a><a name="declare_only_aggregatable"></a>DECLARE_ONLY_AGGREGATABLE

Specifica che l'oggetto deve essere aggregato.

```
DECLARE_ONLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome dell'oggetto classe che si sta definendo come solo aggregabile.

### <a name="remarks"></a>Osservazioni

DECLARE_ONLY_AGGREGATABLE causa un errore (E_FAIL) se `CoCreate` viene effettuato un tentativo all'oggetto come oggetto non aggregato.

Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene la macro [DECLARE_AGGREGATABLE,](#declare_aggregatable) che specifica che l'oggetto può essere aggregato. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_ONLY_AGGREGATABLE nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#125](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_8.h)]

## <a name="declare_poly_aggregatable"></a><a name="declare_poly_aggregatable"></a>DECLARE_POLY_AGGREGATABLE

Specifica che al momento della creazione dell'oggetto viene creata un'istanza di **CComPolyObject \< ** *x.* **>**

```
DECLARE_POLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome dell'oggetto classe che si sta definendo come aggregabile o non aggregabile.

### <a name="remarks"></a>Osservazioni

Durante la creazione, viene controllato il valore dell'ignoto esterno. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se il valore sconosciuto `IUnknown` esterno non è NULL, viene implementato per un oggetto aggregato.

Il vantaggio di usare DECLARE_POLY_AGGREGATABLE è `CComAggObject` `CComObject` che si evita di avere entrambi e nel modulo per gestire i casi aggregati e non aggregati. Un `CComPolyObject` singolo oggetto gestisce entrambi i casi. Ciò significa che nel modulo sono presenti una sola copia della tabella vtable e una copia delle funzioni. Se il vtable è di grandi dimensioni, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable `CComPolyObject` è piccola, l'utilizzo può comportare una dimensione del modulo leggermente `CComAggObject` più `CComObject`grande perché non è ottimizzata per un oggetto aggregato o non aggregato, come lo sono e .

La macro DECLARE_POLY_AGGREGATABLE viene dichiarata automaticamente nell'oggetto se si utilizza la Creazione guidata controllo ATL per creare un controllo completo.

## <a name="declare_protect_final_construct"></a><a name="declare_protect_final_construct"></a>DECLARE_PROTECT_FINAL_CONSTRUCT

Protegge l'oggetto dall'eliminazione se (durante [FinalConstruct](ccomobjectrootex-class.md#finalconstruct)) l'oggetto aggregato interno incrementa il conteggio dei riferimenti e quindi decrementa il conteggio a 0.

```
DECLARE_PROTECT_FINAL_CONSTRUCT()
```

## <a name="declare_view_status"></a><a name="declare_view_status"></a>DECLARE_VIEW_STATUS

Inserire questa macro nella classe del controllo ActiveX ATL per specificare i flag VIEWSTATUS per il contenitore.

```
DECLARE_VIEW_STATUS( statusFlags )
```

### <a name="parameters"></a>Parametri

*statusFlags*<br/>
[in] Flag VIEWSTATUS. Vedere [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) per un elenco di flag.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#126](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_9.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
