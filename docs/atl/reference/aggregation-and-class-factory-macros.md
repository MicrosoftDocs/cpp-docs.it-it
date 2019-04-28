---
title: Aggregazione e macro di Class Factory
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
ms.openlocfilehash: 889ed4bbfc21209a64cfd9e4fee4b2335ce62010
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62249073"
---
# <a name="aggregation-and-class-factory-macros"></a>Aggregazione e macro di Class Factory

Queste macro forniscono modi di controllo dell'aggregazione e di dichiarazione class factory.

|||
|-|-|
|[DECLARE_AGGREGATABLE](#declare_aggregatable)|Dichiara che l'oggetto può essere aggregata (predefinito).|
|[DECLARE_CLASSFACTORY](#declare_classfactory)|Dichiara la class factory sia [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), la class factory predefinita ATL.|
|[DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex)|Dichiara la classe factory oggetto la class factory.|
|[DECLARE_CLASSFACTORY2](#declare_classfactory2)|Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) sia la class factory.|
|[DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread)|Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) sia la class factory.|
|[DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton)|Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) sia la class factory.|
|[DECLARE_GET_CONTROLLING_UNKNOWN](#declare_get_controlling_unknown)|Dichiara un virtuale `GetControllingUnknown` (funzione).|
|[DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable)|Dichiara che l'oggetto non può essere aggregato.|
|[DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable)|Dichiara che l'oggetto deve essere aggregato.|
|[DECLARE_POLY_AGGREGATABLE](#declare_poly_aggregatable)|Controlla il valore di unknown esterno e dichiara l'oggetto come aggregabile o non aggregabile, come appropriato.|
|[DECLARE_PROTECT_FINAL_CONSTRUCT](#declare_protect_final_construct)|Protegge l'oggetto esterno dall'eliminazione durante la costruzione di un oggetto interno.|
|[DECLARE_VIEW_STATUS](#declare_view_status)|Specifica i flag VIEWSTATUS al contenitore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_aggregatable"></a>  DECLARE_AGGREGATABLE

Specifica che è possibile aggregare l'oggetto.

```
DECLARE_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome della classe si sta definendo come aggregabile.

### <a name="remarks"></a>Note

[CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene questa macro in modo da specificare il modello di aggregazione predefinita. Per eseguire l'override di questa impostazione predefinita, specificare il [DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) oppure [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) macro nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

##  <a name="declare_classfactory"></a>  DECLARE_CLASSFACTORY

Dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) sia la class factory.

```
DECLARE_CLASSFACTORY()
```

### <a name="remarks"></a>Note

[CComCoClass](../../atl/reference/ccomcoclass-class.md) questa macro viene utilizzata per dichiarare la class factory predefinita per l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#55](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_2.h)]

##  <a name="ccomclassfactory_class"></a>  Classe CComClassFactory

Questa classe implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia.

```
class CComClassFactory : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Note

`CComClassFactory` implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia, che contiene metodi per la creazione di un oggetto di un particolare CLSID, nonché la class factory in memoria per consentire di creare più rapidamente nuovi oggetti di blocco. `IClassFactory` deve essere implementato per ogni classe che si registra nel Registro di sistema e a cui si assegna un CLSID.

Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare uno del DECLARE_CLASSFACTORY*XXX* macro nella definizione della classe. Ad esempio, il [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) macro Usa la classe specificata per la class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

La definizione di classe precedente specifica che `CMyClassFactory` verrà usato come class factory predefinita dell'oggetto. `CMyClassFactory` deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.

ATL fornisce tre altre macro che dichiarano una class factory:

- [Macro DECLARE_CLASSFACTORY2](#declare_classfactory2) viene utilizzato [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [: DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) viene utilizzato [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) viene utilizzato [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto.

##  <a name="declare_classfactory_ex"></a>  DECLARE_CLASSFACTORY_EX

Dichiara `cf` sia la class factory.

```
DECLARE_CLASSFACTORY_EX( cf )
```

### <a name="parameters"></a>Parametri

*cf*<br/>
[in] Il nome della classe che implementa l'oggetto della classe factory.

### <a name="remarks"></a>Note

Il *cf* parametro deve derivare da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) ed eseguire l'override di `CreateInstance` (metodo).

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include le [DECLARE_CLASSFACTORY](#declare_classfactory) macro, che consente di specificare `CComClassFactory` come la class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_EX nella definizione di classe dell'oggetto, si esegue l'override questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

##  <a name="declare_classfactory2"></a>  DECLARE_CLASSFACTORY2

Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) sia la class factory.

```
DECLARE_CLASSFACTORY2( lic )
```

### <a name="parameters"></a>Parametri

*lic*<br/>
[in] Una classe che implementa `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`.

### <a name="remarks"></a>Note

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include le [DECLARE_CLASSFACTORY](#declare_classfactory) macro, che consente di specificare [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo la macro macro DECLARE_CLASSFACTORY2 nella definizione di classe dell'oggetto, si esegue l'override questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

##  <a name="ccomclassfactory2_class"></a>  Classe CComClassFactory2

Questa classe implementa il [IClassFactory2](/windows/desktop/api/ocidl/nn-ocidl-iclassfactory2) interfaccia.

```
template <class license>
class  CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

### <a name="parameters"></a>Parametri

*license*<br/>
Una classe che implementa le funzioni statiche seguenti:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

### <a name="remarks"></a>Note

`CComClassFactory2` implementa il [IClassFactory2](/windows/desktop/api/ocidl/nn-ocidl-iclassfactory2) interfaccia, che è un'estensione del [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2` creazione di oggetti di controlli tramite una licenza. Una classe factory l'esecuzione di un computer con licenza può fornire una chiave di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione creare gli oggetti quando una licenza completa macchina non esiste.

Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactory2`, specificare il [macro DECLARE_CLASSFACTORY2](#declare_classfactory2) macro nella definizione di classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

`CMyLicense`, il parametro di modello per `CComClassFactory2`, deve implementare le funzioni statiche `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di una classe semplice di licenza:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_5.h)]

`CComClassFactory2` deriva da entrambe `CComClassFactory2Base` e *licenza*. `CComClassFactory2Base`, a sua volta deriva da `IClassFactory2` e **CComObjectRootEx\< CComGlobalsThreadModel >**.

##  <a name="declare_classfactory_auto_thread"></a>  DECLARE_CLASSFACTORY_AUTO_THREAD

Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) sia la class factory.

```
DECLARE_CLASSFACTORY_AUTO_THREAD()
```

### <a name="remarks"></a>Note

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include le [DECLARE_CLASSFACTORY](#declare_classfactory) macro, che consente di specificare [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo la macro: DECLARE_CLASSFACTORY_AUTO_THREAD nella definizione di classe dell'oggetto, si esegue l'override questa impostazione predefinita.

Quando si creano oggetti in più apartment (in un server out-of-process), aggiungere: DECLARE_CLASSFACTORY_AUTO_THREAD alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

##  <a name="ccomclassfactoryautothread_class"></a>  Classe CComClassFactoryAutoThread

Questa classe implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia e consente di creare in apartment più oggetti.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

```
class CComClassFactoryAutoThread : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Note

`CComClassFactoryAutoThread` è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente di creare in apartment più oggetti. Per sfruttare i vantaggi di questo supporto, il modulo EXE da derivare [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactoryAutoThread`, specificare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

##  <a name="declare_classfactory_singleton"></a>  DECLARE_CLASSFACTORY_SINGLETON

Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) sia la class factory.

```
DECLARE_CLASSFACTORY_SINGLETON( obj )
```

### <a name="parameters"></a>Parametri

*obj*<br/>
[in] Il nome dell'oggetto di classe.

### <a name="remarks"></a>Note

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include le [DECLARE_CLASSFACTORY](#declare_classfactory) macro, che consente di specificare [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_SINGLETON nella definizione di classe dell'oggetto, si esegue l'override questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

##  <a name="ccomclassfactorysingleton_class"></a>  Classe CComClassFactorySingleton

Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e Usa [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe.

`CComClassFactorySingleton` deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e Usa [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al `CreateInstance` metodo semplicemente la query a questo oggetto con un puntatore a interfaccia.

### <a name="remarks"></a>Note

Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per utilizzare `CComClassFactorySingleton`, specificare il [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) macro nella definizione di classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

##  <a name="declare_get_controlling_unknown"></a>  DECLARE_GET_CONTROLLING_UNKNOWN

Dichiara una funzione virtuale `GetControllingUnknown`.

```
DECLARE_GET_CONTROLLING_UNKNOWN()
```

### <a name="remarks"></a>Note

Aggiungere questa macro all'oggetto se viene visualizzato il messaggio di errore del compilatore `GetControllingUnknown` non è definito (ad esempio, in `CComAggregateCreator`).

##  <a name="declare_not_aggregatable"></a>  DECLARE_NOT_AGGREGATABLE

Specifica che l'oggetto non può essere aggregato.

```
DECLARE_NOT_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome dell'oggetto di classe si sta definendo come non aggregabile.

### <a name="remarks"></a>Note

Fa sì che DECLARE_NOT_AGGREGATABLE `CreateInstance` per restituire un errore (CLASS_E_NOAGGREGATION) se tenta di aggregare l'oggetto.

Per impostazione predefinita [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene il [DECLARE_AGGREGATABLE](#declare_aggregatable) (macro), che specifica che è possibile aggregare l'oggetto. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_NOT_AGGREGATABLE nella definizione di classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

##  <a name="declare_only_aggregatable"></a>  DECLARE_ONLY_AGGREGATABLE

Specifica che l'oggetto deve essere aggregato.

```
DECLARE_ONLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome dell'oggetto di classe si sta definendo come solo aggregabile.

### <a name="remarks"></a>Note

Se viene effettuato un tentativo di DECLARE_ONLY_AGGREGATABLE causerà un errore (E_FAIL) `CoCreate` all'oggetto come oggetto non aggregata.

Per impostazione predefinita [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene il [DECLARE_AGGREGATABLE](#declare_aggregatable) (macro), che specifica che è possibile aggregare l'oggetto. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_ONLY_AGGREGATABLE nella definizione di classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#125](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_8.h)]

##  <a name="declare_poly_aggregatable"></a>  DECLARE_POLY_AGGREGATABLE

Specifica che un'istanza di **CComPolyObject \<**  *x* **>** viene creato quando viene creato l'oggetto.

```
DECLARE_POLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome dell'oggetto di classe si sta definendo come aggregabile o non aggregabile.

### <a name="remarks"></a>Note

Durante la creazione, viene controllato il valore di unknown esterno. Se è NULL, `IUnknown` viene implementata per un oggetto non aggregato. Se unknown esterno non è NULL, `IUnknown` è implementata per un oggetto aggregato.

Il vantaggio dell'uso DECLARE_POLY_AGGREGATABLE è evitare che dispone di entrambe `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che esiste solo una copia dell'oggetto vtable e una copia delle funzioni nel modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, usando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o aggregato, perché sono `CComAggObject` e `CComObject`.

La macro DECLARE_POLY_AGGREGATABLE viene dichiarata nell'oggetto automaticamente se si usa la creazione guidata controllo ATL per creare un controllo completo.

##  <a name="declare_protect_final_construct"></a>  DECLARE_PROTECT_FINAL_CONSTRUCT

Protegge l'oggetto venga eliminato se (durante [FinalConstruct](ccomobjectrootex-class.md#finalconstruct)) l'oggetto aggregato interno incrementa il conteggio dei riferimenti, quindi decrementa il conteggio su 0.

```
DECLARE_PROTECT_FINAL_CONSTRUCT()
```

##  <a name="declare_view_status"></a>  DECLARE_VIEW_STATUS

Inserire questa macro nella classe di controllo di un controllo ActiveX di ATL per specificare i flag VIEWSTATUS al contenitore.

```
DECLARE_VIEW_STATUS( statusFlags )
```

### <a name="parameters"></a>Parametri

*statusFlags*<br/>
[in] I flag VIEWSTATUS. Visualizzare [VIEWSTATUS](/windows/desktop/api/ocidl/ne-ocidl-tagviewstatus) per un elenco di flag.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#126](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_9.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
