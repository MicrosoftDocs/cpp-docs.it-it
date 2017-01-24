---
title: "Valori letterali definiti dall&#39;utente (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: ff4a5bec-f795-4705-a2c0-53788fd57609
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Valori letterali definiti dall&#39;utente (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono sei categorie principali di valori letterali: Integer, carattere, a virgola mobile, stringa, booleano e puntatore.  A partire da C\+\+ 11, è possibile definire valori letterali personalizzati basati su queste categorie per fornire collegamenti sintattici per idiomi comuni e aumentare l'indipendenza dai tipi.  Ad esempio, si supponga che sia disponibile una classe Distance.  È possibile definire un valore letterale per i chilometri e uno per le miglia e incoraggiare l'utente a esprimere esplicitamente le unità di misura, scrivendo semplicemente: auto d \= 42.0\_km o auto d \= 42.0\_mi.  I valori letterali definiti dall'utente non presentano vantaggi o svantaggi a livello di prestazioni. Vengono usati solo per comodità o per deduzioni dei tipi in fase di compilazione.  La libreria standard include valori letterali definiti dall'utente per std:string, per std::complex e per unità in operazioni di tempo e durata nell'intestazione \<chrono\>:  
  
```  
Distance d = 36.0_mi + 42.0_km;         // Custom UDL (see below)  
    std::string str = "hello"s + "World"s;  // Standard Library <string> UDL  
    complex<double> num =   
        (2.0 + 3.01i) * (5.0 + 4.3i);       // Standard Library <complex> UDL  
    auto duration = 15ms + 42h;             // Standard Library <chrono> UDLs  
```  
  
## Firme di operatori di valori letterali definiti dall'utente  
 Per implementare un valore letterale definito dall'utente, definire un `operator""` nell'ambito dello spazio dei nomi con uno dei formati seguenti:  
  
```  
ReturnType operator "" _a(unsigned long long int);   // Literal operator for user-defined INTEGRAL literal  
ReturnType operator "" _b(long double);              // Literal operator for user-defined FLOATING literal  
ReturnType operator "" _c(char);                     // Literal operator for user-defined CHARACTER literal  
ReturnType operator "" _d(wchar_t);                  // Literal operator for user-defined CHARACTER literal  
ReturnType operator "" _e(char16_t);                 // Literal operator for user-defined CHARACTER literal  
ReturnType operator "" _f(char32_t);                 // Literal operator for user-defined CHARACTER literal  
ReturnType operator "" _g(const     char*, size_t);  // Literal operator for user-defined STRING literal  
ReturnType operator "" _h(const  wchar_t*, size_t);  // Literal operator for user-defined STRING literal  
ReturnType operator "" _i(const char16_t*, size_t);  // Literal operator for user-defined STRING literal  
ReturnType operator "" _g(const char32_t*, size_t);  // Literal operator for user-defined STRING literal  
ReturnType operator "" _r(const char*);              // Raw literal operator  
template<char...> ReturnType operator "" _t();       // Literal operator template  
```  
  
 I nomi di operatore nell'esempio precedente sono segnaposti per il nome specificato dall'utente. Il carattere di sottolineatura iniziale è tuttavia obbligatorio.  La definizione di valori letterali senza carattere di sottolineatura è consentita solo nella libreria standard. Il tipo restituito permette di personalizzare la conversione o altre operazioni eseguite dal valore letterale.  È anche possibile eseguire questi operatori come `constexpr`.  
  
## Valori letterali cooked  
 Qualsiasi valore letterale nel codice sorgente, definito o non definito dall'utente, è essenzialmente una sequenza di caratteri alfanumerici, ad esempio `101`, `54.7`, `"hello"` oppure `true`.  Il compilatore interpreta la sequenza come Integer, float, stringa const char\* e così via.  Un valore letterale definito dall'utente che accetta come input qualsiasi tipo assegnato dal compilatore al valore letterale viene informalmente definito *valore letterale cooked*.  Tutti gli operatori indicati, ad eccezione di `_r` e `_t`, sono valori letterali cooked.  Ad esempio, un valore letterale `42.0_km` verrà associato a un operatore denominato \_km con una firma analoga a \_b e il valore letterale `42_km` verrà associato a un operatore con firma analoga ad \_a.  
  
 L'esempio seguente illustra il modo in cui i valori letterali definiti dall'utente possono incoraggiare i chiamanti a esprimere in modo esplicito il rispettivo input.  Per costruire un valore `Distance`, l'utente deve specificare in modo esplicito chilometri o miglia usando il valore letterale definito dall'utente appropriato.  È ovviamente possibile ottenere lo stesso risultato in altri modi, ma i valori letterali definiti dall'utente sono meno dettagliati rispetto alle alternative.  
  
```  
struct Distance  
{  
private:  
    explicit Distance(long double val) : kilometers(val)  
    {}  
  
    friend Distance operator"" _km(long double  val);  
    friend Distance operator"" _mi(long double val);  
    long double kilometers{ 0 };  
public:  
    long double get_kilometers() { return kilometers; }  
    Distance operator+(Distance& other)  
    {  
        return Distance(get_kilometers() + other.get_kilometers());  
    }  
};  
  
Distance operator"" _km(long double  val)  
{  
    return Distance(val);  
}  
  
Distance operator"" _mi(long double val)  
{  
    return Distance(val * 1.6);  
}  
int main(int argc, char* argv[])  
{  
    // Must have a decimal point to bind to the operator we defined!  
    Distance d{ 402.0_km }; // construct using kilometers  
    cout << "Kilometers in d: " << d.get_kilometers() << endl; // 402  
  
    Distance d2{ 402.0_mi }; // construct using miles  
    cout << "Kilometers in d2: " << d2.get_kilometers() << endl;  //643.2  
  
    // add distances constructed with different units  
    Distance d3 = 36.0_mi + 42.0_km;  
    cout << "d3 value = " << d3.get_kilometers() << endl; // 99.6  
  
   // Distance d4(90.0); // error constructor not accessible  
  
    string s;  
    getline(cin, s);  
    return 0;  
}  
```  
  
 Si noti che il numero del valore letterale deve usare una cifra decimale. In caso contrario, il numero verrebbe interpretato come valore Integer e il tipo non sarebbe compatibile con l'operatore.  Si noti anche che per l'input a virgola mobile il tipo deve essere `long double` e per i tipi integrali deve essere `long long`.  
  
## Valori letterali non elaborati  
 In un valore letterale definito dall'utente non elaborato l'operatore definito accetta il valore letterale come sequenza di valori char e l'utente dovrà interpretare tale sequenza come numero o stringa o altro tipo di valore.  Nell'elenco di operatori mostrato in precedenza in questa pagina `_r` e `_t` possono essere usati per definire valori letterali non elaborati:  
  
```  
ReturnType operator "" _r(const char*);              // Raw literal operator  
template<char...> ReturnType operator "" _t();       // Literal operator template  
```  
  
 È possibile usare valori letterali non elaborati per fornire un'interpretazione personalizzata di una sequenza di input diversa rispetto a quella eseguita dal compilatore.  Ad esempio, è possibile definire un valore letterale che converte la sequenza `4.75987` in un tipo Decimal personalizzato invece di un tipo a virgola mobile IEEE 754.  Analogamente ai valori letterali cooked, i valori letterali non elaborati possono essere usati anche per eseguire la convalida delle sequenze di input in fase di compilazione.  
  
### Esempio  
  
### Limitazioni dei valori letterali non elaborati  
 L'operatore di valore letterale non elaborato e il modello di operatore di valore letterale funzionano solo per valori letterali definiti dall'utente di tipo integrale e a virgola mobile, come illustrato dall'esempio seguente:  
  
```  
#include <cstddef>  
#include <cstdio>  
  
void operator "" _dump(unsigned long long int lit)  { printf("operator \"\" _dump(unsigned long long int) : ===>%llu<===\n", lit); };  // Literal operator for user-defined INTEGRAL literal  
void operator "" _dump(long double lit)             { printf("operator \"\" _dump(long double)            : ===>%Lf<===\n",  lit); };  // Literal operator for user-defined FLOATING literal  
void operator "" _dump(char lit)                    { printf("operator \"\" _dump(char)                   : ===>%c<===\n",   lit); };  // Literal operator for user-defined CHARACTER literal  
void operator "" _dump(wchar_t lit)                 { printf("operator \"\" _dump(wchar_t)                : ===>%d<===\n",   lit); };  // Literal operator for user-defined CHARACTER literal  
void operator "" _dump(char16_t lit)                { printf("operator \"\" _dump(char16_t)               : ===>%d<===\n",   lit); };  // Literal operator for user-defined CHARACTER literal  
void operator "" _dump(char32_t lit)                { printf("operator \"\" _dump(char32_t)               : ===>%d<===\n",   lit); };  // Literal operator for user-defined CHARACTER literal  
void operator "" _dump(const     char* lit, size_t) { printf("operator \"\" _dump(const     char*, size_t): ===>%s<===\n",   lit); };  // Literal operator for user-defined STRING literal  
void operator "" _dump(const  wchar_t* lit, size_t) { printf("operator \"\" _dump(const  wchar_t*, size_t): ===>%ls<===\n",  lit); };  // Literal operator for user-defined STRING literal  
void operator "" _dump(const char16_t* lit, size_t) { printf("operator \"\" _dump(const char16_t*, size_t):\n"                  ); };  // Literal operator for user-defined STRING literal  
void operator "" _dump(const char32_t* lit, size_t) { printf("operator \"\" _dump(const char32_t*, size_t):\n"                  ); };  // Literal operator for user-defined STRING literal  
void operator "" _dump_raw(const char* lit)         { printf("operator \"\" _dump_raw(const char*)        : ===>%s<===\n",   lit); };  // Raw literal operator  
  
template<char...> void operator "" _dump_template();       // Literal operator template  
  
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
    // 'A'_dump_raw;               // There is no raw literal operator or literal operator template support on this type  
    //L'B'_dump_raw;              // There is no raw literal operator or literal operator template support on this type  
    //u'C'_dump_raw;              // There is no raw literal operator or literal operator template support on this type  
    //U'D'_dump_raw;              // There is no raw literal operator or literal operator template support on this type  
    //  "Hello World"_dump_raw;   // There is no raw literal operator or literal operator template support on this type  
    // L"Wide String"_dump_raw;   // There is no raw literal operator or literal operator template support on this type  
    //u8"UTF-8 String"_dump_raw;   // There is no raw literal operator or literal operator template support on this type  
    // u"UTF-16 String"_dump_raw;  // There is no raw literal operator or literal operator template support on this type  
    // U"UTF-32 String"_dump_raw;  // There is no raw literal operator or literal operator template support on this type  
}  
/*****  
Output:  
operator "" _dump(unsigned long long int) : ===>42<===  
operator "" _dump(long double)            : ===>3.141593<===  
operator "" _dump(long double)            : ===>31399999999999998506827776.000000<===  
operator "" _dump(char)                   : ===>A<===  
operator "" _dump(wchar_t)                : ===>66<===  
operator "" _dump(char16_t)               : ===>67<===  
operator "" _dump(char32_t)               : ===>68<===  
operator "" _dump(const     char*, size_t): ===>Hello World<===  
operator "" _dump(const  wchar_t*, size_t): ===>Wide String<===  
operator "" _dump(const     char*, size_t): ===>UTF-8 String<===  
operator "" _dump(const char16_t*, size_t):  
operator "" _dump(const char32_t*, size_t):  
operator "" _dump_raw(const char*)        : ===>42<===  
operator "" _dump_raw(const char*)        : ===>3.1415926<===  
operator "" _dump_raw(const char*)        : ===>3.14e+25<===   
*****/  
  
```