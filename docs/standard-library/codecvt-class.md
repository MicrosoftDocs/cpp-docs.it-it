---
title: Classe codecvt
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::codecvt
- xlocale/std::codecvt::extern_type
- xlocale/std::codecvt::intern_type
- xlocale/std::codecvt::state_type
- xlocale/std::codecvt::always_noconv
- xlocale/std::codecvt::do_always_noconv
- xlocale/std::codecvt::do_encoding
- xlocale/std::codecvt::do_in
- xlocale/std::codecvt::do_length
- xlocale/std::codecvt::do_max_length
- xlocale/std::codecvt::do_out
- xlocale/std::codecvt::do_unshift
- xlocale/std::codecvt::encoding
- xlocale/std::codecvt::in
- xlocale/std::codecvt::length
- xlocale/std::codecvt::max_length
- xlocale/std::codecvt::out
- xlocale/std::codecvt::unshift
helpviewer_keywords:
- std::codecvt [C++]
- std::codecvt [C++], extern_type
- std::codecvt [C++], intern_type
- std::codecvt [C++], state_type
- std::codecvt [C++], always_noconv
- std::codecvt [C++], do_always_noconv
- std::codecvt [C++], do_encoding
- std::codecvt [C++], do_in
- std::codecvt [C++], do_length
- std::codecvt [C++], do_max_length
- std::codecvt [C++], do_out
- std::codecvt [C++], do_unshift
- std::codecvt [C++], encoding
- std::codecvt [C++], in
- std::codecvt [C++], length
- std::codecvt [C++], max_length
- std::codecvt [C++], out
- std::codecvt [C++], unshift
ms.assetid: 37d3efa1-2b7f-42b6-b04f-7a972c8c2c86
ms.openlocfilehash: 3dba971b112c23325e0529e53746cbee827df5e9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371956"
---
# <a name="codecvt-class"></a>Classe codecvt

Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali. Tale classe è in grado di controllare le conversioni tra una sequenza di valori utilizzata per codificare i caratteri all'interno del programma e una sequenza di valori utilizzata per codificare i caratteri all'esterno del programma.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Byte, class StateType>
class codecvt : public locale::facet, codecvt_base;
```

### <a name="parameters"></a>Parametri

*Chartype*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*Byte*\
Tipo utilizzato per codificare i caratteri all'esterno di un programma.

*Tipo di stato*\
Tipo che può essere utilizzato per rappresentare gli stati intermedi di una conversione tra tipi di rappresentazioni di caratteri interni ed esterni.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che può essere utilizzato come [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class), per controllare le conversioni tra una sequenza di valori di tipo *CharType* e una sequenza di valori di tipo *Byte*. La classe *StateType* caratterizza la trasformazione e un oggetto della classe *StateType* archivia tutte le informazioni sullo stato necessarie durante una conversione.

La codifica interna utilizza una rappresentazione con un numero fisso di byte per carattere, in genere tipo **char** o tipo **wchar_t**.

Come in qualsiasi facet delle impostazioni locali, l'oggetto statico `id` ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere al valore archiviato consente di archiviare un valore positivo univoco in `id`.

Le versioni dei modelli di [do_in](#do_in) e [do_out](#do_out) restituiscono sempre `codecvt_base::noconv`.

Nella libreria standard C++ vengono definite diverse specializzazioni esplicite:

```cpp
template<>
codecvt<wchar_t, char, mbstate_t>
```

converte tra **wchar_t** e **sequenze char.**

```cpp
template<>
codecvt<char16_t, char, mbstate_t>
```

converte `char16_t` tra sequenze codificate come UTF-16 e **char** sequenze codificate come UTF-8.

```cpp
template<>
codecvt<char32_t, char, mbstate_t>
```

converte `char32_t` tra sequenze codificate come UTF-32 (UCS-4) e **char** sequenze codificate come UTF-8.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[codecvt](#codecvt)|Costruttore per gli oggetti della classe `codecvt` utilizzato come facet delle impostazioni locali per gestire le conversioni.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[extern_type](#extern_type)|Tipo di carattere utilizzato per le rappresentazioni esterne.|
|[intern_type](#intern_type)|Tipo di carattere utilizzato per le rappresentazioni interne.|
|[state_type](#state_type)|Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[always_noconv](#always_noconv)|Verifica che non sia necessario eseguire alcuna conversione.|
|[do_always_noconv](#do_always_noconv)|Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.|
|[do_encoding](#do_encoding)|Funzione virtuale che verifica se `Byte` la codifica del flusso dipende `Byte` dallo stato, `CharType` se il rapporto tra i valori utilizzati e i valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[do_in](#do_in)|Funzione virtuale chiamata per convertire `Byte` una sequenza di `CharType` valori interni in una sequenza di valori esterni.|
|[do_length](#do_length)|Una funzione virtuale che `Byte` determina quanti valori `Byte` da una determinata sequenza `CharType` di valori esterni `Byte` non producono più di un determinato numero di valori interni e restituisce tale numero di valori.|
|[do_max_length](#do_max_length)|Funzione virtuale che restituisce il numero massimo di byte esterni necessari per produrre un `CharType` interno.|
|[do_out](#do_out)|Funzione virtuale chiamata per convertire `CharType` una sequenza di valori interni in una sequenza di byte esterni.|
|[do_unshift](#do_unshift)|Funzione virtuale chiamata per `Byte` fornire i valori necessari in una conversione dipendente `Byte` dallo stato per completare l'ultimo carattere in una sequenza di valori.|
|[Codifica](#encoding)|Verifica se la `Byte` codifica del flusso dipende dallo `Byte` stato, se `CharType` il rapporto tra i valori utilizzati e i valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[in](#in)|Converte una rappresentazione esterna `Byte` di una sequenza di `CharType` valori in una rappresentazione interna di una sequenza di valori.|
|[length](#length)|Determina quanti `Byte` valori di una `Byte` determinata sequenza di valori `CharType` esterni producono non `Byte` più di un determinato numero di valori interni e restituiscono tale numero di valori.|
|[max_length](#max_length)|Restituisce il numero `Byte` massimo di valori `CharType`esterni necessari per produrre un valore interno.|
|[Cambio](#out)|Converte una sequenza di valori `CharType` `Byte` interni in una sequenza di valori esterni.|
|[unshift](#unshift)|Fornisce i `Byte` valori esterni necessari in una conversione dipendente dallo `Byte` stato per completare l'ultimo carattere nella sequenza di valori.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="codecvtalways_noconv"></a><a name="always_noconv"></a>codecvt::always_noconv

Verifica se non è necessario eseguire conversioni.

```cpp
bool always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore booleano **che** è true se non è necessario eseguire alcuna conversione; **false** se è necessario almeno uno.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_always_noconv](#do_always_noconv).

### <a name="example"></a>Esempio

```cpp
// codecvt_always_noconv.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = use_facet<codecvt<char, char, mbstate_t> >
      ( loc ).always_noconv( );

   if ( result1 )
      cout << "No conversion is needed." << endl;
   else
      cout << "At least one conversion is required." << endl;

   bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t> >
      ( loc ).always_noconv( );

   if ( result2 )
      cout << "No conversion is needed." << endl;
   else
      cout << "At least one conversion is required." << endl;
}
```

```Output
No conversion is needed.
At least one conversion is required.
```

## <a name="codecvtcodecvt"></a><a name="codecvt"></a>codecvt::codecvt

Costruttore per gli oggetti della classe codecvt usato come facet delle impostazioni locali per gestire le conversioni.

```cpp
explicit codecvt(size_t refs = 0);
```

### <a name="parameters"></a>Parametri

*Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *refs* e il loro significato sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- 2: Questi valori non sono definiti.

Il costruttore `locale::facet` inizializza il relativo oggetto di base con [locale::facet](../standard-library/locale-class.md#facet_class)`(refs)`.

## <a name="codecvtdo_always_noconv"></a><a name="do_always_noconv"></a>codecvt::do_always_noconv

Funzione virtuale chiamata per verificare se non è necessario eseguire alcuna conversione.

```cpp
virtual bool do_always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro virtuale protetta restituisce **true** `noconv`solo se ogni chiamata a [do_in](#do_in) o [do_out](#do_out) restituisce .

La versione modello restituisce sempre **true**.

### <a name="example"></a>Esempio

Vedere l'esempio per [always_noconv](#always_noconv), che chiama `do_always_noconv`.

## <a name="codecvtdo_encoding"></a><a name="do_encoding"></a>codecvt::do_codifica

Funzione virtuale che verifica se `Byte` la codifica del flusso dipende `Byte` dallo stato, `CharType` se il rapporto tra i valori utilizzati e i valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
virtual int do_encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro protetto virtuale restituisce:

- -1, se la codifica delle `extern_type` sequenze di tipo è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *N*, se la codifica coinvolge solo sequenze di lunghezza *N*

### <a name="example"></a>Esempio

Vedere l'esempio di [encoding](#encoding), che chiama `do_encoding`.

## <a name="codecvtdo_in"></a><a name="do_in"></a>codecvt::do_in

Funzione virtuale chiamata per convertire `Byte` una sequenza di `CharType` valori esterni in una sequenza di valori interni.

```cpp
virtual result do_in(
    StateType& state,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza da convertire.

*ultimo1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*primo 2*\
Puntatore all'inizio della sequenza convertita.

*ultimi2*\
Puntatore alla fine della sequenza convertita.

*successivo2*\
Puntatore `CharType` all'oggetto che `CharType`segue l'ultimo carattere convertito, al primo carattere inalterato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error`se la sequenza di origine non è formata correttamente.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`se la conversione ha esito positivo.

- `codecvt_base::partial`se l'origine è insufficiente o se la destinazione non è sufficientemente grande, affinché la conversione abbia esito positivo.

### <a name="remarks"></a>Osservazioni

*stato* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio di [in](#in), che chiama `do_in`.

## <a name="codecvtdo_length"></a><a name="do_length"></a>codecvt::do_length

Una funzione virtuale che `Byte` determina quanti valori `Byte` da una determinata sequenza `CharType` di valori esterni `Byte` non producono più di un determinato numero di valori interni e restituisce tale numero di valori.

```cpp
virtual int do_length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza esterna.

*ultimo1*\
Puntatore alla fine della sequenza esterna.

*len2*\
Numero massimo `Byte` di valori che possono essere restituiti dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di `first1` *len2*, definito dalla sequenza di origine esterna in [ , `last1`).

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale `do_in( state, first1, last1, next1, buf, buf + len2, next2)` protetta richiede effettivamente *lo stato* (una copia dello stato), alcuni `buf`buffer e puntatori `next1` e `next2`.

Restituisce quindi `next2` - `buf`. Pertanto, conta il numero massimo di conversioni, non maggiore di `first1` *len2*, definito dalla sequenza di origine in [ , `last1`).

La versione del modello restituisce sempre il minore di *last1* - *first1* e *len2*.

### <a name="example"></a>Esempio

Vedere l'esempio per `do_length` [length](#length), che chiama .

## <a name="codecvtdo_max_length"></a><a name="do_max_length"></a>codecvt::do_max_length

Funzione virtuale che restituisce il `Byte` numero massimo di `CharType`valori esterni necessari per produrre un oggetto interno .

```cpp
virtual int do_max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero massimo `Byte` di valori necessari `CharType`per produrne uno .

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta restituisce il valore più grande consentito che può essere restituito da [do_length](#do_length) `( first1, last1, 1)` per i valori validi arbitrari di *first1* e *last1*.

### <a name="example"></a>Esempio

Vedere l'esempio di [max_length](#max_length), che chiama `do_max_length`.

## <a name="codecvtdo_out"></a><a name="do_out"></a>codecvt::do_out

Funzione virtuale chiamata per convertire `CharType` una sequenza di `Byte` valori interni in una sequenza di valori esterni.

```cpp
virtual result do_out(
    StateType& state,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza da convertire.

*ultimo1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Riferimento a un puntatore `CharType`al primo `CharType` puntatore non convertito, dopo l'ultima conversione.

*primo 2*\
Puntatore all'inizio della sequenza convertita.

*ultimi2*\
Puntatore alla fine della sequenza convertita.

*successivo2*\
Riferimento a un puntatore `Byte`al primo `Byte` puntatore non convertito, dopo l'ultima conversione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`se la sequenza di origine non è formata correttamente.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`se la conversione ha esito positivo.

- `codecvt_base::partial`se l'origine è insufficiente o se la destinazione non è sufficientemente grande per la conversione abbia esito positivo.

### <a name="remarks"></a>Osservazioni

*stato* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio di [out](#out), che chiama `do_out`.

## <a name="codecvtdo_unshift"></a><a name="do_unshift"></a>codecvt::do_unshift

Funzione virtuale chiamata per `Byte` fornire i valori necessari in una conversione dipendente `Byte` dallo stato per completare l'ultimo carattere in una sequenza di valori.

```cpp
virtual result do_unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 2*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*ultimi2*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*successivo2*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`se *lo stato* rappresenta uno stato non valido

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione

- `codecvt_base::ok`se la conversione ha esito positivo

- `codecvt_base::partial`se la destinazione non è sufficientemente grande per la conversione abbia esito positivo

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta `CharType`tenta di convertire l'elemento di `first2`origine `last2`(0) in `Byte`una sequenza di destinazione archiviata all'interno di [ , ), ad eccezione dell'elemento di terminazione (0). Memorizza sempre in *next2* un puntatore al primo elemento inalterato nella sequenza di destinazione.

_ *State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la `CharType`conversione dell'elemento di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

### <a name="example"></a>Esempio

Vedere l'esempio di [unshift](#unshift), che chiama `do_unshift`.

## <a name="codecvtencoding"></a><a name="encoding"></a>codecvt::codifica

Verifica se la `Byte` codifica del flusso dipende dallo `Byte` stato, se `CharType` il rapporto tra i valori utilizzati e i valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
int encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, tale `Byte` valore è `CharType` il numero costante di caratteri necessari per produrre il carattere.

La funzione membro protetto virtuale restituisce:

- -1, se la codifica delle `extern_type` sequenze di tipo è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *N* se la codifica implica solo sequenze di lunghezza *N.*

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_encoding](#do_encoding).

### <a name="example"></a>Esempio

```cpp
// codecvt_encoding.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   int result1 = use_facet<codecvt<char, char, mbstate_t> > ( loc ).encoding ( );
   cout << result1 << endl;
   result1 = use_facet<codecvt<wchar_t, char, mbstate_t> > ( loc ).encoding( );
   cout << result1 << endl;
   result1 = use_facet<codecvt<char, wchar_t, mbstate_t> > ( loc ).encoding( );
   cout << result1 << endl;
}
```

```Output
1
1
1
```

## <a name="codecvtextern_type"></a><a name="extern_type"></a>codecvt::extern_type

Tipo di carattere utilizzato per le rappresentazioni esterne.

```cpp
typedef Byte extern_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Byte`.

## <a name="codecvtin"></a><a name="in"></a>codecvt::in

Converte una rappresentazione esterna `Byte` di una sequenza di `CharType` valori in una rappresentazione interna di una sequenza di valori.

```cpp
result in(
    StateType& state,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza da convertire.

*ultimo1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*primo 2*\
Puntatore all'inizio della sequenza convertita.

*ultimi2*\
Puntatore alla fine della sequenza convertita.

*successivo2*\
Puntatore `CharType` all'oggetto che `Chartype` viene dopo l'ultimo convertito al primo carattere inalterato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error`se la sequenza di origine non è formata correttamente.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`se la conversione ha esito positivo.

- `codecvt_base::partial`se l'origine è insufficiente o se la destinazione non è sufficientemente grande per la conversione abbia esito positivo.

### <a name="remarks"></a>Osservazioni

*stato* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. Dopo una conversione parziale, *lo stato* deve essere impostato in modo da consentire la ripresa della conversione all'arrivo di nuovi caratteri.

La funzione membro restituisce [do_in](#do_in)`( state, first1,  last1,  next1, first2, last2,  next2)`.

### <a name="example"></a>Esempio

```cpp
// codecvt_in.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;
#define LEN 90
int main( )
{
   char* pszExt = "This is the string to be converted!";
   wchar_t pwszInt [LEN+1];
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));
   const char* pszNext;
   wchar_t* pwszNext;
   mbstate_t state = {0};
   locale loc("C");//English_Britain");//German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >
     ( loc ).in( state,
          pszExt, &pszExt[strlen(pszExt)], pszNext,
          pwszInt, &pwszInt[strlen(pszExt)], pwszNext );
   pwszInt[strlen(pszExt)] = 0;
   wcout << ( (res!=codecvt_base::error)  L"It worked! " : L"It didn't work! " )
   << L"The converted string is:\n ["
   << &pwszInt[0]
   << L"]" << endl;
   exit(-1);
}
```

```Output
It worked! The converted string is:
[This is the string to be converted!]
```

## <a name="codecvtintern_type"></a><a name="intern_type"></a>codecvt::intern_type

Tipo di carattere utilizzato per le rappresentazioni interne.

```cpp
typedef CharType intern_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="codecvtlength"></a><a name="length"></a>codecvt::lunghezza

Determina quanti `Byte` valori di una `Byte` determinata sequenza di valori `CharType` esterni producono non `Byte` più di un determinato numero di valori interni e restituiscono tale numero di valori.

```cpp
int length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza esterna.

*ultimo1*\
Puntatore alla fine della sequenza esterna.

*len2*\
Il numero massimo di byte che può essere restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di `first1` *len2*, definito dalla sequenza di origine esterna in [ , `last1`).

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_length.](#do_length)`( state, first1, last1, len2)`

### <a name="example"></a>Esempio

```cpp
// codecvt_length.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;
#define LEN 90
int main( )
{
   char* pszExt = "This is the string whose length is to be measured!";
   mbstate_t state = {0};
   locale loc("C");//English_Britain");//German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >
     ( loc ).length( state,
          pszExt, &pszExt[strlen(pszExt)], LEN );
   cout << "The length of the string is: ";
   wcout << res;
   cout << "." << endl;
   exit(-1);
}
```

```Output
The length of the string is: 50.
```

## <a name="codecvtmax_length"></a><a name="max_length"></a>codecvt::max_length

Restituisce il numero `Byte` massimo di valori `CharType`esterni necessari per produrre un valore interno.

```cpp
int max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero massimo `Byte` di valori necessari `CharType`per produrne uno .

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_max_length](#do_max_length).

### <a name="example"></a>Esempio

```cpp
// codecvt_max_length.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc( "C");//English_Britain" );//German_Germany
   int res = use_facet<codecvt<char, char, mbstate_t> >
     ( loc ).max_length( );
   wcout << res << endl;
}
```

```Output
1
```

## <a name="codecvtout"></a><a name="out"></a>codecvt::out

Converte una sequenza di valori `CharType` `Byte` interni in una sequenza di valori esterni.

```cpp
result out(
    StateType& state,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 1*\
Puntatore all'inizio della sequenza da convertire.

*ultimo1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Riferimento a un puntatore `CharType` al primo `CharType` non convertito dopo l'ultima conversione.

*primo 2*\
Puntatore all'inizio della sequenza convertita.

*ultimi2*\
Puntatore alla fine della sequenza convertita.

*successivo2*\
Riferimento a un puntatore `Byte` al primo `Byte`non convertito dopo l'ultimo convertito.

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce [do_out](#do_out)`( state, first1, last1, next1, first2, last2, next2)`.

### <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [codecvt::do_out](#do_out).

### <a name="example"></a>Esempio

```cpp
// codecvt_out.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
#include <wchar.h>
using namespace std;
#define LEN 90
int main( )
{
   char pszExt[LEN+1];
   wchar_t *pwszInt = L"This is the wchar_t string to be converted.";
   memset( &pszExt[0], 0, ( sizeof( char ) )*( LEN+1 ) );
   char* pszNext;
   const wchar_t* pwszNext;
   mbstate_t state;
   locale loc("C");//English_Britain");//German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >
      ( loc ).out( state,
      pwszInt, &pwszInt[wcslen( pwszInt )], pwszNext ,
      pszExt, &pszExt[wcslen( pwszInt )], pszNext );
   pszExt[wcslen( pwszInt )] = 0;
   cout << ( ( res!=codecvt_base::error )  "It worked: " : "It didn't work: " )
   << "The converted string is:\n ["
   << &pszExt[0]
   << "]" << endl;
}
```

```Output
It worked: The converted string is:
[This is the wchar_t string to be converted.]
```

## <a name="codecvtstate_type"></a><a name="state_type"></a>codecvt::state_type

Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.

```cpp
typedef StateType state_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `StateType`.

## <a name="codecvtunshift"></a><a name="unshift"></a>codecvt::unshift

Fornisce `Byte` i valori necessari in una conversione dipendente dallo `Byte` stato per completare l'ultimo carattere in una sequenza di valori.

```cpp
result unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*Stato*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*primo 2*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*ultimi2*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*successivo2*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`se state rappresenta uno stato non valido.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`se la conversione ha esito positivo.

- `codecvt_base::partial`se la destinazione non è sufficientemente grande per la conversione abbia esito positivo.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta `CharType`tenta di convertire l'elemento di `first2`origine `last2`(0) in `Byte`una sequenza di destinazione archiviata all'interno di [ , ), ad eccezione dell'elemento di terminazione (0). Memorizza sempre in *next2* un puntatore al primo elemento inalterato nella sequenza di destinazione.

*stato* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la `CharType`conversione dell'elemento di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

La funzione membro restituisce [do_unshift](#do_unshift)`( state, first2, last2, next2 )`.

## <a name="see-also"></a>Vedere anche

[\<>delle impostazioni locali](../standard-library/locale.md)\
[Tabelle codici](../c-runtime-library/code-pages.md)\
[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)
