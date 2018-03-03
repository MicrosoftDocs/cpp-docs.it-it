---
title: Servizi modelli a oggetti di Run-Time | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- run-time object model services macros
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 986657681dabf1136b072f65b2df76b63f216504
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="run-time-object-model-services"></a>Servizi modelli a oggetti runtime
Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulare diversi servizi di oggetto, incluso l'accesso alle informazioni sulle classi in fase di esecuzione, serializzazione e la creazione di oggetti dinamici. Tutte le classi derivate da `CObject` ereditare questa funzionalità.  
  
 Accesso alle informazioni di classe in fase di esecuzione consente di ottenere informazioni sulla classe di un oggetto in fase di esecuzione. La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario aggiuntivo-controllo dei tipi di argomenti della funzione e quando è necessario scrivere codice per scopi specifici in base alla classe dell'oggetto. Informazioni sulle classi in fase di esecuzione non è supportate direttamente dal linguaggio C++.  
  
 La serializzazione è il processo di scrittura o lettura dei contenuti dell'oggetto a o da un file. È possibile utilizzare la serializzazione per archiviare il contenuto di un oggetto, anche dopo la chiusura dell'applicazione. L'oggetto può essere letta dal file quando l'applicazione viene riavviata. Tali oggetti dati vengono definiti come "permanente".  
  
 Creazione di oggetti dinamica consente di creare un oggetto di una classe specificata in fase di esecuzione. Ad esempio, documenti, visualizzazione e gli oggetti nel frame devono supportare la creazione dinamica perché è necessario crearli in modo dinamico il framework.  
  
 Nella tabella seguente sono elencate le macro MFC che supportano le informazioni sulla classe in fase di esecuzione, la serializzazione e la creazione dinamica.  
  
 Per ulteriori informazioni su questi servizi oggetto run-time e la serializzazione, vedere l'articolo [CObject (classe): l'accesso a informazioni sulle classi di Run-Time](../../mfc/accessing-run-time-class-information.md).  
  
### <a name="run-time-object-model-services-macros"></a>Macro servizi modelli a oggetti di Run-Time  
  


|||  
|-|-|  
|[DECLARE_DYNAMIC](#declare_dynamic)|Consente l'accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[DECLARE_DYNCREATE](#declare_dyncreate)|Consente la creazione dinamica e l'accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[DECLARE_SERIAL](#declare_serial)|Consente la serializzazione e accesso alle informazioni di classe in fase di esecuzione (deve essere utilizzato nella dichiarazione di classe).|  
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Consente l'accesso alle informazioni di classe in fase di esecuzione (che sarà utilizzata nell'implementazione della classe).|  
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Consente la creazione dinamica e l'accesso a informazioni di run-time (deve essere utilizzato nell'implementazione della classe).|  
|[IMPLEMENT_SERIAL](#implement_serial)|Consente la serializzazione e accesso alle informazioni di classe in fase di esecuzione (che sarà utilizzata nell'implementazione della classe).|  
|[RUNTIME_CLASS](#runtime_class)|Restituisce il `CRuntimeClass` struttura che corrisponde a una classe denominata.|  


 OLE spesso richiede la creazione dinamica di oggetti in fase di esecuzione. Un'applicazione server OLE, ad esempio, deve essere in grado di creare elementi OLE in modo dinamico in risposta a una richiesta da un client. Analogamente, un server di automazione deve essere in grado di creare gli elementi in risposta alle richieste dei client di automazione.  
  
 La libreria Microsoft Foundation Class fornisce due macro specifiche OLE.  
  
### <a name="dynamic-creation-of-ole-objects"></a>Creazione dinamica di oggetti OLE  

 






|||  
|-|-|  
|[AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)|Determina se la raccolta di controlli comuni implementa l'API specificata.|
|[AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)|Determina se la raccolta di controlli comuni implementa l'API specificata.|
|[DECLARE_OLECREATE](#declare_olecreate)|Gli oggetti di essere creato tramite l'automazione OLE.|  
|[DECLARE_OLECTLTYPE](#declare_olectltype)|Dichiara il **GetUserTypeNameID** e `GetMiscStatus` funzioni membro della classe del controllo.|
|[DECLARE_PROPPAGEIDS](#declare_proppageids)|Dichiara che il controllo OLE fornisce un elenco delle pagine delle proprietà per visualizzarne le proprietà.|
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Gli oggetti di essere creata dal sistema OLE.|  
|[IMPLEMENT_OLECTLTYPE](#implement_olectltype)|Implementa il **GetUserTypeNameID** e `GetMiscStatus` funzioni membro della classe del controllo.|  
|[IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags)|Entrambi questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere presente nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE`. |

## <a name="afx_comctl32_if_exists"></a>AFX_COMCTL32_IF_EXISTS
Determina se la raccolta di controlli comuni implementa l'API specificata.  
   
### <a name="syntax"></a>Sintassi  
  ```  
AFX_COMCTL32_IF_EXISTS(  proc );  
```
### <a name="parameters"></a>Parametri  
 `proc`  
 Puntatore a una stringa con terminazione null contenente il nome della funzione, o valore ordinale della funzione specifica. Se questo parametro è un valore ordinale, deve essere nella parola meno significativa; la parola più significativa deve essere zero. Questo parametro deve essere in formato Unicode.  
   
### <a name="remarks"></a>Note  
 Utilizzare questa macro per determinare se la raccolta di controlli comuni la funzione specificata da `proc` (anziché chiamare [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212).  
   
### <a name="requirements"></a>Requisiti  
 afxcomctl32.h, afxcomctl32.inl  
   
### <a name="see-also"></a>Vedere anche  
 [Raccolta di controlli di isolamento delle comuni MFC](../isolation-of-the-mfc-common-controls-library.md) [AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)
 
## <a name="afx_comctl32_if_exists2"></a>AFX_COMCTL32_IF_EXISTS2
Determina se la raccolta di controlli comuni implementa l'API specificata (si tratta della versione Unicode di [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)).  
   
### <a name="syntax"></a>Sintassi    
```  
AFX_COMCTL32_IF_EXISTS2( proc );  
```
### <a name="parameters"></a>Parametri  
 `proc`  
 Puntatore a una stringa con terminazione null contenente il nome della funzione, o valore ordinale della funzione specifica. Se questo parametro è un valore ordinale, deve essere nella parola meno significativa; la parola più significativa deve essere zero. Questo parametro deve essere in formato Unicode.  
   
### <a name="remarks"></a>Note  
 Utilizzare questa macro per determinare se la raccolta di controlli comuni la funzione specificata da `proc` (anziché chiamare [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212). Questa macro è la versione Unicode di `AFX_COMCTL32_IF_EXISTS`.  
   
### <a name="requirements"></a>Requisiti  
 afxcomctl32.h, afxcomctl32.inl  
   
### <a name="see-also"></a>Vedere anche  
 [Raccolta di controlli di isolamento delle comuni MFC](../isolation-of-the-mfc-common-controls-library.md) [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)



##  <a name="declare_dynamic"></a>DECLARE_DYNAMIC  
 Aggiunge la possibilità di accedere alle informazioni di runtime sulla classe di un oggetto quando si deriva una classe da `CObject`.  
  
```
DECLARE_DYNAMIC(class_name) 
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Aggiungere il `DECLARE_DYNAMIC` macro per il modulo di intestazione (h) per la classe, quindi includere tale modulo in tutti i moduli con estensione cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se si utilizza il **DECLARE**_ **dinamica** e `IMPLEMENT_DYNAMIC` macro come descritto, è quindi possibile utilizzare il `RUNTIME_CLASS` (macro) e `CObject::IsKindOf` funzione per determinare la classe degli oggetti in esecuzione ora.  
  
 Se `DECLARE_DYNAMIC` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNAMIC` deve essere incluso nell'implementazione della classe.  
  
 Per ulteriori informazioni sul `DECLARE_DYNAMIC` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [IMPLEMENT_DYNAMIC](#implement_dynamic).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="declare_dyncreate"></a>DECLARE_DYNCREATE  
 Gli oggetti di consente `CObject`-classi derivate per creare in modo dinamico in fase di esecuzione.  
  
```
DECLARE_DYNCREATE(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza questa possibilità per creare nuovi oggetti in modo dinamico. Ad esempio, la visualizzazione creata quando si apre un nuovo documento. Documento, Visualizzazione classi e frame devono supportare la creazione dinamica perché è necessario crearli in modo dinamico il framework.  
  
 Aggiungere il `DECLARE_DYNCREATE` macro nel modulo. h per la classe, quindi includere tale modulo in tutti i moduli con estensione cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_DYNCREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNCREATE` deve essere incluso nell'implementazione della classe.  
  
 Per ulteriori informazioni sul `DECLARE_DYNCREATE` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
> [!NOTE]
>  Il `DECLARE_DYNCREATE` macro include tutte le funzionalità di `DECLARE_DYNAMIC`.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [IMPLEMENT_DYNCREATE](#implement_dyncreate).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

 
## <a name="declareolectltype"></a>DECLARE_OLECTLTYPE
Dichiara il **GetUserTypeNameID** e `GetMiscStatus` funzioni membro della classe del controllo.  
   
### <a name="syntax"></a>Sintassi    
```
DECLARE_OLECTLTYPE( class_name )  
```
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo.  
   
### <a name="remarks"></a>Note  
 **GetUserTypeNameID** e `GetMiscStatus` sono funzioni virtuali pure, dichiarate in `COleControl`. Poiché queste funzioni sono pure virtuale, è necessario eseguire l'override nella classe del controllo. Oltre a **DECLARE_OLECTLTYPE**, è necessario aggiungere il `IMPLEMENT_OLECTLTYPE` macro per la dichiarazione di classe del controllo.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
   
### <a name="see-also"></a>Vedere anche  
 [IMPLEMENT_OLECTLTYPE](#implement_olectltype)
 

## <a name="declareproppageids"></a>DECLARE_PROPPAGEIDS
Dichiara che il controllo OLE fornisce un elenco delle pagine delle proprietà per visualizzarne le proprietà.  
   
### <a name="syntax"></a>Sintassi    
```
DECLARE_PROPPAGEIDS( class_name )  
```
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo che possiede le pagine delle proprietà.  
   
### <a name="remarks"></a>Note  
 Utilizzare il `DECLARE_PROPPAGEIDS` (macro) alla fine della dichiarazione di classe. Quindi, nel file. cpp che definisce le funzioni membro per la classe, utilizzare il `BEGIN_PROPPAGEIDS` (macro), per ognuna delle pagine delle proprietà del controllo, le voci di macro e `END_PROPPAGEIDS` macro per dichiarare la fine dell'elenco di pagina di proprietà.  
  
 Per ulteriori informazioni sulle pagine proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../mfc-activex-controls-property-pages.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
   
### <a name="see-also"></a>Vedere anche   
 [BEGIN_PROPPAGEIDS](#begin_proppageids)   
 [END_PROPPAGEIDS](#end_proppageids)

##  <a name="declare_serial"></a>DECLARE_SERIAL  
 Genera il codice di intestazione C++ necessario per un `CObject`-classe derivata che può essere serializzato.  
  
```
DECLARE_SERIAL(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto a e da un file.  
  
 Utilizzare il `DECLARE_SERIAL` macro in un modulo. h e quindi includere tale modulo in tutti i moduli con estensione cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_SERIAL` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_SERIAL` deve essere incluso nell'implementazione della classe.  
  
 Il `DECLARE_SERIAL` macro include tutte le funzionalità di `DECLARE_DYNAMIC` e `DECLARE_DYNCREATE`.  
  
 È possibile utilizzare il **AFX_API** (macro) per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Racchiudere le dichiarazioni di classe (che si trova nel file con estensione h) con il codice seguente:  
  
 [!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 Per ulteriori informazioni sul `DECLARE_SERIAL` (macro), vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="implement_dynamic"></a>IMPLEMENT_DYNAMIC  
 Genera il codice C++ necessario per un dinamico `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.  
  
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
 [!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="implement_dyncreate"></a>IMPLEMENT_DYNCREATE  
 Gli oggetti di consente `CObject`-alle classi derivate di essere creato dinamicamente in esecuzione se viene utilizzato con il `DECLARE_DYNCREATE` (macro).  
  
```
IMPLEMENT_DYNCREATE(class_name, base_class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 `base_class_name`  
 Il nome effettivo della classe di base.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza questa possibilità per creare nuovi oggetti in modo dinamico, ad esempio, durante la lettura di un oggetto dal disco durante la serializzazione. Aggiungere il `IMPLEMENT_DYNCREATE` macro nel file di implementazione della classe. Per ulteriori informazioni, vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
 Se si utilizza il `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` macro, è quindi possibile utilizzare il `RUNTIME_CLASS` macro e `CObject::IsKindOf` funzione membro per determinare la classe degli oggetti in fase di esecuzione.  
  
 Se `DECLARE_DYNCREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_DYNCREATE` deve essere incluso nell'implementazione della classe.  
  
 Si noti che questa definizione di macro richiama il costruttore predefinito per la classe. Se un costruttore non superfluo viene implementato in modo esplicito dalla classe, nonché il costruttore predefinito deve implementare anche in modo esplicito. Il costruttore predefinito può essere aggiunto alla classe **privata** o **protetti** sezioni membro per evitare che venga chiamato da all'esterno dell'implementazione della classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

## <a name="implement_olecreate_flags"></a>IMPLEMENT_OLECREATE_FLAGS
Entrambi questa macro o [IMPLEMENT_OLECREATE](#implement_olecreate) deve essere presente nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE`.  
   
### <a name="syntax"></a>Sintassi    
```
IMPLEMENT_OLECREATE_FLAGS( class_name, external_name, nFlags, 
    l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)  
  
```
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 *external_name*  
 Il nome dell'oggetto esposto ad altre applicazioni (racchiuse tra virgolette).  
  
 `nFlags`  
 Contiene uno o più dei flag seguenti:  
  
-   `afxRegInsertable`Consente il controllo venga visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.    
-   `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.    
-   **afxRegFreeThreading** imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.  
  
     È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel = Both. Vedere [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) in Windows SDK per ulteriori informazioni sulla registrazione di modello di threading.    
 *l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8*  
 Componenti della classe **CLSID**.  
   
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Se si utilizza `IMPLEMENT_OLECREATE_FLAGS`, è possibile specificare quale modello di threading supportati dall'oggetto utilizzando il `nFlags` parametro. Se si desidera supportare solo il modello il procedere singolo, utilizzare `IMPLEMENT_OLECREATE`.  
  
 Il nome esterno è l'identificatore esposta ad altre applicazioni. Le applicazioni client di utilizzare il nome esterno per richiedere un oggetto di questa classe da un server di automazione.  
  
 L'ID di classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da uno **lungo**, due **WORD**s e otto **BYTE**s, come rappresentato da *l*, *w1*, *w2*, e *b1* tramite *b8* nella descrizione della sintassi. Le procedure guidate di creazione guidata applicazione e il codice crea ID univoco di classe OLE come richiesto.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [DECLARE_OLECREATE](#declare_olecreate)   
 [Chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424)


## <a name="implement_olecreate"></a>IMPLEMENT_OLECTLTYPE
Implementa il **GetUserTypeNameID** e `GetMiscStatus` funzioni membro della classe del controllo.  
   
### <a name="syntax"></a>Sintassi    
```
DECLARE_OLECTLTYPE( class_name, idsUserTypeName, dwOleMisc )  
```
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo.  
  
 *idsUserTypeName*  
 L'ID di risorsa di una stringa contenente il nome esterno del controllo.  
  
 *dwOleMisc*  
 Enumerazione che contiene uno o più flag. Per ulteriori informazioni su questa enumerazione, vedere [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) in Windows SDK.  
   
### <a name="remarks"></a>Note  
 Oltre a `IMPLEMENT_OLECTLTYPE`, è necessario aggiungere il **DECLARE_OLECTLTYPE** macro per la dichiarazione di classe del controllo.  
  
 Il **GetUserTypeNameID** funzione membro restituisce la stringa di risorsa che identifica la classe del controllo. `GetMiscStatus`Restituisce il **OLEMISC** bit per il controllo. Questa enumerazione specifica una raccolta di impostazioni che descrivono le caratteristiche del controllo. Per una descrizione completa del **OLEMISC** impostazioni, vedere [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) in Windows SDK.  
  
> [!NOTE]
>  Le impostazioni predefinite utilizzate da ControlWizard di ActiveX sono: **OLEMISC_ACTIVATEWHENVISIBLE**, **OLEMISC_SETCLIENTSITEFIRST**, **OLEMISC_INSIDEOUT**, **OLEMISC_CANTLINKINSIDE**, e **OLEMISC_RECOMPOSEONRESIZE**.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [DECLARE_OLECTLTYPE](#declare_olectltype)

##  <a name="implement_serial"></a>IMPLEMENT_SERIAL  
 Genera il codice C++ necessario per un dinamico `CObject`-il nome della classe e la posizione all'interno della gerarchia derivata con accesso in fase di esecuzione.  
  
```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
 `base_class_name`  
 Il nome della classe di base.  
  
 *wSchema*  
 Oggetto **UINT** "numero di versione" che verrà codificato nell'archivio per attivare un programma la deserializzazione identificare e gestire i dati creati dalle precedenti versioni del programma. Il numero di classe dello schema non deve essere -1.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `IMPLEMENT_SERIAL` macro in un modulo con estensione cpp; quindi collegare una sola volta il codice oggetto risultante.  
  
 È possibile utilizzare il **AFX_API** (macro) per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Racchiudere le dichiarazioni di classe (che si trova nel file con estensione h) con il codice seguente:  
  
 [!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 Per ulteriori informazioni, vedere il [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="runtime_class"></a>RUNTIME_CLASS  
 Ottiene la struttura di classe in fase di esecuzione dal nome di una classe C++.  
  
```
RUNTIME_CLASS(class_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe (non racchiuso tra virgolette).  
  
### <a name="remarks"></a>Note  
 `RUNTIME_CLASS`Restituisce un puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura per la classe specificata da *class_name*. Solo `CObject`-dichiarate con classi derivate `DECLARE_DYNAMIC`, `DECLARE_DYNCREATE`, o `DECLARE_SERIAL` restituirà i puntatori a un `CRuntimeClass` struttura.  
  
 Per ulteriori informazioni, vedere [argomenti classe CObject](../../mfc/using-cobject.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 
   
##  <a name="declare_olecreate"></a>DECLARE_OLECREATE  
 Gli oggetti di consente `CCmdTarget`-alle classi derivate di essere creato tramite l'automazione OLE.  
  
```
DECLARE_OLECREATE(class_name) 
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome effettivo della classe.  
  
### <a name="remarks"></a>Note  
 Questa macro consente alle altre applicazioni basate su OLE creare oggetti di questo tipo.  
  
 Aggiungere il `DECLARE_OLECREATE` macro nel modulo. h per la classe, quindi includere tale modulo in tutti i moduli con estensione cpp che richiedono l'accesso agli oggetti di questa classe.  
  
 Se `DECLARE_OLECREATE` è incluso nella dichiarazione di classe, quindi `IMPLEMENT_OLECREATE` deve essere incluso nell'implementazione della classe. Una dichiarazione di classe utilizzando `DECLARE_OLECREATE` deve usare anche `DECLARE_DYNCREATE` o `DECLARE_SERIAL`.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h  

##  <a name="implement_olecreate"></a>IMPLEMENT_OLECREATE  
 Entrambi questa macro o [IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags) deve essere presente nel file di implementazione per qualsiasi classe che usa `DECLARE_OLECREATE`.  
  
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
  
 Il nome esterno è l'identificatore esposta ad altre applicazioni. Le applicazioni client di utilizzare il nome esterno per richiedere un oggetto di questa classe da un server di automazione.  
  
 L'ID di classe OLE è un identificatore univoco a 128 bit per l'oggetto. È costituito da uno **lungo**, due **WORD**s e otto **BYTE**s, come rappresentato da *l*, *w1*, *w2*, e *b1* tramite *b8* nella descrizione della sintassi. Le procedure guidate di creazione guidata applicazione e il codice crea ID univoco di classe OLE come richiesto.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h 

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

