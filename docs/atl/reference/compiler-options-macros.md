---
title: Macro di opzioni del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 63fa47f4237d27cb8e0d5629e2041244ab360132
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46075098"
---
# <a name="compiler-options-macros"></a>Macro di opzioni del compilatore

Queste macro controllano le funzionalità del compilatore specifici.

|||
|-|-|
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|Un simbolo che attiva gli errori nei progetti convertiti da versioni precedenti di ATL.|
|[ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Definire se uno o più degli oggetti di usare il threading apartment.|
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Assicura `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.|
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Definire questa macro per utilizzare C++ compatibile con la sintassi standard, che genera l'errore del compilatore C4867 quando una sintassi non standard viene utilizzata per inizializzare un puntatore a una funzione membro.|
|[_ATL_FREE_THREADED](#_atl_free_threaded)|Definire se uno o più degli oggetti di usare il threading libero o neutrale.|
|[ATL_MULTI_THREADED](#_atl_multi_threaded)|Un simbolo che indica il progetto avrà gli oggetti che sono contrassegnati come entrambi, Free o neutro. La macro [_ATL_FREE_THREADED](#_atl_free_threaded) invece deve essere utilizzato.|
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|Un simbolo di cui non è possibile utilizzare lo spazio dei nomi predefinito come ATL.|
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|Un simbolo che impedisce che si sta compilando il progetto di codice correlato a COM.|
|[ATL_NO_VTABLE](#atl_no_vtable)|Un simbolo che impedisce che il puntatore vtable inizializzato nel costruttore e distruttore della classe.|
|[ATL_NOINLINE](#atl_noinline)|Un simbolo che indica una funzione non deve essere impostato come inline.|
|[ATL_SINGLE_THREADED](#_atl_single_threaded)|Specificare se tutti gli oggetti utilizzano il modello di threading singolo.|

##  <a name="_atl_all_warnings"></a>  _ATL_ALL_WARNINGS

Un simbolo che attiva gli errori nei progetti convertiti da versioni precedenti di ATL.

```
#define _ATL_ALL_WARNINGS
```

### <a name="remarks"></a>Note

Prima di Visual C++ .NET 2002, ATL disabilitata una grande quantità di avvisi e stati lasciati disabilitato in modo che non bussato mai nel codice utente. In particolare:

- Espressione condizionale C4127 è costante

- C4786 'identifier': identificatore troncato a 'number' caratteri nelle informazioni di debug

- C4201 utilizzata estensione non standard: struct/union senza nome

- C4103 'filename': consente di modificare l'allineamento #pragma pack

- C4291 'declaration': operatore delete corrispondente non trovato. memoria non verranno liberata se inizializzazione genera un'eccezione

- C4268 'identifier': i dati statici/globali 'const' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri

- Codice non eseguibile C4702

Nei progetti convertiti da versioni precedenti, questi avvisi sono disabilitati ancora per le intestazioni di librerie.

Aggiungendo la riga seguente al file stdafx. h prima di includere le intestazioni di librerie, questo comportamento può essere modificato.

[!code-cpp[NVC_ATL_Utilities#97](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]

Se l'oggetto `#define` viene aggiunto, le intestazioni ATL devono fare attenzione a mantenere lo stato di questi avvisi in modo che non siano disabilitati a livello globale (o se l'utente disabilita in modo esplicito gli avvisi, non per consentire loro).

I nuovi progetti hanno questo `#define` in stdafx. h per impostazione predefinita.

##  <a name="_atl_apartment_threaded"></a>  ATL_APARTMENT_THREADED

Definire se uno o più degli oggetti di usare il threading apartment.

```
_ATL_APARTMENT_THREADED
```

### <a name="remarks"></a>Note

Specifica il threading apartment. Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni, threading e [Creazione guidata oggetto semplice ATL, opzioni](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.

##  <a name="_atl_cstring_explicit_constructors"></a>  _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

Assicura `CString` costruttori espliciti, impedendo tutte le conversioni non intenzionali.

```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```

### <a name="remarks"></a>Note

Quando questo viene definito, tutti i costruttori CString che accettano un parametro singolo vengono compilati con la parola chiave explicit, che impedisce le conversioni implicite di argomenti di input. Ciò significa, ad esempio, che quando viene definito Unicode, se si tenta di usare una stringa char * come argomento del costruttore CString, verrà generato un errore del compilatore. Usare questa macro nei casi in cui sia necessario per impedire le conversioni implicite tra tipi di stringa narrow e "wide".

Utilizzando la macro t in tutti gli argomenti di stringa al costruttore, è possibile definire _ATL_CSTRING_EXPLICIT_CONSTRUCTORS ed evitare errori di compilazione indipendentemente dal fatto che si sia definito Unicode.

##  <a name="_atl_enable_ptm_warning"></a>  _ATL_ENABLE_PTM_WARNING

Definire questa macro per forzare l'utilizzo della sintassi conformi allo standard ANSI C++ per un puntatore a funzioni membro. Con questa macro causerà l'errore del compilatore C4867 da generare quando viene utilizzata la sintassi non standard per inizializzare un puntatore a una funzione membro.

```
#define _ATL_ENABLE_PTM_WARNING
```

### <a name="remarks"></a>Note

Le librerie ATL e MFC sono state modificate in modo da corrispondere migliore conformità C++ standard del compilatore Visual C++. In base allo standard ANSI C++, la sintassi di un puntatore a una funzione membro della classe deve essere `&CMyClass::MyFunc`.

Quando [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) non è definito (nel caso predefinito), ATL/MFC disabilita l'errore C4867 nelle mappe di macro (in particolare messaggio mappato) in modo che il codice che è stato creato nelle versioni precedenti è possibile continuare a compilare come indicato in precedenza. Se si definiscono **_ATL_ENABLE_PTM_WARNING**, il codice deve essere conforme allo standard C++.

Tuttavia, il formato non standard è stato deprecato, pertanto è necessario spostare il codice esistente in sintassi conforme a standard di C++. Ad esempio, di seguito:

[!code-cpp[NVC_MFCListView#14](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]

Deve essere modificato in:

[!code-cpp[NVC_MFCListView#11](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]

Si noti che per la macro della mappa che aggiunge il carattere '&', è necessario non aggiungerla nuovamente nel codice.

##  <a name="_atl_free_threaded"></a>  _ATL_FREE_THREADED

Definire se uno o più degli oggetti di usare il threading libero o neutrale.

```
_ATL_FREE_THREADED
```

### <a name="remarks"></a>Note

Specifica modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni, threading e [Creazione guidata oggetto semplice ATL, opzioni](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.

##  <a name="_atl_multi_threaded"></a>  ATL_MULTI_THREADED

Un simbolo che indica il progetto avrà gli oggetti che sono contrassegnati come entrambi, Free o neutro.

```
_ATL_MULTI_THREADED
```

### <a name="remarks"></a>Note

Se questo simbolo è definito, ATL permette di ottenere codice che eseguirà la sincronizzazione correttamente l'accesso ai dati globali. Nuovo codice deve usare la macro equivalente [_ATL_FREE_THREADED](#_atl_free_threaded) invece.

##  <a name="_atl_no_automatic_namespace"></a>  _ATL_NO_AUTOMATIC_NAMESPACE

Un simbolo di cui non è possibile utilizzare lo spazio dei nomi predefinito come ATL.

```
_ATL_NO_AUTOMATIC_NAMESPACE
```

### <a name="remarks"></a>Note

Se questo simbolo non è definito, tra cui atlbase. h eseguirà **usando lo spazio dei nomi ATL** per impostazione predefinita, questo può causare conflitti di denominazione. Per evitare questo problema, definire questo simbolo.

##  <a name="_atl_no_com_support"></a>  _ATL_NO_COM_SUPPORT

Un simbolo che impedisce che si sta compilando il progetto di codice correlato a COM.

```
_ATL_NO_COM_SUPPORT
```

##  <a name="atl_no_vtable"></a>  ATL_NO_VTABLE

Un simbolo che impedisce che il puntatore vtable inizializzato nel costruttore e distruttore della classe.

```
ATL_NO_VTABLE
```

### <a name="remarks"></a>Note

Se il puntatore vtable viene impedito di inizializzato nel costruttore della classe e il distruttore, il linker può escludere vtable e tutte le funzioni a cui punta. Si espande **novtable**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#53](../../atl/codesnippet/cpp/compiler-options-macros_4.h)]

##  <a name="atl_noinline"></a>  ATL_NOINLINE

Un simbolo che indica una funzione non deve essere impostato come inline.

```
    ATL_NOINLINE inline
    myfunction()
    {
    ...
    }
```

### <a name="parameters"></a>Parametri

*MyFunction*<br/>
Funzione che non deve essere impostato come inline.

### <a name="remarks"></a>Note

Utilizzare questo simbolo, se si vuole specificare che una funzione non ottiene impostato come inline dal compilatore, anche se deve essere dichiarato come inline in modo che può essere inserito in un file di intestazione. Si espande **noinline**.

##  <a name="_atl_single_threaded"></a>  ATL_SINGLE_THREADED

Definire se tutti gli oggetti utilizzano il singolo modello di threading

```
_ATL_SINGLE_THREADED
```

### <a name="remarks"></a>Note

Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre opzioni, threading e [Creazione guidata oggetto semplice ATL, opzioni](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
