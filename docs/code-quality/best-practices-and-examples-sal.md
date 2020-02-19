---
title: Suggerimenti ed esempi (SAL)
ms.date: 11/04/2016
ms.topic: conceptual
ms.openlocfilehash: 304ba98ae5118f2ca8fb425c8dd7065bd19c8287
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418620"
---
# <a name="best-practices-and-examples-sal"></a>Suggerimenti ed esempi (SAL)

Ecco alcuni modi per sfruttare al meglio il linguaggio di annotazione del codice sorgente (SAL) ed evitare alcuni problemi comuni.

## <a name="_in_"></a>\_In\_

Se si suppone che la funzione scriva nell'elemento, utilizzare `_Inout_` anziché `_In_`. Questa operazione è particolarmente importante in caso di conversione automatica da macro precedenti a SAL. Prima di SAL, molti programmatori usavano le macro come commenti, ovvero le macro denominate `IN`, `OUT`, `IN_OUT`o varianti di questi nomi. Anche se si consiglia di convertire queste macro in SAL, è necessario prestare attenzione quando si esegue la conversione perché il codice potrebbe essere stato modificato dopo che il prototipo originale è stato scritto e la macro precedente potrebbe non riflettere più le operazioni del codice. Prestare particolare attenzione alla macro del commento `OPTIONAL` perché spesso viene posizionata in modo errato, ad esempio sul lato errato di una virgola.

```cpp

// Incorrect
void Func1(_In_ int *p1)
{
    if (p1 == NULL)
        return;

    *p1 = 1;
}

// Correct
void Func2(_Inout_ PCHAR p1)
{
    if (p1 == NULL)
        return;

    *p1 = 1;
}
```

## <a name="_opt_"></a>\_opt\_

Se il chiamante non è autorizzato a passare un puntatore null, utilizzare `_In_` o `_Out_` invece di `_In_opt_` o `_Out_opt_`. Si applica anche a una funzione che controlla i relativi parametri e restituisce un errore se è NULL se non deve essere. Sebbene la presenza di una funzione per il controllo del parametro per un valore NULL imprevisto e la restituzione di una normale procedura di codifica, non significa che l'annotazione del parametro può essere di tipo facoltativo (`_*Xxx*_opt_`).

```cpp

// Incorrect
void Func1(_Out_opt_ int *p1)
{
    *p = 1;
}

// Correct
void Func2(_Out_ int *p1)
{
    *p = 1;
}
```

## <a name="_pre_defensive_-and-_post_defensive_"></a>\_\_ difensivo pre\_e \_post\_difensivo\_

Se in una funzione è presente un limite di attendibilità, si consiglia di utilizzare l'annotazione `_Pre_defensive_`.  Il modificatore "difensivo" modifica alcune annotazioni per indicare che, al momento della chiamata, l'interfaccia deve essere controllata rigorosamente, ma nel corpo di implementazione deve presumere che potrebbero essere passati parametri non corretti. In tal caso, `_In_ _Pre_defensive_` viene preferito ad un limite di attendibilità per indicare che sebbene un chiamante otterrà un errore se tenta di passare NULL, il corpo della funzione verrà analizzato come se il parametro fosse NULL e verranno contrassegnati tutti i tentativi di de referenziare il puntatore senza prima controllare che non sia NULL.  Un'annotazione `_Post_defensive_` può inoltre essere utilizzata nei callback, dove si assume che la parte attendibile sia il chiamante e il codice non attendibile sia il codice chiamato.

## <a name="_out_writes_"></a>\_\_Scritture\_

Nell'esempio seguente viene illustrato un utilizzo comune dei `_Out_writes_`.

```cpp

// Incorrect
void Func1(_Out_writes_(size) CHAR *pb,
    DWORD size
);
```

L'annotazione `_Out_writes_` indica che è presente un buffer. Ha `cb` byte allocati, con il primo byte inizializzato all'uscita. Questa annotazione non è strettamente sbagliata ed è utile per esprimere le dimensioni allocate. Tuttavia, non indica il numero di elementi inizializzati dalla funzione.

Nell'esempio riportato di seguito vengono illustrati tre modi corretti per specificare completamente le dimensioni esatte della parte inizializzata del buffer.

```cpp

// Correct
void Func1(_Out_writes_to_(size, *pCount) CHAR *pb,
    DWORD size,
    PDWORD pCount
);

void Func2(_Out_writes_all_(size) CHAR *pb,
    DWORD size
);

void Func3(_Out_writes_(size) PSTR pb,
    DWORD size
);
```

## <a name="_out_-pstr"></a>\_\_ PSTR

L'uso di `_Out_ PSTR` è quasi sempre errato. Viene interpretato come avente un parametro di output che punta a un buffer di caratteri e con terminazione NULL.

```cpp

// Incorrect
void Func1(_Out_ PSTR pFileName, size_t n);

// Correct
void Func2(_Out_writes_(n) PSTR wszFileName, size_t n);
```

Un'annotazione come `_In_ PCSTR` è comune e utile. Punta a una stringa di input con terminazione NULL perché la precondizione di `_In_` consente il riconoscimento di una stringa con terminazione NULL.

## <a name="_in_-wchar-p"></a>\_in\_ WCHAR * p

`_In_ WCHAR* p` indica che è presente un puntatore di input `p` che punta a un carattere. Nella maggior parte dei casi, tuttavia, probabilmente non è la specifica desiderata. È invece probabile che sia la specifica di una matrice con terminazione NULL. a tale scopo, utilizzare `_In_ PWSTR`.

```cpp

// Incorrect
void Func1(_In_ WCHAR* wszFileName);

// Correct
void Func2(_In_ PWSTR wszFileName);
```

Manca la specifica corretta della terminazione NULL è comune. Usare la versione di `STR` appropriata per sostituire il tipo, come illustrato nell'esempio seguente.

```cpp

// Incorrect
BOOL StrEquals1(_In_ PCHAR p1, _In_ PCHAR p2)
{
    return strcmp(p1, p2) == 0;
}

// Correct
BOOL StrEquals2(_In_ PSTR p1, _In_ PSTR p2)
{
    return strcmp(p1, p2) == 0;
}
```

## <a name="_out_range_"></a>\_\_intervallo\_

Se il parametro è un puntatore e si desidera esprimere l'intervallo del valore dell'elemento a cui punta il puntatore, utilizzare `_Deref_out_range_` anziché `_Out_range_`. Nell'esempio seguente viene espresso l'intervallo di * pcbFilled, non pcbFilled.

```cpp

// Incorrect
void Func1(
    _Out_writes_bytes_to_(cbSize, *pcbFilled) BYTE *pb,
    DWORD cbSize,
    _Out_range_(0, cbSize) DWORD *pcbFilled
);

// Correct
void Func2(
    _Out_writes_bytes_to_(cbSize, *pcbFilled) BYTE *pb,
    DWORD cbSize,
    _Deref_out_range_(0, cbSize) _Out_ DWORD *pcbFilled
);
```

`_Deref_out_range_(0, cbSize)` non è strettamente necessario per alcuni strumenti perché può essere dedotto da `_Out_writes_to_(cbSize,*pcbFilled)`, ma viene visualizzato qui per completezza.

## <a name="wrong-context-in-_when_"></a>Contesto errato in \_quando\_

Un altro errore comune è quello di usare la valutazione post-stato per le precondizioni. Nell'esempio seguente `_Requires_lock_held_` è una condizione preliminare.

```cpp

// Incorrect
_When_(return == 0, _Requires_lock_held_(p->cs))
int Func1(_In_ MyData *p, int flag);

// Correct
_When_(flag == 0, _Requires_lock_held_(p->cs))
int Func2(_In_ MyData *p, int flag);
```

L'espressione `result` fa riferimento a un valore di post-stato non disponibile in pre-stato.

## <a name="true-in-_success_"></a>TRUE in \_esito positivo\_

Se la funzione ha esito positivo quando il valore restituito è diverso da zero, utilizzare `return != 0` come condizione di esito positivo anziché `return == TRUE`. Il valore diverso da zero non significa necessariamente l'equivalenza al valore effettivo fornito dal compilatore per `TRUE`. Il parametro `_Success_` è un'espressione e le seguenti espressioni vengono valutate come equivalenti: `return != 0`, `return != false`, `return != FALSE` e `return` senza parametri o confronti.

```cpp
// Incorrect
_Success_(return == TRUE) _Acquires_lock_(*lpCriticalSection)
BOOL WINAPI TryEnterCriticalSection(
  _Inout_ LPCRITICAL_SECTION lpCriticalSection
);

// Correct
_Success_(return != 0) _Acquires_lock_(*lpCriticalSection)
BOOL WINAPI TryEnterCriticalSection(
  _Inout_ LPCRITICAL_SECTION lpCriticalSection
);
```

## <a name="reference-variable"></a>Variabile di riferimento

Per una variabile di riferimento, la versione precedente di SAL usava il puntatore implicito come destinazione dell'annotazione e richiedeva l'aggiunta di un `__deref` alle annotazioni associate a una variabile di riferimento. Questa versione USA l'oggetto stesso e non richiede la `_Deref_`aggiuntiva.

```cpp

// Incorrect
void Func1(
    _Out_writes_bytes_all_(cbSize) BYTE *pb,
    _Deref_ _Out_range_(0, 2) _Out_ DWORD &cbSize
);

// Correct
void Func2(
    _Out_writes_bytes_all_(cbSize) BYTE *pb,
    _Out_range_(0, 2) _Out_ DWORD &cbSize
);
```

## <a name="annotations-on-return-values"></a>Annotazioni nei valori restituiti

Nell'esempio seguente viene illustrato un problema comune nelle annotazioni del valore restituito.

```cpp

// Incorrect
_Out_opt_ void *MightReturnNullPtr1();

// Correct
_Ret_maybenull_ void *MightReturnNullPtr2();
```

In questo esempio `_Out_opt_` indica che il puntatore potrebbe essere NULL come parte della precondizione. Tuttavia, non è possibile applicare le precondizioni al valore restituito. In questo caso, l'annotazione corretta viene `_Ret_maybenull_`.

## <a name="see-also"></a>Vedere anche

[Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)  
[Informazioni su SAL](../code-quality/understanding-sal.md)  
[Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)  
[Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)  
[Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)  
[Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)  
[Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)  
[Funzioni intrinseche](../code-quality/intrinsic-functions.md)
