---
title: Macro di aggregazione e di class factory
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
ms.openlocfilehash: 38239942b99a29b5777deef8000d9f1ab85b10e6
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78862606"
---
# <a name="aggregation-and-class-factory-macros"></a>Macro di aggregazione e di class factory

Queste macro forniscono modi per controllare l'aggregazione e dichiarare le class factory.

|||
|-|-|
|[DECLARE_AGGREGATABLE](#declare_aggregatable)|Dichiara che l'oggetto può essere aggregato (impostazione predefinita).|
|[DECLARE_CLASSFACTORY](#declare_classfactory)|Dichiara il class factory come [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), il class factory predefinito ATL.|
|[DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex)|Dichiara l'oggetto class factory come class factory.|
|[DECLARE_CLASSFACTORY2](#declare_classfactory2)|Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) come class factory.|
|[DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread)|Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.|
|[DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton)|Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) come class factory.|
|[DECLARE_GET_CONTROLLING_UNKNOWN](#declare_get_controlling_unknown)|Dichiara una funzione di `GetControllingUnknown` virtuale.|
|[DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable)|Dichiara che l'oggetto non può essere aggregato.|
|[DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable)|Dichiara che l'oggetto deve essere aggregato.|
|[DECLARE_POLY_AGGREGATABLE](#declare_poly_aggregatable)|Verifica il valore dell'oggetto sconosciuto esterno e dichiara l'oggetto aggregabile o non aggregabile, a seconda dei casi.|
|[DECLARE_PROTECT_FINAL_CONSTRUCT](#declare_protect_final_construct)|Protegge l'oggetto esterno dall'eliminazione durante la costruzione di un oggetto interno.|
|[DECLARE_VIEW_STATUS](#declare_view_status)|Specifica i flag VIEWSTATUS per il contenitore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_aggregatable"></a>DECLARE_AGGREGATABLE

Specifica che l'oggetto può essere aggregato.

```
DECLARE_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome della classe che si sta definendo come aggregabile.

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene questa macro per specificare il modello di aggregazione predefinito. Per eseguire l'override di questa impostazione predefinita, specificare la [DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) o la macro [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

##  <a name="declare_classfactory"></a>DECLARE_CLASSFACTORY

Dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory.

```
DECLARE_CLASSFACTORY()
```

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) usa questa macro per dichiarare il class factory predefinito per l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#55](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_2.h)]

##  <a name="ccomclassfactory_class"></a>Classe CComClassFactory

Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) .

```
class CComClassFactory : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Osservazioni

`CComClassFactory` implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) , che contiene i metodi per la creazione di un oggetto di un determinato CLSID, nonché il blocco del class factory in memoria per consentire la creazione di nuovi oggetti più rapidamente. `IClassFactory` deve essere implementato per ogni classe registrata nel registro di sistema e a cui viene assegnato un CLSID.

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come class factory predefinito. Per eseguire l'override di questa impostazione predefinita, specificare una delle macro DECLARE_CLASSFACTORY*xxx* nella definizione della classe. Ad esempio, la macro [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) usa la classe specificata per l'class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

La definizione di classe precedente specifica che `CMyClassFactory` verrà utilizzata come class factory predefinito dell'oggetto. `CMyClassFactory` necessario derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.

ATL fornisce altre tre macro che dichiarano un class factory:

- [DECLARE_CLASSFACTORY2](#declare_classfactory2) USA [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) USA [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più Apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) USA [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) .

##  <a name="declare_classfactory_ex"></a>DECLARE_CLASSFACTORY_EX

Dichiara `cf` come class factory.

```
DECLARE_CLASSFACTORY_EX( cf )
```

### <a name="parameters"></a>Parametri

*CF*<br/>
in Nome della classe che implementa l'oggetto class factory.

### <a name="remarks"></a>Osservazioni

Il parametro *CF* deve derivare da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) ed eseguire l'override del metodo `CreateInstance`.

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY](#declare_classfactory) , che specifica `CComClassFactory` come class factory predefinito. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_EX nella definizione di classe dell'oggetto, è necessario eseguire l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

##  <a name="declare_classfactory2"></a>DECLARE_CLASSFACTORY2

Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) come class factory.

```
DECLARE_CLASSFACTORY2( lic )
```

### <a name="parameters"></a>Parametri

*Lic*<br/>
in Classe che implementa `VerifyLicenseKey`, `GetLicenseKey`e `IsLicenseValid`.

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY](#declare_classfactory) , che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY2 nella definizione di classe dell'oggetto, è necessario eseguire l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

##  <a name="ccomclassfactory2_class"></a>Classe CComClassFactory2

Questa classe implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) .

```
template <class license>
class  CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

### <a name="parameters"></a>Parametri

*license*<br/>
Classe che implementa le funzioni statiche seguenti:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

### <a name="remarks"></a>Osservazioni

`CComClassFactory2` implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) , che è un'estensione di [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2` controlla la creazione di oggetti tramite una licenza. Una class factory eseguita in un computer con licenza può fornire un codice di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione di creare un'istanza degli oggetti quando non esiste una licenza completa del computer.

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinito. Per utilizzare `CComClassFactory2`, specificare la macro [DECLARE_CLASSFACTORY2](#declare_classfactory2) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

`CMyLicense`, il parametro di modello per `CComClassFactory2`, deve implementare le funzioni statiche `VerifyLicenseKey`, `GetLicenseKey`e `IsLicenseValid`. Di seguito è riportato un esempio di una classe di licenze semplice:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_5.h)]

`CComClassFactory2` deriva da `CComClassFactory2Base` e da una *licenza*. `CComClassFactory2Base`, a sua volta, deriva da `IClassFactory2` e **CComObjectRootEx\< CComGlobalsThreadModel >** .

##  <a name="declare_classfactory_auto_thread"></a>DECLARE_CLASSFACTORY_AUTO_THREAD

Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.

```
DECLARE_CLASSFACTORY_AUTO_THREAD()
```

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY](#declare_classfactory) , che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_AUTO_THREAD nella definizione di classe dell'oggetto, è necessario eseguire l'override di questa impostazione predefinita.

Quando si creano oggetti in più Apartment (in un server out-of-process), aggiungere DECLARE_CLASSFACTORY_AUTO_THREAD alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

##  <a name="ccomclassfactoryautothread_class"></a>Classe CComClassFactoryAutoThread

Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) e consente la creazione di oggetti in più Apartment.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

```
class CComClassFactoryAutoThread : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### <a name="remarks"></a>Osservazioni

`CComClassFactoryAutoThread` è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente la creazione di oggetti in più Apartment. Per sfruttare i vantaggi di questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinito. Per utilizzare `CComClassFactoryAutoThread`, specificare la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

##  <a name="declare_classfactory_singleton"></a>DECLARE_CLASSFACTORY_SINGLETON

Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) come class factory.

```
DECLARE_CLASSFACTORY_SINGLETON( obj )
```

### <a name="parameters"></a>Parametri

*obj*<br/>
in Nome dell'oggetto classe.

### <a name="remarks"></a>Osservazioni

[CComCoClass](../../atl/reference/ccomcoclass-class.md) include la macro [DECLARE_CLASSFACTORY](#declare_classfactory) , che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Tuttavia, includendo la macro DECLARE_CLASSFACTORY_SINGLETON nella definizione di classe dell'oggetto, è necessario eseguire l'override di questa impostazione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

##  <a name="ccomclassfactorysingleton_class"></a>Classe CComClassFactorySingleton

Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e USA [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe.

`CComClassFactorySingleton` deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al metodo `CreateInstance` esegue semplicemente query su questo oggetto per un puntatore di interfaccia.

### <a name="remarks"></a>Osservazioni

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come class factory predefinito. Per utilizzare `CComClassFactorySingleton`, specificare la macro [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

##  <a name="declare_get_controlling_unknown"></a>DECLARE_GET_CONTROLLING_UNKNOWN

Dichiara una funzione virtuale `GetControllingUnknown`.

```
DECLARE_GET_CONTROLLING_UNKNOWN()
```

### <a name="remarks"></a>Osservazioni

Aggiungere questa macro all'oggetto se viene ricevuto il messaggio di errore del compilatore che `GetControllingUnknown` non è definito (ad esempio, in `CComAggregateCreator`).

##  <a name="declare_not_aggregatable"></a>DECLARE_NOT_AGGREGATABLE

Specifica che l'oggetto non può essere aggregato.

```
DECLARE_NOT_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome dell'oggetto classe da definire come non aggregabile.

### <a name="remarks"></a>Osservazioni

DECLARE_NOT_AGGREGATABLE fa in modo che `CreateInstance` restituisca un errore (CLASS_E_NOAGGREGATION) se viene effettuato un tentativo di aggregazione sull'oggetto.

Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene la macro [DECLARE_AGGREGATABLE](#declare_aggregatable) , che specifica che l'oggetto può essere aggregato. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_NOT_AGGREGATABLE nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

##  <a name="declare_only_aggregatable"></a>DECLARE_ONLY_AGGREGATABLE

Specifica che l'oggetto deve essere aggregato.

```
DECLARE_ONLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome dell'oggetto classe che si sta definendo come solo aggregabile.

### <a name="remarks"></a>Osservazioni

DECLARE_ONLY_AGGREGATABLE genera un errore (E_FAIL) se viene effettuato un tentativo di `CoCreate` l'oggetto come oggetto non aggregato.

Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene la macro [DECLARE_AGGREGATABLE](#declare_aggregatable) , che specifica che l'oggetto può essere aggregato. Per eseguire l'override di questo comportamento predefinito, includere DECLARE_ONLY_AGGREGATABLE nella definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#125](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_8.h)]

##  <a name="declare_poly_aggregatable"></a>DECLARE_POLY_AGGREGATABLE

Specifica che viene creata un'istanza di **CComPolyObject \<** *x* **>** quando viene creato l'oggetto.

```
DECLARE_POLY_AGGREGATABLE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome dell'oggetto classe da definire come aggregabile o non aggregabile.

### <a name="remarks"></a>Osservazioni

Durante la creazione, il valore dell'oggetto sconosciuto esterno viene controllato. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se l'oggetto sconosciuto esterno non è NULL, `IUnknown` viene implementato per un oggetto aggregato.

Il vantaggio dell'uso di DECLARE_POLY_AGGREGATABLE consiste nel fatto che è possibile evitare di `CComAggObject` e `CComObject` nel modulo per gestire i case aggregati e non aggregati. Un singolo oggetto `CComPolyObject` gestisce entrambi i casi. Ciò significa che nel modulo esiste una sola copia di vtable e una copia delle funzioni. Se la tabella vtable è di grandi dimensioni, è possibile ridurre notevolmente le dimensioni del modulo. Tuttavia, se il valore vtable è ridotto, l'uso di `CComPolyObject` può comportare una dimensione del modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non aggregato, così come `CComAggObject` e `CComObject`.

La macro DECLARE_POLY_AGGREGATABLE viene dichiarata automaticamente nell'oggetto se si utilizza la creazione guidata controllo ATL per creare un controllo completo.

##  <a name="declare_protect_final_construct"></a>DECLARE_PROTECT_FINAL_CONSTRUCT

Protegge l'oggetto dall'eliminazione se (durante [FinalConstruct](ccomobjectrootex-class.md#finalconstruct)) l'oggetto aggregato interno incrementa il conteggio dei riferimenti, quindi decrementa il conteggio a 0.

```
DECLARE_PROTECT_FINAL_CONSTRUCT()
```

##  <a name="declare_view_status"></a>DECLARE_VIEW_STATUS

Posizionare questa macro in una classe Control del controllo ActiveX ATL per specificare i flag VIEWSTATUS per il contenitore.

```
DECLARE_VIEW_STATUS( statusFlags )
```

### <a name="parameters"></a>Parametri

*statusFlags*<br/>
in Flag VIEWSTATUS. Per un elenco di flag, vedere [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#126](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_9.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
