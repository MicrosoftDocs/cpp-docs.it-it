---
title: 'Sintassi per la specifica del formato: funzioni printf wprintf'
ms.date: 10/21/2019
helpviewer_keywords:
- format specification fields for printf function
- printf function format specification fields
- flag directives, printf function
- type fields, printf function
- width fields, printf function
- precision fields, printf function
ms.assetid: 664b1717-2760-4c61-bd9c-22eee618d825
ms.openlocfilehash: c5cd93607f8e5a892d789dcb6aeef934f8936dad
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078056"
---
# <a name="format-specification-syntax-printf-and-wprintf-functions"></a>Sintassi per la specifica del formato: funzioni printf e wprintf

Le diverse funzioni `printf` e `wprintf` accettano una stringa di formato e argomenti facoltativi e producono una sequenza di caratteri formattati per l'output. La stringa di formato contiene zero o più *direttive*, che sono caratteri letterali per l'output o *specifiche di conversione* codificate che descrivono come formattare un argomento nell'output. Questo articolo descrive la sintassi usata per codificare le specifiche di conversione nella stringa di formato. Per l'elenco di queste funzioni, vedere [I/O di flusso](../c-runtime-library/stream-i-o.md).

Una specifica di conversione è costituita da campi obbligatori e facoltativi nel seguente formato:

**%** [[*flag*](#flags)][[*larghezza*](#width)][.[*precisione*](#precision)][[*dimensione*](#size)][*tipo*](#type)

Ogni campo della specifica di conversione è un carattere o un numero che indica un particolare identificatore di conversione o opzione di formato. Il campo obbligatorio *tipo* specifica il tipo di conversione da applicare a un argomento. I campi facoltativi *flag*, *larghezza* e *precisione* controllano aspetti aggiuntivi del formato quali gli spazi o gli zeri iniziali, la giustificazione e la precisione visualizzata. Il campo *dimensione* specifica la dimensione dell'argomento usato e convertito.

Una specifica di conversione semplice contiene solo il segno di percentuale e un carattere *tipo*. Ad esempio, `%s` specifica una conversione di stringhe. Per stampare un carattere di segno di percentuale, usare `%%`. Se un segno di percentuale è seguito da un carattere che non ha alcun significato come campo di formato, viene chiamato il gestore di parametro non valido. Per altre informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).

> [!IMPORTANT]
> Per garantire la sicurezza e la stabilità, assicurarsi che le stringhe di specifica della conversione non siano definite dall'utente. Ad esempio, si consideri un programma che richiede all'utente di inserire un nome e archivia l'input in una variabile di stringa denominata `user_name`. Per stampare `user_name`, non eseguire questa operazione:
>
> `printf( user_name ); /* Danger!  If user_name contains "%s", program will crash */`
>
> Al contrario, eseguire questa operazione:
>
> `printf( "%s", user_name );`

<a name="type"></a>

> [!NOTE]
> In Visual Studio 2015 il `printf` e la famiglia di funzioni `scanf` sono stati dichiarati come **inline** e spostati nelle intestazioni `<stdio.h>` e `<conio.h>`. Se si esegue la migrazione di codice precedente, è possibile che venga visualizzato *LNK2019* in relazione a queste funzioni. Per ulteriori informazioni, vedere [la C++ cronologia delle modifiche visive 2003-2015](../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

## <a name="type-conversion-specifier"></a>Identificatore di conversione tipo

Il carattere identificatore di conversione *tipo* specifica se l'argomento corrispondente deve essere interpretato come un carattere, una stringa, un puntatore, un numero intero o un numero a virgola mobile. Il carattere *tipo* è l'unico campo di specifica conversione obbligatorio e viene visualizzato dopo tutti i campi facoltativi.

Gli argomenti che seguono la stringa di formato vengono interpretati a seconda del carattere *tipo* corrispondente e del prefisso [dimensione](#size) facoltativo. Le conversioni dei tipi di carattere `char` e `wchar_t` vengono specificate con **c** o **C** e le stringhe di caratteri estesi a byte singolo e multibyte vengono specificate con **s** o **S**, a seconda della funzione di formattazione usata. Gli argomenti di tipo stringa e carattere che vengono specificati usando **c** e **s** vengono interpretati come `char` e `char*` dalle funzioni della famiglia `printf` o come `wchar_t` e `wchar_t*` dalle funzioni della famiglia `wprintf`. Gli argomenti di tipo stringa e carattere che vengono specificati usando **C** e **S** vengono interpretati come `wchar_t` e `wchar_t*` dalle funzioni della famiglia `printf` o come `char` e `char*` dalle funzioni della famiglia `wprintf`. Questo comportamento è specifico di Microsoft.

I tipi Integer, ad esempio `short`, `int`, `long`, `long long`e le relative varianti di `unsigned`, vengono specificati tramite **d**, **i**, **o**, **u**, **x**e **x**. I tipi a virgola mobile, ad esempio `float`, `double`e `long double`, vengono specificati **usando**, **a, e**, **e**, **f**, **f**, **g**e **g**. **e** Per impostazione predefinita, a meno che non vengano modificati da un prefisso di *dimensione* , gli argomenti Integer vengono assegnati al tipo `int` e gli argomenti a virgola mobile vengono assegnati al `double`. Nei sistemi a 64 bit, un `int` è un valore a 32 bit; di conseguenza gli interi a 64 bit vengono troncati quando vengono formattati per l'output, a meno che non venga usato un prefisso *dimensione***ll** o **I64**. I tipi di puntatore specificati da **p** usano le dimensioni puntatore predefinite per la piattaforma.

> [!NOTE]
> **Specifico di Microsoft:** Il carattere di tipo **Z** e il comportamento dei caratteri di tipo **c**, **c**, **s**e **s** quando vengono usati con le funzioni `printf` e `wprintf` sono estensioni Microsoft. Lo standard ISO C usa **c** e **s** in modo coerente per i caratteri e le stringhe narrow e **C** e **S** per i caratteri e le stringhe wide in tutte le funzioni di formattazione.

### <a name="type-field-characters"></a>Caratteri del campo tipo

|Carattere tipo|Argomento|Formato di output|
|--------------------|--------------|-------------------|
|**c**|Carattere|Una volta usato con funzioni `printf`, specifica un carattere a byte singolo; quando usato con funzioni `wprintf`, specifica un carattere wide.|
|**C**|Carattere|Una volta usato con funzioni `printf`, specifica un carattere wide; quando usato con funzioni `wprintf`, specifica un carattere a byte singolo.|
|**d**|Integer|Intero decimale con segno.|
|**i**|Integer|Intero decimale con segno.|
|**o**|Integer|Intero ottale senza segno.|
|**u**|Integer|Intero decimale senza segno.|
|**x**|Integer|Intero esadecimale senza segno; usa "abcdef".|
|**X**|Integer|Intero esadecimale senza segno; usa "ABCDEF".|
|**e**|A virgola mobile|Valore con segno che presenta il formato [-]*d.dddd*__e±__*dd*\[*d*] dove *d* corrisponde a una cifra decimale, *dddd* corrisponde a una o più cifre decimali a seconda della precisione specificata oppure a sei cifre per impostazione predefinita e *dd*\[*d*] corrisponde a due o tre cifre decimali a seconda del [formato di output](../c-runtime-library/set-output-format.md) e delle dimensioni dell'esponente.|
|**E**|A virgola mobile|Identico al formato **e** con la differenza che l'esponente è introdotto da **E** anziché da **e**.|
|**f**|A virgola mobile|Valore con segno che ha il formato [-]*dddd* __.__ *dddd*, dove *dddd* corrisponde a una o più cifre decimali. Il numero di cifre prima del separatore decimale dipende dalla grandezza del numero, mentre il numero di cifre dopo il separatore decimale dipende dalla precisione richiesta o corrisponde a sei per impostazione predefinita.|
|**F**|A virgola mobile|Identico al formato **f** con la differenza che gli output infinity e NaN sono in maiuscolo.|
|**g**|A virgola mobile|I valori con segno vengono visualizzati in formato **f** o **e**, a seconda di quale sia più compatto per il valore e la precisione specificati. Il formato **e** viene usato solo quando l'esponente del valore è minore di -4 oppure maggiore o uguale all'argomento *precision*. Gli zeri finali vengono troncati e il separatore decimale viene visualizzato solo se uno o più cifre lo seguono.|
|**G**|A virgola mobile|Identico al formato **g** salvo per il fatto che l'esponente è introdotto da **E**anziché da **e** (quando necessario).|
|**a**|A virgola mobile|Valore a virgola mobile a precisione doppia esadecimale con segno e con formato [-]0x*h.hhhh*__p±__*dd*, dove *h.hhhh* sono le cifre esadecimali (in minuscolo) della mantissa, mentre *dd* sono una o più cifre dell'esponente. La precisione indica il numero di cifre dopo il punto.|
|**A**|A virgola mobile|Valore a virgola mobile a precisione doppia esadecimale con segno e con formato [-]0X*h.hhhh*__P±__*dd*, dove *h.hhhh* sono le cifre esadecimali (in maiuscolo) della mantissa, mentre *dd* sono una o più cifre dell'esponente. La precisione indica il numero di cifre dopo il punto.|
|**n**|Puntatore a intero|Numero di caratteri che viene scritto correttamente fino al flusso o nel buffer. Questo valore viene archiviato nel valore intero in cui l'indirizzo viene fornito come argomento. Le dimensioni del numero intero al quale si fa riferimento possono essere controllate da un prefisso di indicazione delle dimensioni dell'argomento. L'identificatore **n** è disattivato per impostazione predefinita. Per informazioni vedere l'importante la nota sulla sicurezza.|
|**p**|Tipo di puntatore|Visualizza l'argomento come indirizzo nelle cifre esadecimali.|
|**s**|string|Una volta usato con funzioni `printf`, specifica una stringa di caratteri a byte singolo o multibyte; una volta usato con le funzioni `wprintf`, specifica una stringa di carattere wide. I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore *precisione*.|
|**S**|string|Una volta usato con funzioni `printf`, specifica una stringa di caratteri wide; una volta usato con le funzioni `wprintf`, specifica una stringa di caratteri a un byte singolo o multibyte. I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore *precisione*.|
|**Z**|Struttura `ANSI_STRING` o `UNICODE_STRING`|Quando l'indirizzo di una struttura [ANSI_STRING](/windows/win32/api/ntdef/ns-ntdef-string) o [UNICODE_STRING](/windows/win32/api/ntdef/ns-ntdef-_unicode_string) viene passato come argomento, visualizza la stringa contenuta nel buffer a cui fa riferimento il campo `Buffer` della struttura. Usare il prefisso modificatore *dimensione***w** per specificare un argomento `UNICODE_STRING`, per esempio `%wZ`. Il campo `Length` della struttura deve essere impostato sulla lunghezza, espressa in byte, della stringa. Il campo `MaximumLength` della struttura deve essere impostato sulla lunghezza, espressa in byte, del buffer.<br /><br /> In genere il carattere tipo **Z** viene usato solo nelle funzioni che usano una specifica di formato, come ad esempio `dbgPrint` e `kdPrint`.|

A partire da Visual Studio 2015, se l'argomento che corrisponde a un identificatore di conversione a virgola mobile (**a**, **A**, **e**, **E**, **f**, **F**, **g**, **G**) è infinito, non definito o NaN, l'output formattato è conforme allo standard C99. Questa tabella elenca l'output formattato:

|valore|Output|
|-----------|------------|
|infinity|`inf`|
|NaN non interattivo|`nan`|
|Segnalazione NaN|`nan(snan)`|
|NaN indefinito|`nan(ind)`|

Qualsiasi valore tra questi può essere preceduto da un segno. Se un carattere identificatore di conversione *tipo* a virgola mobile è una lettera maiuscola, anche l'output viene formattato in lettere maiuscole. Ad esempio, se l'identificatore di formato è `%F` anziché `%f`, un infinity viene formattato come `INF` anziché come `inf`. Anche le funzioni `scanf` possono analizzare queste stringhe, pertanto questi valori possono completare un round trip tra le funzioni `printf` e `scanf`.

Prima di Visual Studio 2015, la libreria CRT usava un formato diverso, non standard per l'output di valori infinite, indefinite e NaN:

|valore|Output|
|-----------|------------|
|+ infinito|`1.#INF` *cifre casuali*|
|- infinito|`-1.#INF` *cifre casuali*|
|Non definito (stesso valore di NaN non interattivo)|*digit* `.#IND` *cifre casuali*|
|NaN|*digit* `.#NAN` *cifre casuali*|

Ognuno di questi elementi potrebbe essere preceduto da un segno e potrebbe essere stato formattato in modo leggermente diverso a seconda della larghezza e della precisione del campo (talvolta con effetti insoliti). Ad esempio `printf("%.2f\n", INFINITY)` visualizzerà `1.#J`, dato che #INF sarà "arrotondato" a una precisione di 2 cifre.

> [!NOTE]
> Se l'argomento corrispondente a `%s` o `%S` o il campo `Buffer` dell'argomento corrispondente a `%Z` è un puntatore null, viene visualizzato "(null)".

> [!NOTE]
> In tutti i formati esponenziali, il numero minimo di cifre dell'esponente da visualizzare è due; tre cifre vengono usate solo in caso di necessità. La funzione [_set_output_format](../c-runtime-library/set-output-format.md) consente di impostare su tre il numero di cifre visualizzate, per garantire la compatibilità con il codice scritto per Visual Studio 2013 e versioni precedenti.

> [!IMPORTANT]
> Poiché il formato `%n` è considerato non sicuro, è disabilitato per impostazione predefinita. Se `%n` viene rilevato in una stringa di formato, viene chiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Per abilitare il supporto di `%n`, vedere [set_printf_count_output](../c-runtime-library/reference/set-printf-count-output.md).

<a name="flags"></a>

## <a name="flag-directives"></a>Direttive flag

Il primo campo facoltativo in una specifica di conversione contiene *direttive flag*, zero o più caratteri flag che specificano la giustificazione dell'output e controllano l'output di segni, spazi, zeri iniziali, separatori decimali e prefissi ottali ed esadecimali. In una specifica di conversione possono apparire più direttive flag e i caratteri flag possono essere visualizzati in qualsiasi ordine.

### <a name="flag-characters"></a>Caratteri flag

|Flag|Significato|Predefinito|
|----------|-------------|-------------|
|**-**|Allinea a sinistra il risultato entro la larghezza del campo specificata.|Allinea a destra.|
|**+**|Usa un segno (+ o -) come prefisso del valore di output se si tratta di un tipo con segno.|Il segno viene visualizzato solo per i valori con segno negativo (-).|
|**0**|Se *larghezza* è preceduto da **0**, vengono aggiunti zeri iniziali fino a ottenere la larghezza minima. Se appaiono sia **0** sia **-** , **0** viene ignorato. Se **0** è specificato per un formato intero (**i**, **u**, **x**, **X**, **o**, **d**) ed è anche presente una specifica di precisione quale `%04.d`, **0** viene ignorato. Se **0** è specificato per il formato a virgola mobile **a** o **A**, gli zeri iniziali vengono posizionati prima della mantissa, dopo il prefisso `0x` o `0X`.|Nessun riempimento.|
|**blank** (' ')|Usare uno spazio come prefisso del valore di output se questo è provvisto di segno e positivo. Lo spazio viene ignorato se appaiono sia il flag blank sia il flag +.|Non viene visualizzato alcuno spazio.|
|**#**|Quando viene usato con il formato **o**, **x** o **X**, il flag **#** usa rispettivamente 0, 0x o 0X, come prefisso di qualsiasi valore di output diverso da zero.|Non viene visualizzato alcuno spazio.|
||Quando è usato con il formato **e**, **E**, **f**, **F**, **a** o **A** il flag **#** impone la presenza di un separatore decimale nel valore di output.|Il separatore decimale viene visualizzato solo se è seguito da cifre.|
||Quando viene usato con il formato **g** o **G** il flag **#** impone la presenza di un separatore decimale nel valore di output e impedisce che gli zeri finali vengano troncati.<br /><br /> Ignorato se usato con **c**, **d**, **i**, **u** o **s**.|Il separatore decimale viene visualizzato solo se è seguito da cifre. Gli zeri finali vengono troncati.|

<a name="width"></a>

## <a name="width-specification"></a>Specifica della larghezza

In una specifica di conversione, il campo facoltativo di specifica della larghezza viene visualizzato dopo qualsiasi carattere *flag*. L'argomento *larghezza* è un intero decimale non negativo che controlla il numero minimo di caratteri restituiti. Se il numero di caratteri nel valore di output è inferiore alla larghezza specificata, vengono aggiunti spazi a sinistra o a destra dei valori, a seconda che sia specificato o meno il flag di allineamento a sinistra ( **-** ), fino a raggiungere la larghezza minima. Se *larghezza* è preceduto da 0, vengono aggiunti zeri iniziali alle conversioni intere o a virgola mobile fino a raggiungere la larghezza minima, salvo se la conversione restituisce un valore infinito o non numerico.

La specifica della larghezza non provoca mai il troncamento di un valore. Se il numero di caratteri nel valore di output è maggiore della larghezza specificata o se non viene specificato l'argomento *larghezza*, vengono restituiti tutti i caratteri del valore in base alla specifica *precisione*.

Se la specifica della larghezza è un asterisco (`*`), il valore è fornito da un argomento `int` dall'elenco degli argomenti. L'argomento *larghezza* deve precedere il valore che viene formattato nell'elenco degli argomenti, come illustrato nel seguente esempio:

`printf("%0*d", 5, 3);  /* 00003 is output */`

Un valore *larghezza* mancante o di piccole dimensioni in una specifica di conversione non causa il troncamento di un valore di output. Se il risultato di una conversione è più ampio del valore di *larghezza*, il campo viene espanso per contenere il risultato della conversione.

<a name="precision"></a>

## <a name="precision-specification"></a>Specifica della precisione

In una specifica di conversione, il terzo campo facoltativo è la specifica di precisione. È costituita da un punto (.) seguito da un intero decimale non negativo che, a seconda del tipo di conversione, specifica il numero di caratteri della stringa, il numero di posizioni decimali o il numero di cifre significative da restituire.

A differenza della specifica della larghezza, la specifica della precisione può causare il troncamento del valore di output o l'arrotondamento di un valore a virgola mobile. Se *precisione* viene specificato come 0 e il valore da convertire è 0, non verrà restituito alcun carattere nell'output, come illustrato in questo esempio:

`printf( "%.0d", 0 );      /* No characters output */`

Se la specifica della precisione è un asterisco (\*), il valore viene specificato da un argomento `int` dell'elenco degli argomenti. Nell'elenco degli argomenti, l'argomento *precisione* deve precedere il valore da formattare, come illustrato nel seguente esempio:

`printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`

Il carattere *tipo* determina l'interpretazione di *precisione* o la precisione predefinita quando *precisione* viene omesso, come illustrato nella tabella seguente.

### <a name="how-precision-values-affect-type"></a>Effetti del tipo sui valori di precisione

|Type|Significato|Predefinito|
|----------|-------------|-------------|
|**a**, **A**|La precisione indica il numero di cifre dopo il punto.|La precisione predefinita è 13. Se la precisione è 0 non viene stampato alcun separatore decimale, a meno che non venga usato il flag **#** .|
|**c**, **C**|La precisione non ha alcun effetto.|Viene stampato il carattere.|
|**d**, **i**, **o**, **u**, **x**, **X**|La precisione specifica il numero minimo di cifre da stampare. Se il numero di cifre nell'argomento è minore di *precisione*, il valore di output viene riempito a sinistra con zeri. Il valore non viene troncato quando il numero di cifre supera *precisione*.|La precisione predefinita è 1.|
|**e**, **E**|La precisione specifica il numero di cifre da stampare dopo il separatore decimale. L'ultima cifra stampata viene arrotondata.|La precisione predefinita è 6. Se *precisione* è 0 o il punto (.) non è seguito da un numero, non viene stampato alcun separatore decimale.|
|**f**, **F**|Il valore di precisione specifica il numero di cifre dopo il separatore decimale. Se viene visualizzato un separatore decimale, prima di esso viene visualizzata almeno una cifra. Il valore viene arrotondato al numero di cifre appropriato.|La precisione predefinita è 6. Se *precisione* è 0 o il punto (.) non è seguito da un numero, non viene stampato alcun separatore decimale.|
|**g**, **G**|La precisione specifica il numero massimo di cifre significative da stampare.|Vengono stampate sei cifre significative e gli eventuali zeri finali vengono troncati.|
|**s**, **S**|La precisione specifica il numero massimo di caratteri da stampare. I caratteri in eccesso rispetto al valore *precisione* non vengono stampati.|I caratteri vengono stampati fino a quando non viene rilevato un carattere Null.|

<a name="size"></a>

## <a name="argument-size-specification"></a>Specifica delle dimensioni dell'argomento

In una specifica di conversione il campo *dimensione* è un modificatore della lunghezza argomento per l'identificatore di conversione *tipo*. I prefissi del campo *dimensione* per il campo *tipo* (**hh**, **h**, **j**, **l** (L minuscola), **L**, **ll**, **t**, **w**, **z**, **I** (i maiuscola), **I32** e **I64**) specificano le "dimensioni" dell'argomento corrispondente, ovvero lungo o corto, a 32 bit o a 64 bit, carattere a byte singolo o carattere wide, a seconda dell'identificatore di conversione che viene modificato. Questi prefissi di dimensioni vengono usati con i caratteri *tipo* nei gruppi di funzioni `printf` e `wprintf` per specificare l'interpretazione delle lunghezze degli argomenti, come mostrato nella tabella seguente. Il campo *dimensione* è facoltativo per alcuni tipi di argomento. Quando non viene specificato alcun prefisso, il formattatore usa argomenti di tipo Integer, ad esempio `char`, `short`, `int`, `long` firmati o non firmati, e tipi di enumerazione, ad esempio i tipi `int` a 32 bit e gli argomenti a virgola mobile `float`, `double`, e `long double` vengono usati come tipi `double` a 64 bit. Questo comportamento corrisponde alle regole di promozione degli argomenti predefinite per gli elenchi di argomenti variabili. Per altre informazioni sulla promozione di argomenti, vedere Puntini di sospensione e argomenti predefiniti in [Espressioni in forma suffissa](../cpp/postfix-expressions.md). Nei sistemi a 32 bit e 64 bit la specifica di conversione del formato di un argomento Integer a 64 bit deve includere un prefisso di dimensione **ll** o **I64**. In caso contrario, il comportamento del formattatore non sarà definito.

Alcuni tipi corrispondono a dimensioni diverse le codice a 32 bit e a 64 bit. Ad esempio, `size_t` ha una lunghezza pari a 32 bit nel codice compilato per x86 e a 64 bit nel codice compilato per x64. Per creare codice di formattazione indipendente dalla piattaforma per tipi a larghezza variabile, è possibile usare un modificatore di dimensioni per argomenti a larghezza variabile. In alternativa, usare un modificatore di dimensioni di argomenti a 64 bit e alzare di livello a 64 bit in modo esplicito il tipo di argomento a larghezza variabile. Il modificatore di dimensioni argomento specifico di Microsoft **I** (i maiuscola) gestisce gli argomenti interi con larghezza variabile; tuttavia per la portabilità è consigliato l'uso dei modificatori specifici del tipo **j**, **t** e **z**.

### <a name="size-prefixes-for-printf-and-wprintf-format-type-specifiers"></a>Prefissi di dimensione per identificatori di tipo di formato printf e wprintf

|Per specificare|Prefisso da usare|Con identificatore del tipo|
|----------------|----------------|-------------------------|
|`char`<br />`unsigned char`|**hh**|**d**, **i**, **o**, **u**, **x** o **X**|
|`short int`<br />`short unsigned int`|**h**|**d**, **i**, **o**, **u**, **x** o **X**|
|`__int32`<br />`unsigned __int32`|**I32**|**d**, **i**, **o**, **u**, **x** o **X**|
|`__int64`<br />`unsigned __int64`|**I64**|**d**, **i**, **o**, **u**, **x** o **X**|
|`intmax_t`<br />`uintmax_t`|**j** o **I64**|**d**, **i**, **o**, **u**, **x** o **X**|
|`long double`|**l** (L minuscola) o **L**|**a**, **A**, **e**, **E**, **f**, **F**, **g** o **G**|
|`long int`<br />`long unsigned int`|**l** (L minuscola)|**d**, **i**, **o**, **u**, **x** o **X**|
|`long long int`<br />`unsigned long long int`|**ll** (LL minuscole)|**d**, **i**, **o**, **u**, **x** o **X**|
|`ptrdiff_t`|**t** o **I** (i maiuscola)|**d**, **i**, **o**, **u**, **x** o **X**|
|`size_t`|**z** o **I** (i maiuscola)|**d**, **i**, **o**, **u**, **x** o **X**|
|Carattere a byte singolo|**h**|**c** o **C**|
|Carattere wide|**l** (L minuscola) o **w**|**c** o **C**|
|Stringa con caratteri a byte singolo|**h**|**s**, **S** o **Z**|
|Stringa di caratteri wide|**l** (L minuscola) o **w**|**s**, **S** o **Z**|

I tipi `ptrdiff_t` e `size_t` sono `__int32` o `unsigned __int32` nelle piattaforme a 32 bit e `__int64` o `unsigned __int64` nelle piattaforme a 64 bit. I prefissi di dimensioni **I** (i maiuscola), **j**, **t** e **z** adottano la larghezza argomento corretta per la piattaforma.

In Visual C++, anche se `long double` è un tipo distinto, ha la stessa rappresentazione interna di `double`.

Un identificatore di tipo **hc** o **hC** è sinonimo di **c** nelle funzioni `printf` e di **C** nelle funzioni `wprintf`. Un identificatore di tipo **lc**, **lC**, **wc** o **wC** è sinonimo di **C** nelle funzioni `printf` e di **c** nelle funzioni `wprintf`. Un identificatore di tipo **hs** o **hS** è sinonimo di **s** nelle funzioni `printf` e di **S** nelle funzioni `wprintf`. Un identificatore di tipo **ls**, **lS**, **ws** o **wS** è sinonimo di **S** nelle funzioni `printf` e di **s** nelle funzioni `wprintf`.

> [!NOTE]
> **Specifico di Microsoft:** I prefissi dei modificatori di dimensioni **argomento i (** i maiuscole), **i32**, **I64**e **w** sono estensioni Microsoft e non sono compatibili con ISO C. Il prefisso **h** usato con dati di tipo `char` e il prefisso **l** (L minuscola) usato con dati di tipo `double` sono estensioni Microsoft.

## <a name="see-also"></a>Vedere anche

[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)<br/>
[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)<br/>
[Parametri posizionali printf_p](../c-runtime-library/printf-p-positional-parameters.md)
