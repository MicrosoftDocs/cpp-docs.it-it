---
title: Macro di opzioni del compilatore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- compiler options, macros
ms.assetid: a869adc6-b3de-4299-b040-9ae20b45f82c
caps.latest.revision: 17
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
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: dbce962873194c1bdcb063537247650cff568e35
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-options-macros"></a>Macro di opzioni del compilatore
Queste macro controllano le funzionalità del compilatore specifici.  
  
|||  
|-|-|  
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|Un simbolo che consente di errori nei progetti convertiti da versioni precedenti di ATL.|  
|[ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Specificare se uno o più oggetti utilizzano il threading apartment.|  
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Verifica `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.|  
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Definire questa macro per utilizzare C++ compatibile con la sintassi standard, che genera l'errore del compilatore C4867 quando si utilizza una sintassi non standard per inizializzare un puntatore a una funzione membro.|  
|[ATL_FREE_THREADED](#_atl_free_threaded)|Specificare se uno o più oggetti utilizzano threading free o neutral.|  
|[ATL_MULTI_THREADED](#_atl_multi_threaded)|Gli oggetti contrassegnati come entrambi, Free o Neutral disporrà di un simbolo che indica il progetto. La macro [ATL_FREE_THREADED](#_atl_free_threaded) da utilizzare in sostituzione.|  
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|Un simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.|  
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|Un simbolo che impedisce al codice correlato a COM venga compilato con il progetto.|  
|[ATL_NO_VTABLE](#atl_no_vtable)|Un simbolo che impedisce il puntatore vtable di inizializzazione nel costruttore e distruttore della classe.|  
|[ATL_NOINLINE](#atl_noinline)|Un simbolo che indica una funzione non deve essere resa inline.|  
|[ATL_SINGLE_THREADED](#_atl_single_threaded)|Specificare se tutti gli oggetti utilizzano il modello di threading singolo.|  
  
##  <a name="a-nameatlallwarningsa--atlallwarnings"></a><a name="_atl_all_warnings"></a>_ATL_ALL_WARNINGS  
 Un simbolo che consente di errori nei progetti convertiti da versioni precedenti di ATL.  
  
```
#define _ATL_ALL_WARNINGS
```  
  
### <a name="remarks"></a>Note  
 Prima di Visual C++ .NET 2002, ATL disabilitato numerosi avvisi e stati lasciati disabilitati in modo che hanno mai illustrato nel codice utente. In particolare:  
  
-   Espressione condizionale C4127 è costante  
  
-   C4786 'identificatore': identificatore troncato a "numero" caratteri nelle informazioni di debug  
  
-   C4201 utilizzata estensione non standard: struct/union senza nome  
  
-   C4103 'nomefile': consentono di modificare l'allineamento #pragma pack  
  
-   C4291 'dichiarazione': operatore delete corrispondente non trovato. memoria non verranno liberata se l'inizializzazione genera un'eccezione  
  
-   C4268 'identificatore': 'const' dati statico/globale inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri  
  
-   Codice non eseguibile C4702  
  
 Nei progetti convertiti da versioni precedenti, questi avvisi sono ancora disabilitati per le intestazioni delle librerie.  
  
 Aggiungendo la riga seguente al file stdafx. h prima di includere le intestazioni delle librerie, questo comportamento può essere modificato.  
  
 [!code-cpp[NVC_ATL_Utilities&#97;](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]  
  
 Se questo `#define` viene aggiunto, le intestazioni ATL devono fare attenzione a mantenere lo stato di questi avvisi in modo che non siano disabilitati a livello globale (o se l'utente disabilita in modo esplicito gli avvisi, per non consentire).  
  
 Nuovi progetti generati con Visual C++ .NET 2002 avrà questo `#define` in stdafx l'impostazione predefinita.  
  
##  <a name="a-nameatlapartmentthreadeda--atlapartmentthreaded"></a><a name="_atl_apartment_threaded"></a>ATL_APARTMENT_THREADED  
 Specificare se uno o più oggetti utilizzano il threading apartment.  
  
```
_ATL_APARTMENT_THREADED
```  
  
### <a name="remarks"></a>Note  
 Specifica il threading apartment. Vedere [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni, threading e [opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.  
  
##  <a name="a-nameatlcstringexplicitconstructorsa--atlcstringexplicitconstructors"></a><a name="_atl_cstring_explicit_constructors"></a>_ATL_CSTRING_EXPLICIT_CONSTRUCTORS  
 Verifica `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.  
  
```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```  
  
### <a name="remarks"></a>Note  
 Quando questa è definita, tutti i costruttori che accettano un parametro singolo CString vengono compilati con la parola chiave explicit, che impedisce le conversioni implicite di argomenti di input. Ciò significa, ad esempio, che quando viene definito Unicode, se si tenta di utilizzare una stringa char * come un argomento del costruttore CString, verrà generato un errore del compilatore. Utilizzare questa macro in situazioni in cui è necessario impedire le conversioni implicite tra tipi di stringa stretto e WAN.  
  
 Utilizzando la macro t in tutti gli argomenti di stringa al costruttore, è possibile definire _ATL_CSTRING_EXPLICIT_CONSTRUCTORS ed evitare errori di compilazione indipendentemente dal fatto che sia stato definito Unicode.  
  
##  <a name="a-nameatlenableptmwarninga--atlenableptmwarning"></a><a name="_atl_enable_ptm_warning"></a>_ATL_ENABLE_PTM_WARNING  
 Definire questa macro per forzare l'utilizzo della sintassi conforme allo standard ANSI C++ per un puntatore a funzioni membro. Tramite questa macro causerà l'errore del compilatore C4867 deve essere generato quando viene utilizzata la sintassi non standard per inizializzare un puntatore a una funzione membro.  
  
```
#define _ATL_ENABLE_PTM_WARNING
```  
  
### <a name="remarks"></a>Note  
 Le librerie ATL e MFC sono state modificate in modo che corrisponda migliore conformità C++ standard del compilatore Visual C++. In base allo standard ANSI C++, la sintassi di un puntatore a una funzione membro della classe deve essere `&CMyClass::MyFunc`.  
  
 Quando [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) non è definito (nel caso predefinito), ATL/MFC disattiva l'errore C4867 nelle mappe macro (in particolare messaggio mappato) in modo che il codice che è stato creato nelle versioni precedenti è possibile continuare a compilare come in precedenza. Se si definisce **_ATL_ENABLE_PTM_WARNING**, il codice deve essere conforme al linguaggio C++ standard.  
  
 Tuttavia, il modulo non standard è stato deprecato, pertanto è necessario spostare il codice esistente per la sintassi compatibile con standard di C++. Ad esempio, le operazioni seguenti:  
  
 [!code-cpp[NVC_MFCListView&#14;](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]  
  
 Deve essere modificato in:  
  
 [!code-cpp[NVC_MFCListView&#11;](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]  
  
 Si noti che per le macro di mappa che aggiungono il carattere '/', non è possibile aggiungere il nuovo nel codice.  
  
##  <a name="a-nameatlfreethreadeda--atlfreethreaded"></a><a name="_atl_free_threaded"></a>ATL_FREE_THREADED  
 Specificare se uno o più oggetti utilizzano threading free o neutral.  
  
```
_ATL_FREE_THREADED
```  
  
### <a name="remarks"></a>Note  
 Specifica di modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Vedere [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni, threading e [opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.  
  
##  <a name="a-nameatlmultithreadeda--atlmultithreaded"></a><a name="_atl_multi_threaded"></a>ATL_MULTI_THREADED  
 Gli oggetti contrassegnati come entrambi, Free o Neutral disporrà di un simbolo che indica il progetto.  
  
```
_ATL_MULTI_THREADED
```  
  
### <a name="remarks"></a>Note  
 Se questo simbolo è definito, ATL effettuerà il pull nel codice che verrà sincronizzati correttamente l'accesso ai dati globali. Nuovo codice deve utilizzare la macro equivalente [ATL_FREE_THREADED](#_atl_free_threaded) invece.  
  
##  <a name="a-nameatlnoautomaticnamespacea--atlnoautomaticnamespace"></a><a name="_atl_no_automatic_namespace"></a>_ATL_NO_AUTOMATIC_NAMESPACE  
 Un simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.  
  
```
_ATL_NO_AUTOMATIC_NAMESPACE
```  
  
### <a name="remarks"></a>Note  
 Se non è definito il simbolo, inclusi atlbase. h eseguirà **utilizza spazio dei nomi ATL** per impostazione predefinita, che possono causare conflitti di denominazione. Per evitare questo problema, definire il simbolo.  
  
##  <a name="a-nameatlnocomsupporta--atlnocomsupport"></a><a name="_atl_no_com_support"></a>_ATL_NO_COM_SUPPORT  
 Un simbolo che impedisce al codice correlato a COM venga compilato con il progetto.  
  
```
_ATL_NO_COM_SUPPORT```  
  
##  <a name="atl_no_vtable"></a>  ATL_NO_VTABLE  
 A symbol that prevents the vtable pointer from being initialized in the class's constructor and destructor.  
  
```
ATL_NO_VTABLE
```  
  
### Remarks  
 If the vtable pointer is prevented from being initialized in the class's constructor and destructor, the linker can eliminate the vtable and all of the functions to which it points. Expands to **__declspec(novtable)**.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#53](../../atl/codesnippet/cpp/compiler-options-macros_4.h)]  
  
##  <a name="atl_noinline"></a>  ATL_NOINLINE  
 A symbol that indicates a function should not be inlined.  
  
```
    ATL_NOINLINE inline
    myfunction
 { ... }
```  
  
### Parameters  
 *myfunction*  
 The function that should not be inlined.  
  
### Remarks  
 Use this symbol if you want to ensure a function does not get inlined by the compiler, even though it must be declared as inline so that it can be placed in a header file. Expands to **__declspec(noinline)**.  
  
##  <a name="_atl_single_threaded"></a>  _ATL_SINGLE_THREADED  
 Define if all of your objects use the single threading model  
  
```
ATL_SINGLE_THREADED
```  
  
### Remarks  
 Specifies that the object always runs in the primary COM thread. See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for other threading options, and [Options, ATL Simple Object Wizard](../../atl/reference/options-atl-simple-object-wizard.md) for a description of the threading models available for an ATL object.  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)

