---
title: '&lt;&gt;funzioni charconv'
description: Descrive le <charconv> funzioni di libreria che convertono valori integer o a virgola mobile in o da chars
ms.date: 08/20/2020
f1_keywords:
- charconv/std::to_chars
- charconv/std::from_chars
helpviewer_keywords:
- std::charconv [C++], to_chars
- std::charconv [C++], from_chars
ms.openlocfilehash: b8117f2a272f33be2bb5fef6ba8fa53ec794b63b
ms.sourcegitcommit: f1752bf90b4f869633a859ace85439ca19e208b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2020
ms.locfileid: "88722154"
---
# <a name="ltcharconvgt-functions"></a>&lt;&gt;funzioni charconv

L' \<charconv> intestazione include le funzioni non membro seguenti:

| **Funzioni non membro** | **Descrizione** |
|-|-|
|[to_chars](#to_chars) | Converte un valore integer o a virgola mobile in una sequenza di **`char`** . |
|[from_chars](#from_chars) | Converte una sequenza di **`char`** in un valore integer o a virgola mobile. |

Queste funzioni di conversione sono ottimizzate per le prestazioni e supportano anche il comportamento di round trip più breve. Il comportamento di round trip più breve indica quando un numero viene convertito in caratteri, viene scritta solo una precisione sufficiente per consentire il recupero del numero originale durante la conversione di tali caratteri in un punto a virgola mobile.

- Quando si convertono i caratteri in un numero, il valore numerico non deve essere con terminazione null. Analogamente, quando si converte un numero in caratteri, il risultato non è con terminazione null.
- Le funzioni di conversione non allocano memoria. Si è proprietari del buffer in tutti i casi.
- Le funzioni di conversione non generano. Viene restituito un risultato dal quale è possibile determinare se la conversione è stata eseguita correttamente.
- Le funzioni di conversione non sono sensibili alla modalità di arrotondamento in fase di esecuzione.
- Le funzioni di conversione non sono compatibili con le impostazioni locali. Stampano sempre e analizzano i punti decimali come `'.'` e mai come ',' per le impostazioni locali che usano virgole.

## `to_chars`

Converte un valore integer o a virgola mobile in una sequenza di **`char`** .

Converte `value` in una stringa di caratteri compilando l'intervallo \[ `first` , `last` ), dove \[ `first` , `last` ) deve essere un intervallo valido.
Restituisce una [struttura to_chars_result](to-chars-result-structure.md). Se la conversione ha esito positivo, come indicato da `to_char_result.ec` , il membro `ptr` è il puntatore uno-dopo-fine dei caratteri scritti. In caso contrario, ha il valore `to_char_result.ec` `errc::value_too_large` , `to_char_result.ptr` ha il valore `last` e il contenuto dell'intervallo \[ `first` , `last` ) non è specificato.

L'unico modo `to_chars` per avere esito negativo è se si fornisce un buffer insufficiente per memorizzare il risultato.

```cpp
// integer to chars

to_chars_result to_chars(char* first, char* last, char value, int base = 10);
to_chars_result to_chars(char* first, char* last, signed char value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned char value, int base = 10);
to_chars_result to_chars(char* first, char* last, short value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned short value, int base = 10);
to_chars_result to_chars(char* first, char* last, int value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned int value, int base = 10);
to_chars_result to_chars(char* first, char* last, long value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned long value, int base = 10);
to_chars_result to_chars(char* first, char* last, long long value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned long long value, int base = 10);
to_chars_result to_chars(char* first, char* last, bool value, int base = 10) = delete;

// floating-point to chars

to_chars_result to_chars(char* first, char* last, float value);
to_chars_result to_chars(char* first, char* last, double value);
to_chars_result to_chars(char* first, char* last, long double value);
to_chars_result to_chars(char* first, char* last, float value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, double value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, long double value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, float value, chars_format fmt, int precision);
to_chars_result to_chars(char* first, char* last, double value, chars_format fmt, int precision);
to_chars_result to_chars(char* first, char* last, long double value, chars_format fmt, int precision);
```

### <a name="parameters"></a>Parametri

*prima*\
Punta all'inizio del buffer da riempire.

*Ultima*\
Punta un carattere oltre la fine del buffer da riempire.

*valore*\
Valore da convertire. Se `value` è negativo, la rappresentazione inizia con `-` .

*base*\
Per le conversioni di interi, la base da usare per la conversione `value` in caratteri. Deve essere compreso tra 2 e 36, inclusi. Non ci saranno zeri iniziali. Le cifre nell'intervallo 10.. 35 (incluse) sono rappresentate come caratteri minuscoli a.. z

*FMT*\
Per le conversioni a virgola mobile, una maschera di bit che specifica il formato di conversione da usare, ad esempio scientifico, fisso o esadecimale. Per informazioni dettagliate, vedere [chars_format](chars-format-class.md) .

*precisione*\
Per le conversioni a virgola mobile, il numero di cifre di precisione per il valore convertito.

### <a name="return-value"></a>Valore restituito

[To_chars_result](to-chars-result-structure.md) contenente il risultato della conversione.

### <a name="remarks"></a>Commenti

Le funzioni che accettano un parametro di [chars_format](chars-format-class.md) determinano l'identificatore di conversione come se si utilizzasse `printf()` come indicato di seguito: l'identificatore di conversione è `'f'` se `fmt` è `chars_format::fixed` , `'e'` se `fmt` è, `chars_format::scientific` `'a'` (senza il valore iniziali `0x` nel risultato) se `fmt` è `chars_format::hex` e se è `'g'` `fmt` `chars_format::general` . La specifica della notazione fissa più breve può comunque produrre un output lungo perché potrebbe essere la rappresentazione più breve possibile quando il valore è molto grande o molto piccolo.

Nella tabella seguente viene descritto il comportamento di conversione in base a diverse combinazioni di `fmt` `precision` parametri e. Il termine "comportamento di round trip più breve" si riferisce alla scrittura del minor numero di cifre necessarie in modo che l'analisi di tale rappresentazione tramite la `from_chars` funzione corrispondente recuperi il valore esattamente.

| `fmt` e `precision` combinazione | Output |
|--|--|
|  Nessuno | Qualunque sia la notazione fissa o scientifica è più breve, preferendo un valore fisso come spareggio.</br>Questo comportamento non può essere simulato da un overload che accetta il `fmt` parametro. |
| `fmt` | Comportamento del round trip più breve per il formato specificato, ad esempio il formato scientifico più breve. |
| `fmt` e `precision` | Usa la precisione specificata, `printf()` lo stile seguente, senza il comportamento di round trip più breve. |

### <a name="example"></a>Esempio

```cpp
#include <charconv>
#include <stdio.h>
#include <system_error>

template <typename T> void TestToChars(const T t)
{
    static_assert(std::is_floating_point_v<T>);
    constexpr bool IsFloat = std::is_same_v<T, float>;

    char buf[100]; // 100 is large enough for double and long double values because the longest possible outputs are "-1.23456735e-36" and "-1.2345678901234567e-100".
    constexpr size_t size = IsFloat ? 15 : 24;
    const std::to_chars_result res = std::to_chars(buf, buf + size, t);  // points to buffer area it can use. Must be char, not wchar_t, etc.
    
    if (res.ec == std::errc{}) // no error
    {
        // %.*s provides the exact number of characters to output because the output range, [buf, res.ptr), isn't null-terminated
        printf("success: %.*s\n", static_cast<int>(res.ptr - buf), buf);
    }
    else // probably std::errc::value_too_large
    {
        printf("Error: %d\n", static_cast<int>(res.ec));
    }
}

int main()
{
    TestToChars(123.34);
    return 0;
}
```

## `from_chars`

Converte una sequenza di **`char`** in un valore integer o a virgola mobile.

```cpp
// char to an integer value

from_chars_result from_chars(const char* first, const char* last, char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, signed char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, short& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned short& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, int& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned int& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, long long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned long long& value, int base = 10);

// char to a floating-point value

from_chars_result from_chars(const char* first, const char* last, float& value, chars_format fmt = chars_format::general);
from_chars_result from_chars(const char* first, const char* last, double& value, chars_format fmt = chars_format::general);
from_chars_result from_chars(const char* first, const char* last, long double& value, chars_format fmt = chars_format::general);
```

### <a name="parameters"></a>Parametri

*prima*\
Punta all'inizio del buffer di caratteri da convertire.

*Ultima*\
Punta uno dopo l'elemento finale del buffer di caratteri da convertire.

*valore*\
Se la conversione ha esito positivo, contiene il risultato della conversione.

*base*\
Per le conversioni di interi, la base da usare durante la conversione. Deve essere compreso tra 2 e 36, inclusi.

*FMT*\
Per le conversioni a virgola mobile, il formato della sequenza di caratteri da convertire. Per informazioni dettagliate, vedere [chars_format](chars-format-class.md) .

### <a name="remarks"></a>Commenti

Le `from_chars()` funzioni analizzano la stringa \[ `first` , `last` ) per un modello di numero, dove \[ `first` , `last` è necessario che sia un intervallo valido.

Quando si analizzano i caratteri, gli spazi vuoti non vengono ignorati. Diversamente da `strtod()` , ad esempio, il buffer deve iniziare con una rappresentazione numerica valida.

Restituisce una [struttura from_chars_result](from-chars-result-structure.md).

Se nessun carattere corrisponde a un criterio di numero, `value` è invariato, `from_chars_result.ptr` punta a `first` e `from_chars_result.ec` è `errc::invalid_argument` .

Se solo alcuni caratteri corrispondono a un criterio di numero, `from_chars_result.ptr` punta al primo carattere che non corrisponde al modello o ha il valore del `last` parametro se tutti i caratteri corrispondono.

Se il valore analizzato non è incluso nell'intervallo rappresentabile dal tipo di `value` , `value` è invariato e `from_chars_result.ec` è `errc::result_out_of_range` .

In caso contrario, `value` viene impostato sul valore analizzato, dopo l'arrotondamento ed `from_chars_result.ec` è uguale a `errc{}` .

### <a name="example"></a>Esempio

```cpp
#include <charconv>
#include <stdio.h>
#include <string_view>
#include <system_error>

double TestFromChars(const std::string_view sv)
{
    const char* const first = sv.data();
    const char* const last = first + sv.size();
    double dbl;

    const std::from_chars_result res = std::from_chars(first, last, dbl);

    if (res.ec == std::errc{}) // no error
    {
        printf("success: %g\n", dbl);
    }
    else
    {
        printf("Error: %d\n", static_cast<int>(res.ec));
    }

    return dbl;
}

int main()
{
    double dbl = TestFromChars("123.34");
    return 0;
}
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<charconv>

**Spazio dei nomi:** std

/STD: è necessario c++ 17 o versione successiva.

## <a name="see-also"></a>Vedi anche

[\<charconv>](charconv.md)  
[Stringa decimale più breve che arrotonda i round trip](https://www.exploringbinary.com/the-shortest-decimal-string-that-round-trips-examples/) 
 [identificatori di formato printf ()](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)