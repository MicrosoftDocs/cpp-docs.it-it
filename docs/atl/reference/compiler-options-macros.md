---
title: Macro delle opzioni del compilatore
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
ms.openlocfilehash: 702324c3300ff23bb60113529a681e3b8fa99354
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331615"
---
# <a name="compiler-options-macros"></a>Macro delle opzioni del compilatore

Queste macro controllano funzionalità specifiche del compilatore.

|||
|-|-|
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|Simbolo che abilita gli errori nei progetti convertiti da versioni precedenti di ATL.|
|[_ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Definire se uno o più oggetti utilizzano il threading apartment.|
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Rende `CString` espliciti determinati costruttori, impedendo qualsiasi conversione non intenzionale.|
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Definire questa macro per utilizzare la sintassi conforme allo standard C, che genera l'errore del compilatore C4867 quando viene utilizzata una sintassi non standard per inizializzare un puntatore a una funzione membro.|
|[_ATL_FREE_THREADED](#_atl_free_threaded)|Definire se uno o più oggetti utilizzano il threading libero o neutro.|
|[_ATL_MULTI_THREADED](#_atl_multi_threaded)|Un simbolo che indica che il progetto disporrà di oggetti contrassegnati come Entrambi, Liberi o Neutri. Al suo posto deve essere utilizzata la [_ATL_FREE_THREADED](#_atl_free_threaded) macro.|
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|Simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.|
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|Simbolo che impedisce la compilazione di codice correlato a COM con il progetto.|
|[ATL_NO_VTABLE](#atl_no_vtable)|Simbolo che impedisce l'inizializzazione del puntatore vtable nel costruttore e nel distruttore della classe.|
|[ATL_NOINLINE](#atl_noinline)|Simbolo che indica che una funzione non deve essere redadata inline.|
|[_ATL_SINGLE_THREADED](#_atl_single_threaded)|Definire se tutti gli oggetti utilizzano il modello di threading singolo.|

## <a name="_atl_all_warnings"></a><a name="_atl_all_warnings"></a>_ATL_ALL_WARNINGS

Simbolo che abilita gli errori nei progetti convertiti da versioni precedenti di ATL.

```
#define _ATL_ALL_WARNINGS
```

### <a name="remarks"></a>Osservazioni

Prima di Visual C.NET 2002, ATL disattivava molti avvisi e li lasciava disabilitati in modo che non fossero mai visualizzati nel codice utente. In particolare:

- L'espressione condizionale C4127 è costante

- C4786 'identificatore': l'identificatore è stato troncato a 'numero' caratteri nelle informazioni di debug

- C4201 estensione non standard utilizzata : struttura/unione senza nome

- C4103 'nomefile': utilizzato #pragma pacchetto per modificare l'allineamento

- C4291 'dichiarazione': nessun operatore corrispondente delete trovato; la memoria non verrà liberata se l'inizializzazione genera un'eccezione

- C4268 'identificatore': dati statici/globali 'const' inizializzati con il costruttore predefinito generato dal compilatore riempie l'oggetto con zeri

- Codice non raggiungibile C4702

Nei progetti convertiti da versioni precedenti, questi avvisi sono ancora disabilitati dalle intestazioni delle librerie.

Aggiungendo la riga seguente al *file pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti) prima di includere le intestazioni delle librerie, questo comportamento può essere modificato.

[!code-cpp[NVC_ATL_Utilities#97](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]

Se `#define` viene aggiunto, le intestazioni ATL sono attenti a mantenere lo stato di questi avvisi in modo che non siano disabilitati a livello globale (o se l'utente disabilita in modo esplicito i singoli avvisi, non per abilitarli).

Per impostazione `#define` predefinita, i nuovi progetti hanno questo set in *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti).

## <a name="_atl_apartment_threaded"></a><a name="_atl_apartment_threaded"></a>_ATL_APARTMENT_THREADED

Definire se uno o più oggetti utilizzano il threading apartment.

```
_ATL_APARTMENT_THREADED
```

### <a name="remarks"></a>Osservazioni

Specifica il threading dell'apartment. Vedere [Specifica del modello](../../atl/specifying-the-threading-model-for-a-project-atl.md) di threading del progetto per altre opzioni di threading e [Opzioni, Creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione dei modelli di threading disponibili per un oggetto ATL.

## <a name="_atl_cstring_explicit_constructors"></a><a name="_atl_cstring_explicit_constructors"></a>_ATL_CSTRING_EXPLICIT_CONSTRUCTORS

Rende `CString` espliciti determinati costruttori, impedendo qualsiasi conversione non intenzionale.

```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```

### <a name="remarks"></a>Osservazioni

Quando questo costruttore è definito, tutti i costruttori CString che accettano un singolo parametro vengono compilati con la parola chiave explicit, che impedisce la conversione implicita di argomenti di input. Ciò significa, ad esempio, che quando _UNICODE è definito, se si tenta di utilizzare una stringa char , come argomento del costruttore CString, verrà generato un errore del compilatore. Utilizzare questa macro nelle situazioni in cui è necessario impedire conversioni implicite tra tipi di stringa narrow e wide.

Utilizzando la macro _T su tutti gli argomenti stringa del costruttore, è possibile definire _ATL_CSTRING_EXPLICIT_CONSTRUCTORS ed evitare errori di compilazione indipendentemente dal fatto che _UNICODE sia definito.

## <a name="_atl_enable_ptm_warning"></a><a name="_atl_enable_ptm_warning"></a>_ATL_ENABLE_PTM_WARNING

Definire questa macro per forzare l'utilizzo della sintassi conforme allo standard ANSI C, per le funzioni puntatore a membro. Se si utilizza questa macro, l'errore del compilatore C4867 verrà generato quando viene utilizzata la sintassi non standard per inizializzare un puntatore a una funzione membro.

```
#define _ATL_ENABLE_PTM_WARNING
```

### <a name="remarks"></a>Osservazioni

Le librerie ATL e MFC sono state modificate in modo che corrispondano alla conformità standard migliorata del compilatore di Microsoft C. In base allo standard ANSI C, la sintassi di un `&CMyClass::MyFunc`puntatore a una funzione membro di classe deve essere .

Quando [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) non è definito (il caso predefinito), ATL/MFC disabilita l'errore C4867 nelle mappe macro (in particolare le mappe messaggi) in modo che il codice creato nelle versioni precedenti possa continuare a compilare come in precedenza. Se si definisce **_ATL_ENABLE_PTM_WARNING**, il codice deve essere conforme allo standard c.

Tuttavia, il formato non standard è stato deprecato. È necessario spostare il codice esistente in una sintassi conforme allo standard C. Ad esempio, il seguente codice:

[!code-cpp[NVC_MFCListView#14](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]

Devono essere modificati in:

[!code-cpp[NVC_MFCListView#11](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]

Per le macro di mappa, aggiungere il carattere e commerciale '&'. Non è necessario aggiungere nuovamente il carattere nel codice.

## <a name="_atl_free_threaded"></a><a name="_atl_free_threaded"></a>_ATL_FREE_THREADED

Definire se uno o più oggetti utilizzano il threading libero o neutro.

```
_ATL_FREE_THREADED
```

### <a name="remarks"></a>Osservazioni

Specifica il threading libero. Il threading Free è equivalente a un modello di apartment multithread. Vedere [Specifica del modello](../../atl/specifying-the-threading-model-for-a-project-atl.md) di threading del progetto per altre opzioni di threading e [Opzioni, Creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione dei modelli di threading disponibili per un oggetto ATL.

## <a name="_atl_multi_threaded"></a><a name="_atl_multi_threaded"></a>_ATL_MULTI_THREADED

Un simbolo che indica che il progetto disporrà di oggetti contrassegnati come Entrambi, Liberi o Neutri.

```
_ATL_MULTI_THREADED
```

### <a name="remarks"></a>Osservazioni

Se questo simbolo è definito, ATL estrarrà il codice che sincronizza correttamente l'accesso ai dati globali. Il nuovo codice deve invece utilizzare la macro equivalente [_ATL_FREE_THREADED.](#_atl_free_threaded)

## <a name="_atl_no_automatic_namespace"></a><a name="_atl_no_automatic_namespace"></a>_ATL_NO_AUTOMATIC_NAMESPACE

Simbolo che impedisce l'utilizzo predefinito dello spazio dei nomi come ATL.

```
_ATL_NO_AUTOMATIC_NAMESPACE
```

### <a name="remarks"></a>Osservazioni

Se questo simbolo non è definito, in cui atlbase.h eseguirà **l'utilizzo di ATL dello spazio dei nomi** per impostazione predefinita, con conduttura di conflitti di denominazione. Per evitare questo problema, definire questo simbolo.

## <a name="_atl_no_com_support"></a><a name="_atl_no_com_support"></a>_ATL_NO_COM_SUPPORT

Simbolo che impedisce la compilazione di codice correlato a COM con il progetto.

```
_ATL_NO_COM_SUPPORT
```

## <a name="atl_no_vtable"></a><a name="atl_no_vtable"></a>ATL_NO_VTABLE

Simbolo che impedisce l'inizializzazione del puntatore vtable nel costruttore e nel distruttore della classe.

```
ATL_NO_VTABLE
```

### <a name="remarks"></a>Osservazioni

Se al puntatore vtable viene impedito di essere inizializzato nel costruttore e nel distruttore della classe, il linker può eliminare vtable e tutte le funzioni a cui punta. Espande a **__declspec(novtable)**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#53](../../atl/codesnippet/cpp/compiler-options-macros_4.h)]

## <a name="atl_noinline"></a><a name="atl_noinline"></a>ATL_NOINLINE

Simbolo che indica che una funzione non deve essere inline.

```
    ATL_NOINLINE inline
    myfunction()
    {
    ...
    }
```

### <a name="parameters"></a>Parametri

*Myfunction*<br/>
La funzione che non deve essere inline.

### <a name="remarks"></a>Osservazioni

Utilizzare questo simbolo se si desidera garantire che una funzione non venga inline dal compilatore, anche se deve essere dichiarata come inline in modo che possa essere inserita in un file di intestazione. Si espande in **__declspec(noinline)**.

## <a name="_atl_single_threaded"></a><a name="_atl_single_threaded"></a>_ATL_SINGLE_THREADED

Definire se tutti gli oggetti utilizzano il modello di threading singoloDefine if all of your objects use the single threading model

```
_ATL_SINGLE_THREADED
```

### <a name="remarks"></a>Osservazioni

Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Vedere [Specifica del modello](../../atl/specifying-the-threading-model-for-a-project-atl.md) di threading del progetto per altre opzioni di threading e [Opzioni, Creazione guidata oggetto semplice ATL](../../atl/reference/options-atl-simple-object-wizard.md) per una descrizione dei modelli di threading disponibili per un oggetto ATL.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
