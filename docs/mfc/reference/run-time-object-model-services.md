---
title: Servizi modelli a oggetti di Run-Time | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- run-time object model services macros
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
caps.latest.revision: 15
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 8739201489644b0f1695a70d0dc12d04ca47aa68
ms.lasthandoff: 02/24/2017

---
# <a name="run-time-object-model-services"></a>Servizi modelli a oggetti runtime
Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulano molti servizi oggetto, incluso l'accesso alle informazioni sulle classi in fase di esecuzione, la serializzazione e la creazione di oggetti dinamici. Tutte le classi derivate da `CObject` ereditano questa funzionalità.  
  
 Accesso alle informazioni sulle classi in fase di esecuzione consente di ottenere informazioni sulla classe di un oggetto in fase di esecuzione. La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando occorre aggiuntivo controllo del tipo di argomenti della funzione e quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Informazioni sulle classi in fase di esecuzione non è supportate direttamente dal linguaggio C++.  
  
 La serializzazione è il processo di scrittura o lettura di contenuto di un oggetto a o da un file. È possibile utilizzare la serializzazione per archiviare il contenuto di un oggetto anche dopo la chiusura dell'applicazione. L'oggetto può essere letta dal file quando l'applicazione viene riavviata. Tali oggetti dati vengono considerati "permanenti".  
  
 Creazione dinamica di oggetti consente di creare un oggetto di una classe specificata in fase di esecuzione. Ad esempio, documenti, visualizzazione e gli oggetti nel frame devono supportare la creazione dinamica poiché il framework deve crearle in modo dinamico.  
  
 Nella tabella seguente elenca le macro MFC che supportano le informazioni sulla classe in fase di esecuzione, la serializzazione e la creazione dinamica.  
  
 Per ulteriori informazioni su questi servizi oggetto run-time e la serializzazione, vedere l'articolo [CObject (classe): l'accesso a informazioni sulle classi di runtime](../../mfc/accessing-run-time-class-information.md).  
  
### <a name="run-time-object-model-services-macros"></a>Macro servizi modelli a oggetti di Run-Time  
  
|||  
|-|-|  
|[DECLARE_DYNAMIC](#declare_dynamic)|Consente l'accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[DECLARE_DYNCREATE](#declare_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[DECLARE_SERIAL](#declare_serial)|Consente la serializzazione e accedere alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Consente l'accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzata nell'implementazione della classe).|  
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Consente la creazione dinamica e l'accesso a informazioni di run-time (deve essere utilizzata nell'implementazione della classe).|  
|[IMPLEMENT_SERIAL](#implement_serial)|Consente la serializzazione e accedere alle informazioni di classe in fase di esecuzione (deve essere utilizzata nell'implementazione della classe).|  
|[RUNTIME_CLASS](#runtime_class)|Restituisce il `CRuntimeClass` struttura che corrisponde alla classe denominata.|  


 OLE è spesso richiede la creazione dinamica di oggetti in fase di esecuzione. Ad esempio, un'applicazione server OLE deve essere in grado di creare elementi OLE dinamicamente in risposta a una richiesta da un client. Analogamente, un server di automazione deve essere in grado di creare gli elementi in risposta alle richieste dai client di automazione.  
  
 La libreria Microsoft Foundation Class fornisce due macro specifiche OLE.  
  
### <a name="dynamic-creation-of-ole-objects"></a>Creazione dinamica di oggetti OLE  
  
|||  
|-|-|  
|[DECLARE_OLECREATE](#declare_olecreate)|Gli oggetti di essere creato tramite l'automazione OLE.|  
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Consente agli oggetti vengano creati per il sistema OLE.|  
  
##  <a name="a-namedeclaredynamica--declaredynamic"></a><a name="declare_dynamic"></a>DECLARE_DYNAMIC  
 Aggiunge la possibilità di accedere alle informazioni di runtime sulla classe di un oggetto quando si deriva una classe dalla classe `CObject`.  
  
```
DECLARE_DYNAMIC(class_name) 
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Aggiungere il `DECLARE_DYNAMIC` macro per il modulo di intestazione (h) per la classe, quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se si utilizza il **DECLARE**_ **dinamica** e `IMPLEMENT_DYNAMIC` macro come descritto, è quindi possibile utilizzare il `RUNTIME_CLASS` macro e `CObject::IsKindOf` funzione per determinare la classe di oggetti in fase di esecuzione.  
  
 Se `DECLARE_DYNAMIC` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNAMIC` deve essere incluso nell'implementazione della classe.  
  
 Per ulteriori informazioni sui `DECLARE_DYNAMIC` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [IMPLEMENT_DYNAMIC](#implement_dynamic).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-namedeclaredyncreatea--declaredyncreate"></a><a name="declare_dyncreate"></a>DECLARE_DYNCREATE  
 Consente agli oggetti di `CObject`-classi derivate per creare in modo dinamico in fase di esecuzione.  
  
```
DECLARE_DYNCREATE(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza la possibilità di creare nuovi oggetti in modo dinamico. Ad esempio, la nuova vista creata quando si apre un nuovo documento. Documento e visualizzazione classi cornice devono supportare la creazione dinamica poiché il framework deve crearle in modo dinamico.  
  
 Aggiungere il `DECLARE_DYNCREATE` macro nel modulo. h per la classe, quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_DYNCREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNCREATE` deve essere incluso nell'implementazione della classe.  
  
 Per ulteriori informazioni sui `DECLARE_DYNCREATE` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
> [!NOTE]
>  Il `DECLARE_DYNCREATE` macro include tutte le funzionalità di `DECLARE_DYNAMIC`.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [IMPLEMENT_DYNCREATE](#implement_dyncreate).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-namedeclareseriala--declareserial"></a><a name="declare_serial"></a>DECLARE_SERIAL  
 Genera il codice di intestazione C++ necessario per un `CObject`-classe derivata che può essere serializzato.  
  
```
DECLARE_SERIAL(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto a e da un file.  
  
 Utilizzare il `DECLARE_SERIAL` macro in un modulo. h, quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_SERIAL` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_SERIAL` deve essere incluso nell'implementazione della classe.  
  
 Il `DECLARE_SERIAL` macro include tutte le funzionalità di `DECLARE_DYNAMIC` e `DECLARE_DYNCREATE`.  
  
 È possibile utilizzare il **AFX_API** (macro) per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Racchiudere le dichiarazioni di classe (che si trova nel file h) con il codice seguente:  
  
 [!code-cpp[NVC_MFCCObjectSample&#20;](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 Per ulteriori informazioni sui `DECLARE_SERIAL` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample numero&21;](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameimplementdynamica--implementdynamic"></a><a name="implement_dynamic"></a>IMPLEMENT_DYNAMIC  
 Genera il codice C++ necessario per una dinamica `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.  
  
```
IMPLEMENT_DYNAMIC(class_name, base_class_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 `base_class_name`  
 Il nome della classe di base.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `IMPLEMENT_DYNAMIC` macro in un modulo con estensione cpp e quindi collegare l'oggetto risultante codice una sola volta.  
  
 Per ulteriori informazioni, vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample n.&2;](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample n.&3;](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameimplementdyncreatea--implementdyncreate"></a><a name="implement_dyncreate"></a>IMPLEMENT_DYNCREATE  
 Consente agli oggetti di `CObject`-classi derivate per creare in modo dinamico in fase tempo quando si utilizza il `DECLARE_DYNCREATE` (macro).  
  
```
IMPLEMENT_DYNCREATE(class_name, base_class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 `base_class_name`  
 Il nome effettivo della classe di base.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza la possibilità di creare nuovi oggetti in modo dinamico, ad esempio, quando un oggetto che legge dal disco durante la serializzazione. Aggiungere il `IMPLEMENT_DYNCREATE` macro nel file di implementazione della classe. Per ulteriori informazioni, vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
 Se si utilizza il `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` macro, è quindi possibile utilizzare il `RUNTIME_CLASS` macro e `CObject::IsKindOf` funzione membro per determinare la classe di oggetti in fase di esecuzione.  
  
 Se `DECLARE_DYNCREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNCREATE` deve essere incluso nell'implementazione della classe.  
  
 Si noti che questa definizione di macro richiama il costruttore predefinito per la classe. Se un costruttore non è semplice è implementato esplicitamente dalla classe, è necessario implementare anche in modo esplicito anche il costruttore predefinito. Il costruttore predefinito può essere aggiunto alla classe **privata** o **protetti** sezioni membro per evitare che venga chiamato da all'esterno dell'implementazione della classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample&#22;](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample&#23;](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameimplementseriala--implementserial"></a><a name="implement_serial"></a>IMPLEMENT_SERIAL  
 Genera il codice C++ necessario per una dinamica `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.  
  
```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 `base_class_name`  
 Il nome della classe di base.  
  
 *wSchema*  
 Oggetto **UINT** "numero di versione" che verrà codificato nell'archivio per consentire a un programma di deserializzazione identificare e gestire i dati creati in precedenza versioni del programma. Il numero di schema di classe non deve essere â €"1.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `IMPLEMENT_SERIAL` macro in un modulo. cpp, quindi collegare una sola volta il codice dell'oggetto risultante.  
  
 È possibile utilizzare il **AFX_API** (macro) per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Racchiudere le dichiarazioni di classe (che si trova nel file h) con il codice seguente:  
  
 [!code-cpp[NVC_MFCCObjectSample&#20;](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 Per ulteriori informazioni, vedere il [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample&#24;](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameruntimeclassa--runtimeclass"></a><a name="runtime_class"></a>RUNTIME_CLASS  
 Ottiene la struttura della classe in fase di esecuzione dal nome di una classe C++.  
  
```
RUNTIME_CLASS(class_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe (non racchiusa tra virgolette).  
  
### <a name="remarks"></a>Note  
 `RUNTIME_CLASS`Restituisce un puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura per la classe specificata da *class_name*. Solo `CObject`-dichiarate con le classi derivate `DECLARE_DYNAMIC`, `DECLARE_DYNCREATE`, o `DECLARE_SERIAL` restituirà i puntatori a un `CRuntimeClass` struttura.  
  
 Per ulteriori informazioni, vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample&#25;](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 
   
##  <a name="a-namedeclareolecreatea--declareolecreate"></a><a name="declare_olecreate"></a>DECLARE_OLECREATE  
 Consente agli oggetti di `CCmdTarget`-alle classi derivate di essere creato tramite l'automazione OLE.  
  
```
DECLARE_OLECREATE(class_name) 
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Questa macro consente alle altre applicazioni basate su OLE creare oggetti di questo tipo.  
  
 Aggiungere il `DECLARE_OLECREATE` macro nel modulo. h per la classe, quindi includere tale modulo in tutti i moduli. cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_OLECREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_OLECREATE` deve essere incluso nell'implementazione della classe. Una dichiarazione di classe utilizzando `DECLARE_OLECREATE` deve usare anche `DECLARE_DYNCREATE` o `DECLARE_SERIAL`.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h  

##  <a name="a-nameimplementolecreatea--implementolecreate"></a><a name="implement_olecreate"></a>IMPLEMENT_OLECREATE  
 Entrambi questa macro o [IMPLEMENT_OLECREATE_FLAGS](http://msdn.microsoft.com/library/d1589f6a-5a69-4742-b07c-4c621cfd040d) deve essere presente nel file di implementazione per qualsiasi classe che utilizza `DECLARE_OLECREATE`.  
  
```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 *external_name*  
 Il nome dell'oggetto esposto ad altre applicazioni (racchiuse tra virgolette).  
  
 *l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8*  
 Componenti della classe **CLSID**.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Se si utilizza `IMPLEMENT_OLECREATE`, per impostazione predefinita, si supporta solo il modello di threading singolo. Se si utilizza `IMPLEMENT_OLECREATE_FLAGS`, è possibile specificare quale modello di threading supportati dall'oggetto utilizzando il `nFlags` parametro.  
  
 Il nome esterno è l'identificatore esposta ad altre applicazioni. Applicazioni client utilizzano il nome esterno per richiedere un oggetto di questa classe da un server di automazione.  
  
 L'ID di classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da uno **lungo**, due **WORD**s e otto **BYTE**s, come rappresentato da *l*, *w1*, *w2*, e *b1* tramite *b8* nella descrizione della sintassi. Le procedure guidate di creazione guidata applicazione e il codice crea ID univoco di classe OLE come richiesto.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h 

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

