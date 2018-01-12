---
title: Macro di opzioni del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
f1_keywords:
- _ATL_ALL_WARNINGS
- _ATL_APARTMENT_THREADED
- '_ATL_CSTRING_EXPLICIT_CONSTRUCTORS '
- _ATL_ENABLE_PTM_WARNING
- _ATL_FREE_THREADED
- _ATL_MULTI_THREADED
- _ATL_NO_AUTOMATIC_NAMESPACE
- _ATL_NO_COM_SUPPORT
- ATL_NO_VTABLE
- ATL_NOINLINE
- _ATL_SINGLE_THREADED
helpviewer_keywords: compiler options, macros
ms.assetid: a869adc6-b3de-4299-b040-9ae20b45f82c
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f48abc864133849353aeccf82ea3eb9aab1edb5a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-options-macros"></a>Macro di opzioni del compilatore
Queste macro controllano le funzionalità del compilatore specifico.  
  
|||  
|-|-|  
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|Un simbolo che consente di errori nei progetti convertiti da versioni precedenti di ATL.|  
|[ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Definire se uno o più degli oggetti usano il threading apartment.|  
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Verifica `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.|  
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Definire questa macro per utilizzare C++ compatibile con la sintassi standard, che genera l'errore del compilatore C4867 quando una sintassi non standard viene utilizzata per inizializzare un puntatore a una funzione membro.|  
|[ATL_FREE_THREADED](#_atl_free_threaded)|Definire se uno o più degli oggetti di utilizzo di threading free o neutral.|  
|[ATL_MULTI_THREADED](#_atl_multi_threaded)|Un simbolo che indica il progetto avrà gli oggetti che sono contrassegnati come sia disponibile o neutro. La macro [ATL_FREE_THREADED](#_atl_free_threaded) deve pertanto essere utilizzato.|  
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|Un simbolo che impedisce l'utilizzo dello spazio dei nomi predefinito come ATL.|  
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|Un simbolo che impedisce il che si sta compilando il progetto di codice relativo a COM.|  
|[ATL_NO_VTABLE](#atl_no_vtable)|Un simbolo che impedisce il puntatore vtable di inizializzazione nel costruttore e distruttore della classe.|  
|[ATL_NOINLINE](#atl_noinline)|Un simbolo che indica una funzione non deve essere resa inline.|  
|[ATL_SINGLE_THREADED](#_atl_single_threaded)|Specificare se tutti gli oggetti utilizzano il modello di threading singolo.|  
  
##  <a name="_atl_all_warnings"></a>_ATL_ALL_WARNINGS  
 Un simbolo che consente di errori nei progetti convertiti da versioni precedenti di ATL.  
  
```
#define _ATL_ALL_WARNINGS
```  
  
### <a name="remarks"></a>Note  
 Prima di Visual C++ .NET 2002, ATL disabilitato numerosi avvisi e stati lasciati disabilitati in modo che non compaia mai nel codice utente. In particolare:  
  
-   Espressione condizionale C4127 è costante  
  
-   C4786 'identifier': identificatore troncato a 'number' caratteri nelle informazioni di debug  
  
-   C4201 utilizzata estensione non standard: struct/union senza nome  
  
-   C4103 'nomefile': utilizzato #pragma pack per modificare l'allineamento  
  
-   C4291 'declaration': operatore delete corrispondente non trovato. memoria non vengono liberata se l'inizializzazione genera un'eccezione  
  
-   C4268 'identifier': dati statici/globali di tipo 'const' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri  
  
-   Codice non eseguibile C4702  
  
 Nei progetti convertiti da versioni precedenti, questi avvisi sono disabilitati ancora per le intestazioni delle librerie.  
  
 Aggiungendo la riga seguente al file stdafx. h prima di includere le intestazioni delle librerie, questo comportamento può essere modificato.  
  
 [!code-cpp[NVC_ATL_Utilities#97](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]  
  
 Se questo `#define` viene aggiunto, le intestazioni ATL devono fare attenzione a mantenere lo stato di questi avvisi in modo che non siano disabilitati a livello globale (o se l'utente disabilita in modo esplicito gli avvisi, per non consentire).  
  
 Nuovi progetti hanno questo `#define` impostato in stdafx. h, per impostazione predefinita.  
  
##  <a name="_atl_apartment_threaded"></a>ATL_APARTMENT_THREADED  
 Definire se uno o più degli oggetti usano il threading apartment.  
  
```
_ATL_APARTMENT_THREADED
```  
  
### <a name="remarks"></a>Note  
 Specifica il threading apartment. Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni di threading e [opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.  
  
##  <a name="_atl_cstring_explicit_constructors"></a>_ATL_CSTRING_EXPLICIT_CONSTRUCTORS  
 Verifica `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.  
  
```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```  
  
### <a name="remarks"></a>Note  
 Quando questo viene definito, tutti i costruttori che accettano un singolo parametro CString vengono compilati con la parola chiave explicit, che impedisce le conversioni implicite di argomenti di input. Ciò significa, ad esempio, che quando viene definito Unicode, se si tenta di utilizzare una stringa char * come un argomento del costruttore CString, genererà un errore del compilatore. Utilizzare questa macro nelle situazioni in cui è necessario per evitare conversioni implicite tra i tipi di stringa "narrow" e "wide".  
  
 Utilizzando la macro t in tutti gli argomenti di stringa al costruttore, è possibile definire _ATL_CSTRING_EXPLICIT_CONSTRUCTORS ed evitare errori di compilazione, indipendentemente dal fatto che sia stato definito Unicode.  
  
##  <a name="_atl_enable_ptm_warning"></a>_ATL_ENABLE_PTM_WARNING  
 Definire questa macro per forzare l'utilizzo della sintassi conforme allo standard ANSI C++ per puntatore a funzioni membro. Tramite questa macro causerà l'errore del compilatore C4867 da generare quando viene utilizzata la sintassi non standard per inizializzare un puntatore a una funzione membro.  
  
```
#define _ATL_ENABLE_PTM_WARNING
```  
  
### <a name="remarks"></a>Note  
 Le librerie MFC e ATL sono state modificate in modo che corrisponda a una migliore compatibilità C++ standard del compilatore Visual C++. In base allo standard ANSI C++, la sintassi di un puntatore a una funzione membro della classe deve essere `&CMyClass::MyFunc`.  
  
 Quando [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) non è definito (nel caso predefinito), ATL/MFC disabilita l'errore C4867 nelle mappe macro (in particolare messaggio mappato) in modo che il codice che è stato creato in versioni precedenti è possibile continuare a compilare come prima. Se si definisce **_ATL_ENABLE_PTM_WARNING**, il codice deve essere conforme allo standard C++.  
  
 Tuttavia, il modulo non standard è stato deprecato, pertanto è necessario spostare il codice esistente per la sintassi conforme standard di C++. Ad esempio, le operazioni seguenti:  
  
 [!code-cpp[NVC_MFCListView#14](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]  
  
 Deve essere modificato in:  
  
 [!code-cpp[NVC_MFCListView#11](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]  
  
 Si noti che per le macro di mappa che aggiunge il carattere '&', è consigliabile non aggiungerlo di nuovo nel codice.  
  
##  <a name="_atl_free_threaded"></a>ATL_FREE_THREADED  
 Definire se uno o più degli oggetti di utilizzo di threading free o neutral.  
  
```
_ATL_FREE_THREADED
```  
  
### <a name="remarks"></a>Note  
 Specifica modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni di threading e [opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.  
  
##  <a name="_atl_multi_threaded"></a>ATL_MULTI_THREADED  
 Un simbolo che indica il progetto avrà gli oggetti che sono contrassegnati come sia disponibile o neutro.  
  
```
_ATL_MULTI_THREADED
```  
  
### <a name="remarks"></a>Note  
 Se questo simbolo è definito, ATL effettuerà il pull nel codice che sincronizzerà correttamente l'accesso ai dati globali. Nuovo codice deve usare la macro equivalente [ATL_FREE_THREADED](#_atl_free_threaded) invece.  
  
##  <a name="_atl_no_automatic_namespace"></a>_ATL_NO_AUTOMATIC_NAMESPACE  
 Un simbolo che impedisce l'utilizzo dello spazio dei nomi predefinito come ATL.  
  
```
_ATL_NO_AUTOMATIC_NAMESPACE
```  
  
### <a name="remarks"></a>Note  
 Se questo simbolo non è definito, tra cui atlbase. h eseguirà **utilizzando lo spazio dei nomi ATL** per impostazione predefinita, che può causare conflitti di denominazione. Per evitare questo problema, definire questo simbolo.  
  
##  <a name="_atl_no_com_support"></a>_ATL_NO_COM_SUPPORT  
 Un simbolo che impedisce il che si sta compilando il progetto di codice relativo a COM.  
  
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
