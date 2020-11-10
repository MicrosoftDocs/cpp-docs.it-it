---
title: Classe `codecvt`
description: descrive l'API di Microsoft C Runtime `codecvt` Class
ms.date: 11/09/2020
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
ms.openlocfilehash: 8d2970297cca199c70c101dca93f453c512317c4
ms.sourcegitcommit: b38485bb3a9d479e0c5d64ffc3d841fa2c2b366f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2020
ms.locfileid: "94441281"
---
# <a name="codecvt-class"></a>Classe `codecvt`

Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali. Consente di controllare le conversioni tra una sequenza di valori utilizzata per codificare i caratteri all'interno del programma e una sequenza di valori utilizzati per codificare i caratteri all'esterno del programma.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Byte, class StateType>
class codecvt : public locale::facet, codecvt_base;
```

### <a name="parameters"></a>Parametri

*`CharType`*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*`Byte`*\
Tipo utilizzato per codificare i caratteri all'esterno di un programma.

*`StateType`*\
Tipo che può essere utilizzato per rappresentare gli stati intermedi di una conversione tra tipi di rappresentazioni di caratteri interni ed esterni.

## <a name="remarks"></a>Commenti

Il modello di classe descrive un oggetto che può essere utilizzato come [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)per controllare le conversioni tra una sequenza di valori di tipo *`CharType`* e una sequenza di valori di tipo *`Byte`* . La classe *`StateType`* caratterizza la trasformazione e un oggetto della classe *`StateType`* archivia tutte le informazioni necessarie sullo stato durante una conversione.

La codifica interna usa una rappresentazione con un numero fisso di byte per carattere, in genere il tipo **`char`** o **`wchar_t`** .

Come in qualsiasi facet delle impostazioni locali, l'oggetto statico `id` ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere al valore archiviato consente di archiviare un valore positivo univoco in `id`.

Le versioni dei modelli di [`do_in`](#do_in) e [`do_out`](#do_out) restituiscono sempre `codecvt_base::noconv` .

Nella libreria standard C++ vengono definite diverse specializzazioni esplicite:

```cpp
template<>
codecvt<wchar_t, char, mbstate_t>
```

esegue la conversione tra **`wchar_t`** le **`char`** sequenze e.

```cpp
template<>
codecvt<char16_t, char, mbstate_t>
```

esegue la conversione tra **`char16_t`** le sequenze codificate come UTF-16 e le **`char`** sequenze codificate come UTF-8.

```cpp
template<>
codecvt<char32_t, char, mbstate_t>
```

esegue la conversione tra **`char32_t`** le sequenze codificate come UTF-32 (UCS-4) e le **`char`** sequenze codificate come UTF-8.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[`codecvt`](#codecvt)|Costruttore per gli oggetti della classe `codecvt` utilizzato come facet delle impostazioni locali per gestire le conversioni.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[`extern_type`](#extern_type)|Tipo di carattere utilizzato per le rappresentazioni esterne.|
|[`intern_type`](#intern_type)|Tipo di carattere utilizzato per le rappresentazioni interne.|
|[`state_type`](#state_type)|Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[`always_noconv`](#always_noconv)|Verifica che non sia necessario eseguire alcuna conversione.|
|[`do_always_noconv`](#do_always_noconv)|Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.|
|[`do_encoding`](#do_encoding)|Funzione virtuale che verifica se la codifica del `Byte` flusso è dipendente dallo stato, se il rapporto tra i `Byte` valori utilizzati e i `CharType` valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[`do_in`](#do_in)|Funzione virtuale chiamata per convertire una sequenza di valori interni `Byte` in una sequenza di valori esterni `CharType` .|
|[`do_length`](#do_length)|Funzione virtuale che determina il numero di `Byte` valori di una determinata sequenza di valori esterni che `Byte` producono non più di un determinato numero di `CharType` valori interni e restituisce tale numero di valori `Byte` .|
|[`do_max_length`](#do_max_length)|Funzione virtuale che restituisce il numero massimo di byte esterni necessari per produrre un `CharType` interno.|
|[`do_out`](#do_out)|Funzione virtuale chiamata per convertire una sequenza di valori interni `CharType` in una sequenza di byte esterni.|
|[`do_unshift`](#do_unshift)|Funzione virtuale chiamata per fornire i `Byte` valori necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte` valori.|
|[`encoding`](#encoding)|Verifica se la codifica del `Byte` flusso è dipendente dallo stato, se il rapporto tra i `Byte` valori usati e i `CharType` valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[`in`](#in)|Converte una rappresentazione esterna di una sequenza di `Byte` valori in una rappresentazione interna di una sequenza di `CharType` valori.|
|[`length`](#length)|Determina il numero di valori di `Byte` una sequenza specificata di `Byte` valori esterni che producono non più di un determinato numero di `CharType` valori interni e restituisce tale numero di valori `Byte` .|
|[`max_length`](#max_length)|Restituisce il numero massimo di `Byte` valori esterni necessari per produrre un interno `CharType` .|
|[`out`](#out)|Converte una sequenza di `CharType` valori interni in una sequenza di `Byte` valori esterni.|
|[`unshift`](#unshift)|Fornisce i `Byte` valori esterni necessari in una conversione dipendente dallo stato per completare l'ultimo carattere della sequenza di `Byte` valori.|

## <a name="requirements"></a>Requisiti

**Intestazione:**`<locale>`

**Spazio dei nomi:** `std`

## <a name="codecvtalways_noconv"></a><a name="always_noconv"></a> `codecvt::always_noconv`

Verifica se non è necessario eseguire alcuna conversione.

```cpp
bool always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore booleano che è **`true`** se non è necessario eseguire alcuna conversione; **`false`** se deve essere eseguito almeno uno.

### <a name="remarks"></a>Commenti

La funzione membro restituisce [`do_always_noconv`](#do_always_noconv) .

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
   bool result1 = use_facet<codecvt<char, char, mbstate_t>>
      ( loc ).always_noconv( );

   if ( result1 )
      cout << "No conversion is needed." << '\n';
   else
      cout << "At least one conversion is required." << '\n';

   bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t>>
      ( loc ).always_noconv( );

   if ( result2 )
      cout << "No conversion is needed." << '\n';
   else
      cout << "At least one conversion is required." << '\n';
}
```

```Output
No conversion is needed.
At least one conversion is required.
```

## <a name="codecvtcodecvt"></a><a name="codecvt"></a> `codecvt::codecvt`

Costruttore per gli oggetti della classe codecvt usato come facet delle impostazioni locali per gestire le conversioni.

```cpp
explicit codecvt(size_t refs = 0);
```

### <a name="parameters"></a>Parametri

*`refs`*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Commenti

I valori possibili per il *`refs`* parametro e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.


- 2: questi valori non sono definiti.

Il costruttore inizializza l' `locale::facet` oggetto di base con [`locale::facet`](../standard-library/locale-class.md#facet_class) `(refs)` .

## <a name="codecvtdo_always_noconv"></a><a name="do_always_noconv"></a> `codecvt::do_always_noconv`

Funzione virtuale chiamata per verificare se non è necessario eseguire alcuna conversione.

```cpp
virtual bool do_always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro virtuale protetta restituisce **`true`** solo se ogni chiamata a [`do_in`](#do_in) o [`do_out`](#do_out) restituisce `noconv` .

La versione del modello restituisce sempre **`true`** .

### <a name="example"></a>Esempio

Vedere l'esempio per [`always_noconv`](#always_noconv) , che chiama `do_always_noconv` .

## <a name="codecvtdo_encoding"></a><a name="do_encoding"></a> `codecvt::do_encoding`

Funzione virtuale che verifica se la codifica del `Byte` flusso è dipendente dallo stato, se il rapporto tra i `Byte` valori utilizzati e i `CharType` valori generati è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
virtual int do_encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro protetto virtuale restituisce:

- -1, se la codifica di sequenze di tipo `extern_type` è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *`N`* , se la codifica richiede solo sequenze di lunghezza *`N`*

### <a name="example"></a>Esempio

Vedere l'esempio di [encoding](#encoding), che chiama `do_encoding`.

## <a name="codecvtdo_in"></a><a name="do_in"></a> Codecvt: o_in:d

Funzione virtuale chiamata per convertire una sequenza di valori esterni `Byte` in una sequenza di valori interni `CharType` .

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

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza da convertire.

*`last1`*\
Puntatore alla fine della sequenza da convertire.

*`next1`*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*`first2`*\
Puntatore all'inizio della sequenza convertita.

*`last2`*\
Puntatore alla fine della sequenza convertita.

*`next2`*\
Puntatore all'oggetto `CharType` che segue l'ultimo oggetto convertito `CharType` , al primo carattere non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error` Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok` Se la conversione ha esito positivo.

- `codecvt_base::partial` Se l'origine è insufficiente o se la destinazione non è sufficientemente grande, perché la conversione abbia esito positivo.

### <a name="remarks"></a>Commenti

*`state`* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio per [`in`](#in) , che chiama `do_in` .

## <a name="codecvtdo_length"></a><a name="do_length"></a> `codecvt::do_length`

Funzione virtuale che determina il numero di `Byte` valori di una determinata sequenza di valori esterni che `Byte` producono non più di un determinato numero di `CharType` valori interni e restituisce tale numero di valori `Byte` .

```cpp
virtual int do_length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### <a name="parameters"></a>Parametri

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza esterna.

*`last1`*\
Puntatore alla fine della sequenza esterna.

*`len2`*\
Numero massimo di `Byte` valori che possono essere restituiti dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di *Len2* , definito dalla sequenza di origine esterna in [ `first1` , `last1` ).

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta chiama in modo efficace `do_in( state, first1, last1, next1, buf, buf + len2, next2)` *lo stato* (una copia dello stato), alcuni buffer e `buf` puntatori `next1` e `next2` .

Restituisce quindi `next2` - `buf`. Viene conteggiato il numero massimo di conversioni, non maggiore di *Len2* , definito dalla sequenza di origine in [ `first1` , `last1` ).

La versione del modello restituisce sempre il minore di *`last1`*  -  *`first1`* e *`len2`* .

### <a name="example"></a>Esempio

Vedere l'esempio per [`length`](#length) , che chiama `do_length` .

## <a name="codecvtdo_max_length"></a><a name="do_max_length"></a> `codecvt::do_max_length`

Funzione virtuale che restituisce il numero massimo di valori esterni `Byte` necessari per produrre un interno `CharType` .

```cpp
virtual int do_max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero massimo di `Byte` valori necessari per generarne uno `CharType` .

### <a name="remarks"></a>Commenti

La funzione membro virtuale protected restituisce il valore massimo consentito che può essere restituito da [`do_length`](#do_length) `( first1, last1, 1)` per i valori validi arbitrari di *`first1`* e *`last1`* .

### <a name="example"></a>Esempio

Vedere l'esempio per [`max_length`](#max_length) , che chiama `do_max_length` .

## <a name="codecvtdo_out"></a><a name="do_out"></a> `codecvt::do_out`

Funzione virtuale chiamata per convertire una sequenza di valori interni `CharType` in una sequenza di valori esterni `Byte` .

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

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza da convertire.

*`last1`*\
Puntatore alla fine della sequenza da convertire.

*`next1`*\
Riferimento a un puntatore alla prima non convertita `CharType` , dopo l'ultima `CharType` conversione.

*`first2`*\
Puntatore all'inizio della sequenza convertita.

*`last2`*\
Puntatore alla fine della sequenza convertita.

*`next2`*\
Riferimento a un puntatore alla prima non convertita `Byte` , dopo l'ultima `Byte` conversione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error` Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok` Se la conversione ha esito positivo.

- `codecvt_base::partial` Se l'origine è insufficiente o se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Commenti

*`state`* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio di [out](#out), che chiama `do_out`.

## <a name="codecvtdo_unshift"></a><a name="do_unshift"></a> `codecvt::do_unshift`

Funzione virtuale chiamata per fornire i `Byte` valori necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte` valori.

```cpp
virtual result do_unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first2`*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*`last2`*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*`next2`*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error` Se *lo* stato rappresenta uno stato non valido

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione

- `codecvt_base::ok` Se la conversione ha esito positivo

- `codecvt_base::partial` Se la destinazione non è sufficientemente grande perché la conversione abbia esito positivo

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta tenta di convertire l'elemento `CharType` di origine (0) in una sequenza di destinazione che archivia in [ `first2` , `last2` ), ad eccezione dell'elemento di terminazione `Byte` (0). Archivia sempre in *`next2`* un puntatore al primo elemento non modificato nella sequenza di destinazione.

*`State`* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la conversione dell'elemento `CharType` di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

### <a name="example"></a>Esempio

Vedere l'esempio per [`unshift`](#unshift) , che chiama `do_unshift` .

## <a name="codecvtencoding"></a><a name="encoding"></a> `codecvt::encoding`

Verifica se la codifica del `Byte` flusso è dipendente dallo stato, se il rapporto tra i `Byte` valori usati e i `CharType` valori prodotti è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
int encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, tale valore è il numero costante di `Byte` caratteri necessari per produrre il `CharType` carattere.

La funzione membro protetto virtuale restituisce:

- -1, se la codifica di sequenze di tipo `extern_type` è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *`N`* Se la codifica richiede solo sequenze di lunghezza *`N`* .

### <a name="remarks"></a>Commenti

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
   int result1 = use_facet<codecvt<char, char, mbstate_t>> ( loc ).encoding ( );
   cout << result1 << '\n';
   result1 = use_facet<codecvt<wchar_t, char, mbstate_t>> ( loc ).encoding( );
   cout << result1 << '\n';
   result1 = use_facet<codecvt<char, wchar_t, mbstate_t>> ( loc ).encoding( );
   cout << result1 << '\n';
}
```

```Output
1
1
1
```

## <a name="codecvtextern_type"></a><a name="extern_type"></a> `codecvt::extern_type`

Tipo di carattere utilizzato per le rappresentazioni esterne.

```cpp
typedef Byte extern_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `Byte`.

## <a name="codecvtin"></a><a name="in"></a> Codecvt:: in

Converte una rappresentazione esterna di una sequenza di `Byte` valori in una rappresentazione interna di una sequenza di `CharType` valori.

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

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza da convertire.

*`last1`*\
Puntatore alla fine della sequenza da convertire.

*`next1`*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*`first2`*\
Puntatore all'inizio della sequenza convertita.

*`last2`*\
Puntatore alla fine della sequenza convertita.

*`next2`*\
Puntatore all'oggetto `CharType` che segue l'ultimo oggetto convertito `Chartype` nel primo carattere non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error` Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok` Se la conversione ha esito positivo.

- `codecvt_base::partial` Se l'origine è insufficiente o se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Commenti

*`state`* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. Dopo una conversione parziale, *`state`* deve essere impostato in modo da consentire la riattivazione della conversione quando arrivano nuovi caratteri.

La funzione membro restituisce [`do_in`](#do_in) `( state, first1,  last1,  next1, first2, last2,  next2)` .

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
   const char* pszExt = "This is the string to be converted!";
   wchar_t pwszInt [LEN+1];
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));
   const char* pszNext;
   wchar_t* pwszNext;
   mbstate_t state = {0}; // zero-initialization represents the initial conversion state for mbstate_t
   locale loc("C");//English_Britain");//German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
     ( loc ).in( state,
          pszExt, &pszExt[strlen(pszExt)], pszNext,
          pwszInt, &pwszInt[strlen(pszExt)], pwszNext );
   pwszInt[strlen(pszExt)] = 0;
   wcout << ( res!=codecvt_base::error ?  L"It worked! " : L"It didn't work! " )
       << L"The converted string is:\n ["
       << &pwszInt[0]
       << L"]" << '\n';
   exit(-1);
}
```

```Output
It worked! The converted string is:
[This is the string to be converted!]
```

## <a name="codecvtintern_type"></a><a name="intern_type"></a> `codecvt::intern_type`

Tipo di carattere utilizzato per le rappresentazioni interne.

```cpp
typedef CharType intern_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="codecvtlength"></a><a name="length"></a> Codecvt:: length

Determina il numero di valori di `Byte` una sequenza specificata di `Byte` valori esterni che producono non più di un determinato numero di `CharType` valori interni e restituisce tale numero di valori `Byte` .

```cpp
int length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### <a name="parameters"></a>Parametri

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza esterna.

*`last1`*\
Puntatore alla fine della sequenza esterna.

*`len2`*\
Il numero massimo di byte che può essere restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di *`len2`* , definito dalla sequenza di origine esterna in [ `first1` , `last1` ).

### <a name="remarks"></a>Commenti

La funzione membro restituisce [`do_length`](#do_length) `( state, first1, last1, len2)` .

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
   const char* pszExt = "This is the string whose length is to be measured!";
   mbstate_t state = {0}; // zero-initialization represents the initial conversion state for mbstate_t
   locale loc("C"); // English_Britain"); //German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
     ( loc ).length( state,
          pszExt, &pszExt[strlen(pszExt)], LEN );
   cout << "The length of the string is: ";
   wcout << res;
   cout << "." << '\n';
   exit(-1);
}
```

```Output
The length of the string is: 50.
```

## <a name="codecvtmax_length"></a><a name="max_length"></a> `codecvt::max_length`

Restituisce il numero massimo di `Byte` valori esterni necessari per produrre un interno `CharType` .

```cpp
int max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero massimo di `Byte` valori necessari per generarne uno `CharType` .

### <a name="remarks"></a>Commenti

La funzione membro restituisce [`do_max_length`](#do_max_length) .

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
   int res = use_facet<codecvt<char, char, mbstate_t>>
     ( loc ).max_length( );
   wcout << res << '\n';
}
```

```Output
1
```

## <a name="codecvtout"></a><a name="out"></a> `codecvt::out`

Converte una sequenza di `CharType` valori interni in una sequenza di `Byte` valori esterni.

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

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first1`*\
Puntatore all'inizio della sequenza da convertire.

*`last1`*\
Puntatore alla fine della sequenza da convertire.

*`next1`*\
Riferimento a un puntatore alla prima non convertita `CharType` dopo l'ultima `CharType` conversione.

*`first2`*\
Puntatore all'inizio della sequenza convertita.

*`last2`*\
Puntatore alla fine della sequenza convertita.

*`next2`*\
Riferimento a un puntatore alla prima non convertita `Byte` dopo l'ultima conversione `Byte` .

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce [`do_out`](#do_out) `( state, first1, last1, next1, first2, last2, next2)` .

### <a name="remarks"></a>Commenti

Per altre informazioni, vedere [`codecvt::do_out`](#do_out).

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
    char pszExt[LEN + 1];
    const wchar_t* pwszInt = L"This is the wchar_t string to be converted.";
    memset(&pszExt[0], 0, (sizeof(char)) * (LEN + 1));
    char* pszNext;
    const wchar_t* pwszNext;
    mbstate_t state;
    locale loc("C");//English_Britain");//German_Germany
    int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
        (loc).out(state,
            pwszInt, &pwszInt[wcslen(pwszInt)], pwszNext,
            pszExt, &pszExt[wcslen(pwszInt)], pszNext);
    pszExt[wcslen(pwszInt)] = 0;
    cout << (res != codecvt_base::error ? "It worked: " : "It didn't work: ")
        << "The converted string is:\n ["
        << &pszExt[0]
        << "]" << '\n';

}
```

```Output
It worked: The converted string is:
[This is the wchar_t string to be converted.]
```

## <a name="codecvtstate_type"></a><a name="state_type"></a> `codecvt::state_type`

Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.

```cpp
typedef StateType state_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `StateType`.

## <a name="codecvtunshift"></a><a name="unshift"></a> Codecvt:: unshift

Fornisce i `Byte` valori necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte` valori.

```cpp
result unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*`state`*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*`first2`*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*`last2`*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*`next2`*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error` Se lo stato rappresenta uno stato non valido.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok` Se la conversione ha esito positivo.

- `codecvt_base::partial` Se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta tenta di convertire l'elemento `CharType` di origine (0) in una sequenza di destinazione che archivia in [ `first2` , `last2` ), ad eccezione dell'elemento di terminazione `Byte` (0). Archivia sempre in *`next2`* un puntatore al primo elemento non modificato nella sequenza di destinazione.

*`state`* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la conversione dell'elemento `CharType` di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

La funzione membro restituisce [`do_unshift`](#do_unshift) `( state, first2, last2, next2 )` .

## <a name="see-also"></a>Vedere anche

[`<locale>`](../standard-library/locale.md)\
[Tabelle codici](../c-runtime-library/code-pages.md)\
[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
