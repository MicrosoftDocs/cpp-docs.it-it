---
title: Classe bitset
ms.date: 03/27/2019
f1_keywords:
- bitset/std::bitset
- bitset/std::bitset::element_type
- bitset/std::bitset::all
- bitset/std::bitset::any
- bitset/std::bitset::count
- bitset/std::bitset::flip
- bitset/std::bitset::none
- bitset/std::bitset::reset
- bitset/std::bitset::set
- bitset/std::bitset::size
- bitset/std::bitset::test
- bitset/std::bitset::to_string
- bitset/std::bitset::to_ullong
- bitset/std::bitset::to_ulong
- bitset/std::bitset::reference
helpviewer_keywords:
- std::bitset [C++]
- std::bitset [C++], element_type
- std::bitset [C++], all
- std::bitset [C++], any
- std::bitset [C++], count
- std::bitset [C++], flip
- std::bitset [C++], none
- std::bitset [C++], reset
- std::bitset [C++], set
- std::bitset [C++], size
- std::bitset [C++], test
- std::bitset [C++], to_string
- std::bitset [C++], to_ullong
- std::bitset [C++], to_ulong
- std::bitset [C++], reference
ms.assetid: 28b86964-87b4-429c-8124-b6c251b6c50b
ms.openlocfilehash: 623593e723b26244cc82e9eeed3e32657cca0b94
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846485"
---
# <a name="bitset-class"></a>Classe bitset

Descrive un tipo di oggetto che archivia una sequenza formata da un numero fisso di bit che forniscono un modo compatto di mantenere i flag per un set di elementi o condizioni. La classe bitset supporta operazioni su oggetti di tipo bitset che contengono una raccolta di bit e forniscono un accesso a tempo costante a ogni bit.

## <a name="syntax"></a>Sintassi

```cpp
template <size_t N>
class bitset
```

### <a name="parameters"></a>Parametri

*N*\
Specifica il numero di bit nell'oggetto bitst con un valore integer diverso da zero di tipo `size_t` che deve essere noto in fase di compilazione.

## <a name="remarks"></a>Osservazioni

Diversamente dalla [ \<bool> classe Vector](../standard-library/vector-bool-class.md)simile, la classe bitst non contiene iteratori e non è un contenitore della libreria standard C++. Differisce anche dal vettore in quanto è \<bool> di una dimensione specifica, che viene fissata in fase di compilazione in base alle dimensioni specificate dal parametro di modello *N* quando viene dichiarato il **bit \<N\> ** .

Un bit viene impostato se il valore è 1 e reimpostato se il valore è 0. Capovolgere o invertire un bit significa modificarne il valore da 1 a 0 o da 0 a 1. I bit *N* in un bitset vengono indicizzati dai valori Integer da 0 a *N* - 1, dove 0 indicizza la prima posizione del bit e *N* - 1 la posizione finale del bit.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[bitset](#bitset)|Costruisce un oggetto di classe `bitset\<N>` e inizializza i bit a zero, a un valore specificato o a valori ottenuti dai caratteri in una stringa.|

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|-|-|
|[element_type](#element_type)|Tipo che è un sinonimo del tipo di dati **`bool`** e può essere utilizzato per fare riferimento a bit di elemento in un oggetto `bitset` .|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[tutti](#all)|Verifica tutti i bit in questo oggetto `bitset` per determinare se sono tutti impostati su **`true`** .|
|[qualsiasi](#any)|La funzione membro verifica se nella sequenza sono inclusi bit impostati su 1.|
|[count](#count)|La funzione membro restituisce il numero di bit impostati nella sequenza di bit.|
|[flip](#flip)|Inverte il valore di tutti i bit in `bitset` o un singolo bit in una posizione specificata.|
|[nessuna](#none)|Verifica che nessun bit sia stato impostato su 1 in un oggetto `bitset`.|
|[reset](#reset)|Reimposta tutti i bit in `bitset` su 0 o un bit in una posizione specificata su 0.|
|[set](#set)|Imposta tutti i bit in `bitset` su 1 o un bit in una posizione specificata su 1.|
|[size](#size)|Restituisce il numero di bit in un oggetto `bitset`.|
|[test](#test)|Verifica se il bit in una posizione specificata in `bitset` è impostato su 1.|
|[to_string](#to_string)|Converte un oggetto `bitset` in una rappresentazione di stringa.|
|[to_ullong](#to_ullong)|Restituisce la somma dei valori di bit in `bitset` come **`unsigned long long`** .|
|[to_ulong](#to_ulong)|Converte un `bitset` oggetto in **`unsigned long`** che genera la sequenza di bit contenuta se utilizzata per inizializzare l' `bitset` oggetto.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[reference](#reference)|Classe proxy che fornisce i riferimenti ai bit contenuti in un `bitset` usata per accedere e modificare i singoli bit come classe helper per `operator[]` della classe `bitset`.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore! =](#op_neq)|Verifica un `bitset` di destinazione per la disuguaglianza con un `bitset` specificato.|
|[operatore&=](#op_and_eq)|Esegue una combinazione bit per bit di bitset con l'operazione logica `AND`.|
|[operatore<<](#op_lshift)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|
|[operatore<<=](#op_lshift_eq)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|
|[operatore = =](#op_eq_eq)|Verifica un `bitset` di destinazione per l'uguaglianza con un `bitset` specificato.|
|[operatore>>](#op_rshift)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|
|[operatore>>=](#op_rshift_eq)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento a un bit in una posizione specificata in un `bitset` se il `bitset` è modificabile. In caso contrario, restituisce il valore del bit in tale posizione.|
|[operatore ^ =](#op_xor_eq)|Esegue una combinazione bit per bit di bitset con l'operazione esclusiva `OR`.|
|[operatore&#124;=](#op_or_eq)|Esegue una combinazione bit per bit di bitset con l'operazione inclusiva `OR`.|
|[operatore ~](#op_not)|Inverte tutti i bit in un `bitset` di destinazione e restituisce il risultato.|

### <a name="structures"></a>Strutture

|Nome|Description|
|-|-|
|[hash](#hash)||

### <a name="all"></a><a name="all"></a> tutti

Verifica tutti i bit nel bitset per determinare se sono tutti impostati su true.

```cpp
bool all() const;
```

#### <a name="return-value"></a>Valore restituito

Restituisce true se tutti i bit dell'insieme sono true. Restituisce **`false`** se uno o più bit sono false.

### <a name="any"></a><a name="any"></a> qualsiasi

Verifica se nella sequenza sono inclusi bit impostati su 1.

```cpp
bool any() const;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se un bit nel set di bit è impostato su 1; **`false`** se tutti i bit sono 0.

#### <a name="example"></a>Esempio

```cpp
// bitset_any.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 6 );
   bool b, rb;

   cout << "The original bitset b1( 6 ) is: ( "<< b1 << " )"
        << endl;

   b = b1.any ( );

   if ( b )
      cout << "At least one of the bits in bitset is set to 1."
           << endl;
   else
      cout << "None of the bits in bitset are set to 1."
           << endl;

   bitset<5> rb1;
   rb1 = b1.reset ( );

   cout << "The reset bitset is: ( "<< b1 << " )"
        << endl;

   rb = rb1.any ( );

   if ( rb )
      cout << "At least one of the bits in the reset bitset "
           << "are set to 1." << endl;
   else
      cout << "None of the bits in bitset b1 are set to 1."
           << endl;
}
```

```Output
The original bitset b1( 6 ) is: ( 00110 )
At least one of the bits in bitset is set to 1.
The reset bitset is: ( 00000 )
None of the bits in bitset b1 are set to 1.
```

### <a name="bitset"></a><a name="bitset"></a> bitset

Costruisce un oggetto di classe `bitset\<N>` e inizializza i bit su zero, su un valore specificato o su valori ottenuti dai caratteri in una stringa.

```cpp
bitset();

bitset(
    unsigned long long val);

explicit bitset(
    const char* _CStr);

template <class CharType,
    class Traits,
    class Allocator>
explicit bitset(
    const basic_string<CharType, Traits, Allocator>& str,
    typename basic_string<CharType, Traits, Allocator>::size_type _Pos = 0);

template <class CharType,
    class Traits,
    class Allocator>
explicit bitset(
    const basic_string<CharType, Traits, Allocator>& str,
    typename basic_string<CharType, Traits, Allocator>::size_type _Pos,
    typename basic_string<CharType, Traits, Allocator>::size_type count,
    CharType _Zero = CharType ('0'),
    CharType _One = CharType ('1'));
```

#### <a name="parameters"></a>Parametri

*Val*\
Intero senza segno la cui rappresentazione in base due viene usata per inizializzare i bit del bitset in fase di costruzione.

*Str*\
La stringa di zero e quelli usati per inizializzare i valori di bit del bitset.

*_CStr*\
La stringa di zero di tipo C e quelli usati per inizializzare i valori di bit del bitset.

*_Pos*\
La posizione del carattere nella stringa, contando da sinistra a destra e partendo da zero, usata per inizializzare il primo bit del bitset.

*conteggio*\
Il numero di caratteri nella stringa che si usa per specificare i valori iniziali per i bit del bitset.

*_Zero*\
Il carattere usato per rappresentare uno zero. Il valore predefinito è "0".

*_One*\
Il carattere usato per rappresentare un uno. Il valore predefinito è "1".

#### <a name="remarks"></a>Osservazioni

Si possono usare tre costruttori per creare oggetti della classe `bitset\<N>`:

- Il primo costruttore non accetta alcun parametro, costruisce un oggetto della classe `bitset\<N>` e inizializza tutti i bit N su un valore predefinito pari a zero.

- Il secondo costruttore crea un oggetto della classe `bitset\<N>` e inizializza i bit utilizzando il **`unsigned long long`** parametro singolo.

- Il terzo costruttore crea un oggetto della classe `bitset\<N>`, inizializzando i bit N su valori che corrispondono ai caratteri specificati in una stringa di caratteri di tipo c di zero e uno. Il costruttore viene chiamato senza eseguire il cast di stringa in un tipo stringa: `bitset<5> b5("01011");`

Sono anche disponibili due modelli di costruttore:

- Il primo modello di costruttore costruisce un oggetto della classe `bitset\<N>` e inizializza i bit dai caratteri di una stringa di zero e uno. Se i caratteri della stringa sono diversi da 0 o 1, il costruttore genera un oggetto della classe [invalid argument](../standard-library/invalid-argument-class.md). Se la posizione specificata (*_Pos*) è successiva alla lunghezza della stringa, il costruttore genera un oggetto della classe [out_of_range](../standard-library/out-of-range-class.md). Il costruttore imposta solo i bit nella posizione *j* nel bitset per cui il carattere nella stringa in posizione `_Pos + j` è 1. Per impostazione predefinita, *_Pos* è 0.

- Il secondo modello di costruttore è simile al primo, ma include un parametro aggiuntivo (*count*) usato per specificare il numero di bit da inizializzare. Ha anche due parametri facoltativi, *_Zero* e *_One*, che indicano il carattere in *Str* da interpretare come un bit 0 e un bit, rispettivamente.

#### <a name="example"></a>Esempio

```cpp
// bitset_bitset.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   // Using the default constructor
   using namespace std;
   bitset<2> b0;
   cout << "The set of bits in bitset<2> b0 is: ( "
        << b0 << " )." << endl;

   // Using the second member function
   bitset<5> b1 ( 6 );
   cout << "The set of bits in bitset<5> b1( 6 ) is: ( "
        << b1 << " )." << endl;

   // The template parameter N can be an expresssion
   bitset< 2 * sizeof ( int ) > b2;
   cout << "The set of bits in bitset<2 * sizeof ( int ) > b2 is: ( "
        << b2 << " )." << endl;

   // The base two representation will be truncated
   // if its length exceeds the size of the bitset
   bitset<3> b3 ( 6 );
   cout << "The set of bits in bitset<3> b3( 6 ) is ( "
        << b3 << " )." << endl;

   // Using a c-style string to initialize the bitset
    bitset<7> b3andahalf ( "1001001" );
    cout << "The set of bits in bitset<7> b3andahalf ( \"1001001\" )"
         << " is ( " << b3andahalf << " )." << endl;

   // Using the fifth member function with the first parameter
   string bitval4 ( "10011" );
   bitset<5> b4 ( bitval4 );
   cout << "The set of bits in bitset<5> b4( bitval4 ) is ( "
        << b4 << " )." << endl;

   // Only part of the string may be used for initialization

   // Starting at position 3 for a length of 6 (100110)
   string bitval5 ("11110011011");
   bitset<6> b5 ( bitval5, 3, 6 );
   cout << "The set of bits in bitset<11> b5( bitval, 3, 6 ) is ( "
        << b5 << " )." << endl;

   // The bits not initialized with part of the string
   // will default to zero
   bitset<11> b6 ( bitval5, 3, 5 );
   cout << "The set of bits in bitset<11> b6( bitval5, 3, 5 ) is ( "
        << b6 << " )." << endl;

   // Starting at position 2 and continue to the end of the string
   bitset<9> b7 ( bitval5, 2 );
   cout << "The set of bits in bitset<9> b7( bitval, 2 ) is ( "
        << b7 << " )." << endl;
}
```

```Output
The set of bits in bitset<2> b0 is: ( 00 ).
The set of bits in bitset<5> b1( 6 ) is: ( 00110 ).
The set of bits in bitset<2 * sizeof ( int ) > b2 is: ( 00000000 ).
The set of bits in bitset<3> b3( 6 ) is ( 110 ).
The set of bits in bitset<5> b4( bitval4 ) is ( 10011 ).
The set of bits in bitset<11> b5( bitval, 3, 6 ) is ( 100110 ).
The set of bits in bitset<11> b6( bitval5, 3, 5 ) is ( 00000010011 ).
The set of bits in bitset<9> b7( bitval, 2 ) is ( 110011011 ).
```

### <a name="count"></a><a name="count"></a> conteggio

Restituisce il numero di bit impostati nella sequenza di bit.

```cpp
size_t count() const;
```

#### <a name="return-value"></a>Valore restituito

Numero di bit impostati nella sequenza di bit.

#### <a name="example"></a>Esempio

```cpp
// bitset_count.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
    using namespace std;

    bitset<5> b1(4);

    cout << "The collection of bits in the original bitset is: ( "
         << b1 << " )" << endl;

    size_t i;
    i = b1.count();
    cout << "The number of bits in the bitset set to 1 is: "
         << i << "." << endl;

    bitset<5> fb1;
    fb1 = b1.flip();

    cout << "The collection of flipped bits in the modified bitset "
         << "is: ( " << b1 << " )" << endl;

    size_t ii;
    ii = fb1.count();
    cout << "The number of bits in the bitset set to 1 is: "
         << ii << "." << endl;
}
```

```Output
The collection of bits in the original bitset is: ( 00100 )
The number of bits in the bitset set to 1 is: 1.
The collection of flipped bits in the modified bitset is: ( 11011 )
The number of bits in the bitset set to 1 is: 4.
```

### <a name="element_type"></a><a name="element_type"></a> element_type

Tipo che è un sinonimo del tipo di dati **`bool`** e può essere utilizzato per fare riferimento a bit di elemento in un oggetto BITS.

```cpp
typedef bool element_type;
```

#### <a name="example"></a>Esempio

```cpp
// bitset_elem_type.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<3> b1 ( 2 );
   cout << "Original bitset b1(6) is: ( "<< b1 << " )"
        << endl;

   //Compare two ways to reference bits in a bitset
   bool b;
   bitset<5>::element_type e;

   b = b1.test ( 2 );
   if ( b )
      cout << "The bit at position 2 of bitset b1"
           << "has a value of 1." << endl;
   else
      cout << "The bit at position 2 of bitset b1"
           << "has a value of 0." << endl;
   b1[2] = 1;
   cout << "Bitset b1 modified by b1[2] = 1 is: ( "<< b1 << " )"
        << endl;

   e = b1.test ( 2 );
   if ( e )
      cout << "The bit at position 2 of bitset b1"
           << "has a value of 1." << endl;
   else
      cout << "The bit at position 2 of bitset b1"
           << "has a value of 0." << endl;
}
```

```Output
Original bitset b1(6) is: ( 010 )
The bit at position 2 of bitset b1has a value of 0.
Bitset b1 modified by b1[2] = 1 is: ( 110 )
The bit at position 2 of bitset b1has a value of 1.
```

### <a name="flip"></a><a name="flip"></a> Capovolgi

Inverte il valore di tutti i bit in un bitset o un singolo bit in una posizione specificata.

```cpp
bitset\<N>& flip();
bitset\<N>& flip(size_t _Pos);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
La posizione del bit il cui valore viene invertito.

#### <a name="return-value"></a>Valore restituito

Una copia del bitset modificato per cui è stata richiamata la funzione membro.

#### <a name="remarks"></a>Osservazioni

La seconda funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md) se la posizione specificata come parametro è maggiore della dimensione *N* del **bit \<** *N* **> ** il cui bit è stato invertito.

#### <a name="example"></a>Esempio

```cpp
// bitset_flip.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 6 );

   cout << "The collection of bits in the original bitset is: ( "
        << b1 << " )" << endl;

   bitset<5> fb1;
   fb1 = b1.flip ( );

   cout << "After flipping all the bits, the bitset becomes: ( "
        << fb1 << " )" << endl;

   bitset<5> f3b1;
   f3b1 = b1.flip ( 3 );

   cout << "After flipping the fourth bit, the bitset becomes: ( "
        << f3b1 << " )" << endl << endl;

   bitset<5> b2;
   int i;
   for ( i = 0 ; i <= 4 ; i++ )
   {
      b2.flip(i);
      cout << b2 << "  The bit flipped is in position "
           << i << ".\n";
   }
}
```

```Output
The collection of bits in the original bitset is: ( 00110 )
After flipping all the bits, the bitset becomes: ( 11001 )
After flipping the fourth bit, the bitset becomes: ( 10001 )

00001  The bit flipped is in position 0.
00011  The bit flipped is in position 1.
00111  The bit flipped is in position 2.
01111  The bit flipped is in position 3.
11111  The bit flipped is in position 4.
```

### <a name="hash"></a><a name="hash"></a> hash

```cpp
template <class T> struct hash;
template <size_t N> struct hash<bitset<N>>;
```

### <a name="none"></a><a name="none"></a> nessuno

Verifica che nessun bit sia stato impostato su 1 in un oggetto bitset.

```cpp
bool none() const;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se nessun bit nel set di bit è stato impostato su 1; **`false`** se almeno un bit è stato impostato su 1.

#### <a name="example"></a>Esempio

```cpp
// bitset_none.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 6 );
   bool b, rb;

   cout << "Original bitset b1(6) is: ( " << b1 << " )"
        << endl;

   b = b1.none ( );

   if ( b )
      cout << "None of the bits in bitset b1 are set to 1."
           << endl;
   else
      cout << "At least one of the bits in bitset b1 is set to 1."
           << endl;

   bitset<5> rb1;
   rb1 = b1.reset ( );
   rb = rb1.none ( );
   if ( rb )
      cout << "None of the bits in bitset b1 are set to 1."
           << endl;
   else
      cout << "At least one of the bits in bitset b1 is set to 1."
           << endl;
}
```

```Output
Original bitset b1(6) is: ( 00110 )
At least one of the bits in bitset b1 is set to 1.
None of the bits in bitset b1 are set to 1.
```

### <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica un bitset di destinazione per la disuguaglianza con un bitset specificato.

```cpp
bool operator!=(const bitset\<N>& right) const;
```

#### <a name="parameters"></a>Parametri

*Ok*\
Il bitset che deve essere confrontato con il bitset di destinazione per stabilire la disuguaglianza.

#### <a name="return-value"></a>Valore restituito

**`true`** Se le bitsets sono diverse; **`false`** se sono uguali.

#### <a name="remarks"></a>Osservazioni

I bitset devono avere le stesse dimensioni per poter verificare la disuguaglianza con la funzione dell'operatore membro.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_NE.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );
   bitset<5> b2 ( 7 );
   bitset<5> b3 ( 2 );
   bitset<4> b4 ( 7 );

   if ( b1 != b2 )
      cout << "Bitset b1 is different from bitset b2." << endl;
   else
      cout << "Bitset b1 is the same as bitset b2." << endl;

   if ( b1 != b3 )
      cout << "Bitset b1 is different from bitset b3." << endl;
   else
      cout << "Bitset b1 is the same as bitset b3." << endl;

   // This would cause an error because bitsets must have the
   // same size to be tested
   // if ( b1 != b4 )
   //   cout << "Bitset b1 is different from bitset b4." << endl;
   // else
   //   cout << "Bitset b1 is the same as bitset b4." << endl;
}
```

```Output
Bitset b1 is the same as bitset b2.
Bitset b1 is different from bitset b3.
```

### <a name="operatoramp"></a><a name="op_and_eq"></a> operatore&amp;=

Esegue una combinazione bit per bit di bitset con l'operazione logica `AND`.

```cpp
bitset\<N>& operator&=(const bitset\<N>& right);
```

#### <a name="parameters"></a>Parametri

*Ok*\
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

#### <a name="return-value"></a>Valore restituito

Il bitst di destinazione modificato risultante dall'operazione bit per bit `AND` con il bit specificato come parametro.

#### <a name="remarks"></a>Osservazioni

Due bit combinati dall' `AND` operatore restituiscono **`true`** se ogni bit è true. in caso contrario, la combinazione restituisce **`false`** .

Bitsets devono avere le stesse dimensioni per essere combinati bit per bit con l' `AND` operatore tramite la funzione dell'operatore membro.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_bitwise.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );
   bitset<5> b2 ( 11 );
   bitset<4> b3 ( 7 );

   cout << "The target bitset b1 is:    ( "<< b1 << " )." << endl;
   cout << "The parameter bitset b2 is: ( "<< b2 << " )." << endl;
   cout << endl;

   b1 &= b2;
   cout << "After bitwise AND combination,\n"
        << "the target bitset b1 becomes:   ( "<< b1 << " )."
        << endl;

   // Note that the parameter-specified bitset is unchanged
   cout << "The parameter bitset b2 remains: ( "<< b2 << " )."
        << endl;

   // The following would cause an error because the bisets
   // must be of the same size to be combined
   // b1 &= b3;
}
```

```Output
The target bitset b1 is:    ( 00111 ).
The parameter bitset b2 is: ( 01011 ).

After bitwise AND combination,
the target bitset b1 becomes:   ( 00011 ).
The parameter bitset b2 remains: ( 01011 ).
```

### <a name="operator"></a><a name="op_lshift"></a> operatore\<\<

Sposta i bit in un bitset a sinistra di un numero di posizioni specificato e restituisce il risultato in un nuovo bitset.

```cpp
bitset\<N> operator<<(size_t _Pos) const;
```

#### <a name="parameters"></a>Parametri

*_Pos*\
Il numero di posizioni a sinistra di cui verranno spostati i bit nel bitset.

#### <a name="return-value"></a>Valore restituito

Il bitset modificato con i bit spostati a sinistra del numero di posizioni richiesto.

#### <a name="remarks"></a>Osservazioni

La funzione dell'operatore membro restituisce **bitst**( ** \* this**) **<<= POS,** dove [<<=](#op_lshift_eq) Sposta i bit in un oggetto BITS a sinistra di un numero di posizioni specificato e restituisce il risultato al bit di destinazione.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_LS.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );

   cout << "The bitset b1 is: ( "<< b1 << " )." << endl;

   bitset<5> b2;
   b2 = b1 << 2;

   cout << "After shifting the bits 2 positions to the left,\n"
        << " the bitset b2 is: ( "<< b2 << " )."
        << endl;

   bitset<5> b3 = b2 >> 1;

   cout << "After shifting the bits 1 position to the right,\n"
        << " the bitset b3 is: ( " << b3 << " )."
        << endl;
}
```

### <a name="operatorltlt"></a><a name="op_lshift_eq"></a> operatore&lt;&lt;=

Sposta i bit in un bitset a sinistra di un numero di posizioni specificato e restituisce il risultato nel bitset di destinazione.

```cpp
bitset\<N>& operator<<=(size_t _Pos);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
Il numero di posizioni a sinistra di cui verranno spostati i bit nel bitset.

#### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato in modo che i bit risultano spostati a sinistra del numero di posizioni richiesto.

#### <a name="remarks"></a>Osservazioni

Se non esiste un elemento da spostare nella posizione, la funzione cancella il bit impostandolo su 0.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_LSE.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 7 );
   cout << "The target bitset b1 is: ( "<< b1 << " )." << endl;
   b1 <<= 2;
   cout << "After shifting the bits 2 positions to the left,\n"
        << "the target bitset b1 becomes: ( "<< b1 << " )."
        << endl;
}
```

```Output
The target bitset b1 is: ( 00111 ).
After shifting the bits 2 positions to the left,
the target bitset b1 becomes: ( 11100 ).
```

### <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica un bitset di destinazione per l'uguaglianza con un bitset specificato.

```cpp
bool operator==(const bitset\<N>& right) const;
```

#### <a name="parameters"></a>Parametri

*Ok*\
Il bitset che deve essere confrontato con il bitset di destinazione per stabilire l'uguaglianza.

#### <a name="return-value"></a>Valore restituito

**`true`** Se i bitsets sono uguali; **`false`** se sono diversi.

#### <a name="remarks"></a>Osservazioni

I bitset devono avere le stesse dimensioni per poter verificare l'uguaglianza con la funzione dell'operatore membro.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_EQ.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 7 );
   bitset<5> b2 ( 7 );
   bitset<5> b3 ( 2 );
   bitset<4> b4 ( 7 );

   if ( b1 == b2 )
      cout << "Bitset b1 is the same as bitset b2." << endl;
   else
      cout << "Bitset b1 is different from bitset b2." << endl;

   if ( b1 == b3 )
      cout << "Bitset b1 is the same as bitset b3." << endl;
   else
      cout << "Bitset b1 is different from bitset b3." << endl;

   // This would cause an error because bitsets must have the
   // same size to be tested
   // if ( b1 == b4 )
   //   cout << "Bitset b1 is the same as bitset b4." << endl;
   // else
   //   cout << "Bitset b1 is different from bitset b4." << endl;
}
```

```Output
Bitset b1 is the same as bitset b2.
Bitset b1 is different from bitset b3.
```

### <a name="operatorgtgt"></a><a name="op_rshift"></a> operatore&gt;&gt;

Sposta i bit in un bitset a destra di un numero di posizioni specificato e restituisce il risultato in un nuovo bitset.

```cpp
bitset\<N> operator>>(size_t _Pos) const;
```

#### <a name="parameters"></a>Parametri

*_Pos*\
Il numero di posizioni a destra di cui verranno spostati i bit nel bitset.

#### <a name="return-value"></a>Valore restituito

Un nuovo bitset in cui i bit risultano spostati a destra del numero di posizioni richiesto in relazione al bitset di destinazione.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_RS.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 7 );
   cout << "The bitset b1 is: ( "<< b1 << " )." << endl;

   bitset<5> b2;
   b2 = b1 << 2;

   cout << "After shifting the bits 2 positions to the left,\n"
        << "the bitset b2 is: ( "<< b2 << " )."
        << endl;
   bitset<5> b3 = b2 >> 1;

   cout << "After shifting the bits 1 position to the right,\n"
        << "the bitset b3 is: ( " << b3 << " )."
        << endl;
}
```

```Output
The bitset b1 is: ( 00111 ).
After shifting the bits 2 positions to the left,
the bitset b2 is: ( 11100 ).
After shifting the bits 1 position to the right,
the bitset b3 is: ( 01110 ).
```

### <a name="operatorgtgt"></a><a name="op_rshift_eq"></a> operatore&gt;&gt;=

Sposta i bit in un bitset a destra di un numero di posizioni specificato e restituisce il risultato nel bitset di destinazione.

```cpp
bitset\<N>& operator>>=(size_t _Pos);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
Il numero di posizioni a destra di cui verranno spostati i bit nel bitset.

#### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato in modo che i bit risultano spostati a destra del numero di posizioni richiesto.

#### <a name="remarks"></a>Osservazioni

Se non esiste un elemento da spostare nella posizione, la funzione cancella il bit impostandolo su 0.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_RSE.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 28 );
   cout << "The target bitset b1 is: ( "<< b1 << " )." << endl;

   b1 >>= 2;
   cout << "After shifting the bits 2 positions to the right,\n"
        << "the target bitset b1 becomes: ( "<< b1 << " )."
        << endl;
}
```

```Output
The target bitset b1 is: ( 11100 ).
After shifting the bits 2 positions to the right,
the target bitset b1 becomes: ( 00111 ).
```

### <a name="operator"></a><a name="op_at"></a> operator []

Restituisce un riferimento a un bit in una posizione specificata in un bitset se il bitset è modificabile. In caso contrario, restituisce il valore del bit in tale posizione.

```cpp
bool operator[](size_t _Pos) const;
reference operator[](size_t _Pos);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
La posizione in cui viene individuato il bit all'interno del bitset.

#### <a name="remarks"></a>Osservazioni

Quando si definisce il [ \_ \_ \_ livello di debug degli iteratori](../standard-library/iterator-debug-level.md) come 1 o 2 nella compilazione, nel file eseguibile si verificherà un errore di runtime se si tenta di accedere a un elemento all'esterno dei limiti del bit. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

#### <a name="example"></a>Esempio

```cpp
// bitset_op_REF.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bool b;
   bitset<5> b1 ( 6 );
   cout << "The initialized bitset<5> b1( 2 ) is: ( "<< b1 << " )."
        << endl;

   int i;
   for ( i = 0 ; i <= 4 ; i++ )
   {
      b = b1[ i ];
      cout << "  The bit in position "
           << i << " is " << b << ".\n";
   }
}
```

### <a name="operator"></a><a name="op_xor_eq"></a> operatore ^ =

Esegue una combinazione bit per bit di bitset con l'operazione esclusiva `OR`.

```cpp
bitset\<N>& operator^=(const bitset\<N>& right);
```

#### <a name="parameters"></a>Parametri

*Ok*\
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

#### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato che risulta dall'operazione `OR` bit per bit esclusiva con il bitset specificato come parametro.

#### <a name="remarks"></a>Osservazioni

Due bit combinati dall'operatore **or** esclusivo restituiscono **`true`** se almeno uno dei bit, ma non entrambi, è **`true`** ; in caso contrario, la combinazione restituisce **`false`** .

I bitset devono avere le stesse dimensioni per essere combinati bit per bit con l'operatore `OR` esclusivo usando la funzione dell'operatore membro.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_bitwiseOR.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;
   bitset<5> b1 ( 7 );
   bitset<5> b2 ( 11 );
   bitset<4> b3 ( 7 );

   cout << "The target bitset b1 is:    ( "<< b1 << " )." << endl;
   cout << "The parameter bitset b2 is: ( "<< b2 << " )." << endl;
   cout << endl;

   b1 ^= b2;
   cout << "After bitwise exclusive OR combination,\n"
        << "the target bitset b1 becomes:   ( "<< b1 << " )."
        << endl;

   // Note that the parameter-specified bitset in unchanged
   cout << "The parameter bitset b2 remains: ( "<< b2 << " )."
        << endl;

   // The following would cause an error because the bisets
   // must be of the same size to be combined
   // b1 |= b3;
}
```

```Output
The target bitset b1 is:    ( 00111 ).
The parameter bitset b2 is: ( 01011 ).

After bitwise exclusive OR combination,
the target bitset b1 becomes:   ( 01100 ).
The parameter bitset b2 remains: ( 01011 ).
```

### <a name="operator124"></a><a name="op_or_eq"></a> operatore&#124;=

Esegue una combinazione bit per bit di bitset con l'operazione inclusiva `OR`.

```cpp
bitset\<N>& operator|=(const bitset\<N>& right);
```

#### <a name="parameters"></a>Parametri

*Ok*\
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

#### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato che risulta dall'operazione `OR` bit per bit inclusiva con il bitset specificato come parametro.

#### <a name="remarks"></a>Osservazioni

Due bit combinati dall'operatore inclusivo `OR` restituiscono **`true`** se almeno uno dei bit è **`true`** ; se entrambi i bit sono **`false`** , la combinazione restituisce **`false`** .

I bitset devono avere le stesse dimensioni per essere combinati bit per bit con l'operatore `OR` inclusivo usando la funzione dell'operatore membro.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_BIO.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );
   bitset<5> b2 ( 11 );
   bitset<4> b3 ( 7 );

   cout << "The target bitset b1 is:    ( "<< b1 << " )." << endl;
   cout << "The parameter bitset b2 is: ( "<< b2 << " )." << endl;
   cout << endl;

   b1 |= b2;
   cout << "After bitwise inclusive OR combination,\n"
        << "the target bitset b1 becomes:   ( "<< b1 << " )."
        << endl;

   // Note that the parameter-specified bitset in unchanged
   cout << "The parameter bitset b2 remains: ( "<< b2 << " )."
        << endl;

   // The following would cause an error because the bisets
   // must be of the same size to be combined
   // b1 |= b3;
}
```

```Output
The target bitset b1 is:    ( 00111 ).
The parameter bitset b2 is: ( 01011 ).

After bitwise inclusive OR combination,
the target bitset b1 becomes:   ( 01111 ).
The parameter bitset b2 remains: ( 01011 ).
```

### <a name="operator"></a><a name="op_not"></a> operatore ~

Inverte tutti i bit in un bitset di destinazione e restituisce il risultato.

```cpp
bitset\<N> operator~() const;
```

#### <a name="return-value"></a>Valore restituito

Il bitset con tutti i bit invertiti rispetto al bitset di destinazione.

#### <a name="example"></a>Esempio

```cpp
// bitset_op_invert.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <bitset>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );
   bitset<5> b2;
   b2 = ~b1;

   cout << "Bitset b1 is: ( "<< b1 << " )." << endl;
   cout << "Bitset b2 = ~b1 is: ( "<< b2 << " )." << endl;

   // These bits could also be flipped using the flip member function
   bitset<5> b3;
   b3 = b1.flip( );
   cout << "Bitset b3 = b1.flip( ) is: ( "<< b2 << " )." << endl;
}
```

```Output
Bitset b1 is: ( 00111 ).
Bitset b2 = ~b1 is: ( 11000 ).
Bitset b3 = b1.flip( ) is: ( 11000 ).
```

### <a name="reference"></a><a name="reference"></a> riferimento

Classe proxy che indica i riferimenti ai bit contenuti in un bitset usato per accedere e modificare i singoli bit come classe helper per l'oggetto `operator[]` della classe bitset.

```cpp
class reference {
   friend class bitset\<N>;
public:
   reference& operator=(bool val);
   reference& operator=(const reference& _Bitref);
   bool operator~() const;
   operator bool() const;
   reference& flip();
};
```

#### <a name="parameters"></a>Parametri

*Val*\
Valore dell'oggetto di tipo **`bool`** da assegnare a un bit in un oggetto BITS.

*_Bitref*\
Un riferimento del form *x [i]* al bit nella posizione *i* nel bitset *x*.

#### <a name="return-value"></a>Valore restituito

Riferimento al bit nell'oggetto BITS specificato dalla posizione dell'argomento per la prima, la seconda e la quinta funzione membro del riferimento alla classe e **`true`** o **`false`** per riflettere il valore del bit modificato nel punto di bit per la terza e la quarta funzione membro del riferimento alla classe.

#### <a name="remarks"></a>Osservazioni

La classe `reference` esiste solo come classe helper per il bitset `operator[]`. La classe member descrive un oggetto che può accedere a un singolo bit all'interno di un bitset. Lasciare *che b* sia un oggetto di **`bool`** tipo, *x* e *y* oggetti di tipo **bitst \<** *N* **> **, e *i* e *j* posizioni valide all'interno di tale oggetto. La notazione *x [i]* fa riferimento a bit nella posizione *i* nel bitset *x*. Le funzioni membro della classe `reference` specificano, in ordine, le operazioni seguenti:

|Operazione|Definizione|
|---------------|----------------|
|*x*[*i*] = *b*|Archivia il **`bool`** valore *b* nella posizione di bit *i* nel bitst *x*.|
|*x*[*i*] = *y*[*j*]|Memorizza il valore del bit *y*[ *j*] nella posizione di bit *i* nel bitset *x*.|
|*b* = ~ *x*[*i*]|Archivia il valore capovolto del bit *x*[ *i*] in **`bool`** *b*.|
|*b*  =  *x*[*i*]|Archivia il valore del bit *x*[ *i*] in **`bool`** *b*.|
|*x*[*i*]. `flip`( )|Memorizza il valore capovolto del bit *x*[ *i*] nella posizione di bit *i* in *x*.|

#### <a name="example"></a>Esempio

```cpp
// bitset_reference.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 2 );
   bitset<5> b2 ( 6 );
   cout << "The initialized bitset<5> b1( 2 ) is: ( "<< b1 << " )."
        << endl;
   cout << "The initialized bitset<5> b2( 6 ) is: ( "<< b2 << " )."
        << endl;

   // Example of x [i] = b storing bool b at bit position i
   // in bitset x
   b1[ 0 ] = true;
   cout << "The bitset<5> b1 with the bit at position 0 set to 1"
        << "is: ( "<< b1 << " )" << endl;

   // Example of x [i] = y [j] storing the bool value of the
   // bit at position j in bitset y at bit position i in bitset x
   b2 [4] = b1 [0];      // b1 [0] = true
   cout << "The bitset<5> b2 with the bit at position 4 set to the "
        << "value\nof the bit at position 0 of the bit in "
        << "bitset<5> b1 is: ( "<<  b2  << " )" << endl;

   // Example of b = ~x [i] flipping the value of the bit at
   // position i of bitset x and storing the value in an
   // object b of type bool
   bool b = ~b2 [4];      // b2 [4] = false
   if ( b )
      cout << "The value of the object b = ~b2 [4] "
           << "of type bool is true." << endl;
   else
      cout << "The value of the object b = ~b2 [4] "
           << "of type bool is false." << endl;

   // Example of b = x [i] storing the value of the bit at
   // position i of bitset x in the object b of type bool
   b = b2 [4];
   if ( b )
      cout << "The value of the object b = b2 [4] "
           << "of type bool is true." << endl;
   else
      cout << "The value of the object b = b2 [4] "
           << "of type bool is false." << endl;

   // Example of x [i] . flip ( ) toggling the value of the bit at
   // position i of bitset x
   cout << "Before flipping the value of the bit at position 4 in "
        << "bitset b2,\nit is ( "<<  b2  << " )." << endl;
   b2 [4].flip( );
   cout << "After flipping the value of the bit at position 4 in "
        << "bitset b2,\nit becomes ( "<<  b2  << " )." << endl;
   bool c;
   c = b2 [4].flip( );
   cout << "After a second flip, the value of the position 4 "
        << "bit in b2 is now: " << c << ".";
}
```

```Output
The initialized bitset<5> b1( 2 ) is: ( 00010 ).
The initialized bitset<5> b2( 6 ) is: ( 00110 ).
The bitset<5> b1 with the bit at position 0 set to 1 is: ( 00011 )
The bitset<5> b2 with the bit at position 4 set to the value
of the bit at position 0 of the bit in bitset<5> b1 is: ( 10110 )
The value of the object b = ~b2 [4] of type bool is false.
The value of the object b = b2 [4] of type bool is true.
Before flipping the value of the bit at position 4 in bitset b2,
it is ( 10110 ).
After flipping the value of the bit at position 4 in bitset b2,
it becomes ( 00110 ).
After a second flip, the value of the position 4 bit in b2 is now: 1.
```

### <a name="reset"></a><a name="reset"></a> reimpostazione

Reimposta su 0 tutti i bit in un bitset o reimposta un bit in una posizione specificata su 0.

```cpp
bitset\<N>& reset();
bitset\<N>& reset(size_t _Pos);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
La posizione del bit nel bitset da reimpostare su 0.

#### <a name="return-value"></a>Valore restituito

Una copia del bitset per cui è stata richiamata la funzione membro.

#### <a name="remarks"></a>Osservazioni

La seconda funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md) se la posizione specificata è maggiore della dimensione del bitset.

#### <a name="example"></a>Esempio

```cpp
// bitset_reset.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 13 );
   cout << "The set of bits in bitset<5> b1(13) is: ( "<< b1 << " )"
        << endl;

   bitset<5> b1r3;
   b1r3 = b1.reset( 2 );
   cout << "The collecion of bits obtained from resetting the\n"
        << "third bit of bitset b1 is: ( "<< b1r3 << " )"
        << endl;

   bitset<5> b1r;
   b1r = b1.reset( );
   cout << "The collecion of bits obtained from resetting all\n"
        << "the elements of the bitset b1 is: ( "<< b1r << " )"
        << endl;
}
```

```Output
The set of bits in bitset<5> b1(13) is: ( 01101 )
The collecion of bits obtained from resetting the
third bit of bitset b1 is: ( 01001 )
The collecion of bits obtained from resetting all
the elements of the bitset b1 is: ( 00000 )
```

### <a name="set"></a><a name="set"></a> set

Imposta su 1 tutti i bit in un bitset o imposta un bit in una posizione specificata su 1.

```cpp
bitset\<N>& set();

bitset\<N>& set(
    size_t _Pos,
    bool val = true);
```

#### <a name="parameters"></a>Parametri

*_Pos*\
La posizione del bit nel bitset da impostare su un valore assegnato.

*Val*\
Il valore da assegnare al bit nella posizione specificata.

#### <a name="return-value"></a>Valore restituito

Una copia del bitset per cui è stata richiamata la funzione membro.

#### <a name="remarks"></a>Osservazioni

La seconda funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md) se la posizione specificata è maggiore della dimensione del bitset.

#### <a name="example"></a>Esempio

```cpp
// bitset_set.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 6 );
   cout << "The set of bits in bitset<5> b1(6) is: ( "<< b1 << " )"
        << endl;

   bitset<5> b1s0;
   b1s0 = b1.set( 0 );
   cout << "The collecion of bits obtained from setting the\n"
        << "zeroth bit of bitset b1 is: ( "<< b1s0 << " )"
        << endl;

   bitset<5> bs1;
   bs1 = b1.set( );
   cout << "The collecion of bits obtained from setting all the\n"
        << "elements of the bitset b1 is: ( "<< bs1 << " )"
        << endl;
}
```

```Output
The set of bits in bitset<5> b1(6) is: ( 00110 )
The collecion of bits obtained from setting the
zeroth bit of bitset b1 is: ( 00111 )
The collecion of bits obtained from setting all the
elements of the bitset b1 is: ( 11111 )
```

### <a name="size"></a><a name="size"></a> dimensioni

Restituisce il numero di bit in un oggetto bitset.

```cpp
size_t size() const;
```

#### <a name="return-value"></a>Valore restituito

Numero di bit, *N*, in un oggetto bits \<N> .

#### <a name="example"></a>Esempio

```cpp
// bitset_size.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main()
{
    using namespace std;

    bitset<5> b1(6);
    size_t i;

    cout << "The set of bits in bitset<5> b1( 6 ) is: ( "<< b1 << " )"
         << endl;

    i = b1.size();

    cout << "The number of bits in bitset b1 is: " << i << "."
         << endl;
}
```

```Output
The set of bits in bitset<5> b1( 6 ) is: ( 00110 )
The number of bits in bitset b1 is: 5.
```

### <a name="test"></a><a name="test"></a> test

Verifica se il bit in una posizione specificata in un bitset è impostato su 1.

```cpp
bool test(size_t _Pos) const;
```

#### <a name="parameters"></a>Parametri

*_Pos*\
La posizione del bit nel bitset di cui si deve verificare il valore.

#### <a name="return-value"></a>Valore restituito

**`true`** Se il bit specificato dalla posizione dell'argomento è impostato su 1; in caso contrario, **`false`** .

#### <a name="remarks"></a>Osservazioni

La funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md)

### <a name="to_string"></a><a name="to_string"></a> to_string

Converte un oggetto bitst in una rappresentazione di stringa.

```cpp
template <class charT = char, class traits = char_traits<charT>, class Allocator = allocator<charT> >
   basic_string<charT, traits, Allocator> to_string(charT zero = charT('0'), charT one = charT('1')) const;
```

#### <a name="return-value"></a>Valore restituito

Un oggetto stringa della classe `basic_string` , in cui ogni bit impostato nel set di bit ha un carattere corrispondente pari a 1 e un carattere pari a 0 se il bit non è impostato.

#### <a name="example"></a>Esempio

```cpp
// bitset_to_string.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );

   cout << "The ordered set of bits in the bitset<5> b1( 7 )"
        << "\n  that was generated by the number 7 is: ( "
        << b1 << " )" << endl;

   string s1;
   s1 =  b1.template to_string<char,
   char_traits<char>, allocator<char> >( );
   cout << "The string returned from the bitset b1"
        << "\n  by the member function to_string( ) is: "
        << s1 << "." << endl;
}
```

```Output
The ordered set of bits in the bitset<5> b1( 7 )
  that was generated by the number 7 is: ( 00111 )
The string returned from the bitset b1
  by the member function to_string( ) is: 00111.
```

### <a name="to_ullong"></a><a name="to_ullong"></a> to_ullong

Restituisce un **`unsigned long long`** valore che contiene lo stesso set di bit del contenuto dell'oggetto bitst.

```cpp
unsigned long long to_ullong() const;
```

#### <a name="return-value"></a>Valore restituito

Restituisce la somma dei valori di bit presenti nella sequenza di bit come **`unsigned long long`** . Questo **`unsigned long long`** valore creerebbe nuovamente gli stessi bit set se viene usato per inizializzare un set di bit.

#### <a name="exceptions"></a>Eccezioni

Genera un oggetto [overflow_error](overflow-error-class.md) se un bit nella sequenza di bit ha un valore di bit che non può essere rappresentato come valore di tipo **`unsigned long long`** .

#### <a name="remarks"></a>Osservazioni

Restituisce la somma dei valori di bit presenti nella sequenza di bit come **`unsigned long long`** .

### <a name="to_ulong"></a><a name="to_ulong"></a> to_ulong

Converte un oggetto bitst nell'Integer che genererebbe la sequenza di bit contenuta se utilizzata per inizializzare il bit.

```cpp
unsigned long to_ulong( ) const;
```

#### <a name="return-value"></a>Valore restituito

Intero che genera i bit in un oggetto bits se usato nell'inizializzazione del bit.

#### <a name="remarks"></a>Osservazioni

Se si applica la funzione membro, viene restituito il valore integer con la stessa sequenza di 1 e 0 cifre presente nella sequenza di bit contenuta nel bit.

La funzione membro genera un oggetto [overflow_error](overflow-error-class.md) se un bit nella sequenza di bit ha un valore di bit che non può essere rappresentato come valore di tipo **`unsigned long`** .

#### <a name="example"></a>Esempio

```cpp
// bitset_to_ulong.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 7 );

   cout << "The ordered set of bits in the bitset<5> b1( 7 )"
        << "\n  that was generated by the number 7 is: ( "
        << b1 << " )" << endl;

   unsigned long int i;
   i = b1.to_ulong( );
   cout << "The integer returned from the bitset b1,"
        << "\n  by the member function to_long( ), that"
        << "\n  generated the bits as a base two number is: "
        << i << "." << endl;
}
```

```Output
The ordered set of bits in the bitset<5> b1( 7 )
  that was generated by the number 7 is: ( 00111 )
The integer returned from the bitset b1,
  by the member function to_long( ), that
  generated the bits as a base two number is: 7.
```
