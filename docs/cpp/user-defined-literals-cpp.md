---
title: Valori letterali definiti dall'utente (C++)
description: Descrive lo scopo e l'utilizzo di valori letterali definiti dall'utente in C++ standard.
ms.date: 02/10/2020
ms.assetid: ff4a5bec-f795-4705-a2c0-53788fd57609
ms.openlocfilehash: 21ed3db84f057131b0404d5f950a4419cb753070
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227049"
---
# <a name="user-defined-literals"></a>Valori letterali definiti dall'utente

Esistono sei categorie principali di valori letterali in C++: Integer, carattere, a virgola mobile, stringa, booleano e puntatore. A partire da C++ 11, è possibile definire valori letterali personalizzati in base a queste categorie, per fornire scorciatoie sintattiche per idiomi comuni e migliorare l'indipendenza dai tipi. Ad esempio, supponiamo di avere una `Distance` classe. È possibile definire un valore letterale per i chilometri e un altro per Miles e incoraggiare l'utente a essere esplicito sulle unità di misura scrivendo: `auto d = 42.0_km` o `auto d = 42.0_mi` . Non esiste alcun vantaggio in merito alle prestazioni o svantaggio per i valori letterali definiti dall'utente. sono principalmente per praticità o per la deduzione del tipo in fase di compilazione. La libreria standard dispone di valori letterali definiti dall'utente per `std::string` , per `std::complex` e per le unità in operazioni di tempo e durata nell' \<chrono> intestazione:

```cpp
Distance d = 36.0_mi + 42.0_km;         // Custom UDL (see below)
std::string str = "hello"s + "World"s;  // Standard Library <string> UDL
complex<double> num =
   (2.0 + 3.01i) * (5.0 + 4.3i);        // Standard Library <complex> UDL
auto duration = 15ms + 42h;             // Standard Library <chrono> UDLs
```

## <a name="user-defined-literal-operator-signatures"></a>Firme di operatori di valori letterali definiti dall'utente

Si implementa un valore letterale definito dall'utente definendo un **operatore ""** nell'ambito dello spazio dei nomi con uno dei formati seguenti:

```cpp
ReturnType operator "" _a(unsigned long long int);   // Literal operator for user-defined INTEGRAL literal
ReturnType operator "" _b(long double);              // Literal operator for user-defined FLOATING literal
ReturnType operator "" _c(char);                     // Literal operator for user-defined CHARACTER literal
ReturnType operator "" _d(wchar_t);                  // Literal operator for user-defined CHARACTER literal
ReturnType operator "" _e(char16_t);                 // Literal operator for user-defined CHARACTER literal
ReturnType operator "" _f(char32_t);                 // Literal operator for user-defined CHARACTER literal
ReturnType operator "" _g(const char*, size_t);      // Literal operator for user-defined STRING literal
ReturnType operator "" _h(const wchar_t*, size_t);   // Literal operator for user-defined STRING literal
ReturnType operator "" _i(const char16_t*, size_t);  // Literal operator for user-defined STRING literal
ReturnType operator "" _g(const char32_t*, size_t);  // Literal operator for user-defined STRING literal
ReturnType operator "" _r(const char*);              // Raw literal operator
template<char...> ReturnType operator "" _t();       // Literal operator template
```

I nomi di operatore nell'esempio precedente sono segnaposti per il nome specificato dall'utente. Il carattere di sottolineatura iniziale è tuttavia obbligatorio. Solo la libreria standard può definire valori letterali senza il carattere di sottolineatura. Il tipo restituito è il punto in cui si Personalizza la conversione o altre operazioni eseguite dal valore letterale. Inoltre, uno di questi operatori può essere definito come **`constexpr`** .

## <a name="cooked-literals"></a>Valori letterali cooked

Nel codice sorgente qualsiasi valore letterale, indipendentemente dal fatto che sia definito dall'utente, è essenzialmente una sequenza di caratteri alfanumerici, ad esempio, o o `101` `54.7` `"hello"` **`true`** . Il compilatore interpreta la sequenza come Integer, float, const char \* String e così via. Valore letterale definito dall'utente che accetta come input qualsiasi tipo assegnato dal compilatore al valore letterale è informalmente noto come valore *letterale cotto*. Tutti gli operatori indicati, ad eccezione di `_r` e `_t`, sono valori letterali cooked. Ad esempio, un valore letterale `42.0_km` verrà associato a un operatore denominato _km con una firma analoga a _b e il valore letterale `42_km` verrà associato a un operatore con firma analoga ad _a.

L'esempio seguente illustra il modo in cui i valori letterali definiti dall'utente possono incoraggiare i chiamanti a esprimere in modo esplicito il rispettivo input. Per costruire un valore `Distance`, l'utente deve specificare in modo esplicito chilometri o miglia usando il valore letterale definito dall'utente appropriato. È possibile ottenere lo stesso risultato in altri modi, ma i valori letterali definiti dall'utente sono meno dettagliati rispetto alle alternative.

```cpp
// UDL_Distance.cpp

#include <iostream>
#include <string>

struct Distance
{
private:
    explicit Distance(long double val) : kilometers(val)
    {}

    friend Distance operator"" _km(long double val);
    friend Distance operator"" _mi(long double val);

    long double kilometers{ 0 };
public:
    const static long double km_per_mile;
    long double get_kilometers() { return kilometers; }

    Distance operator+(Distance other)
    {
        return Distance(get_kilometers() + other.get_kilometers());
    }
};

const long double Distance::km_per_mile = 1.609344L;

Distance operator"" _km(long double val)
{
    return Distance(val);
}

Distance operator"" _mi(long double val)
{
    return Distance(val * Distance::km_per_mile);
}

int main()
{
    // Must have a decimal point to bind to the operator we defined!
    Distance d{ 402.0_km }; // construct using kilometers
    std::cout << "Kilometers in d: " << d.get_kilometers() << std::endl; // 402

    Distance d2{ 402.0_mi }; // construct using miles
    std::cout << "Kilometers in d2: " << d2.get_kilometers() << std::endl;  //646.956

    // add distances constructed with different units
    Distance d3 = 36.0_mi + 42.0_km;
    std::cout << "d3 value = " << d3.get_kilometers() << std::endl; // 99.9364

    // Distance d4(90.0); // error constructor not accessible

    std::string s;
    std::getline(std::cin, s);
    return 0;
}
```

Il numero letterale deve usare un numero decimale. In caso contrario, il numero verrebbe interpretato come Integer e il tipo non sarebbe compatibile con l'operatore. Per l'input a virgola mobile, il tipo deve essere **`long double`** e per i tipi integrali deve essere **`long long`** .

## <a name="raw-literals"></a>Valori letterali non elaborati

In un valore letterale definito dall'utente non elaborato, l'operatore definito accetta il valore letterale come sequenza di valori Char. Spetta all'utente interpretare questa sequenza come un numero o una stringa o un altro tipo. Nell'elenco di operatori mostrato in precedenza in questa pagina `_r` e `_t` possono essere usati per definire valori letterali non elaborati:

```cpp
ReturnType operator "" _r(const char*);              // Raw literal operator
template<char...> ReturnType operator "" _t();       // Literal operator template
```

È possibile usare valori letterali non elaborati per fornire un'interpretazione personalizzata di una sequenza di input diversa dal comportamento normale del compilatore. Ad esempio, è possibile definire un valore letterale che converte la sequenza `4.75987` in un tipo Decimal personalizzato invece di un tipo a virgola mobile IEEE 754. I valori letterali non elaborati, come i valori letterali cotti, possono essere usati anche per la convalida in fase di compilazione delle sequenze di input.

### <a name="example-limitations-of-raw-literals"></a>Esempio: limitazioni dei valori letterali non elaborati

L'operatore di valore letterale non elaborato e il modello di operatore di valore letterale funzionano solo per valori letterali definiti dall'utente di tipo integrale e a virgola mobile, come illustrato dall'esempio seguente:

```cpp
#include <cstddef>
#include <cstdio>

// Literal operator for user-defined INTEGRAL literal
void operator "" _dump(unsigned long long int lit)
{
    printf("operator \"\" _dump(unsigned long long int) : ===>%llu<===\n", lit);
};

// Literal operator for user-defined FLOATING literal
void operator "" _dump(long double lit)
{
    printf("operator \"\" _dump(long double)            : ===>%Lf<===\n",  lit);
};

// Literal operator for user-defined CHARACTER literal
void operator "" _dump(char lit)
{
    printf("operator \"\" _dump(char)                   : ===>%c<===\n",   lit);
};

void operator "" _dump(wchar_t lit)
{
    printf("operator \"\" _dump(wchar_t)                : ===>%d<===\n",   lit);
};

void operator "" _dump(char16_t lit)
{
    printf("operator \"\" _dump(char16_t)               : ===>%d<===\n",   lit);
};

void operator "" _dump(char32_t lit)
{
    printf("operator \"\" _dump(char32_t)               : ===>%d<===\n",   lit);
};

// Literal operator for user-defined STRING literal
void operator "" _dump(const     char* lit, size_t)
{
    printf("operator \"\" _dump(const     char*, size_t): ===>%s<===\n",   lit);
};

void operator "" _dump(const  wchar_t* lit, size_t)
{
    printf("operator \"\" _dump(const  wchar_t*, size_t): ===>%ls<===\n",  lit);
};

void operator "" _dump(const char16_t* lit, size_t)
{
    printf("operator \"\" _dump(const char16_t*, size_t):\n"                  );
};

void operator "" _dump(const char32_t* lit, size_t)
{
    printf("operator \"\" _dump(const char32_t*, size_t):\n"                  );
};

// Raw literal operator
void operator "" _dump_raw(const char* lit)
{
    printf("operator \"\" _dump_raw(const char*)        : ===>%s<===\n",   lit);
};

template<char...> void operator "" _dump_template();       // Literal operator template

int main(int argc, const char* argv[])
{
    42_dump;
    3.1415926_dump;
    3.14e+25_dump;
     'A'_dump;
    L'B'_dump;
    u'C'_dump;
    U'D'_dump;
      "Hello World"_dump;
     L"Wide String"_dump;
    u8"UTF-8 String"_dump;
     u"UTF-16 String"_dump;
     U"UTF-32 String"_dump;
    42_dump_raw;
    3.1415926_dump_raw;
    3.14e+25_dump_raw;

    // There is no raw literal operator or literal operator template support on these types:
    //  'A'_dump_raw;
    // L'B'_dump_raw;
    // u'C'_dump_raw;
    // U'D'_dump_raw;
    //   "Hello World"_dump_raw;
    //  L"Wide String"_dump_raw;
    // u8"UTF-8 String"_dump_raw;
    //  u"UTF-16 String"_dump_raw;
    //  U"UTF-32 String"_dump_raw;
}
```

```Output
operator "" _dump(unsigned long long int) : ===>42<===
operator "" _dump(long double)            : ===>3.141593<===
operator "" _dump(long double)            : ===>31399999999999998506827776.000000<===
operator "" _dump(char)                   : ===>A<===
operator "" _dump(wchar_t)                : ===>66<===
operator "" _dump(char16_t)               : ===>67<===
operator "" _dump(char32_t)               : ===>68<===
operator "" _dump(const     char*, size_t): ===>Hello World<===
operator "" _dump(const  wchar_t*, size_t): ===>Wide String<===
operator "" _dump(const     char*, size_t): ===>UTF-8 String<===
operator "" _dump(const char16_t*, size_t):
operator "" _dump(const char32_t*, size_t):
operator "" _dump_raw(const char*)        : ===>42<===
operator "" _dump_raw(const char*)        : ===>3.1415926<===
operator "" _dump_raw(const char*)        : ===>3.14e+25<===
```
