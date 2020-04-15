---
title: Annotazione di parametri di funzione e valori restituiti
description: Guida di riferimento alle annotazioni dei parametri di funzione e dei valori restituiti.
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
ms.openlocfilehash: c787dcfb252da1abe47251d66c46689db289cf15
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328003"
---
# <a name="annotating-function-parameters-and-return-values"></a>Annotazione di parametri di funzione e valori restituiti

In questo articolo vengono descritti gli utilizzi tipici delle annotazioni per semplici parametri di funzione, ovvero scalari e puntatori a strutture e classi, e per la maggior parte dei tipi di buffer. In questo articolo vengono inoltre illustrati modelli di utilizzo comuni per le annotazioni. Per altre annotazioni correlate alle funzioni, vedere [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md).

## <a name="pointer-parameters"></a>Parametri del puntatore

Per le annotazioni nella tabella seguente, quando un parametro del puntatore viene annotato, l'analizzatore segnala un errore se il puntatore è null. Questa annotazione si applica ai puntatori e a qualsiasi elemento di dati a cui punta.

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_In_`

     Annota i parametri di input che sono scalari, strutture, puntatori a strutture e simili. In modo esplicito può essere utilizzato su scalari semplici. Il parametro deve essere valido in pre-stato e non verrà modificato.

- `_Out_`

     Annota i parametri di output che sono scalari, strutture, puntatori a strutture e simili. Non applicare questa annotazione a un oggetto che non può restituire un valore, ad esempio uno scalare passato per valore. Il parametro non deve essere valido in pre-stato, ma deve essere valido in post-stato.

- `_Inout_`

     Annota un parametro che verrà modificato dalla funzione. Deve essere valido sia in pre-stato che post-stato, ma si presuppone che abbia valori diversi prima e dopo la chiamata. Deve essere applicato a un valore modificabile.

- `_In_z_`

     Puntatore a una stringa con terminazione null utilizzata come input. La stringa deve essere valida in pre-stato. Le varianti `PSTR`di , che hanno già le annotazioni corrette, sono preferite.

- `_Inout_z_`

     Puntatore a una matrice di caratteri con terminazione null che verrà modificata. Deve essere valido prima e dopo la chiamata, ma si presuppone che il valore sia stato modificato. È possibile spostare il carattere di terminazione null, ma è possibile accedere solo agli elementi fino al carattere di terminazione null originale.

- `_In_reads_(s)`

     `_In_reads_bytes_(s)`

     Puntatore a una matrice, che viene letta dalla funzione. La matrice è `s` di elementi di dimensione, che devono essere tutti validi.

     La `_bytes_` variante fornisce la dimensione in byte anziché gli elementi. Utilizzare questa variante solo quando la dimensione non può essere espressa come elementi. Ad esempio, `char` le `_bytes_` stringhe utilizzerebbero la `wchar_t` variante solo se una funzione simile che utilizza potrebbe.

- `_In_reads_z_(s)`

     Puntatore a una matrice con terminazione null e con dimensioni note. Gli elementi fino al carattere `s` di terminazione null, o se non è presente un carattere di terminazione null, devono essere validi in pre-stato. Se la dimensione è nota in byte, scalare `s` in base alla dimensione dell'elemento.

- `_In_reads_or_z_(s)`

     Puntatore a una matrice con terminazione null o con una dimensione nota o entrambi. Gli elementi fino al carattere `s` di terminazione null, o se non è presente un carattere di terminazione null, devono essere validi in pre-stato. Se la dimensione è nota in byte, scalare `s` in base alla dimensione dell'elemento. (Usato per `strn` la famiglia.)

- `_Out_writes_(s)`

     `_Out_writes_bytes_(s)`

     Puntatore a una `s` matrice di elementi (resp. byte) che verranno scritti dalla funzione. Gli elementi della matrice non devono essere validi in pre-stato e il numero di elementi validi nel post-stato non è specificato. Se sono presenti annotazioni nel tipo di parametro, vengono applicate nel post-stato. Si consideri il codice di esempio seguente.

     ```cpp
     typedef _Null_terminated_ wchar_t *PWSTR;
     void MyStringCopy(_Out_writes_(size) PWSTR p1, _In_ size_t size, _In_ PWSTR p2);
     ```

     In questo esempio, il chiamante fornisce un buffer di `size` elementi per `p1`. `MyStringCopy`rende validi alcuni di questi elementi. Ancora più importante, `_Null_terminated_` `PWSTR` l'annotazione su significa che `p1` è null terminato in post-stato. In questo modo, il numero di elementi validi è ancora ben definito, ma non è necessario un conteggio di elementi specifico.

     La `_bytes_` variante fornisce la dimensione in byte anziché gli elementi. Utilizzare questa variante solo quando la dimensione non può essere espressa come elementi. Ad esempio, `char` le `_bytes_` stringhe utilizzerebbero la `wchar_t` variante solo se una funzione simile che utilizza potrebbe.

- `_Out_writes_z_(s)`

     Puntatore a una `s` matrice di elementi. Gli elementi non devono essere validi in pre-stato. Nel post-stato, gli elementi fino al terminatore null, che deve essere presente, devono essere validi. Se la dimensione è nota in byte, scalare `s` in base alla dimensione dell'elemento.

- `_Inout_updates_(s)`

     `_Inout_updates_bytes_(s)`

     Puntatore a una matrice, che viene letta e scritta nella funzione. È di elementi `s` di dimensione e valido in pre-stato e post-stato.

     La `_bytes_` variante fornisce la dimensione in byte anziché gli elementi. Utilizzare questa variante solo quando la dimensione non può essere espressa come elementi. Ad esempio, `char` le `_bytes_` stringhe utilizzerebbero la `wchar_t` variante solo se una funzione simile che utilizza potrebbe.

- `_Inout_updates_z_(s)`

     Puntatore a una matrice con terminazione null e con dimensioni note. Gli elementi fino al terminatornull, che deve essere presente, devono essere validi sia in pre-stato che post-stato. Si presume che il valore nel post-stato sia diverso dal valore nel pre-stato; che include la posizione del carattere di terminazione null. Se la dimensione è nota in byte, scalare `s` in base alla dimensione dell'elemento.

- `_Out_writes_to_(s,c)`

     `_Out_writes_bytes_to_(s,c)`

     `_Out_writes_all_(s)`

     `_Out_writes_bytes_all_(s)`

     Puntatore a una `s` matrice di elementi. Gli elementi non devono essere validi in pre-stato. Nel post-stato, gli elementi `c`fino all'elemento -th devono essere validi. La `_bytes_` variante può essere utilizzata se la dimensione è nota in byte anziché nel numero di elementi.

     Ad esempio:

     ```cpp
     void *memcpy(_Out_writes_bytes_all_(s) char *p1, _In_reads_bytes_(s) char *p2, _In_ int s);
     void *wordcpy(_Out_writes_all_(s) DWORD *p1, _In_reads_(s) DWORD *p2, _In_ int s);
     ```

- `_Inout_updates_to_(s,c)`

     `_Inout_updates_bytes_to_(s,c)`

     Puntatore a una matrice, che viene sia letta che scritta dalla funzione. È di elementi `s` di dimensione, che devono essere tutti `c` validi in pre-stato e gli elementi devono essere validi nel post-stato.

     La `_bytes_` variante fornisce la dimensione in byte anziché gli elementi. Utilizzare questa variante solo quando la dimensione non può essere espressa come elementi. Ad esempio, `char` le `_bytes_` stringhe utilizzerebbero la `wchar_t` variante solo se una funzione simile che utilizza potrebbe.

- `_Inout_updates_all_(s)`

     `_Inout_updates_bytes_all_(s)`

     Puntatore a una matrice, che viene sia letta `s` che scritta dalla funzione degli elementi size. Definito come equivalente a:

     `_Inout_updates_to_(_Old_(s), _Old_(s))    _Inout_updates_bytes_to_(_Old_(s), _Old_(s))`

     In altre parole, ogni elemento presente `s` nel buffer fino allo stato precedente è valido nel pre-stato e nel post-stato.

     La `_bytes_` variante fornisce la dimensione in byte anziché gli elementi. Utilizzare questa variante solo quando la dimensione non può essere espressa come elementi. Ad esempio, `char` le `_bytes_` stringhe utilizzerebbero la `wchar_t` variante solo se una funzione simile che utilizza potrebbe.

- `_In_reads_to_ptr_(p)`

     Puntatore a una `p - _Curr_` matrice per `p` la `_Curr_`quale, ovvero meno , è un'espressione valida. Gli elementi `p` precedenti devono essere validi in pre-stato.

    Ad esempio:

    ```cpp
    int ReadAllElements(_In_reads_to_ptr_(EndOfArray) const int *Array, const int *EndOfArray);
    ```

- `_In_reads_to_ptr_z_(p)`

     Puntatore a una matrice con terminazione null `p` per `_Curr_`la quale expression `p - _Curr_` (ovvero meno ) è un'espressione valida. Gli elementi `p` precedenti devono essere validi in pre-stato.

- `_Out_writes_to_ptr_(p)`

     Puntatore a una `p - _Curr_` matrice per `p` la `_Curr_`quale, ovvero meno , è un'espressione valida. Gli elementi `p` precedenti non devono essere validi in pre-stato e devono essere validi nel post-stato.

- `_Out_writes_to_ptr_z_(p)`

     Puntatore a una matrice con `p - _Curr_` terminazione null `p` `_Curr_`per la quale, ovvero meno , è un'espressione valida. Gli elementi `p` precedenti non devono essere validi in pre-stato e devono essere validi nel post-stato.

## <a name="optional-pointer-parameters"></a>Parametri facoltativi del puntatore

Quando un'annotazione `_opt_`di parametro del puntatore include , indica che il parametro può essere null. In caso contrario, l'annotazione si comporta `_opt_`come la versione che non include . Di seguito è `_opt_` riportato un elenco delle varianti delle annotazioni dei parametri del puntatore:

||||
|-|-|-|
|`_In_opt_`<br /><br /> `_Out_opt_`<br /><br /> `_Inout_opt_`<br /><br /> `_In_opt_z_`<br /><br /> `_Inout_opt_z_`<br /><br /> `_In_reads_opt_`<br /><br /> `_In_reads_bytes_opt_`<br /><br /> `_In_reads_opt_z_`|`_Out_writes_opt_`<br /><br /> `_Out_writes_opt_z_`<br /><br /> `_Inout_updates_opt_`<br /><br /> `_Inout_updates_bytes_opt_`<br /><br /> `_Inout_updates_opt_z_`<br /><br /> `_Out_writes_to_opt_`<br /><br /> `_Out_writes_bytes_to_opt_`<br /><br /> `_Out_writes_all_opt_`<br /><br /> `_Out_writes_bytes_all_opt_`|`_Inout_updates_to_opt_`<br /><br /> `_Inout_updates_bytes_to_opt_`<br /><br /> `_Inout_updates_all_opt_`<br /><br /> `_Inout_updates_bytes_all_opt_`<br /><br /> `_In_reads_to_ptr_opt_`<br /><br /> `_In_reads_to_ptr_opt_z_`<br /><br /> `_Out_writes_to_ptr_opt_`<br /><br /> `_Out_writes_to_ptr_opt_z_`|

## <a name="output-pointer-parameters"></a>Parametri del puntatore di output

I parametri del puntatore di output richiedono una notazione speciale per evitare ambiguità di nullità sul parametro e la posizione a cui puntano.

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_Outptr_`

   Parametro non può essere null e nello stato post-stato la posizione di puntato non può essere null e deve essere valido.

- `_Outptr_opt_`

   Il parametro può essere null, ma nello stato successivo la posizione a cui punta non può essere null e deve essere valida.

- `_Outptr_result_maybenull_`

   Parametro non può essere null e nello stato post-stato la posizione punta a può essere null.

- `_Outptr_opt_result_maybenull_`

   Parametro può essere null e nello stato post-stato la posizione punta a può essere null.

  Nella tabella seguente, sottostringhe aggiuntive vengono inserite nel nome dell'annotazione per qualificare ulteriormente il significato dell'annotazione. Le varie sottostringhe `_COM_` `_buffer_`sono `_bytebuffer_` `_z`, `_to_`, , , e .

> [!IMPORTANT]
> Se l'interfaccia che si sta annotando è COM, utilizzare il formato COM di queste annotazioni. Non utilizzare le annotazioni COM con qualsiasi altra interfaccia di tipo.

- `_Outptr_result_z_`

   `_Outptr_opt_result_z_`

   `_Outptr_result_maybenull_z_`

   `_Outptr_opt_result_maybenull_z_`

   Il puntatore restituito `_Null_terminated_` ha l'annotazione.

- `_COM_Outptr_`

   `_COM_Outptr_opt_`

   `_COM_Outptr_result_maybenull_`

   `_COM_Outptr_opt_result_maybenull_`

   Il puntatore restituito ha la semantica `_On_failure_` COM e pertanto porta una post-condizione che il puntatore restituito è null.

- `_Outptr_result_buffer_(s)`

   `_Outptr_result_bytebuffer_(s)`

   `_Outptr_opt_result_buffer_(s)`

   `_Outptr_opt_result_bytebuffer_(s)`

   Il puntatore restituito punta a `s` un buffer valido di elementi o byte di dimensione.

- `_Outptr_result_buffer_to_(s, c)`

   `_Outptr_result_bytebuffer_to_(s, c)`

   `_Outptr_opt_result_buffer_to_(s,c)`

   `_Outptr_opt_result_bytebuffer_to_(s,c)`

   Il puntatore restituito punta a `s` un buffer di elementi `c` di dimensione o byte, di cui i primi sono validi.

Alcune convenzioni di interfaccia presuppongono che i parametri di output vengano annullati in caso di errore. Ad eccezione del codice COM in modo esplicito, sono preferiti i form nella tabella seguente. Per il codice COM, utilizzare i moduli COM corrispondenti elencati nella sezione precedente.

- `_Result_nullonfailure_`

   Modifica altre annotazioni. Il risultato è impostato su null se la funzione ha esito negativo.

- `_Result_zeroonfailure_`

   Modifica altre annotazioni. Il risultato è impostato su zero se la funzione ha esito negativo.

- `_Outptr_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è per un parametro non facoltativo.

- `_Outptr_opt_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è per un parametro facoltativo.

- `_Outref_result_nullonfailure_`

   Il puntatore restituito punta a un buffer valido se la funzione ha esito positivo o null se la funzione ha esito negativo. Questa annotazione è per un parametro di riferimento.

## <a name="output-reference-parameters"></a>Parametri di riferimento di uscita

Un utilizzo comune del parametro reference è per i parametri di output. Per i parametri di `int&` `_Out_` riferimento di output semplici, ad esempio , fornisce la semantica corretta. Tuttavia, quando il valore di `int *&`output è un `_Outptr_ int **` puntatore, ad esempio , le annotazioni del puntatore equivalenti come non forniscono la semantica corretta. Per esprimere in modo conciso la semantica dei parametri di riferimento di output per i tipi puntatore, usare le annotazioni composite seguenti:To concisely express the semantics of output reference parameters for pointer types, use these composite annotations:

### <a name="annotations-and-descriptions"></a>Annotazioni e descrizioni

- `_Outref_`

     Il risultato deve essere valido nel post-stato e non può essere null.

- `_Outref_result_maybenull_`

     Il risultato deve essere valido nel post-stato, ma può essere null nel post-stato.

- `_Outref_result_buffer_(s)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta al buffer `s` valido di elementi di dimensione.

- `_Outref_result_bytebuffer_(s)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta a un `s` buffer valido di byte di dimensioni.

- `_Outref_result_buffer_to_(s, c)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta al `s` buffer di elementi, `c` di cui i primi sono validi.

- `_Outref_result_bytebuffer_to_(s, c)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta al `s` buffer di byte `c` di cui i primi sono validi.

- `_Outref_result_buffer_all_(s)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta a un `s` buffer valido di elementi validi di dimensione.

- `_Outref_result_bytebuffer_all_(s)`

     Il risultato deve essere valido nel post-stato e non può essere null. Punta al buffer `s` valido di byte di elementi validi.

- `_Outref_result_buffer_maybenull_(s)`

     Il risultato deve essere valido nel post-stato, ma può essere null nel post-stato. Punta al buffer `s` valido di elementi di dimensione.

- `_Outref_result_bytebuffer_maybenull_(s)`

     Il risultato deve essere valido nel post-stato, ma può essere null nel post-stato. Punta a un `s` buffer valido di byte di dimensioni.

- `_Outref_result_buffer_to_maybenull_(s, c)`

     Il risultato deve essere valido nel post-stato, ma può essere null nel post-stato. Punta al `s` buffer di elementi, `c` di cui i primi sono validi.

- `_Outref_result_bytebuffer_to_maybenull_(s,c)`

     Il risultato deve essere valido nel post-stato, ma può essere null nello stato post. Punta al `s` buffer di byte `c` di cui i primi sono validi.

- `_Outref_result_buffer_all_maybenull_(s)`

     Il risultato deve essere valido nel post-stato, ma può essere null nello stato post. Punta a un `s` buffer valido di elementi validi di dimensione.

- `_Outref_result_bytebuffer_all_maybenull_(s)`

     Il risultato deve essere valido nel post-stato, ma può essere null nello stato post. Punta al buffer `s` valido di byte di elementi validi.

## <a name="return-values"></a>Valori restituiti

Il valore restituito di una `_Out_` funzione è simile a un parametro ma è a un livello diverso di de-riferimento e non è necessario considerare il concetto del puntatore al risultato. Per le annotazioni seguenti, il valore restituito è l'oggetto con annotazioni, ovvero uno scalare, un puntatore a uno struct o un puntatore a un buffer. Queste annotazioni hanno la stessa `_Out_` semantica dell'annotazione corrispondente.

|||
|-|-|
|`_Ret_z_`<br /><br /> `_Ret_writes_(s)`<br /><br /> `_Ret_writes_bytes_(s)`<br /><br /> `_Ret_writes_z_(s)`<br /><br /> `_Ret_writes_to_(s,c)`<br /><br /> `_Ret_writes_maybenull_(s)`<br /><br /> `_Ret_writes_to_maybenull_(s)`<br /><br /> `_Ret_writes_maybenull_z_(s)`|`_Ret_maybenull_`<br /><br /> `_Ret_maybenull_z_`<br /><br /> `_Ret_null_`<br /><br /> `_Ret_notnull_`<br /><br /> `_Ret_writes_bytes_to_`<br /><br /> `_Ret_writes_bytes_maybenull_`<br /><br /> `_Ret_writes_bytes_to_maybenull_`|

## <a name="format-string-parameters"></a>Parametri stringa di formato

- `_Printf_format_string_`Indica che il parametro è una `printf` stringa di formato da utilizzare in un'espressione.

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

- `_Scanf_format_string_`Indica che il parametro è una `scanf` stringa di formato da utilizzare in un'espressione.

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

- `_Scanf_s_format_string_`Indica che il parametro è una `scanf_s` stringa di formato da utilizzare in un'espressione.

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

     Il parametro, il campo o il risultato è compreso nell'intervallo (incluso) da `low` a `hi`. Equivalente `_Satisfies_(_Curr_ >= low && _Curr_ <= hi)` a questo viene applicato all'oggetto annotato insieme alle condizioni di pre o post-stato appropriate.

    > [!IMPORTANT]
    > Anche se i nomi contengono "in" e `_In_` `_Out_` "out", la semantica di e **non** si applica a queste annotazioni.

- `_Pre_equal_to_(expr)`

     `_Post_equal_to_(expr)`

     Il valore annotato è `expr`esattamente . Equivalente `_Satisfies_(_Curr_ == expr)` a questo viene applicato all'oggetto annotato insieme alle condizioni di pre o post-stato appropriate.

- `_Struct_size_bytes_(size)`

     Si applica a una dichiarazione di struct o di classe. Indica che un oggetto valido di quel tipo può essere maggiore del tipo `size`dichiarato, con il numero di byte specificato da . Ad esempio:

     `typedef _Struct_size_bytes_(nSize) struct MyStruct {    size_t nSize;    ... };`

     La dimensione del buffer `pM` in `MyStruct *` byte di un parametro di tipo viene quindi considerata:

     `min(pM->nSize, sizeof(MyStruct))`

## <a name="related-resources"></a>Risorse correlate

[Blog del team di analisi del codiceCode Analysis Team Blog](https://blogs.msdn.microsoft.com/codeanalysis/)

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)
