---
title: Annotazione di parametri di funzione e valori restituiti
description: Guida di riferimento alle annotazioni di parametri di funzione e valori restituiti.
ms.date: 10/15/2019
ms.topic: conceptual
f1_keywords:
- _Outptr_opt_result_bytebuffer_to_
- _Inout_updates_all_opt_
- _Post_equal_to_
- _Outptr_opt_result_maybenull_
- _Out_writes_bytes_all_
- _Out_writes_all_opt_
- _In_opt_
- _Outptr_
- _Outptr_result_maybenull_
- _Outref_result_bytebuffer_all_maybenull_
- _Inout_updates_opt_z_
- _Inout_updates_z_
- _Out_writes_
- _Out_writes_to_ptr_opt_z_
- _In_reads_to_ptr_opt_
- _Ret_writes_to_maybenull_
- _Outref_result_maybenull_
- _Ret_writes_bytes_
- _Outptr_result_bytebuffer_
- _Out_writes_opt_
- _Inout_updates_bytes_opt_
- _In_z_
- _Inout_updates_to_
- _Ret_maybenull_
- _Ret_writes_bytes_to_
- _Ret_z_
- _COM_Outptr_
- _Ret_maybenull_z_
- _Out_opt_
- _In_reads_opt_z_
- _Outptr_result_bytebuffer_to_
- _Ret_notnull_
- _COM_Outptr_opt_result_maybenull_
- _Inout_updates_to_opt_
- _Inout_updates_
- _Outptr_opt_result_buffer_
- _Outptr_result_buffer_to_
- _Out_writes_to_ptr_opt_
- _Out_writes_bytes_all_opt_
- _Inout_updates_all_
- _Deref_inout_range_
- _Ret_writes_
- _Out_writes_z_
- _Ret_writes_to_
- _Out_writes_to_ptr_z_
- _Out_writes_bytes_to_opt_
- _In_reads_or_z_
- _Inout_updates_bytes_to_
- _In_reads_z_
- _In_opt_z_
- _Outref_result_buffer_maybenull_
- _Ret_range_
- _COM_Outptr_opt_
- _Outptr_opt_result_maybenull_z_
- _In_reads_opt_
- _Inout_
- _Field_range_
- _Ret_writes_z_
- _Out_writes_to_
- _Out_writes_to_ptr_
- _Inout_opt_z_
- _Outref_
- _Deref_out_range_
- _Outref_result_buffer_
- _Outref_result_buffer_to_
- _Outref_result_bytebuffer_to_maybenull_
- _In_reads_bytes_
- _Outptr_opt_result_buffer_to_
- _Outref_result_buffer_all_
- _Out_writes_bytes_to_
- _Result_zeroonfailure_
- _In_reads_bytes_opt_
- _Outref_result_buffer_to_maybenull_
- _Outref_result_bytebuffer_all_
- _Outref_result_buffer_all_maybenull_
- _Ret_writes_maybenull_z_
- _In_range_
- _Inout_updates_bytes_all_opt_
- _Outref_result_bytebuffer_to_
- _Inout_updates_bytes_to_opt_
- _Pre_equal_to_
- _Ret_writes_bytes_maybenull_
- _COM_Outptr_result_maybenull_
- _Ret_writes_maybenull_
- _Out_writes_bytes_
- _Outptr_opt_
- _Out_writes_opt_z_
- _Outref_result_nullonfailure_
- _Outptr_opt_result_z_
- _Inout_opt_
- _Deref_in_range_
- _Outptr_result_z_
- _In_reads_to_ptr_opt_z_
- _Struct_size_bytes_
- _Outptr_result_nullonfailure_
- _In_
- _Inout_updates_bytes_
- _In_reads_to_ptr_z_
- _Ret_writes_bytes_to_maybenull
- _Outptr_opt_result_nullonfailure_
- _In_reads_to_ptr_
- _Outptr_result_buffer_
- _Out_
- _Outref_result_bytebuffer_maybenull_
- _Outptr_result_maybenull_z_
- _In_reads_
- _Inout_updates_opt_
- _Out_writes_to_opt_
- _Outptr_opt_result_bytebuffer_
- _Out_writes_all_
- _Out_range_
- _Inout_updates_bytes_all_
- _Inout_z_
- _Outref_result_bytebuffer_
- _Result_nullonfailure_
- _Ret_null_
- _Scanf_format_string_
- _Scanf_s_format_string_
- _Printf_format_string_
ms.assetid: 82826a3d-0c81-421c-8ffe-4072555dca3a
ms.openlocfilehash: 4d0325fbab2f27da2556e2c252e35711d9b42789
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231260"
---
# <a name="annotating-function-parameters-and-return-values"></a>Annotazione di parametri di funzione e valori restituiti

Questo articolo descrive gli usi tipici delle annotazioni per i parametri di funzione semplici, ovvero scalari e puntatori a strutture e classi, e la maggior parte dei tipi di buffer. Questo articolo illustra anche i modelli di utilizzo comuni per le annotazioni. Per altre annotazioni correlate alle funzioni, vedere [annotazione del comportamento della funzione](../code-quality/annotating-function-behavior.md).

## <a name="pointer-parameters"></a>Parametri del puntatore

Per le annotazioni nella tabella seguente, quando un parametro puntatore viene annotato, l'analizzatore segnala un errore se il puntatore è null. Questa annotazione si applica ai puntatori e a tutti gli elementi di dati a cui punta.

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_In_`

     Annota i parametri di input che sono scalari, strutture, puntatori a strutture e simili. In modo esplicito può essere utilizzato su scalari semplici. Il parametro deve essere valido nello stato precedente e non verrà modificato.

- `_Out_`

     Annota i parametri di output che sono scalari, strutture, puntatori a strutture e simili. Non applicare questa annotazione a un oggetto che non può restituire un valore, ad esempio un valore scalare passato per valore. Il parametro non deve essere valido nello stato precedente, ma deve essere valido in post-stato.

- `_Inout_`

     Annota un parametro che verrà modificato dalla funzione. Deve essere valido sia nello stato precedente che in quello post-stato, ma si presuppone che i valori siano diversi prima e dopo la chiamata. Deve essere applicato a un valore modificabile.

- `_In_z_`

     Puntatore a una stringa con terminazione null utilizzata come input. La stringa deve essere valida in pre-stato. `PSTR`Sono preferibili le varianti di, che hanno già le annotazioni corrette.

- `_Inout_z_`

     Puntatore a una matrice di caratteri con terminazione null che verrà modificata. Deve essere valido prima e dopo la chiamata, ma si presuppone che il valore sia stato modificato. Il carattere di terminazione null può essere spostato, ma è possibile accedere solo agli elementi fino al carattere di terminazione null originale.

- `_In_reads_(s)`

     `_In_reads_bytes_(s)`

     Puntatore a una matrice, letto dalla funzione. La matrice è di `s` elementi size, che devono essere tutti validi.

     La `_bytes_` variante restituisce la dimensione in byte anziché gli elementi. Usare questa variante solo se le dimensioni non possono essere espresse come elementi. Ad esempio, **`char`** le stringhe utilizzeranno la `_bytes_` variante solo se una funzione simile che usa **`wchar_t`** .

- `_In_reads_z_(s)`

     Puntatore a una matrice con terminazione null e con dimensioni note. Gli elementi fino al carattere di terminazione null, o `s` se non è presente un carattere di terminazione null, devono essere validi in pre-stato. Se la dimensione è nota in byte, ridimensionare in `s` base alle dimensioni dell'elemento.

- `_In_reads_or_z_(s)`

     Puntatore a una matrice con terminazione null o con dimensioni note o entrambi. Gli elementi fino al carattere di terminazione null, o `s` se non è presente un carattere di terminazione null, devono essere validi in pre-stato. Se la dimensione è nota in byte, ridimensionare in `s` base alle dimensioni dell'elemento. (Usato per la `strn` famiglia).

- `_Out_writes_(s)`

     `_Out_writes_bytes_(s)`

     Puntatore a una matrice di `s` elementi (resp. bytes) che verrà scritta dalla funzione. Gli elementi della matrice non devono essere validi nello stato precedente e il numero di elementi validi in post-stato non è specificato. Se sono presenti annotazioni sul tipo di parametro, vengono applicate in post-stato. Si consideri il codice di esempio seguente.

     ```cpp
     typedef _Null_terminated_ wchar_t *PWSTR;
     void MyStringCopy(_Out_writes_(size) PWSTR p1, _In_ size_t size, _In_ PWSTR p2);
     ```

     In questo esempio, il chiamante fornisce un buffer di `size` elementi per `p1` . `MyStringCopy`rende validi alcuni di questi elementi. Ancora più importante, l' `_Null_terminated_` annotazione su `PWSTR` significa che `p1` è con terminazione null in fase di post-stato. In questo modo, il numero di elementi validi è ancora ben definito, ma non è necessario un conteggio di elementi specifico.

     La `_bytes_` variante restituisce la dimensione in byte anziché gli elementi. Usare questa variante solo se le dimensioni non possono essere espresse come elementi. Ad esempio, **`char`** le stringhe utilizzeranno la `_bytes_` variante solo se una funzione simile che usa **`wchar_t`** .

- `_Out_writes_z_(s)`

     Puntatore a una matrice di `s` elementi. Gli elementi non devono essere validi in pre-stato. Nel post-stato, gli elementi fino al carattere di terminazione null, che deve essere presente, devono essere validi. Se la dimensione è nota in byte, ridimensionare in `s` base alle dimensioni dell'elemento.

- `_Inout_updates_(s)`

     `_Inout_updates_bytes_(s)`

     Puntatore a una matrice, che viene letta e scritta nella funzione. Si tratta di elementi di dimensione `s` e validi in pre-stato e post-stato.

     La `_bytes_` variante restituisce la dimensione in byte anziché gli elementi. Usare questa variante solo se le dimensioni non possono essere espresse come elementi. Ad esempio, **`char`** le stringhe utilizzeranno la `_bytes_` variante solo se una funzione simile che usa **`wchar_t`** .

- `_Inout_updates_z_(s)`

     Puntatore a una matrice con terminazione null e con dimensioni note. Gli elementi fino al carattere di terminazione null, che deve essere presente, devono essere validi sia nello stato precedente che in quello post-stato. Il valore nel post-stato si presume essere diverso dal valore nello stato precedente; che include la posizione del carattere di terminazione null. Se la dimensione è nota in byte, ridimensionare in `s` base alle dimensioni dell'elemento.

- `_Out_writes_to_(s,c)`

     `_Out_writes_bytes_to_(s,c)`

     `_Out_writes_all_(s)`

     `_Out_writes_bytes_all_(s)`

     Puntatore a una matrice di `s` elementi. Gli elementi non devono essere validi in pre-stato. In post-stato, gli elementi fino all' `c` elemento-th devono essere validi. La `_bytes_` variante può essere utilizzata se la dimensione è nota in byte anziché come numero di elementi.

     Ad esempio:

     ```cpp
     void *memcpy(_Out_writes_bytes_all_(s) char *p1, _In_reads_bytes_(s) char *p2, _In_ int s);
     void *wordcpy(_Out_writes_all_(s) DWORD *p1, _In_reads_(s) DWORD *p2, _In_ int s);
     ```

- `_Inout_updates_to_(s,c)`

     `_Inout_updates_bytes_to_(s,c)`

     Puntatore a una matrice, che viene letta e scritta dalla funzione. Si tratta di elementi di dimensioni `s` che devono essere tutti validi nello stato precedente e gli `c` elementi devono essere validi in post-stato.

     La `_bytes_` variante restituisce la dimensione in byte anziché gli elementi. Usare questa variante solo se le dimensioni non possono essere espresse come elementi. Ad esempio, **`char`** le stringhe utilizzeranno la `_bytes_` variante solo se una funzione simile che usa **`wchar_t`** .

- `_Inout_updates_all_(s)`

     `_Inout_updates_bytes_all_(s)`

     Puntatore a una matrice, che viene letto e scritto dalla funzione degli elementi di dimensione `s` . Definito come equivalente a:

     `_Inout_updates_to_(_Old_(s), _Old_(s))    _Inout_updates_bytes_to_(_Old_(s), _Old_(s))`

     In altre parole, ogni elemento presente nel buffer fino a `s` nello stato precedente è valido nello stato precedente e successivo.

     La `_bytes_` variante restituisce la dimensione in byte anziché gli elementi. Usare questa variante solo se le dimensioni non possono essere espresse come elementi. Ad esempio, **`char`** le stringhe utilizzeranno la `_bytes_` variante solo se una funzione simile che usa **`wchar_t`** .

- `_In_reads_to_ptr_(p)`

     Puntatore a una matrice per cui `p - _Curr_` , ovvero `p` meno, `_Curr_` è un'espressione valida. Gli elementi before `p` devono essere validi in pre-state.

    Ad esempio:

    ```cpp
    int ReadAllElements(_In_reads_to_ptr_(EndOfArray) const int *Array, const int *EndOfArray);
    ```

- `_In_reads_to_ptr_z_(p)`

     Puntatore a una matrice con terminazione null per la quale Expression `p - _Curr_` (ovvero `p` meno `_Curr_` ) è un'espressione valida. Gli elementi before `p` devono essere validi in pre-state.

- `_Out_writes_to_ptr_(p)`

     Puntatore a una matrice per cui `p - _Curr_` , ovvero `p` meno, `_Curr_` è un'espressione valida. Gli elementi prima `p` non devono essere validi nello stato precedente e devono essere validi in post-stato.

- `_Out_writes_to_ptr_z_(p)`

     Puntatore a una matrice con terminazione null per la quale `p - _Curr_` , ovvero `p` meno, `_Curr_` è un'espressione valida. Gli elementi prima `p` non devono essere validi nello stato precedente e devono essere validi in post-stato.

## <a name="optional-pointer-parameters"></a>Parametri facoltativi del puntatore

Quando un'annotazione del parametro puntatore include `_opt_` , indica che il parametro può essere null. In caso contrario, l'annotazione si comporta allo stesso modo della versione che non include `_opt_` . Di seguito è riportato un elenco delle `_opt_` varianti delle annotazioni dei parametri del puntatore:

:::row:::
    :::column:::
        `_In_opt_`<br /><br /> `_Out_opt_`<br /><br /> `_Inout_opt_`<br /><br /> `_In_opt_z_`<br /><br /> `_Inout_opt_z_`<br /><br /> `_In_reads_opt_`<br /><br /> `_In_reads_bytes_opt_`<br /><br /> `_In_reads_opt_z_`
    :::column-end:::
    :::column:::
        `_Out_writes_opt_`<br /><br /> `_Out_writes_opt_z_`<br /><br /> `_Inout_updates_opt_`<br /><br /> `_Inout_updates_bytes_opt_`<br /><br /> `_Inout_updates_opt_z_`<br /><br /> `_Out_writes_to_opt_`<br /><br /> `_Out_writes_bytes_to_opt_`<br /><br /> `_Out_writes_all_opt_`<br /><br /> `_Out_writes_bytes_all_opt_`
    :::column-end:::
    :::column:::
        `_Inout_updates_to_opt_`<br /><br /> `_Inout_updates_bytes_to_opt_`<br /><br /> `_Inout_updates_all_opt_`<br /><br /> `_Inout_updates_bytes_all_opt_`<br /><br /> `_In_reads_to_ptr_opt_`<br /><br /> `_In_reads_to_ptr_opt_z_`<br /><br /> `_Out_writes_to_ptr_opt_`<br /><br /> `_Out_writes_to_ptr_opt_z_`
    :::column-end:::
:::row-end:::

## <a name="output-pointer-parameters"></a>Parametri del puntatore di output

I parametri del puntatore di output richiedono una notazione speciale per eliminare l'ambiguità del valore null nel parametro e nella posizione indicata.

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_Outptr_`

   Il parametro non può essere null e, nel post-stato, il percorso di riferimento non può essere null e deve essere valido.

- `_Outptr_opt_`

   Il parametro può essere null, ma in post-stato la posizione di riferimento non può essere null e deve essere valida.

- `_Outptr_result_maybenull_`

   Il parametro non può essere null e in post-stato la posizione di riferimento può essere null.

- `_Outptr_opt_result_maybenull_`

   Il parametro può essere null e, in fase di post-stato, la posizione indicata può essere null.

  Nella tabella seguente vengono inserite sottostringhe aggiuntive nel nome dell'annotazione per qualificare ulteriormente il significato dell'annotazione. Le varie sottostringhe sono `_z` ,,, `_COM_` `_buffer_` `_bytebuffer_` e `_to_` .

> [!IMPORTANT]
> Se l'interfaccia annotata è COM, utilizzare il form COM di queste annotazioni. Non usare le annotazioni COM con altre interfacce di tipo.

- `_Outptr_result_z_`

   `_Outptr_opt_result_z_`

   `_Outptr_result_maybenull_z_`

   `_Outptr_opt_result_maybenull_z_`

   Il puntatore restituito ha l' `_Null_terminated_` annotazione.

- `_COM_Outptr_`

   `_COM_Outptr_opt_`

   `_COM_Outptr_result_maybenull_`

   `_COM_Outptr_opt_result_maybenull_`

   Il puntatore restituito presenta una semantica COM, motivo per cui contiene una `_On_failure_` post-condizione che il puntatore restituito è null.

- `_Outptr_result_buffer_(s)`

   `_Outptr_result_bytebuffer_(s)`

   `_Outptr_opt_result_buffer_(s)`

   `_Outptr_opt_result_bytebuffer_(s)`

   Il puntatore restituito punta a un buffer valido di elementi di dimensione `s` o byte.

- `_Outptr_result_buffer_to_(s, c)`

   `_Outptr_result_bytebuffer_to_(s, c)`

   `_Outptr_opt_result_buffer_to_(s,c)`

   `_Outptr_opt_result_bytebuffer_to_(s,c)`

   Il puntatore restituito punta a un buffer di elementi di dimensione `s` o byte, di cui il primo `c` è valido.

Alcune convenzioni di interfaccia presuppongono che i parametri di output vengano annullati in caso di errore. Ad eccezione del codice COM esplicito, sono preferibili i moduli della tabella seguente. Per il codice COM, usare i form COM corrispondenti elencati nella sezione precedente.

- `_Result_nullonfailure_`

   Modifica altre annotazioni. Se la funzione ha esito negativo, il risultato viene impostato su null.

- `_Result_zeroonfailure_`

   Modifica altre annotazioni. Il risultato viene impostato su zero se la funzione ha esito negativo.

- `_Outptr_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è per un parametro non facoltativo.

- `_Outptr_opt_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è relativa a un parametro facoltativo.

- `_Outref_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è relativa a un parametro di riferimento.

## <a name="output-reference-parameters"></a>Parametri di riferimento di output

Un uso comune del parametro Reference è per i parametri di output. Per i parametri di riferimento di output semplici, ad esempio `int&` , `_Out_` fornisce la semantica corretta. Tuttavia, quando il valore di output è un puntatore come `int *&` , le annotazioni del puntatore equivalenti, ad esempio, `_Outptr_ int **` non forniscono la semantica corretta. Per esprimere concisamente la semantica dei parametri di riferimento di output per i tipi di puntatore, usare queste annotazioni Composite:

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_Outref_`

     Il risultato deve essere valido in post-stato e non può essere null.

- `_Outref_result_maybenull_`

     Il risultato deve essere valido in post-stato, ma può essere null nel post-stato.

- `_Outref_result_buffer_(s)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta a un buffer valido di `s` elementi di dimensione.

- `_Outref_result_bytebuffer_(s)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta a un buffer valido di dimensioni pari a `s` byte.

- `_Outref_result_buffer_to_(s, c)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta al buffer di `s` elementi, di cui il primo `c` è valido.

- `_Outref_result_bytebuffer_to_(s, c)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta al buffer di `s` byte di cui il primo `c` è valido.

- `_Outref_result_buffer_all_(s)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta a un buffer valido di `s` elementi validi di dimensione.

- `_Outref_result_bytebuffer_all_(s)`

     Il risultato deve essere valido in post-stato e non può essere null. Punta a un buffer valido di `s` byte di elementi validi.

- `_Outref_result_buffer_maybenull_(s)`

     Il risultato deve essere valido in post-stato, ma può essere null nel post-stato. Punta a un buffer valido di `s` elementi di dimensione.

- `_Outref_result_bytebuffer_maybenull_(s)`

     Il risultato deve essere valido in post-stato, ma può essere null nel post-stato. Punta a un buffer valido di dimensioni pari a `s` byte.

- `_Outref_result_buffer_to_maybenull_(s, c)`

     Il risultato deve essere valido in post-stato, ma può essere null nel post-stato. Punta al buffer di `s` elementi, di cui il primo `c` è valido.

- `_Outref_result_bytebuffer_to_maybenull_(s,c)`

     Il risultato deve essere valido in post-stato, ma può essere null nello stato post. Punta al buffer di `s` byte di cui il primo `c` è valido.

- `_Outref_result_buffer_all_maybenull_(s)`

     Il risultato deve essere valido in post-stato, ma può essere null nello stato post. Punta a un buffer valido di `s` elementi validi di dimensione.

- `_Outref_result_bytebuffer_all_maybenull_(s)`

     Il risultato deve essere valido in post-stato, ma può essere null nello stato post. Punta a un buffer valido di `s` byte di elementi validi.

## <a name="return-values"></a>Valori restituiti

Il valore restituito di una funzione è simile a un `_Out_` parametro, ma è a un livello diverso di dereferenziazione e non è necessario considerare il concetto di puntatore al risultato. Per le annotazioni seguenti, il valore restituito è l'oggetto con annotazioni, ovvero un indicatore scalare, un puntatore a uno struct o un puntatore a un buffer. Queste annotazioni hanno la stessa semantica dell' `_Out_` annotazione corrispondente.

:::row:::
    :::column:::
        `_Ret_z_`<br /><br /> `_Ret_writes_(s)`<br /><br /> `_Ret_writes_bytes_(s)`<br /><br /> `_Ret_writes_z_(s)`<br /><br /> `_Ret_writes_to_(s,c)`<br /><br /> `_Ret_writes_maybenull_(s)`<br /><br /> `_Ret_writes_to_maybenull_(s)`<br /><br /> `_Ret_writes_maybenull_z_(s)`
    :::column-end:::
    :::column:::
        `_Ret_maybenull_`<br /><br /> `_Ret_maybenull_z_`<br /><br /> `_Ret_null_`<br /><br /> `_Ret_notnull_`<br /><br /> `_Ret_writes_bytes_to_`<br /><br /> `_Ret_writes_bytes_maybenull_`<br /><br /> `_Ret_writes_bytes_to_maybenull_`
    :::column-end:::
:::row-end:::

## <a name="format-string-parameters"></a>Parametri della stringa di formato

- `_Printf_format_string_`Indica che il parametro è una stringa di formato da utilizzare in un' `printf` espressione.

     **Esempio**

    ```cpp
    int MyPrintF(_Printf_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwprintf(format, args);
           va_end(args);
           return ret;
    }
    ```

- `_Scanf_format_string_`Indica che il parametro è una stringa di formato da utilizzare in un' `scanf` espressione.

     **Esempio**

    ```cpp
    int MyScanF(_Scanf_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwscanf(format, args);
           va_end(args);
           return ret;
    }
    ```

- `_Scanf_s_format_string_`Indica che il parametro è una stringa di formato da utilizzare in un' `scanf_s` espressione.

     **Esempio**

    ```cpp
    int MyScanF_s(_Scanf_s_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwscanf_s(format, args);
           va_end(args);
           return ret;
    }
    ```

## <a name="other-common-annotations"></a>Altre annotazioni comuni

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_In_range_(low, hi)`

     `_Out_range_(low, hi)`

     `_Ret_range_(low, hi)`

     `_Deref_in_range_(low, hi)`

     `_Deref_out_range_(low, hi)`

     `_Deref_inout_range_(low, hi)`

     `_Field_range_(low, hi)`

     Il parametro, il campo o il risultato è compreso nell'intervallo compreso tra e `low` `hi` . Equivalente a `_Satisfies_(_Curr_ >= low && _Curr_ <= hi)` applicato all'oggetto annotato insieme alle condizioni appropriate di pre-stato o post-stato.

    > [!IMPORTANT]
    > Sebbene i nomi includano "in" e "out", la semantica di `_In_` e non `_Out_` si applicano a queste annotazioni. **not**

- `_Pre_equal_to_(expr)`

     `_Post_equal_to_(expr)`

     Il valore annotato è esattamente `expr` . Equivalente a `_Satisfies_(_Curr_ == expr)` applicato all'oggetto annotato insieme alle condizioni appropriate di pre-stato o post-stato.

- `_Struct_size_bytes_(size)`

     Si applica a una dichiarazione di classe o struct. Indica che un oggetto valido di quel tipo può essere più grande del tipo dichiarato, con il numero di byte fornito da `size` . Ad esempio:

     `typedef _Struct_size_bytes_(nSize) struct MyStruct {    size_t nSize;    ... };`

     Le dimensioni del buffer, in byte, di un parametro `pM` di tipo `MyStruct *` , vengono quindi considerate:

     `min(pM->nSize, sizeof(MyStruct))`

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)
