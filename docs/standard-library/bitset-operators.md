---
title: Operatori &lt;bitset&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- bitset/std::operator&amp;
- bitset/std::operator&gt;&gt;
- bitset/std::operator&lt;&lt;
- bitset/std::operator^
- bitset/std::operator|
dev_langs:
- C++
ms.assetid: 84fe6a13-6f6e-4cdc-bf8f-6f65ab1134d4
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::operator&amp; (bitset)
- std::operator&gt;&gt; (bitset)
- std::operator&lt;&lt; (bitset)
ms.workload:
- cplusplus
ms.openlocfilehash: 3056546e5a543c0058f789e293e0a63a3d53283a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ltbitsetgt-operators"></a>Operatori &lt;bitset&gt;

||||
|-|-|-|
|[operator&amp;](#op_amp)|[operator&gt;&gt;](#op_gt_gt)|[operator&lt;&lt;](#op_lt_lt)|
|[operator^](#op_xor)|[operator|](#op_or)|

## <a name="op_amp"></a>  operator&amp;

Esegue un'operazione `AND` bit per bit tra due bitset.

```cpp
template <size_t size>
bitset<size>
operator&(
    const bitset<size>& left,
    const bitset<size>& right);
```

### <a name="parameters"></a>Parametri

`left` Il primo di due BitSet cui rispettivi elementi devono essere combinati con i bit per bit `AND`.

`right` Secondo di due oggetti valarray equivalenti cui rispettivi elementi devono essere combinati con i bit per bit `AND`.

### <a name="return-value"></a>Valore restituito

Un bitset i cui elementi sono il risultato dell'esecuzione dell'operazione `AND` sugli elementi corrispondenti di `left` e `right`.

### <a name="example"></a>Esempio

```cpp
// bitset_and.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 & b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0001
```

## <a name="op_lt_lt"></a>  operator&lt;&lt;

Inserisce una rappresentazione di testo della sequenza di bit nel flusso di output.

```

template <class CharType, class Traits, size_t N>
basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& ostr,
    const bitset<N>& right);
```

### <a name="parameters"></a>Parametri

`right` Un oggetto di tipo **bitset\<N >** che è possibile inserire nel flusso di output sotto forma di stringa.

### <a name="return-value"></a>Valore restituito

Una rappresentazione di testo della sequenza di bit in **ostr**.

### <a name="remarks"></a>Note

La funzione di modello è in rapporto di overload con **operator<<**, consentendo di scrivere un bitset senza prima convertirlo in una stringa. La funzione di modello consente di gestire in modo efficace quanto segue:

**ostr** << _ *Right*. [to_string](bitset-class.md) < **CharType**, **Traits**, **allocator**\< **CharType**> > ( )

### <a name="example"></a>Esempio

```cpp
// bitset_op_insert.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 9 );

   // bitset inserted into output stream directly
   cout << "The ordered set of bits in the bitset<5> b1(9)"
        << "\n can be output with the overloaded << as: ( "
        << b1 << " )" << endl;

   // Compare converting bitset to a string before
   // inserting it into the output steam
   string s1;
   s1 =  b1.template to_string<char,
      char_traits<char>, allocator<char> >( );
   cout << "The string returned from the bitset b1"
        << "\n by the member function to_string( ) is: "
        << s1 << "." << endl;
}
```

## <a name="op_gt_gt"></a>  operator&gt;&gt;

Legge una stringa di caratteri di bit in un bitset.

```

template <class CharType, class Traits, size_t Bits>
basic_istream<CharType, Traits>& operator>> (
    basic_istream<CharType, Traits>&
_Istr,
    bitset<N>&
    right);
```

### <a name="parameters"></a>Parametri

`_Istr` Stringa che viene inserita il flusso di input da inserire nel bitset.

`right` Bitset che riceve i bit dal flusso di input.

### <a name="return-value"></a>Valore restituito

La funzione di modello restituisce la stringa `_Istr`.

### <a name="remarks"></a>Note

La funzione di modello è in rapporto di overload con **operator>>** per memorizzare nel bitset _ *Right* il valore bitset( `str`), dove `str` è un oggetto di tipo [basic_string](basic-string-class.md) < **CharType**, **Traits**, **allocator**\< **CharType**> > **&** estratto da `_Istr`.

La funzione di modello estrae gli elementi da `_Istr` e li inserisce nel bitset fino a quando:

- Tutti gli elementi di bit sono stati estratti dal flusso di input e memorizzati nel bitset.

- Il bitset viene riempito con i bit provenienti dal flusso di input.

- Viene rilevato un elemento input diverso da 0 o 1.

### <a name="example"></a>Esempio

```cpp
#include <bitset>
#include <iostream>
#include <string>

using namespace std;
int main()
{

   bitset<5> b1;
   cout << "Enter string of (0 or 1) bits for input into bitset<5>.\n"
        << "Try bit string of length less than or equal to 5,\n"
        << " (for example: 10110): ";
   cin >>  b1;

   cout << "The ordered set of bits entered from the "
        << "keyboard\n has been input into bitset<5> b1 as: ( "
        << b1 << " )" << endl;

   // Truncation due to longer string of bits than length of bitset
   bitset<2> b3;
   cout << "Enter string of bits (0 or 1) for input into bitset<2>.\n"
        << " Try bit string of length greater than 2,\n"
        << " (for example: 1011): ";
   cin >>  b3;

   cout << "The ordered set of bits entered from the "
        << "keyboard\n has been input into bitset<2> b3 as: ( "
        << b3 << " )" << endl;

   // Flushing the input stream
   char buf[100];
   cin.getline(&buf[0], 99);

   // Truncation with non-bit value
   bitset<5> b2;
   cout << "Enter a string for input into  bitset<5>.\n"
        << " that contains a character than is NOT a 0 or a 1,\n "
        << " (for example: 10k01): ";
   cin >>  b2;

   cout << "The string entered from the keyboard\n"
        << " has been input into bitset<5> b2 as: ( "
        << b2 << " )" << endl;
}
```

## <a name="op_xor"></a>  operator^

Esegue un'operazione `EXCLUSIVE-OR` bit per bit tra due bitset.

```cpp
template <size_t size>
bitset<size>
operator^(
    const bitset<size>& left,
    const bitset<size>& right);
```

### <a name="parameters"></a>Parametri

`left` Il primo di due BitSet cui rispettivi elementi devono essere combinati con i bit per bit `EXCLUSIVE-OR`.

`right` Secondo di due oggetti valarray equivalenti cui rispettivi elementi devono essere combinati con i bit per bit `EXCLUSIVE-OR`.

### <a name="return-value"></a>Valore restituito

Un bitset i cui elementi sono il risultato dell'esecuzione dell'operazione `EXCLUSIVE-OR` sugli elementi corrispondenti di `left` e `right`.

### <a name="example"></a>Esempio

```cpp
// bitset_xor.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 ^ b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0110
```

## <a name="op_or"></a>  operator|

Esegue un'operazione `OR` bit per bit tra due bitset.

```cpp
template <size_t size>
bitset<size>
operator|(
    const bitset<size>& left,
    const bitset<size>& right);
```

### <a name="parameters"></a>Parametri

`left` Il primo di due BitSet cui rispettivi elementi devono essere combinati con i bit per bit `OR`.

`right` Secondo di due oggetti valarray equivalenti cui rispettivi elementi devono essere combinati con i bit per bit `OR`.

### <a name="return-value"></a>Valore restituito

Un bitset i cui elementi sono il risultato dell'esecuzione dell'operazione `OR` sugli elementi corrispondenti di `left` e `right`.

### <a name="example"></a>Esempio

```cpp
// bitset_or.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 | b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0111
```

## <a name="see-also"></a>Vedere anche

[\<bitset>](../standard-library/bitset.md)<br/>
