---
title: Aggregazione e macro di Class Factory | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- class factories, ATL macros
- aggregation [C++], ATL macros
ms.assetid: d99d379a-0eec-481f-8daa-252dac18f163
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8569d4ecbbd74a6d2d37701a4ec22e56cbe9f100
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="aggregation-and-class-factory-macros"></a>Aggregazione e macro di Class Factory
Queste macro consentono di controllare l'aggregazione e di dichiarazione class factory.  
  
|||  
|-|-|  
|[DECLARE_AGGREGATABLE](#declare_aggregatable)|Dichiara che l'oggetto può essere aggregato (impostazione predefinita).|  
|[DECLARE_CLASSFACTORY](#declare_classfactory)|Dichiara la class factory da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), la class factory predefinita ATL.|  
|[DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex)|Dichiara l'oggetto della classe factory per la class factory.|  
|[MACRO DECLARE_CLASSFACTORY2](#declare_classfactory2)|Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) sia la class factory.|  
|[: DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread)|Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) sia la class factory.|  
|[DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton)|Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) sia la class factory.|  
|[DECLARE_GET_CONTROLLING_UNKNOWN](#declare_get_controlling_unknown)|Dichiara un virtuale `GetControllingUnknown` (funzione).|  
|[DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable)|Dichiara che l'oggetto non può essere aggregato.|  
|[DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable)|Dichiara che l'oggetto deve essere aggregato.|  
|[DECLARE_POLY_AGGREGATABLE](#declare_poly_aggregatable)|Controlla il valore di unknown esterno e dichiara l'oggetto aggregabile o non aggregabile, a seconda dei casi.|  
|[MACRO DECLARE_PROTECT_FINAL_CONSTRUCT](#declare_protect_final_construct)|Protegge l'oggetto esterno dall'eliminazione durante la costruzione di un oggetto interno.|  
|[DECLARE_VIEW_STATUS](#declare_view_status)|Specifica il **VIEWSTATUS** flag per il contenitore.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="declare_aggregatable"></a>  DECLARE_AGGREGATABLE  
 Specifica che è possibile aggregare l'oggetto.  
  
```
DECLARE_AGGREGATABLE( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome della classe a cui che si desidera definire come aggregabile.  
  
### <a name="remarks"></a>Note  
 [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene questa macro per specificare il modello di aggregazione predefinito. Per eseguire l'override di questa impostazione predefinita, specificare il [DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) o [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) macro nella definizione della classe.  
  
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
  
##  <a name="ccomclassfactory_class"></a>  CComClassFactory (classe)  
 Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia.  
  
```
class CComClassFactory : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
### <a name="remarks"></a>Note  
 `CComClassFactory` implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia, che contiene metodi per la creazione di un oggetto di un particolare CLSID, come blocco la class factory in memoria per consentire di nuovi oggetti possono essere creati più rapidamente. **IClassFactory** deve essere implementato per tutte le classi che si registrano nel Registro di sistema e a cui si assegna un CLSID.  
  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare uno del `DECLARE_CLASSFACTORY` *XXX* macro nella definizione della classe. Ad esempio, il [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) (macro) utilizza la classe specificata per la class factory:  
  
 [!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]  
  
 Consente di specificare che la precedente definizione di classe **CMyClassFactory** verrà utilizzato come una class factory predefinita dell'oggetto. **CMyClassFactory** deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.  
  
 ATL fornisce tre altre macro che dichiara una class factory:  
  
- [Macro DECLARE_CLASSFACTORY2](#declare_classfactory2) utilizza [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.  
  
- [: DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) utilizza [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più apartment.  
  
- [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) utilizza [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce una singola [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto.  
  
##  <a name="declare_classfactory_ex"></a>  DECLARE_CLASSFACTORY_EX  
 Dichiara `cf` sia la class factory.  
  
```
DECLARE_CLASSFACTORY_EX( cf )
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 [in] Il nome della classe che implementa l'oggetto class factory.  
  
### <a name="remarks"></a>Note  
 Il `cf` parametro deve derivare da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) ed eseguire l'override di `CreateInstance` metodo.  
  
 [CComCoClass](../../atl/reference/ccomcoclass-class.md) include il [DECLARE_CLASSFACTORY](#declare_classfactory) (macro), che specifica `CComClassFactory` come la class factory predefinita. Tuttavia, includendo il `DECLARE_CLASSFACTORY_EX` macro nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]  
  
##  <a name="declare_classfactory2"></a>  MACRO DECLARE_CLASSFACTORY2  
 Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) sia la class factory.  
  
```
DECLARE_CLASSFACTORY2( lic )
```  
  
### <a name="parameters"></a>Parametri  
 *GCI*  
 [in] Una classe che implementa `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`.  
  
### <a name="remarks"></a>Note  
 [CComCoClass](../../atl/reference/ccomcoclass-class.md) include il [DECLARE_CLASSFACTORY](#declare_classfactory) (macro), che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo il `DECLARE_CLASSFACTORY2` macro nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]  
  
##  <a name="ccomclassfactory2_class"></a>  Classe CComClassFactory2  
 Questa classe implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia.  
  
```
template <class license>
class  CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```    
  
### <a name="parameters"></a>Parametri  
 *Licenza*  
 Una classe che implementa le seguenti funzioni statiche:  
  
- **VerifyLicenseKey BOOL statico (BSTR** `bstr` **);**  
  
- **GetLicenseKey BOOL statico (DWORD** `dwReserved` **, BSTR\***  `pBstr` **);**  
  
- **(statico) BOOL IsLicenseValid;**  
  
### <a name="remarks"></a>Note  
 `CComClassFactory2` implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia, che è un'estensione di [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364). **IClassFactory2** creazione tramite una licenza di oggetti ai controlli. Una classe factory l'esecuzione di un computer con licenza, è possibile fornire un codice di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione creare istanze degli oggetti quando non esiste una licenza di computer completo.  
  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactory2`, specificare il [macro DECLARE_CLASSFACTORY2](#declare_classfactory2) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]  
  
 **CMyLicense**, il parametro di modello `CComClassFactory2`, deve implementare le funzioni statiche `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di una classe semplice di licenza:  
  
 [!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_5.h)]  
  
 `CComClassFactory2` deriva da entrambi **CComClassFactory2Base** e *licenza*. **CComClassFactory2Base**, a sua volta deriva da **IClassFactory2** e **CComObjectRootEx\< CComGlobalsThreadModel >**.  
  
##  <a name="declare_classfactory_auto_thread"></a>  : DECLARE_CLASSFACTORY_AUTO_THREAD  
 Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) sia la class factory.  
  
```
DECLARE_CLASSFACTORY_AUTO_THREAD()
```  
  
### <a name="remarks"></a>Note  
 [CComCoClass](../../atl/reference/ccomcoclass-class.md) include il [DECLARE_CLASSFACTORY](#declare_classfactory) (macro), che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo il `DECLARE_CLASSFACTORY_AUTO_THREAD` macro nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.  
  
 Quando si creano oggetti in più apartment (in un server out-of-process), aggiungere `DECLARE_CLASSFACTORY_AUTO_THREAD` alla classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]  
  
##  <a name="ccomclassfactoryautothread_class"></a>  Classe CComClassFactoryAutoThread  
 Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) di interfaccia e consente agli oggetti da creare in più apartment.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
```
class CComClassFactoryAutoThread : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
### <a name="remarks"></a>Note  
 `CComClassFactoryAutoThread` è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente agli oggetti da creare in più apartment. Per sfruttare i vantaggi di questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactoryAutoThread`, specificare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]  
  
##  <a name="declare_classfactory_singleton"></a>  DECLARE_CLASSFACTORY_SINGLETON  
 Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) sia la class factory.  
  
```
DECLARE_CLASSFACTORY_SINGLETON( obj )
```  
  
### <a name="parameters"></a>Parametri  
 `obj`  
 [in] Il nome dell'oggetto di classe.  
  
### <a name="remarks"></a>Note  
 [CComCoClass](../../atl/reference/ccomcoclass-class.md) include il [DECLARE_CLASSFACTORY](#declare_classfactory) (macro), che specifica [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Tuttavia, includendo il `DECLARE_CLASSFACTORY_SINGLETON` macro nella definizione di classe dell'oggetto, si esegue l'override di questa impostazione predefinita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]  
  
##  <a name="ccomclassfactorysingleton_class"></a>  Classe CComClassFactorySingleton  
 Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 La classe.  
  
 `CComClassFactorySingleton` deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e Usa [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al `CreateInstance` metodo semplicemente la query a questo oggetto per un puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per utilizzare `CComClassFactorySingleton`, specificare il [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]  
  
##  <a name="declare_get_controlling_unknown"></a>  DECLARE_GET_CONTROLLING_UNKNOWN  
 Dichiara una funzione virtuale `GetControllingUnknown`.  
  
```
DECLARE_GET_CONTROLLING_UNKNOWN()
```  
  
### <a name="remarks"></a>Note  
 Aggiungere questa macro all'oggetto se viene visualizzato il messaggio di errore del compilatore `GetControllingUnknown` è definito (ad esempio, in **CComAggregateCreator**).  
  
##  <a name="declare_not_aggregatable"></a>  DECLARE_NOT_AGGREGATABLE  
 Specifica che l'oggetto non può essere aggregato.  
  
```
DECLARE_NOT_AGGREGATABLE( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome dell'oggetto di classe a cui che si desidera definire come non aggregabile.  
  
### <a name="remarks"></a>Note  
 `DECLARE_NOT_AGGREGATABLE` fa sì che `CreateInstance` per restituire un errore ( **CLASS_E_NOAGGREGATION**) se viene effettuato un tentativo per aggregare l'oggetto.  
  
 Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene il [DECLARE_AGGREGATABLE](#declare_aggregatable) (macro), che specifica che è possibile aggregare l'oggetto. Per eseguire l'override di questo comportamento predefinito, includere `DECLARE_NOT_AGGREGATABLE` nella definizione della classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]  
  
##  <a name="declare_only_aggregatable"></a>  DECLARE_ONLY_AGGREGATABLE  
 Specifica che l'oggetto deve essere aggregato.  
  
```
DECLARE_ONLY_AGGREGATABLE( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome dell'oggetto di classe a cui che si desidera definire come aggregabile solo.  
  
### <a name="remarks"></a>Note  
 `DECLARE_ONLY_AGGREGATABLE` viene generato un errore ( **E_FAIL**) se viene effettuato un tentativo **CoCreate** l'oggetto come non aggregati.  
  
 Per impostazione predefinita, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contiene il [DECLARE_AGGREGATABLE](#declare_aggregatable) (macro), che specifica che è possibile aggregare l'oggetto. Per eseguire l'override di questo comportamento predefinito, includere `DECLARE_ONLY_AGGREGATABLE` nella definizione della classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#125](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_8.h)]  
  
##  <a name="declare_poly_aggregatable"></a>  DECLARE_POLY_AGGREGATABLE  
 Specifica che un'istanza di **CComPolyObject \<**  *x* **>** viene creato quando viene creato l'oggetto.  
  
```
DECLARE_POLY_AGGREGATABLE( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome dell'oggetto di classe a cui che si desidera definire come aggregabile o non aggregabile.  
  
### <a name="remarks"></a>Note  
 Durante la creazione, viene controllato il valore unknown esterno. Se è **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.  
  
 Il vantaggio dell'utilizzo `DECLARE_POLY_AGGREGATABLE` è che si evita che entrambi `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo è presente solo una copia dell'oggetto vtable e una copia delle funzioni. Se la vtable è elevata, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` può comportare una dimensione leggermente maggiore di modulo perché non è ottimizzato per un oggetto aggregato o aggregato, come `CComAggObject` e `CComObject`.  
  
 Il `DECLARE_POLY_AGGREGATABLE` macro viene dichiarato nell'oggetto automaticamente se si utilizza la creazione guidata controllo ATL per creare un controllo completo.  
  
##  <a name="declare_protect_final_construct"></a>  MACRO DECLARE_PROTECT_FINAL_CONSTRUCT  

 Protegge l'oggetto venga eliminato se (durante [FinalConstruct](ccomobjectrootex-class.md#finalconstruct)) l'oggetto aggregato interno incrementa il conteggio dei riferimenti quindi decrementa il conteggio su 0.  
  
```
DECLARE_PROTECT_FINAL_CONSTRUCT()
```  
  
##  <a name="declare_view_status"></a>  DECLARE_VIEW_STATUS  
 Inserire la macro nella classe del controllo del controllo ActiveX di ATL per specificare il **VIEWSTATUS** flag per il contenitore.  
  
```
DECLARE_VIEW_STATUS( statusFlags )
```  
  
### <a name="parameters"></a>Parametri  
 `statusFlags`  
 [in] Il **VIEWSTATUS** flag. Vedere [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) per un elenco di flag.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#126](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_9.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
