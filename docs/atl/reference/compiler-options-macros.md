---
title: Macro Opzioni del compilatore
ms.date: 08/19/2019
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
helpviewer_keywords:
- compiler options, macros
ms.assetid: a869adc6-b3de-4299-b040-9ae20b45f82c
ms.openlocfilehash: 84083c696ee7bdcbb9538bf587c4aaded7a3932e
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630636"
---
# <a name="compiler-options-macros"></a>Macro Opzioni del compilatore

Queste macro controllano funzionalità specifiche del compilatore.

|||
|-|-|
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|Simbolo che consente di abilitare gli errori nei progetti convertiti da versioni precedenti di ATL.|
|[_ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Definire se uno o più oggetti utilizzano il threading dell'Apartment.|
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Rende espliciti determinati `CString` costruttori, impedendo le conversioni non intenzionali.|
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Definire questa macro per utilizzare C++ la sintassi conforme allo standard, che genera l'errore del compilatore avviso C4867 quando viene utilizzata una sintassi non standard per inizializzare un puntatore a una funzione membro.|
|[_ATL_FREE_THREADED](#_atl_free_threaded)|Definire se uno o più oggetti utilizzano un Threading libero o neutro.|
|[_ATL_MULTI_THREADED](#_atl_multi_threaded)|Un simbolo che indica che il progetto avrà oggetti contrassegnati come, liberi o neutri. In alternativa, è consigliabile usare la macro [_ATL_FREE_THREADED](#_atl_free_threaded) .|
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|Simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.|
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|Simbolo che impedisce la compilazione del codice correlato a COM con il progetto.|
|[ATL_NO_VTABLE](#atl_no_vtable)|Simbolo che impedisce l'inizializzazione del puntatore vtable nel costruttore e nel distruttore della classe.|
|[ATL_NOINLINE](#atl_noinline)|Un simbolo che indica una funzione non deve essere inline.|
|[_ATL_SINGLE_THREADED](#_atl_single_threaded)|Definire se tutti gli oggetti utilizzano il modello a thread singolo.|

##  <a name="_atl_all_warnings"></a>_ATL_ALL_WARNINGS

Simbolo che consente di abilitare gli errori nei progetti convertiti da versioni precedenti di ATL.

```
#define _ATL_ALL_WARNINGS
```

### <a name="remarks"></a>Note

Prima di C++ Visual .NET 2002, ATL disabilitava molti avvisi e li lasciava disabilitati in modo che non venissero mai visualizzati nel codice utente. In particolare:

- L'espressione condizionale C4127 è costante

- C4786' Identifier ': identificatore troncato a' Number ' caratteri nelle informazioni di debug

- Utilizzata estensione non standard C4201: struct/union senza nome

- C4103' filename ': usato #pragma pack per modificare l'allineamento

- C4291' declaration ': non è stato trovato alcun operatore delete corrispondente. la memoria non verrà liberata se l'inizializzazione genera un'eccezione

- C4268' Identifier ': i dati statici/globali ' const ' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri

- Codice non eseguibile C4702

Nei progetti convertiti da versioni precedenti, questi avvisi sono ancora disabilitati dalle intestazioni delle librerie.

Aggiungendo la riga seguente al file *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) prima di includere le intestazioni delle librerie, questo comportamento può essere modificato.

[!code-cpp[NVC_ATL_Utilities#97](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]

Se questa `#define` operazione viene aggiunta, le intestazioni ATL consentono di mantenere lo stato di questi avvisi in modo che non siano disabilitati a livello globale (o se l'utente disabilita in modo esplicito singoli avvisi, non per abilitarli).

I nuovi progetti hanno `#define` questo set in *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) per impostazione predefinita.

##  <a name="_atl_apartment_threaded"></a>  _ATL_APARTMENT_THREADED

Definire se uno o più oggetti utilizzano il threading dell'Apartment.

```
_ATL_APARTMENT_THREADED
```

### <a name="remarks"></a>Note

Specifica il threading dell'Apartment. Per una descrizione dei modelli di threading disponibili per un oggetto ATL, vedere [specifica del modello di threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni di threading e [Opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) .

##  <a name="_atl_cstring_explicit_constructors"></a>  _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

Rende espliciti determinati `CString` costruttori, impedendo le conversioni non intenzionali.

```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```

### <a name="remarks"></a>Note

Quando viene definito questo costruttore, tutti i costruttori CString che accettano un singolo parametro vengono compilati con la parola chiave Explicit, che impedisce le conversioni implicite degli argomenti di input. Ciò significa, ad esempio, che quando viene definito _UNICODE, se si tenta di usare una stringa char * come argomento del costruttore CString, viene generato un errore del compilatore. Usare questa macro in situazioni in cui è necessario impedire le conversioni implicite tra tipi di stringa narrow e Wide.

Utilizzando la macro _T su tutti gli argomenti di stringa del costruttore, è possibile definire _ATL_CSTRING_EXPLICIT_CONSTRUCTORS ed evitare errori di compilazione indipendentemente dal fatto che _UNICODE sia definito.

##  <a name="_atl_enable_ptm_warning"></a>  _ATL_ENABLE_PTM_WARNING

Definire questa macro per forzare l'uso della sintassi conforme allo standard ANSI C++ per le funzioni puntatore a membro. L'uso di questa macro provocherà la generazione dell'errore del compilatore avviso C4867 quando la sintassi non standard viene usata per inizializzare un puntatore a una funzione membro.

```
#define _ATL_ENABLE_PTM_WARNING
```

### <a name="remarks"></a>Note

Le librerie ATL e MFC sono state modificate in modo da corrispondere C++ alla conformità standard C++ del compilatore Microsoft. Secondo lo standard ANSI C++ , la sintassi di un puntatore a una funzione membro di classe deve essere `&CMyClass::MyFunc`.

Quando [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) non è definito (caso predefinito), ATL/MFC Disabilita l'errore avviso C4867 nelle mappe delle macro (in particolare mappe messaggi), in modo che il codice creato nelle versioni precedenti possa continuare a compilare come prima. Se si definisce **_ATL_ENABLE_PTM_WARNING**, il codice deve essere C++ conforme allo standard.

Tuttavia, il formato non standard è stato deprecato. È necessario spostare il codice esistente nella C++ sintassi conforme allo standard. Ad esempio, il seguente codice:

[!code-cpp[NVC_MFCListView#14](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]

Deve essere modificato in:

[!code-cpp[NVC_MFCListView#11](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]

Per le macro della mappa, aggiungere il carattere e commerciale ' &'. Non è necessario aggiungere di nuovo il carattere nel codice.

##  <a name="_atl_free_threaded"></a>_ATL_FREE_THREADED

Definire se uno o più oggetti utilizzano un Threading libero o neutro.

```
_ATL_FREE_THREADED
```

### <a name="remarks"></a>Note

Specifica il threading libero. Il threading libero è equivalente a un modello di Apartment multithread. Per una descrizione dei modelli di threading disponibili per un oggetto ATL, vedere [specifica del modello di threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni di threading e [Opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) .

##  <a name="_atl_multi_threaded"></a>_ATL_MULTI_THREADED

Un simbolo che indica che il progetto avrà oggetti contrassegnati come, liberi o neutri.

```
_ATL_MULTI_THREADED
```

### <a name="remarks"></a>Note

Se questo simbolo è definito, ATL eseguirà il pull del codice che sincronizza correttamente l'accesso ai dati globali. Il nuovo codice deve invece usare la macro equivalente [_ATL_FREE_THREADED](#_atl_free_threaded) .

##  <a name="_atl_no_automatic_namespace"></a>  _ATL_NO_AUTOMATIC_NAMESPACE

Simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.

```
_ATL_NO_AUTOMATIC_NAMESPACE
```

### <a name="remarks"></a>Note

Se il simbolo non è definito, incluso atlbase. h verrà eseguito **utilizzando lo spazio dei nomi ATL** per impostazione predefinita, che può causare conflitti di denominazione. Per evitare questo problema, definire questo simbolo.

##  <a name="_atl_no_com_support"></a>  _ATL_NO_COM_SUPPORT

Simbolo che impedisce la compilazione del codice correlato a COM con il progetto.

```
_ATL_NO_COM_SUPPORT
```

##  <a name="atl_no_vtable"></a>  ATL_NO_VTABLE

Simbolo che impedisce l'inizializzazione del puntatore vtable nel costruttore e nel distruttore della classe.

```
ATL_NO_VTABLE
```

### <a name="remarks"></a>Note

Se l'inizializzazione del puntatore vtable viene impedita nel costruttore e nel distruttore della classe, il linker può eliminare il vtable e tutte le funzioni a cui fa riferimento. Si espande a **_ _ declspec (novtable)** .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#53](../../atl/codesnippet/cpp/compiler-options-macros_4.h)]

##  <a name="atl_noinline"></a>  ATL_NOINLINE

Un simbolo che indica una funzione non deve essere inline.

```
    ATL_NOINLINE inline
    myfunction()
    {
    ...
    }
```

### <a name="parameters"></a>Parametri

*MyFunction*<br/>
Funzione che non deve essere inline.

### <a name="remarks"></a>Note

Utilizzare questo simbolo se si desidera assicurarsi che una funzione non venga inline dal compilatore, anche se deve essere dichiarata come inline in modo che possa essere inserita in un file di intestazione. Si espande a **_ _ declspec (noinline)** .

##  <a name="_atl_single_threaded"></a>_ATL_SINGLE_THREADED

Definire se tutti gli oggetti utilizzano il modello a thread singolo

```
_ATL_SINGLE_THREADED
```

### <a name="remarks"></a>Note

Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Per una descrizione dei modelli di threading disponibili per un oggetto ATL, vedere [specifica del modello di threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni di threading e [Opzioni, creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) .

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
