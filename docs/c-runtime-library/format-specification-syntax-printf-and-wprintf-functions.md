---
title: 'Sintassi per la specifica del formato: `printf` `wprintf` funzioni e'
description: Descrive la sintassi dell'identificatore di formato per le `printf` funzioni e il runtime di Microsoft C `wprintf`
ms.date: 10/26/2020
helpviewer_keywords:
- format specification fields for printf function
- printf function format specification fields
- flag directives, printf function
- type fields, printf function
- width fields, printf function
- precision fields, printf function
ms.assetid: 664b1717-2760-4c61-bd9c-22eee618d825
ms.openlocfilehash: 18642f650949e346fd3421b4a123acb4e84ed659
ms.sourcegitcommit: 9c801a43ee0d4d84956b03fd387716c818705e0d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/28/2020
ms.locfileid: "92907532"
---
# <a name="format-specification-syntax-printf-and-wprintf-functions"></a>Sintassi per la specifica del formato: funzioni printf e wprintf

Le diverse funzioni `printf` e `wprintf` accettano una stringa di formato e argomenti facoltativi e producono una sequenza di caratteri formattati per l'output. La stringa di formato contiene zero o più *direttive* , che sono caratteri letterali per l'output o *specifiche di conversione* codificate che descrivono come formattare un argomento nell'output. Questo articolo descrive la sintassi usata per codificare le specifiche di conversione nella stringa di formato. Per l'elenco di queste funzioni, vedere [I/O di flusso](../c-runtime-library/stream-i-o.md).

Una specifica di conversione è costituita da campi obbligatori e facoltativi nel seguente formato:

**%** [ [*flag*](#flags)] [ [*larghezza*](#width)] [. [*precisione*](#precision)] [ [*dimensioni*](#size)] [*tipo*](#type) di

Ogni campo della specifica di conversione è un carattere o un numero che indica un particolare identificatore di conversione o opzione di formato. Il campo obbligatorio *tipo* specifica il tipo di conversione da applicare a un argomento. I campi facoltativi *flag* , *larghezza* e *precisione* controllano aspetti aggiuntivi del formato quali gli spazi o gli zeri iniziali, la giustificazione e la precisione visualizzata. Il campo *dimensione* specifica la dimensione dell'argomento usato e convertito.

Una specifica di conversione semplice contiene solo il segno di percentuale e un carattere *tipo* . Ad esempio, `%s` specifica una conversione di stringhe. Per stampare un carattere di segno di percentuale, usare `%%`. Se un segno di percentuale è seguito da un carattere che non ha alcun significato come campo di formato, viene chiamato il gestore di parametro non valido. Per altre informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).

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
> In Visual Studio 2015 la `printf` `scanf` famiglia di funzioni e è stata dichiarata come **`inline`** e spostata nelle `<stdio.h>` `<conio.h>` intestazioni e. Se si esegue la migrazione di codice precedente, è possibile che venga visualizzato *LNK2019* in relazione a queste funzioni. Per ulteriori informazioni, vedere [Visual C++ cronologia delle modifiche 2003-2015](../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

## <a name="type-conversion-specifier"></a>Identificatore di conversione tipo

Il carattere identificatore di conversione *tipo* specifica se l'argomento corrispondente deve essere interpretato come un carattere, una stringa, un puntatore, un numero intero o un numero a virgola mobile. Il carattere *tipo* è l'unico campo di specifica conversione obbligatorio e viene visualizzato dopo tutti i campi facoltativi.

Gli argomenti che seguono la stringa di formato vengono interpretati a seconda del carattere *tipo* corrispondente e del prefisso [dimensione](#size) facoltativo. Le conversioni per i tipi di carattere `char` e `wchar_t` vengono specificate tramite **`c`** o **`C`** e le stringhe di caratteri a byte singolo e a byte singolo o Wide vengono specificate tramite **`s`** o **`S`** , a seconda della funzione di formattazione usata. Gli argomenti di tipo carattere e stringa specificati tramite **`c`** e **`s`** vengono interpretati come `char` e `char*` dalle funzioni della `printf` famiglia o come `wchar_t` e `wchar_t*` dalle funzioni della `wprintf` famiglia. Gli argomenti di tipo carattere e stringa specificati tramite **`C`** e **`S`** vengono interpretati come `wchar_t` e `wchar_t*` dalle funzioni della `printf` famiglia o come `char` e `char*` dalle funzioni della `wprintf` famiglia. Questo comportamento è specifico di Microsoft.

I tipi integer come `short` , `int` , `long` , `long long` e le relative `unsigned` varianti vengono specificati tramite,, **`d`** **`i`** **`o`** , **`u`** , **`x`** e **`X`** . I tipi a virgola mobile, ad esempio `float` , `double` e **`long double`** , vengono specificati usando **`a`** ,, **`A`** **`e`** , **`E`** , **`f`** , **`F`** , **`g`** e **`G`** . Per impostazione predefinita, a meno che non siano state modificate da un prefisso di *dimensione* , gli argomenti Integer vengono assegnati al `int` tipo e gli argomenti a virgola mobile vengono assegnati a `double` . Nei sistemi a 64 bit, un `int` è un valore a 32 bit; pertanto, gli Integer a 64 bit verranno troncati quando vengono formattati per l'output, a meno che non venga usato un prefisso di *dimensione* di **ll** o **I64** . I tipi di puntatore specificati da **`p`** usano le dimensioni del puntatore predefinite per la piattaforma.

> [!NOTE]
> **Specifico di Microsoft:**\
> Il **`Z`** carattere di tipo e il comportamento dei **`c`** caratteri di **`C`** tipo,, **`s`** e  **`S`** quando vengono usati con le `printf` `wprintf` funzioni e sono estensioni Microsoft. Lo standard ISO C usa **`c`** e **`s`** in modo coerente per i caratteri e le stringhe narrow e per i caratteri e le **`C`** **`S`** stringhe wide, in tutte le funzioni di formattazione.

### <a name="type-field-characters"></a>Caratteri del campo tipo

|Carattere tipo|Argomento|Formato di output|
|--------------------|--------------|-------------------|
|**`c`**|Carattere|Una volta usato con funzioni `printf`, specifica un carattere a byte singolo; quando usato con funzioni `wprintf`, specifica un carattere wide.|
|**`C`**|Carattere|Una volta usato con funzioni `printf`, specifica un carattere wide; quando usato con funzioni `wprintf`, specifica un carattere a byte singolo.|
|**`d`**|Integer|Intero decimale con segno.|
|**`i`**|Integer|Intero decimale con segno.|
|**`o`**|Integer|Intero ottale senza segno.|
|**`u`**|Integer|Intero decimale senza segno.|
|**`x`**|Integer|Intero esadecimale senza segno; USA " `abcdef` ".|
|**`X`**|Integer|Intero esadecimale senza segno; USA " `ABCDEF` ".|
|**`e`**|A virgola mobile|Valore con segno che ha il formato [-] *`d.dddd`* __e ±__ *`dd`* \[ *`d`* ], dove *`d`* è una cifra decimale, *`dddd`* è una o più cifre decimali a seconda della precisione specificata oppure sei per impostazione predefinita e] è costituito da *`dd`* \[ *`d`* due o tre cifre decimali a seconda del [formato di output](../c-runtime-library/set-output-format.md) e delle dimensioni dell'esponente.|
|**`E`**|A virgola mobile|Identico al **`e`** formato con la differenza che **`E`** invece di **`e`** introduce l'esponente.|
|**`f`**|A virgola mobile|Valore con segno che ha il formato [-] *`dddd`* __.__ *`dddd`* , dove è costituito da *`dddd`* una o più cifre decimali. Il numero di cifre prima del separatore decimale dipende dalla grandezza del numero, mentre il numero di cifre dopo il separatore decimale dipende dalla precisione richiesta o corrisponde a sei per impostazione predefinita.|
|**`F`**|A virgola mobile|Identico al **`f`** formato, ad eccezione del fatto che l'output infinito e Nan è in maiuscolo.|
|**`g`**|A virgola mobile|I valori firmati vengono visualizzati nel **`f`** **`e`** formato o, a seconda di quale sia più compatto per il valore e la precisione specificati. Il **`e`** formato viene utilizzato solo quando l'esponente del valore è minore di-4 oppure maggiore o uguale all'argomento di *precisione* . Gli zeri finali vengono troncati e il separatore decimale viene visualizzato solo se uno o più cifre lo seguono.|
|**`G`**|A virgola mobile|Identico al **`g`** formato, ad eccezione del fatto che, **`E`** anziché **`e`** , introduce l'esponente (dove appropriato).|
|**`a`**|A virgola mobile|Valore a virgola mobile e precisione doppia con segno esadecimale con formato *[-] 0xh. hhhh*__p ±__ *`dd`* , dove *h. hhhh* sono le cifre esadecimali (usando le lettere minuscole) di mantissa e *`dd`* sono una o più cifre per l'esponente. La precisione indica il numero di cifre dopo il punto.|
|**`A`**|A virgola mobile|Valore a virgola mobile e precisione doppia con segno esadecimale con formato *[-] 0Xh. hhhh*__P ±__ *`dd`* , dove *h. hhhh* sono le cifre esadecimali (usando le lettere maiuscole) di mantissa e *DD* sono una o più cifre per l'esponente. La precisione indica il numero di cifre dopo il punto.|
|**`n`**|Puntatore a intero|Numero di caratteri che viene scritto correttamente fino al flusso o nel buffer. Questo valore viene archiviato nel valore intero in cui l'indirizzo viene fornito come argomento. Le dimensioni del numero intero al quale si fa riferimento possono essere controllate da un prefisso di indicazione delle dimensioni dell'argomento. L' **`n`** identificatore è disabilitato per impostazione predefinita. per informazioni, vedere la nota importante sulla sicurezza.|
|**`p`**|Tipo di puntatore|Visualizza l'argomento come indirizzo in cifre esadecimali.|
|**`s`**|string|Una volta usato con funzioni `printf`, specifica una stringa di caratteri a byte singolo o multibyte; una volta usato con le funzioni `wprintf`, specifica una stringa di carattere wide. I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore *precisione* .|
|**`S`**|string|Una volta usato con funzioni `printf`, specifica una stringa di caratteri wide; una volta usato con le funzioni `wprintf`, specifica una stringa di caratteri a un byte singolo o multibyte. I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore *precisione* .|
|**`Z`**|Struttura `ANSI_STRING` o `UNICODE_STRING`|Quando l'indirizzo di una [`ANSI_STRING`](/windows/win32/api/ntdef/ns-ntdef-string) [`UNICODE_STRING`](/windows/win32/api/ntdef/ns-ntdef-_unicode_string) struttura o viene passato come argomento, Visualizza la stringa contenuta nel buffer a cui punta il `Buffer` campo della struttura. Usare un prefisso del modificatore di *dimensioni* **`w`** per specificare un `UNICODE_STRING` argomento, ad esempio `%wZ` . Il campo `Length` della struttura deve essere impostato sulla lunghezza, espressa in byte, della stringa. Il campo `MaximumLength` della struttura deve essere impostato sulla lunghezza, espressa in byte, del buffer.<br /><br />In genere, il **`Z`** carattere tipo viene usato solo nelle funzioni di debug del driver che usano una specifica di conversione, ad esempio `dbgPrint` e `kdPrint` .|

A partire da Visual Studio 2015, se l'argomento che corrisponde a un identificatore di conversione a virgola mobile ( **`a`** , **`A`** , **`e`** , **`E`** , **`f`** , **`F`** , **`g`** , **`G`** ) è infinito, indefinito o NaN, l'output formattato è conforme allo standard C99. Questa tabella elenca l'output formattato:

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
|+ infinito|`1.#INF` *random-digits*|
|- infinito|`-1.#INF` *random-digits*|
|Non definito (stesso valore di NaN non interattivo)|*digit* `.#IND` *random-digits*|
|NaN|*digit* `.#NAN` *random-digits*|

Uno di questi può essere preceduto da un segno e potrebbe essere stato formattato in modo diverso a seconda della larghezza e della precisione del campo, talvolta con effetti insoliti. Ad esempio, `printf("%.2f\n", INFINITY)` stampa `1.#J` perché il *#INF* verrebbe "arrotondato" a due cifre di precisione.

> [!NOTE]
> Se l'argomento corrispondente a `%s` o `%S` o il campo `Buffer` dell'argomento corrispondente a `%Z` è un puntatore null, viene visualizzato "(null)".

> [!NOTE]
> In tutti i formati esponenziali, il numero minimo di cifre dell'esponente da visualizzare è due; tre cifre vengono usate solo in caso di necessità. Utilizzando la [`_set_output_format`](../c-runtime-library/set-output-format.md) funzione, è possibile impostare il numero di cifre visualizzate su tre per la compatibilità con le versioni precedenti del codice scritto per Visual Studio 2013 e precedenti.

> [!IMPORTANT]
> Poiché il `%n` formato è intrinsecamente non sicuro, è disabilitato per impostazione predefinita. Se `%n` viene rilevato in una stringa di formato, viene chiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Per abilitare il `%n` supporto, vedere [`_set_printf_count_output`](../c-runtime-library/reference/set-printf-count-output.md) .

<a name="flags"></a>

## <a name="flag-directives"></a>Direttive flag

Il primo campo facoltativo in una specifica di conversione contiene *direttive flag* , zero o più caratteri flag che specificano la giustificazione dell'output e controllano l'output di segni, spazi, zeri iniziali, separatori decimali e prefissi ottali ed esadecimali. In una specifica di conversione possono apparire più direttive flag e i caratteri flag possono essere visualizzati in qualsiasi ordine.

### <a name="flag-characters"></a>Caratteri flag

|Contrassegno|Significato|Predefinito|
|----------|-------------|-------------|
|**`-`**|Allinea a sinistra il risultato entro la larghezza del campo specificata.|Allinea a destra.|
|**`+`**|Usare un segno (+ o-) per anteporre al valore di output se è di un tipo con segno.|Il segno viene visualizzato solo per i valori con segno negativo (-).|
|**`0`**|Se la *larghezza* è preceduta da **`0`** , vengono aggiunti zeri iniziali fino a quando non viene raggiunta la larghezza minima. Se **`0`** e **`-`** vengono visualizzati, **`0`** viene ignorato. Se **`0`** è specificato per un formato Integer ( **`i`** , **`u`** , **`x`** , **`X`** , **`o`** , **`d`** ) ed è presente anche una specifica di precisione, ad esempio, `%04.d` **`0`** viene ignorato. Se **`0`** viene specificato per il **`a`** **`A`** formato a virgola mobile o, gli zeri iniziali vengono anteposti a mantissa, dopo il `0x` `0X` prefisso o.|Nessun riempimento.|
|**Blank ('')**|Usare uno spazio vuoto per anteporre al valore di output se è firmato e positivo. Lo spazio viene ignorato se appaiono sia il flag blank sia il flag +.|Non viene visualizzato alcuno spazio.|
|**`#`**|Quando viene usato con il **`o`** formato, **`x`** o **`X`** , il **`#`** flag USA `0` `0x` rispettivamente, o, `0X` per anteporre un valore di output diverso da zero.|Non viene visualizzato alcuno spazio.|
||Quando viene usato con il **`e`** formato, **`E`** , **`f`** , **`F`** , **`a`** o **`A`** , il **`#`** flag impone al valore di output di contenere una virgola decimale.|Il separatore decimale viene visualizzato solo se è seguito da cifre.|
||Quando viene usato con il **`g`** formato o **`G`** , il **`#`** flag impone al valore di output di contenere una virgola decimale e impedisce il troncamento degli zeri finali.<br /><br /> Viene ignorato se utilizzato con **`c`** , **`d`** , **`i`** , **`u`** o **`s`** .|Il separatore decimale viene visualizzato solo se è seguito da cifre. Gli zeri finali vengono troncati.|

<a name="width"></a>

## <a name="width-specification"></a>Specifica della larghezza

In una specifica di conversione, il campo facoltativo di specifica della larghezza viene visualizzato dopo qualsiasi carattere *flag* . L'argomento *larghezza* è un intero decimale non negativo che controlla il numero minimo di caratteri restituiti. Se il numero di caratteri nel valore di output è inferiore alla larghezza specificata, vengono aggiunti spazi vuoti a sinistra o a destra dei valori, a seconda che venga specificato il flag di allineamento a sinistra ( **`-`** ), fino a quando non viene raggiunta la larghezza minima. Se *larghezza* è preceduto da 0, vengono aggiunti zeri iniziali alle conversioni intere o a virgola mobile fino a raggiungere la larghezza minima, salvo se la conversione restituisce un valore infinito o non numerico.

La specifica della larghezza non provoca mai il troncamento di un valore. Se il numero di caratteri nel valore di output è maggiore della larghezza specificata o se la *larghezza* non è specificata, vengono restituiti tutti i caratteri del valore, in base alla specifica di *precisione* .

Se la specifica della larghezza è un asterisco (`*`), il valore è fornito da un argomento `int` dall'elenco degli argomenti. L'argomento *larghezza* deve precedere il valore che viene formattato nell'elenco degli argomenti, come illustrato nel seguente esempio:

`printf("%0*d", 5, 3);  /* 00003 is output */`

Un valore *larghezza* mancante o di piccole dimensioni in una specifica di conversione non causa il troncamento di un valore di output. Se il risultato di una conversione è più ampio del valore di *larghezza* , il campo viene espanso per contenere il risultato della conversione.

<a name="precision"></a>

## <a name="precision-specification"></a>Specifica della precisione

In una specifica di conversione, il terzo campo facoltativo è la specifica di precisione. È costituito da un punto ( `.` ) seguito da un numero intero decimale non negativo che, a seconda del tipo di conversione, specifica il numero di caratteri stringa, il numero di posizioni decimali o il numero di cifre significative da restituire.

A differenza della specifica della larghezza, la specifica della precisione può causare il troncamento del valore di output o l'arrotondamento di un valore a virgola mobile. Se *Precision* viene specificato come 0 e il valore da convertire è 0, il risultato non è un output di caratteri, come illustrato nell'esempio seguente:

`printf( "%.0d", 0 );      /* No characters output */`

Se la specifica della precisione è un asterisco (`*`), il valore viene specificato da un argomento `int` dell'elenco degli argomenti. Nell'elenco degli argomenti, l'argomento *precisione* deve precedere il valore da formattare, come illustrato nel seguente esempio:

`printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`

Il carattere *tipo* determina l'interpretazione di *precisione* o la precisione predefinita quando *precisione* viene omesso, come illustrato nella tabella seguente.

### <a name="how-precision-values-affect-type"></a>Effetti del tipo sui valori di precisione

|Type|Significato|Predefinito|
|----------|-------------|-------------|
|**`a`** , **`A`**|La precisione indica il numero di cifre dopo il punto.|La precisione predefinita è 13. Se la precisione è 0, non viene stampato alcun separatore decimale, a meno che non **`#`** venga usato il flag.|
|**`c`** , **`C`**|La precisione non ha alcun effetto.|Viene stampato il carattere.|
|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** , **`X`**|La precisione specifica il numero minimo di cifre da stampare. Se il numero di cifre nell'argomento è minore di *precisione* , il valore di output viene riempito a sinistra con zeri. Il valore non viene troncato quando il numero di cifre supera la *precisione* .|La precisione predefinita è 1.|
|**`e`** , **`E`**|La precisione specifica il numero di cifre da stampare dopo il separatore decimale. L'ultima cifra stampata viene arrotondata.|La precisione predefinita è 6. Se la *precisione* è 0 o il `.` punto () viene visualizzato senza un numero successivo, non viene stampato alcun separatore decimale.|
|**`f`** , **`F`**|Il valore di precisione specifica il numero di cifre dopo il separatore decimale. Se viene visualizzato un separatore decimale, prima di esso viene visualizzata almeno una cifra. Il valore viene arrotondato al numero di cifre appropriato.|La precisione predefinita è 6. Se la *precisione* è 0 o se il punto ( `.` ) viene visualizzato senza un numero successivo, non viene stampato alcun separatore decimale.|
|**`g`** , **`G`**|La precisione specifica il numero massimo di cifre significative da stampare.|Vengono stampate sei cifre significative e gli eventuali zeri finali vengono troncati.|
|**`s`** , **`S`**|La precisione specifica il numero massimo di caratteri da stampare. I caratteri in eccesso rispetto al valore *precisione* non vengono stampati.|I caratteri vengono stampati fino a quando non viene trovato un carattere null.|

<a name="size"></a>

## <a name="argument-size-specification"></a>Specifica delle dimensioni dell'argomento

In una specifica di conversione il campo *dimensione* è un modificatore della lunghezza argomento per l'identificatore di conversione *tipo* . I prefissi dei campi *dimensioni* nel campo *tipo* ,,, **`hh`** **`h`** **`j`** , **`l`** (L minuscola), **`L`** ,, **`ll`** **`t`** , **`w`** , **`z`** , **`I`** (i maiuscoli), **`I32`** e, **`I64`** specificano le "dimensioni" dell'argomento corrispondente, ovvero Long o short, a 32 bit o a 64 bit, a byte singolo o a caratteri wide, a seconda dell'identificatore di conversione che modifica. Questi prefissi di dimensioni vengono usati con i caratteri *tipo* nei gruppi di funzioni `printf` e `wprintf` per specificare l'interpretazione delle lunghezze degli argomenti, come mostrato nella tabella seguente. Il campo *dimensione* è facoltativo per alcuni tipi di argomento. Quando non viene specificato alcun prefisso, il formattatore usa argomenti di tipo Integer, ad esempio `char`, `short`, `int`, `long` firmati o non firmati, e tipi di enumerazione, ad esempio i tipi `int` a 32 bit e gli argomenti a virgola mobile `float`, `double`, e `long double` vengono usati come tipi `double` a 64 bit. Questo comportamento corrisponde alle regole di promozione degli argomenti predefinite per gli elenchi di argomenti variabili. Per ulteriori informazioni sulla promozione di argomenti, vedere puntini di sospensione e argomenti predefiniti nelle [espressioni suffisse](../cpp/postfix-expressions.md). Nei sistemi a 32 bit e a 64 bit la specifica di conversione di un argomento integer a 64 bit deve includere un prefisso di dimensione pari a **`ll`** o **`I64`** . In caso contrario, il comportamento del formattatore non sarà definito.

Alcuni tipi corrispondono a dimensioni diverse le codice a 32 bit e a 64 bit. Ad esempio, `size_t` ha una lunghezza pari a 32 bit nel codice compilato per x86 e a 64 bit nel codice compilato per x64. Per creare codice di formattazione indipendente dalla piattaforma per tipi a larghezza variabile, è possibile usare un modificatore di dimensioni per argomenti a larghezza variabile. Usare invece un modificatore di dimensioni argomento a 64 bit e innalzare di livello in modo esplicito il tipo di argomento a larghezza variabile a 64 bit. Il modificatore di dimensioni dell'argomento specifico di Microsoft **`I`** (maiuscole) gestisce gli argomenti Integer a larghezza variabile, ma è consigliabile usare **`j`** i **`t`** modificatori, e specifici del tipo per la **`z`** portabilità.

### <a name="size-prefixes-for-printf-and-wprintf-format-type-specifiers"></a>Prefissi di dimensione per identificatori di tipo di formato printf e wprintf

|Per specificare|Prefisso da usare|Con identificatore del tipo|
|----------------|----------------|-------------------------|
|`char`<br />`unsigned char`|**`hh`**|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`short int`<br />`short unsigned int`|**`h`**|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`__int32`<br />`unsigned __int32`|**`I32`**|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`__int64`<br />`unsigned __int64`|**`I64`**|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`intmax_t`<br />`uintmax_t`|**`j`** o **`I64`**|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`long double`|**`l`** (L minuscola) o **`L`**|**`a`** , **`A`** , **`e`** , **`E`** , **`f`** , **`F`** , **`g`** o **`G`**|
|`long int`<br />`long unsigned int`|**`l`** (L minuscola) |**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`** |
|`long long int`<br />`unsigned long long int`|**`ll`**  (LL minuscolo)|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`ptrdiff_t`|**`t`** o **`I`** (i maiuscoli)|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|`size_t`|**`z`** o **`I`** (i maiuscoli)|**`d`** , **`i`** , **`o`** , **`u`** , **`x`** o **`X`**|
|Carattere a byte singolo|**`h`**|**`c`** o **`C`**|
|Carattere wide|**`l`** (L minuscola) o **`w`**|**`c`** o **`C`**|
|Stringa con caratteri a byte singolo|**`h`**|**`s`** , **`S`** o **`Z`**|
|Stringa di caratteri wide|**`l`** (L minuscola) o **`w`**|**`s`** , **`S`** o **`Z`**|

I tipi `ptrdiff_t` e `size_t` sono `__int32` o `unsigned __int32` nelle piattaforme a 32 bit e `__int64` o `unsigned __int64` nelle piattaforme a 64 bit. I **`I`** prefissi di dimensione (i maiuscoli),, **`j`** **`t`** e **`z`** hanno la larghezza dell'argomento corretta per la piattaforma.

In Visual C++, anche se `long double` è un tipo distinto, ha la stessa rappresentazione interna di `double`.

Un **`hc`** **`hC`** identificatore di tipo o è sinonimo di **`c`** nelle `printf` funzioni e di **`C`** nelle `wprintf` funzioni. Un **`lc`** **`lC`** identificatore di tipo,, **`wc`** o **`wC`** è sinonimo di **`C`** nelle `printf` funzioni e di **`c`** nelle `wprintf` funzioni. Un **`hs`** **`hS`** identificatore di tipo o è sinonimo di **`s`** nelle `printf` funzioni e di **`S`** nelle `wprintf` funzioni. Un **`ls`** **`lS`** identificatore di tipo,, **`ws`** o **`wS`** è sinonimo di **`S`** nelle `printf` funzioni e con le **`s`** `wprintf` funzioni in.

> [!NOTE]
> **Specifico di Microsoft:**\
> I **`I`** prefissi (i maiuscoli),, **`I32`** **`I64`** e di **`w`** modifica delle dimensioni degli argomenti sono estensioni Microsoft e non sono compatibili con ISO C. Il **`h`** prefisso usato con dati di tipo `char` e il **`l`** prefisso (L minuscolo) quando viene usato con dati di tipo `double` sono estensioni Microsoft.

## <a name="see-also"></a>Vedere anche

[`printf, _printf_l, wprintf, _wprintf_l`](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)\
[`printf_s, _printf_s_l, wprintf_s, _wprintf_s_l`](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\
[`printf_p` Parametri posizionali](../c-runtime-library/printf-p-positional-parameters.md)
