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
ms.openlocfilehash: 936b3ab63b454e8f7e0490c2d155356a7c3b240f
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459825"
---
# <a name="codecvt-class"></a>Classe codecvt

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali. Tale classe è in grado di controllare le conversioni tra una sequenza di valori utilizzata per codificare i caratteri all'interno del programma e una sequenza di valori utilizzata per codificare i caratteri all'esterno del programma.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Byte, class StateType>
class codecvt : public locale::facet, codecvt_base;
```

### <a name="parameters"></a>Parametri

*CharType*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*Byte*\
Tipo utilizzato per codificare i caratteri all'esterno di un programma.

*StateType*\
Tipo che può essere utilizzato per rappresentare gli stati intermedi di una conversione tra tipi di rappresentazioni di caratteri interni ed esterni.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto che può essere utilizzato come [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)per controllare le conversioni tra una sequenza di valori di tipo *CharType* e una sequenza di valori di tipo *byte*. La classe *StateType* caratterizza la trasformazione e un oggetto della classe *StateType* archivia le informazioni di stato necessarie durante una conversione.

La codifica interna usa una rappresentazione con un numero fisso di byte per carattere, in genere il tipo **char** o il tipo **wchar_t**.

Come in qualsiasi facet delle impostazioni locali, l'oggetto statico `id` ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere al valore archiviato consente di archiviare un valore positivo univoco in `id`.

Le versioni dei modelli di [do_in](#do_in) e [do_out](#do_out) restituiscono sempre `codecvt_base::noconv`.

Nella libreria standard C++ vengono definite diverse specializzazioni esplicite:

```cpp
template<>
codecvt<wchar_t, char, mbstate_t>
```

esegue la conversione tra le sequenze **wchar_t** e **char** .

```cpp
template<>
codecvt<char16_t, char, mbstate_t>
```

esegue la `char16_t` conversione tra le sequenze codificate come UTF-16 e le sequenze **char** codificate come UTF-8.

```cpp
template<>
codecvt<char32_t, char, mbstate_t>
```

esegue la `char32_t` conversione tra le sequenze codificate come UTF-32 (UCS-4) e le sequenze **char** codificate come UTF-8.

### <a name="constructors"></a>Costruttori

|Costruttore|DESCRIZIONE|
|-|-|
|[codecvt](#codecvt)|Costruttore per gli oggetti della classe `codecvt` utilizzato come facet delle impostazioni locali per gestire le conversioni.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[extern_type](#extern_type)|Tipo di carattere utilizzato per le rappresentazioni esterne.|
|[intern_type](#intern_type)|Tipo di carattere utilizzato per le rappresentazioni interne.|
|[state_type](#state_type)|Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[always_noconv](#always_noconv)|Verifica che non sia necessario eseguire alcuna conversione.|
|[do_always_noconv](#do_always_noconv)|Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.|
|[do_encoding](#do_encoding)|Funzione virtuale che consente di verificare se la codifica del flusso `Byte` è dipendente dallo stato, se il rapporto tra i `Byte` utilizzati e i `CharType` generati è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[do_in](#do_in)|Funzione virtuale chiamata per convertire una sequenza di `Byte` interni in una sequenza di `CharType` esterni.|
|[do_length](#do_length)|Funzione virtuale che determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e che restituisce tale numero di `Byte`.|
|[do_max_length](#do_max_length)|Funzione virtuale che restituisce il numero massimo di byte esterni necessari per produrre un `CharType` interno.|
|[do_out](#do_out)|Funzione virtuale chiamata per convertire una sequenza di `CharType` interni in una sequenza di byte esterni.|
|[do_unshift](#do_unshift)|Funzione virtuale chiamata per fornire i `Byte` necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte`.|
|[encoding](#encoding)|Verifica se la codifica del flusso `Byte` è dipendente dallo stato, se il rapporto tra i `Byte` utilizzati e i `CharType` generati è costante e, in caso affermativo, determina il valore di tale rapporto.|
|[in](#in)|Converte una rappresentazione esterna di una sequenza di `Byte` in una rappresentazione interna di una sequenza di `CharType`.|
|[length](#length)|Determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e restituisce tale numero di `Byte`.|
|[max_length](#max_length)|Restituisce il numero massimo di `Byte` esterni necessari per produrre un `CharType` interno.|
|[out](#out)|Converte una sequenza di `CharType` interni in una sequenza di `Byte` esterni.|
|[unshift](#unshift)|Fornisce il `Byte` esterno necessario in una conversione dipendente dallo stato per completare l'ultimo carattere della sequenza di `Byte`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="always_noconv"></a>  codecvt::always_noconv

Verifica che non sia necessario eseguire alcuna conversione.

```cpp
bool always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore booleano che è **true** se non è necessario eseguire alcuna conversione, **false** se deve esserne eseguita almeno una.

### <a name="remarks"></a>Note

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

## <a name="codecvt"></a>  codecvt::codecvt

Costruttore per gli oggetti della classe codecvt usato come facet delle impostazioni locali per gestire le conversioni.

```cpp
explicit codecvt(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Note

I valori possibili per il parametro *_Refs* e il relativo significato sono:

- 0: La durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: La durata dell'oggetto deve essere gestita manualmente.

- 2: Questi valori non sono definiti.

Il costruttore inizializza `locale::facet` l'oggetto di base con **locale::** [facet](../standard-library/locale-class.md#facet_class)(`_Refs`).

## <a name="do_always_noconv"></a>  codecvt::do_always_noconv

Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.

```cpp
virtual bool do_always_noconv() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro virtuale protetta restituisce **true** solo se ogni chiamata a [do_in](#do_in) o [do_out](#do_out) restituisce `noconv`.

La versione modello restituisce sempre **true**.

### <a name="example"></a>Esempio

Vedere l'esempio per [always_noconv](#always_noconv), che chiama `do_always_noconv`.

## <a name="do_encoding"></a>  codecvt::do_encoding

Funzione virtuale che verifica se la codifica del `Byte` flusso è dipendente dallo stato, se il rapporto tra i `Byte`utilizzati e i `CharType`generati è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
virtual int do_encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

La funzione membro protetto virtuale restituisce:

- -1, se la codifica di sequenze di tipo `extern_type` è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *N* se la codifica implica solo sequenze di lunghezza *N*

### <a name="example"></a>Esempio

Vedere l'esempio di [encoding](#encoding), che chiama `do_encoding`.

## <a name="do_in"></a>  codecvt::do_in

Funzione virtuale chiamata per convertire una sequenza di elementi esterni `Byte`in una sequenza di elementi interni `CharType`.

```cpp
virtual result do_in(
    StateType& _State,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza da convertire.

*Last1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*first2*\
Puntatore all'inizio della sequenza convertita.

*Last2*\
Puntatore alla fine della sequenza convertita.

*Next2*\
Puntatore all'oggetto `CharType` che segue l'ultimo oggetto convertito `CharType`, al primo carattere non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error`Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`Se la conversione ha esito positivo.

- `codecvt_base::partial`Se l'origine è insufficiente o se la destinazione non è sufficientemente grande, perché la conversione abbia esito positivo.

### <a name="remarks"></a>Note

*_State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio di [in](#in), che chiama `do_in`.

## <a name="do_length"></a>  codecvt::do_length

Funzione virtuale che determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e che restituisce tale numero di `Byte`.

```cpp
virtual int do_length(
    const StateType& _State,
    const Byte* first1,
    const Byte* last1,
    size_t _Len2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza esterna.

*Last1*\
Puntatore alla fine della sequenza esterna.

*_Len2*\
Numero massimo di `Byte`oggetti che possono essere restituiti dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di *_Len2*, definito dalla sequenza di origine esterna in [ `first1`, `last1`).

### <a name="remarks"></a>Note

La funzione membro `do_in`virtuale protetta chiama ( `next1` `last1` `_State`, `first1`,,, `_Buf`, `_Buf` ,)`next2`per _  +  `_Len2`  *Stato* (una copia dello stato), alcuni buffer `_Buf`e puntatori `next1`e `next2`.

Restituisce `next2`  - quindi. `buf` In questo modo, viene conteggiato il numero massimo di conversioni, non maggiore di *_Len2*, definito dalla sequenza di origine `first1`in `last1`[,).

La versione del modello restituisce sempre il minore di *Last1* - *First1* e *_Len2*.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [length](#length), che `do_length`chiama.

## <a name="do_max_length"></a>  codecvt::do_max_length

Funzione virtuale che restituisce il numero massimo di esterni `Byte`necessari per produrre un interno. `CharType`

```cpp
virtual int do_max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di `Byte`s necessario per generarne `CharType`uno.

### <a name="remarks"></a>Note

La funzione membro virtuale protected restituisce il valore massimo consentito che può essere restituito [](#do_length)da do_length `first1`( `last1`,, 1) per i valori validi arbitrari di *First1* e *Last1*.

### <a name="example"></a>Esempio

Vedere l'esempio di [max_length](#max_length), che chiama `do_max_length`.

## <a name="do_out"></a>  codecvt::do_out

Funzione virtuale chiamata per convertire una sequenza di `CharType` interni in una sequenza di `Byte` esterni.

```cpp
virtual result do_out(
    StateType& _State,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza da convertire.

*Last1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Riferimento a un puntatore alla prima non convertita `CharType`, dopo l'ultima `CharType` conversione.

*first2*\
Puntatore all'inizio della sequenza convertita.

*Last2*\
Puntatore alla fine della sequenza convertita.

*Next2*\
Riferimento a un puntatore alla prima non convertita `Byte`, dopo l'ultima `Byte` conversione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`Se la conversione ha esito positivo.

- `codecvt_base::partial`Se l'origine è insufficiente o se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Note

*_State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato non è specificato.

### <a name="example"></a>Esempio

Vedere l'esempio di [out](#out), che chiama `do_out`.

## <a name="do_unshift"></a>  codecvt::do_unshift

Funzione virtuale chiamata per fornire i `Byte` necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte`.

```cpp
virtual result do_unshift(
    StateType& _State,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*first2*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*Last2*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*Next2*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`Se _ *state* rappresenta uno stato non valido

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione

- `codecvt_base::ok`Se la conversione ha esito positivo

- `codecvt_base::partial`Se la destinazione non è sufficientemente grande da consentire la conversione

### <a name="remarks"></a>Note

La funzione membro virtuale protetta tenta di convertire l'elemento `CharType`di origine (0) in una sequenza di destinazione che archivia in [ `last2` `first2`,), ad eccezione dell'elemento `Byte`di terminazione (0). Archivia sempre in *Next2* un puntatore al primo elemento non modificato nella sequenza di destinazione.

_ *State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la conversione dell' `CharType`elemento di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

### <a name="example"></a>Esempio

Vedere l'esempio di [unshift](#unshift), che chiama `do_unshift`.

## <a name="encoding"></a>  codecvt::encoding

Verifica se la codifica del flusso `Byte` è dipendente dallo stato, se il rapporto tra i `Byte` utilizzati e i `CharType` generati è costante e, in caso affermativo, determina il valore di tale rapporto.

```cpp
int encoding() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il valore restituito è positivo, tale valore è il numero costante di `Byte` caratteri necessari per produrre il `CharType` carattere.

La funzione membro protetto virtuale restituisce:

- -1, se la codifica di sequenze di tipo `extern_type` è dipendente dallo stato.

- 0 se la codifica implica le sequenze di lunghezza variabile.

- *N* se la codifica implica solo sequenze di lunghezza *N.*

### <a name="remarks"></a>Note

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

## <a name="extern_type"></a>  codecvt::extern_type

Tipo di carattere utilizzato per le rappresentazioni esterne.

```cpp
typedef Byte extern_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Byte`.

## <a name="in"></a>  codecvt::in

Converte una rappresentazione esterna di una sequenza di `Byte` in una rappresentazione interna di una sequenza di `CharType`.

```cpp
result in(
    StateType& _State,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza da convertire.

*Last1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.

*first2*\
Puntatore all'inizio della sequenza convertita.

*Last2*\
Puntatore alla fine della sequenza convertita.

*Next2*\
Puntatore all'oggetto `CharType` che segue l'ultimo oggetto convertito `Chartype` nel primo carattere non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

Indica l'esito positivo, l'esecuzione parziale o l'esito negativo dell'operazione. La funzione restituisce:

- `codecvt_base::error`Se la sequenza di origine non è in formato corretto.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`Se la conversione ha esito positivo.

- `codecvt_base::partial`Se l'origine è insufficiente o se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Note

*_State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. Dopo una conversione parziale, *_State* deve essere impostato in modo da consentire la ripresa della conversione quando arrivano nuovi caratteri.

La funzione membro restituisce [do_in](#do_in)( `_State`, _ *First1,  last1,  next1, First2, _Llast2,  next2*).

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

## <a name="intern_type"></a>  codecvt::intern_type

Tipo di carattere utilizzato per le rappresentazioni interne.

```cpp
typedef CharType intern_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="length"></a>  codecvt::length

Determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e restituisce tale numero di `Byte`.

```cpp
int length(
    const StateType& _State,
    const Byte* first1,
    const Byte* last1,
    size_t _Len2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza esterna.

*Last1*\
Puntatore alla fine della sequenza esterna.

*_Len2*\
Il numero massimo di byte che può essere restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Intero che rappresenta un conteggio del numero massimo di conversioni, non maggiore di *_Len2*, definito dalla sequenza di origine esterna in [ `first1`, `last1`).

### <a name="remarks"></a>Note

La funzione membro restituisce [do_length](#do_length)( *_State, first1*, `last1`, `_Len2`).

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

## <a name="max_length"></a>  codecvt::max_length

Restituisce il numero massimo di `Byte` esterni necessari per produrre un `CharType` interno.

```cpp
int max_length() const throw();
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di `Byte`s necessario per generarne `CharType`uno.

### <a name="remarks"></a>Note

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

## <a name="out"></a>  codecvt::out

Converte una sequenza di `CharType` interni in una sequenza di `Byte` esterni.

```cpp
result out(
    StateType& _State,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*First1*\
Puntatore all'inizio della sequenza da convertire.

*Last1*\
Puntatore alla fine della sequenza da convertire.

*next1*\
Riferimento a un puntatore alla prima non convertita `CharType` dopo l'ultima `CharType` conversione.

*first2*\
Puntatore all'inizio della sequenza convertita.

*Last2*\
Puntatore alla fine della sequenza convertita.

*Next2*\
Riferimento a un puntatore alla prima non convertita `Byte` dopo l'ultima conversione. `Byte`

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce [do_out](#do_out)( `_State`, `first1`, `last1`, `next1`, `first2`, `last2`, `next2`).

### <a name="remarks"></a>Note

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

## <a name="state_type"></a>  codecvt::state_type

Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.

```cpp
typedef StateType state_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `StateType`.

## <a name="unshift"></a>  codecvt::unshift

Fornisce gli `Byte`oggetti necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte`.

```cpp
result unshift(
    StateType& _State,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### <a name="parameters"></a>Parametri

*_State*\
Lo stato della conversione che viene mantenuto tra le chiamate alla funzione membro.

*first2*\
Puntatore alla prima posizione nell'intervallo di destinazione.

*Last2*\
Puntatore all'ultima posizione nell'intervallo di destinazione.

*Next2*\
Puntatore al primo elemento non modificato nella sequenza di destinazione.

### <a name="return-value"></a>Valore restituito

La funzione restituisce:

- `codecvt_base::error`Se lo stato rappresenta uno stato non valido.

- `codecvt_base::noconv` se la funzione non esegue alcuna conversione.

- `codecvt_base::ok`Se la conversione ha esito positivo.

- `codecvt_base::partial`Se la destinazione non è sufficientemente grande da consentire la conversione.

### <a name="remarks"></a>Note

La funzione membro virtuale protetta tenta di convertire l'elemento `CharType`di origine (0) in una sequenza di destinazione che archivia in [ `last2` `first2`,), ad eccezione dell'elemento `Byte`di terminazione (0). Archivia sempre in *Next2* un puntatore al primo elemento non modificato nella sequenza di destinazione.

*_State* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In genere, la conversione dell' `CharType`elemento di origine (0) lascia lo stato corrente nello stato di conversione iniziale.

La funzione membro restituisce [do_unshift](#do_unshift)( `_State`, `first2`, `last2`, `next2`).

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)\
[Tabelle codici](../c-runtime-library/code-pages.md)\
[Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
