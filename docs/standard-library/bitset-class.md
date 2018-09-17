---
title: Classe bitset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6a385ac850148caab582821b039fece5709f75b6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45701662"
---
# <a name="bitset-class"></a>Classe bitset

Descrive un tipo di oggetto che archivia una sequenza formata da un numero fisso di bit che forniscono un modo compatto di mantenere i flag per un set di elementi o condizioni. La classe bitset supporta operazioni su oggetti di tipo bitset che contengono una raccolta di bit e forniscono un accesso a tempo costante a ogni bit.

## <a name="syntax"></a>Sintassi

```cpp
template <size_t N>
class bitset
```

### <a name="parameters"></a>Parametri

*N*<br/>
Specifica il numero di bit nell'oggetto bitset con un valore integer diverso da zero di tipo `size_t` che deve essere noto in fase di compilazione.

## <a name="remarks"></a>Note

A differenza dell'analoga [classe vector\<bool>](../standard-library/vector-bool-class.md), la classe bitset non ha iteratori e non è un contenitore della libreria standard C++. Un'altra differenza rispetto a vector\<bool> riguarda le dimensioni, che vengono fissate in fase di compilazione in base alle dimensioni specificate dal parametro di modello *N* quando viene dichiarato **bitset\<N\>**.

Un bit viene impostato se il valore è 1 e reimpostato se il valore è 0. Capovolgere o invertire un bit significa modificarne il valore da 1 a 0 o da 0 a 1. I bit *N* in un bitset vengono indicizzati dai valori Integer da 0 a *N* - 1, dove 0 indicizza la prima posizione del bit e *N* - 1 la posizione finale del bit.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[bitset](#bitset)|Costruisce un oggetto di classe `bitset\<N>` e inizializza i bit a zero, a un valore specificato o a valori ottenuti dai caratteri in una stringa.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[element_type](#element_type)|Un tipo che è un sinonimo del tipo di dati **bool** e può essere usato per fare riferimento ai bit di elemento in un `bitset`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[all](#all)|Verifica tutti i bit in questo `bitset` per determinare se sono tutti impostati su **true**.|
|[any](#any)|La funzione membro verifica se nella sequenza sono inclusi bit impostati su 1.|
|[count](#count)|La funzione membro restituisce il numero di bit impostati nella sequenza di bit.|
|[flip](#flip)|Inverte il valore di tutti i bit in `bitset` o un singolo bit in una posizione specificata.|
|[none](#none)|Verifica che nessun bit sia stato impostato su 1 in un oggetto `bitset`.|
|[reset](#reset)|Reimposta tutti i bit in `bitset` su 0 o un bit in una posizione specificata su 0.|
|[set](#set)|Imposta tutti i bit in `bitset` su 1 o un bit in una posizione specificata su 1.|
|[size](#size)|Restituisce il numero di bit in un oggetto `bitset`.|
|[test](#test)|Verifica se il bit in una posizione specificata in `bitset` è impostato su 1.|
|[to_string](#to_string)|Converte un oggetto `bitset` in una rappresentazione di stringa.|
|[to_ullong](#to_ullong)|Restituisce la somma dei valori di bit nel `bitset` come un **long long senza segno**.|
|[to_ulong](#to_ulong)|Converte un `bitset` dell'oggetto per il **long senza segno** che genera la sequenza di bit contenuti se usati per inizializzare il `bitset`.|

### <a name="member-classes"></a>Classi membro

|Classe di membro|Descrizione|
|-|-|
|[reference](#reference)|Classe proxy che fornisce i riferimenti ai bit contenuti in un `bitset` usata per accedere e modificare i singoli bit come classe helper per `operator[]` della classe `bitset`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](#op_neq)|Verifica un `bitset` di destinazione per la disuguaglianza con un `bitset` specificato.|
|[operator&=](#op_and_eq)|Esegue una combinazione bit per bit di bitset con l'operazione logica `AND`.|
|[operator<<](#op_lshift)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|
|[operator<<=](#op_lshift_eq)|Sposta i bit in un `bitset` a sinistra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|
|[operator==](#op_eq_eq)|Verifica un `bitset` di destinazione per l'uguaglianza con un `bitset` specificato.|
|[operator>> ](#op_rshift)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato in un nuovo `bitset`.|
|[operator>>=](#op_rshift_eq)|Sposta i bit in un `bitset` a destra di un numero di posizioni specificato e restituisce il risultato nel `bitset` di destinazione.|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento a un bit in una posizione specificata in un `bitset` se il `bitset` è modificabile. In caso contrario, restituisce il valore del bit in tale posizione.|
|[operator^=](#op_xor_eq)|Esegue una combinazione bit per bit di bitset con l'operazione esclusiva `OR`.|
|[operator&#124;=](#op_or_eq')|Esegue una combinazione bit per bit di bitset con l'operazione inclusiva `OR`.|
|[operator~](#op_dtor)|Inverte tutti i bit in un `bitset` di destinazione e restituisce il risultato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<bitset>

**Spazio dei nomi:** std

## <a name="all"></a>  bitset::all

Verifica tutti i bit nel bitset per determinare se sono tutti impostati su true.

```cpp
bool all() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce true se tutti i bit dell'insieme sono true. Restituisce **false** se uno o più bit sono false.

## <a name="any"></a>  bitset::any

Verifica se nella sequenza sono inclusi bit impostati su 1.

```cpp
bool any() const;
```

### <a name="return-value"></a>Valore restituito

**true** se qualsiasi bit nel bitset è impostato su 1, **false** se tutti i bit sono 0.

### <a name="example"></a>Esempio

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

## <a name="bitset"></a>  bitset::bitset

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

### <a name="parameters"></a>Parametri

*Val*<br/>
Intero senza segno la cui rappresentazione in base due viene usata per inizializzare i bit del bitset in fase di costruzione.

*str*<br/>
La stringa di zero e quelli usati per inizializzare i valori di bit del bitset.

*_CStr*<br/>
La stringa di zero di tipo C e quelli usati per inizializzare i valori di bit del bitset.

*POS*<br/>
La posizione del carattere nella stringa, contando da sinistra a destra e partendo da zero, usata per inizializzare il primo bit del bitset.

*count*<br/>
Il numero di caratteri nella stringa che si usa per specificare i valori iniziali per i bit del bitset.

*_Zero*<br/>
Il carattere usato per rappresentare uno zero. Il valore predefinito è "0".

*C_onnessa*<br/>
Il carattere usato per rappresentare un uno. Il valore predefinito è "1".

### <a name="remarks"></a>Note

Si possono usare tre costruttori per creare oggetti della classe `bitset\<N>`:

- Il primo costruttore non accetta alcun parametro, costruisce un oggetto della classe `bitset\<N>` e inizializza tutti i bit N su un valore predefinito pari a zero.

- Il secondo costruttore crea un oggetto della classe `bitset\<N>` e inizializza i bit usando il singolo **long long senza segno** parametro.

- Il terzo costruttore crea un oggetto della classe `bitset\<N>`, inizializzando i bit N su valori che corrispondono ai caratteri specificati in una stringa di caratteri di tipo c di zero e uno. Il costruttore viene chiamato senza eseguire il cast di stringa in un tipo stringa: `bitset<5> b5("01011");`

Sono anche disponibili due modelli di costruttore:

- Il primo modello di costruttore costruisce un oggetto della classe `bitset\<N>` e inizializza i bit dai caratteri di una stringa di zero e uno. Se i caratteri della stringa sono diversi da 0 o 1, il costruttore genera un oggetto della classe [invalid argument](../standard-library/invalid-argument-class.md). Se la posizione specificata (*POS*) è oltre la lunghezza della stringa, il costruttore genera un oggetto della classe [out_of_range](../standard-library/out-of-range-class.md). Il costruttore imposta solo i bit nella posizione *j* nel bitset per cui il carattere nella stringa in posizione `_Pos + j` è 1. Per impostazione predefinita *POS* è 0.

- Il secondo modello costruttore è simile al primo, ma include un parametro aggiuntivo (*conteggio*) che consente di specificare il numero di bit da inizializzare. Include anche due parametri facoltativi, *_Zero* e *c_onnessa*, che indicano quale carattere *str* deve essere interpretato come 0 bit e un bit 1, rispettivamente.

### <a name="example"></a>Esempio

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

## <a name="count"></a>  bitset::count

Restituisce il numero di bit impostati nella sequenza di bit.

```cpp
size_t count() const;
```

### <a name="return-value"></a>Valore restituito

Numero di bit impostati nella sequenza di bit.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro bitset::count.

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

## <a name="element_type"></a>  bitset::element_type

Un tipo che è un sinonimo del tipo di dati **bool** e può essere usato per fare riferimento ai bit di elemento in un bitset.

```cpp
typedef bool element_type;
```

### <a name="example"></a>Esempio

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

## <a name="flip"></a>  bitset::flip

Inverte il valore di tutti i bit in un bitset o un singolo bit in una posizione specificata.

```cpp
bitset\<N>& flip();
bitset\<N>& flip(size_t _Pos);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
La posizione del bit il cui valore viene invertito.

### <a name="return-value"></a>Valore restituito

Una copia del bitset modificato per cui è stata richiamata la funzione membro.

### <a name="remarks"></a>Note

La seconda funzione membro genera un' [out_of_range](../standard-library/out-of-range-class.md) eccezione se la posizione specificata come parametro è maggiore della dimensione *N* del **bitset\<**  *N* **>** il cui bit è stato invertito.

### <a name="example"></a>Esempio

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

## <a name="none"></a>  bitset::none

Verifica che nessun bit sia stato impostato su 1 in un oggetto bitset.

```cpp
bool none() const;
```

### <a name="return-value"></a>Valore restituito

**true** se nessun bit del bitset è stato impostato su 1, **false** se almeno un bit è stato impostato su 1.

### <a name="example"></a>Esempio

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

## <a name="op_neq"></a>  bitset::operator!=

Verifica un bitset di destinazione per la disuguaglianza con un bitset specificato.

```cpp
bool operator!=(const bitset\<N>& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il bitset che deve essere confrontato con il bitset di destinazione per stabilire la disuguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se i bitset sono diversi, **false** se sono uguali.

### <a name="remarks"></a>Note

I bitset devono avere le stesse dimensioni per poter verificare la disuguaglianza con la funzione dell'operatore membro.

### <a name="example"></a>Esempio

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

## <a name="op_and_eq"></a>  bitset::operator&amp;=

Esegue una combinazione bit per bit di bitset con l'operazione logica `AND`.

```cpp
bitset\<N>& operator&=(const bitset\<N>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato che risulta dal bit per bit `AND` operazione con il bitset specificato come parametro.

### <a name="remarks"></a>Note

Due bit combinati dal `AND` operatore return **true** se ogni bit è true; in caso contrario, la combinazione restituisce **false**.

I BitSet devono avere le stesse dimensioni per essere combinati bit per bit con la `AND` operatore usando la funzione dell'operatore membro.

### <a name="example"></a>Esempio

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

## <a name="op_lshift"></a> bitset::operator\<\<

Sposta i bit in un bitset a sinistra di un numero di posizioni specificato e restituisce il risultato in un nuovo bitset.

```cpp
bitset\<N> operator<<(size_t _Pos) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il numero di posizioni a sinistra di cui verranno spostati i bit nel bitset.

### <a name="return-value"></a>Valore restituito

Il bitset modificato con i bit spostati a sinistra del numero di posizioni richiesto.

### <a name="remarks"></a>Note

La funzione dell'operatore membro restituisce **bitset**( **\*this**) **<<= pos,** dove [<<=](#op_lshift_eq) sposta i bit in un bitset a sinistra di un numero di posizioni specificate e restituisce il risultato nel bitset di destinazione.

### <a name="example"></a>Esempio

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

## <a name="op_lshift_eq"></a>  bitset::operator&lt;&lt;=

Sposta i bit in un bitset a sinistra di un numero di posizioni specificato e restituisce il risultato nel bitset di destinazione.

```cpp
bitset\<N>& operator<<=(size_t _Pos);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il numero di posizioni a sinistra di cui verranno spostati i bit nel bitset.

### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato in modo che i bit risultano spostati a sinistra del numero di posizioni richiesto.

### <a name="remarks"></a>Note

Se non esiste un elemento da spostare nella posizione, la funzione cancella il bit impostandolo su 0.

### <a name="example"></a>Esempio

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

## <a name="op_eq_eq"></a>  bitset::operator==

Verifica un bitset di destinazione per l'uguaglianza con un bitset specificato.

```cpp
bool operator==(const bitset\<N>& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il bitset che deve essere confrontato con il bitset di destinazione per stabilire l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se i bitset sono uguali, **false** se sono diversi.

### <a name="remarks"></a>Note

I bitset devono avere le stesse dimensioni per poter verificare l'uguaglianza con la funzione dell'operatore membro.

### <a name="example"></a>Esempio

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

## <a name="op_rshift"></a>  bitset::operator&gt;&gt;

Sposta i bit in un bitset a destra di un numero di posizioni specificato e restituisce il risultato in un nuovo bitset.

```cpp
bitset\<N> operator>>(size_t _Pos) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il numero di posizioni a destra di cui verranno spostati i bit nel bitset.

### <a name="return-value"></a>Valore restituito

Un nuovo bitset in cui i bit risultano spostati a destra del numero di posizioni richiesto in relazione al bitset di destinazione.

### <a name="example"></a>Esempio

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

## <a name="op_rshift_eq"></a>  bitset::operator&gt;&gt;=

Sposta i bit in un bitset a destra di un numero di posizioni specificato e restituisce il risultato nel bitset di destinazione.

```cpp
bitset\<N>& operator>>=(size_t _Pos);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il numero di posizioni a destra di cui verranno spostati i bit nel bitset.

### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato in modo che i bit risultano spostati a destra del numero di posizioni richiesto.

### <a name="remarks"></a>Note

Se non esiste un elemento da spostare nella posizione, la funzione cancella il bit impostandolo su 0.

### <a name="example"></a>Esempio

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

## <a name="op_at"></a>  bitset::operator[]

Restituisce un riferimento a un bit in una posizione specificata in un bitset se il bitset è modificabile. In caso contrario, restituisce il valore del bit in tale posizione.

```cpp
bool operator[](size_t _Pos) const;
reference operator[](size_t _Pos);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
La posizione in cui viene individuato il bit all'interno del bitset.

### <a name="remarks"></a>Note

Quando si definisce [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md) come 1 o 2 nella build, si verifica un errore di runtime nel file eseguibile se si tenta di accedere a un elemento esterno ai limiti del bitset. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

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

## <a name="op_xor_eq"></a>  bitset::operator^=

Esegue una combinazione bit per bit di bitset con l'operazione esclusiva `OR`.

```cpp
bitset\<N>& operator^=(const bitset\<N>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato che risulta dall'operazione `OR` bit per bit esclusiva con il bitset specificato come parametro.

### <a name="remarks"></a>Note

Due bit combinati dall'operatore **OR** esclusivo restituiscono **true** se almeno uno, ma non entrambi, dei bit è **true**, in caso contrario la combinazione restituisce **false**.

I bitset devono avere le stesse dimensioni per essere combinati bit per bit con l'operatore `OR` esclusivo usando la funzione dell'operatore membro.

### <a name="example"></a>Esempio

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

## <a name="op_or_eq"></a>  bitset::operator&#124;=

Esegue una combinazione bit per bit di bitset con l'operazione inclusiva `OR`.

```cpp
bitset\<N>& operator|=(const bitset\<N>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il bitset che deve essere combinato bit per bit con il bitset di destinazione.

### <a name="return-value"></a>Valore restituito

Il bitset di destinazione modificato che risulta dall'operazione `OR` bit per bit inclusiva con il bitset specificato come parametro.

### <a name="remarks"></a>Note

Due bit combinati dall'operatore `OR` inclusivo restituiscono **true** se almeno uno dei bit è **true**; se entrambi i bit sono **false**, la combinazione restituisce **false**.

I bitset devono avere le stesse dimensioni per essere combinati bit per bit con l'operatore `OR` inclusivo usando la funzione dell'operatore membro.

### <a name="example"></a>Esempio

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

## <a name="op_dtor"></a>  bitset::operator~

Inverte tutti i bit in un bitset di destinazione e restituisce il risultato.

```cpp
bitset\<N> operator~() const;
```

### <a name="return-value"></a>Valore restituito

Il bitset con tutti i bit invertiti rispetto al bitset di destinazione.

### <a name="example"></a>Esempio

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

## <a name="reference"></a>  bitset::reference

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

### <a name="parameters"></a>Parametri

*Val*<br/>
Il valore dell'oggetto di tipo **bool** da assegnare a un bit in un bitset.

*_Bitref*<br/>
Un riferimento del form *x [i]* al bit nella posizione *i* nel bitset *x*.

### <a name="return-value"></a>Valore restituito

Un riferimento al bit nel bitset specificato dalla posizione dell'argomento per la prima, seconda e quinta funzione membro della classe reference e **true** o **false**, in modo da riflettere il valore del bit modificato nel bitset per la terza e quarta funzione membro della classe reference.

### <a name="remarks"></a>Note

La classe `reference` esiste solo come classe helper per il bitset `operator[]`. La classe member descrive un oggetto che può accedere a un singolo bit all'interno di un bitset. Let *b* da un oggetto di tipo **bool**, *x* e *y* gli oggetti di tipo **bitset\<**  *N* **>**, e *ho* e *j* posizioni valide all'interno di tale tipo di oggetto. La notazione *x [i]* fa riferimento a bit nella posizione *i* nel bitset *x*. Le funzioni membro della classe `reference` specificano, in ordine, le operazioni seguenti:

|Operazione|Definizione|
|---------------|----------------|
|*x*[*i*] = *b*|Gli archivi **bool** valore *b* nella posizione di bit *ho* BitSet *x*.|
|*x*[*i*] = *y*[*j*]|Memorizza il valore del bit *y*[ *j*] nella posizione di bit *i* nel bitset *x*.|
|*b* = ~ *x*[*i*]|Memorizza il valore capovolto del bit *x*[ *ho*] nel **bool** *b*.|
|*b* = *x*[*i*]|Archivia il valore del bit *x*[ *ho*] nel **bool** *b*.|
|*x*[*i*]. `flip`( )|Memorizza il valore capovolto del bit *x*[ *i*] nella posizione di bit *i* in *x*.|

### <a name="example"></a>Esempio

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

## <a name="reset"></a>  bitset::reset

Reimposta su 0 tutti i bit in un bitset o reimposta un bit in una posizione specificata su 0.

```cpp
bitset\<N>& reset();
bitset\<N>& reset(size_t _Pos);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
La posizione del bit nel bitset da reimpostare su 0.

### <a name="return-value"></a>Valore restituito

Una copia del bitset per cui è stata richiamata la funzione membro.

### <a name="remarks"></a>Note

La seconda funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md) se la posizione specificata è maggiore della dimensione del bitset.

### <a name="example"></a>Esempio

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

## <a name="set"></a>  bitset::set

Imposta su 1 tutti i bit in un bitset o imposta un bit in una posizione specificata su 1.

```cpp
bitset\<N>& set();

bitset\<N>& set(
    size_t _Pos,
    bool val = true);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
La posizione del bit nel bitset da impostare su un valore assegnato.

*Val*<br/>
Il valore da assegnare al bit nella posizione specificata.

### <a name="return-value"></a>Valore restituito

Una copia del bitset per cui è stata richiamata la funzione membro.

### <a name="remarks"></a>Note

La seconda funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md) se la posizione specificata è maggiore della dimensione del bitset.

### <a name="example"></a>Esempio

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

## <a name="size"></a>  bitset::size

Restituisce il numero di bit in un oggetto bitset.

```cpp
size_t size() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di bit, *N*, in un bitset\<N>.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro bitset::size.

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

## <a name="test"></a>  bitset::test

Verifica se il bit in una posizione specificata in un bitset è impostato su 1.

```cpp
bool test(size_t _Pos) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
La posizione del bit nel bitset di cui si deve verificare il valore.

### <a name="return-value"></a>Valore restituito

**true** se il bit specificato dalla posizione dell'argomento è impostato su 1, in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione membro genera un'eccezione [out_of_range](../standard-library/out-of-range-class.md)
