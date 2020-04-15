---
title: Classe moneypunct
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::moneypunct
- xlocmon/std::moneypunct::char_type
- xlocmon/std::moneypunct::string_type
- xlocmon/std::moneypunct::curr_symbol
- xlocmon/std::moneypunct::decimal_point
- xlocmon/std::moneypunct::do_curr_symbol
- xlocmon/std::moneypunct::do_decimal_point
- xlocmon/std::moneypunct::do_frac_digits
- xlocmon/std::moneypunct::do_grouping
- xlocmon/std::moneypunct::do_neg_format
- xlocmon/std::moneypunct::do_negative_sign
- xlocmon/std::moneypunct::do_pos_format
- xlocmon/std::moneypunct::do_positive_sign
- xlocmon/std::moneypunct::do_thousands_sep
- xlocmon/std::moneypunct::frac_digits
- xlocmon/std::moneypunct::grouping
- xlocmon/std::moneypunct::neg_format
- xlocmon/std::moneypunct::negative_sign
- xlocmon/std::moneypunct::pos_format
- xlocmon/std::moneypunct::positive_sign
- xlocmon/std::moneypunct::thousands_sep
helpviewer_keywords:
- std::moneypunct [C++]
- std::moneypunct [C++], char_type
- std::moneypunct [C++], string_type
- std::moneypunct [C++], curr_symbol
- std::moneypunct [C++], decimal_point
- std::moneypunct [C++], do_curr_symbol
- std::moneypunct [C++], do_decimal_point
- std::moneypunct [C++], do_frac_digits
- std::moneypunct [C++], do_grouping
- std::moneypunct [C++], do_neg_format
- std::moneypunct [C++], do_negative_sign
- std::moneypunct [C++], do_pos_format
- std::moneypunct [C++], do_positive_sign
- std::moneypunct [C++], do_thousands_sep
- std::moneypunct [C++], frac_digits
- std::moneypunct [C++], grouping
- std::moneypunct [C++], neg_format
- std::moneypunct [C++], negative_sign
- std::moneypunct [C++], pos_format
- std::moneypunct [C++], positive_sign
- std::moneypunct [C++], thousands_sep
ms.assetid: cf2650da-3e6f-491c-95d5-23e57f582ee6
ms.openlocfilehash: 3a277b2f97fd53c52b705051c30eb18faf6364d0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366244"
---
# <a name="moneypunct-class"></a>Classe moneypunct

Il modello di classe descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere le sequenze di tipo *CharType* usate per rappresentare un campo di input monetario o un campo di output monetario. Se il parametro di modello *Intl* è *true*, vengono rispettate le convenzioni internazionali.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, bool Intl>
class moneypunct;
```

### <a name="parameters"></a>Parametri

*Chartype*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*Intl*\
Flag che specifica se devono essere rispettate le convenzioni internazionali.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

L'oggetto statico const intl archivia il valore del parametro di modello *Intl*.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[moneypunct](#moneypunct)|Costruttore di oggetti di tipo `moneypunct`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[curr_symbol](#curr_symbol)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|
|[decimal_point](#decimal_point)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|
|[do_curr_symbol](#do_curr_symbol)|Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|
|[do_decimal_point](#do_decimal_point)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|
|[do_frac_digits](#do_frac_digits)|La funzione membro virtuale protetta restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|
|[do_grouping](#do_grouping)|La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale.|
|[do_neg_format](#do_neg_format)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|
|[do_negative_sign](#do_negative_sign)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|
|[do_pos_format](#do_pos_format)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|
|[do_positive_sign](#do_positive_sign)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|
|[do_thousands_sep](#do_thousands_sep)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|
|[frac_digits](#frac_digits)|Restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|
|[Raggruppamento](#grouping)|Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.|
|[neg_format](#neg_format)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|
|[negative_sign](#negative_sign)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|
|[pos_format](#pos_format)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|
|[positive_sign](#positive_sign)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|
|[thousands_sep](#thousands_sep)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="moneypunctchar_type"></a><a name="char_type"></a>moneypunct::char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="moneypunctcurr_symbol"></a><a name="curr_symbol"></a>moneypunct::curr_symbol

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.

```cpp
string_type curr_symbol() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente il simbolo di valuta.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_curr_symbol](#do_curr_symbol).

### <a name="example"></a>Esempio

```cpp
// moneypunct_curr_symbol.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const moneypunct < char, true > &mpunct = use_facet < moneypunct < char, true > >(loc);
   cout << loc.name( ) << " international currency symbol "<<  mpunct.curr_symbol( ) << endl;

   const moneypunct < char, false> &mpunct2 = use_facet < moneypunct < char, false> >(loc);
   cout << loc.name( ) << " domestic currency symbol "<<  mpunct2.curr_symbol( ) << endl;
};
```

## <a name="moneypunctdecimal_point"></a><a name="decimal_point"></a>moneypunct::decimal_point

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.

```cpp
CharType decimal_point() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_decimal_point](#do_decimal_point).

### <a name="example"></a>Esempio

```cpp
// moneypunct_decimal_pt.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc("german_germany");

   const moneypunct < char, true > &mpunct = use_facet
      < moneypunct < char, true > >(loc);
   cout << loc.name( ) << " international decimal point "
        << mpunct.decimal_point( ) << endl;

   const moneypunct < char, false> &mpunct2 = use_facet
      < moneypunct < char, false> >(loc);
   cout << loc.name( ) << " domestic decimal point "
        << mpunct2.decimal_point( ) << endl;
}
```

```Output
German_Germany.1252 international decimal point ,
German_Germany.1252 domestic decimal point ,
```

## <a name="moneypunctdo_curr_symbol"></a><a name="do_curr_symbol"></a>moneypunct::do_curr_symbol

Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.

```cpp
virtual string_type do_curr_symbol() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [curr_symbol](#curr_symbol), in cui la funzione membro virtuale viene chiamata da `curr_symbol`.

## <a name="moneypunctdo_decimal_point"></a><a name="do_decimal_point"></a>moneypunct::do_decimal_separatore

Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.

```cpp
virtual CharType do_decimal_point() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [decimal_point](#decimal_point), in cui la funzione membro virtuale viene chiamata da `decimal_point`.

## <a name="moneypunctdo_frac_digits"></a><a name="do_frac_digits"></a>moneypunct::do_frac_digits

Funzione membro virtuale protetta che restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.

```cpp
virtual int do_frac_digits() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [frac_digits](#frac_digits), in cui la funzione membro virtuale viene chiamata da `frac_digits`.

## <a name="moneypunctdo_grouping"></a><a name="do_grouping"></a>moneypunct::do_grouping

Funzione membro virtuale protetta che restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale.

```cpp
virtual string do_grouping() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

### <a name="example"></a>Esempio

Vedere l'esempio per il [raggruppamento](#grouping)di `grouping`, in cui la funzione membro virtuale viene chiamata da .

## <a name="moneypunctdo_neg_format"></a><a name="do_neg_format"></a>moneypunct::do_neg_format

Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.

```cpp
virtual pattern do_neg_format() const;
```

### <a name="return-value"></a>Valore restituito

La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di generazione di un campo di output di tipo valuta per un importo negativo. Ognuno dei quattro `pattern::field` elementi di può avere i valori:

- `none`per abbinare zero o più spazi o non generare nulla.

- `sign`per abbinare o generare un segno positivo o negativo.

- `space`per far corrispondere zero o più spazi o generare uno spazio.

- `symbol`per trovare una corrispondenza o generare un simbolo di valuta.

- `value`per abbinare o generare un valore monetario.

I componenti di un campo di output monetario vengono generati e i componenti di `pattern::field`un campo di input monetario vengono confrontati nell'ordine in cui questi elementi vengono visualizzati in . Ognuno dei `sign` `symbol`valori `value`, `none` , `space` e deve essere visualizzato esattamente una volta. Il `none` valore non deve essere visualizzato per primo. Il valore **space** non deve comparire come primo o ultimo. Se `Intl` è true, `symbol`l'ordine è , `sign`, `none`, quindi `value`.

La versione del modello di `moneypunct`\< **CharType**, **Intl**> restituisce `{`**money_base::symbol**, **money_base::sign**, **money_base::value**, **money_base::none**`}`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [neg_format](#neg_format), in cui la funzione membro virtuale viene chiamata da `neg_format`.

## <a name="moneypunctdo_negative_sign"></a><a name="do_negative_sign"></a>moneypunct::do_segno negativo

Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.

```cpp
virtual string_type do_negative_sign() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come segno negativo.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [negative_sign](#negative_sign), in cui la funzione membro virtuale viene chiamata da `negative_sign`.

## <a name="moneypunctdo_pos_format"></a><a name="do_pos_format"></a>moneypunct::do_pos_format

Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.

```cpp
virtual pattern do_pos_format() const;
```

### <a name="return-value"></a>Valore restituito

La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di generazione di un campo di output di tipo valuta per un importo positivo. (Determina anche come abbinare i componenti di un campo di input monetario.) La codifica è la stessa di [do_neg_format](#do_neg_format).

La versione del modello di moneypunct\< **CharType**, **Inputlterator**> restituisce `{`**money_base::symbol**, **money_base::sign**, **money_base::value**, **money_base::none**`}`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [pos_format](#pos_format), in cui la funzione membro virtuale viene chiamata da `pos_format`.

## <a name="moneypunctdo_positive_sign"></a><a name="do_positive_sign"></a>moneypunct::do_positive_sign

Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da usare come segno positivo.

```cpp
virtual string_type do_positive_sign() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come segno positivo.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [positive_sign](#positive_sign), in cui la funzione membro virtuale viene chiamata da `positive_sign`.

## <a name="moneypunctdo_thousands_sep"></a><a name="do_thousands_sep"></a>moneypunct::do_thousands_sep

Funzione membro virtuale protetta che restituisce un elemento specifico delle impostazioni locali da usare come separatore dei gruppi a sinistra della virgola decimale.

```cpp
virtual CharType do_thousands_sep() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specifico delle impostazioni locali da usare come separatore dei gruppi a sinistra della virgola decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [thousands_sep](#thousands_sep), in cui la funzione membro virtuale viene chiamata da `thousands_sep`.

## <a name="moneypunctfrac_digits"></a><a name="frac_digits"></a>moneypunct::frac_digits

Restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.

```cpp
int frac_digits() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_frac_digits](#do_frac_digits).

### <a name="example"></a>Esempio

```cpp
// moneypunct_frac_digits.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
       use_facet <moneypunct <char, true> >(loc);
   for (unsigned int i = 0; i <mpunct.grouping( ).length( ); i++ )
   {
      cout << loc.name( ) << " international grouping:\n the "
           << i <<"th group to the left of the radix character "
           << "is of size " << (int)(mpunct.grouping ( )[i])
           << endl;
   }
   cout << loc.name( ) << " international frac_digits\n to the right"
        << " of the radix character: "
        << mpunct.frac_digits ( ) << endl << endl;

   const moneypunct <char, false> &mpunct2 =
       use_facet <moneypunct <char, false> >(loc);
   for (unsigned int i = 0; i <mpunct2.grouping( ).length( ); i++ )
   {
      cout << loc.name( ) << " domestic grouping:\n the "
           << i <<"th group to the left of the radix character "
           << "is of size " << (int)(mpunct2.grouping ( )[i])
           << endl;
   }
   cout << loc.name( ) << " domestic frac_digits\n to the right"
        << " of the radix character: "
        << mpunct2.frac_digits ( ) << endl << endl;
}
```

```Output
German_Germany.1252 international grouping:
the 0th group to the left of the radix character is of size 3
German_Germany.1252 international frac_digits
to the right of the radix character: 2

German_Germany.1252 domestic grouping:
the 0th group to the left of the radix character is of size 3
German_Germany.1252 domestic frac_digits
to the right of the radix character: 2
```

## <a name="moneypunctgrouping"></a><a name="grouping"></a>moneypunct::raggruppamento

Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

```cpp
string grouping() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_grouping](#do_grouping).

### <a name="example"></a>Esempio

```cpp
// moneypunct_grouping.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
       use_facet <moneypunct <char, true> >( loc );
   for (unsigned int i = 0; i <mpunct.grouping( ).length( ); i++ )
   {
      cout << loc.name( ) << " international grouping:\n the "
           << i <<"th group to the left of the radix character "
           << "is of size " << (int)(mpunct.grouping ( )[i])
           << endl;
   }
   cout << loc.name( ) << " international frac_digits\n to the right"
        << " of the radix character: "
        << mpunct.frac_digits ( ) << endl << endl;

   const moneypunct <char, false> &mpunct2 =
       use_facet <moneypunct <char, false> >( loc );
   for (unsigned int i = 0; i <mpunct2.grouping( ).length( ); i++ )
   {
      cout << loc.name( ) << " domestic grouping:\n the "
           << i <<"th group to the left of the radix character "
           << "is of size " << (int)(mpunct2.grouping ( )[i])
           << endl;
   }
   cout << loc.name( ) << " domestic frac_digits\n to the right"
        << " of the radix character: "
        << mpunct2.frac_digits ( ) << endl << endl;
}
```

```Output
German_Germany.1252 international grouping:
the 0th group to the left of the radix character is of size 3
German_Germany.1252 international frac_digits
to the right of the radix character: 2

German_Germany.1252 domestic grouping:
the 0th group to the left of the radix character is of size 3
German_Germany.1252 domestic frac_digits
to the right of the radix character: 2
```

## <a name="moneypunctmoneypunct"></a><a name="moneypunct"></a>moneypunct::moneypunct

Costruttore di oggetti di tipo `moneypunct`.

```cpp
explicit moneypunct(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *_Refs* e il loro significato sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \>1: Questi valori non sono definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con [locale::facet](../standard-library/locale-class.md#facet_class)(_ *Refs*).

## <a name="moneypunctneg_format"></a><a name="neg_format"></a>moneypunct::neg_format

Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.

```cpp
pattern neg_format() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_neg_format](#do_neg_format).

### <a name="example"></a>Esempio

```cpp
// moneypunct_neg_format.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

using namespace std;

int main( ) {
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
      use_facet <moneypunct <char, true > >(loc);
   cout << loc.name( ) << " international negative number format: "
        << mpunct.neg_format( ).field[0]
        << mpunct.neg_format( ).field[1]
        << mpunct.neg_format( ).field[2]
        << mpunct.neg_format( ).field[3] << endl;

   const moneypunct <char, false> &mpunct2 =
      use_facet <moneypunct <char, false> >(loc);
   cout << loc.name( ) << " domestic negative number format: "
        << mpunct2.neg_format( ).field[0]
        << mpunct2.neg_format( ).field[1]
        << mpunct2.neg_format( ).field[2]
        << mpunct2.neg_format( ).field[3] << endl;
}
```

## <a name="moneypunctnegative_sign"></a><a name="negative_sign"></a>moneypunct::negative_sign

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.

```cpp
string_type negative_sign() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_negative_sign](#do_negative_sign).

### <a name="example"></a>Esempio

```cpp
// moneypunct_neg_sign.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

using namespace std;

int main( )
{
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
      use_facet <moneypunct <char, true> >(loc);
   cout << loc.name( ) << " international negative sign: "
        << mpunct.negative_sign( ) << endl;

   const moneypunct <char, false> &mpunct2 =
      use_facet <moneypunct <char, false> >(loc);
   cout << loc.name( ) << " domestic negative sign: "
        << mpunct2.negative_sign( ) << endl;

   locale loc2( "French" );

   const moneypunct <char, true> &mpunct3 =
      use_facet <moneypunct <char, true> >(loc2);
   cout << loc2.name( ) << " international negative sign: "
        << mpunct3.negative_sign( ) << endl;

   const moneypunct <char, false> &mpunct4 =
      use_facet <moneypunct <char, false> >(loc2);
   cout << loc2.name( ) << " domestic negative sign: "
        << mpunct4.negative_sign( ) << endl;
};
```

```Output
German_Germany.1252 international negative sign: -
German_Germany.1252 domestic negative sign: -
French_France.1252 international negative sign: -
French_France.1252 domestic negative sign: -
```

## <a name="moneypunctpos_format"></a><a name="pos_format"></a>moneypunct::pos_format

Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.

```cpp
pattern pos_format() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_pos_format](#do_pos_format).

### <a name="example"></a>Esempio

```cpp
// moneypunct_pos_format.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
      use_facet <moneypunct <char, true> >(loc);
   cout << loc.name( ) << " international positive number format: "
        << mpunct.pos_format( ).field[0]
        << mpunct.pos_format( ).field[1]
        << mpunct.pos_format( ).field[2]
        << mpunct.pos_format( ).field[3] << endl;

   const moneypunct <char, false> &mpunct2 =
      use_facet <moneypunct <char, false> >(loc);
   cout << loc.name( ) << " domestic positive number format: "
        << mpunct2.pos_format( ).field[0]
        << mpunct2.pos_format( ).field[1]
        << mpunct2.pos_format( ).field[2]
        << mpunct2.pos_format( ).field[3] << endl;
}
```

## <a name="moneypunctpositive_sign"></a><a name="positive_sign"></a>moneypunct::positive_sign

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.

```cpp
string_type positive_sign() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di segno positivo.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_positive_sign](#do_positive_sign).

### <a name="example"></a>Esempio

```cpp
// moneypunct_pos_sign.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

using namespace std;

int main( )
{
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
      use_facet <moneypunct <char, true > >(loc);
   cout << loc.name( ) << " international positive sign:"
        << mpunct.positive_sign( ) << endl;

   const moneypunct <char, false> &mpunct2 =
      use_facet <moneypunct <char, false> >(loc);
   cout << loc.name( ) << " domestic positive sign:"
        << mpunct2.positive_sign( ) << endl;

   locale loc2( "French" );

   const moneypunct <char, true> &mpunct3 =
      use_facet <moneypunct <char, true> >(loc2);
   cout << loc2.name( ) << " international positive sign:"
        << mpunct3.positive_sign( ) << endl;

   const moneypunct <char, false> &mpunct4 =
      use_facet <moneypunct <char, false> >(loc2);
   cout << loc2.name( ) << " domestic positive sign:"
        << mpunct4.positive_sign( ) << endl;
};
```

```Output
German_Germany.1252 international positive sign:
German_Germany.1252 domestic positive sign:
French_France.1252 international positive sign:
French_France.1252 domestic positive sign:
```

## <a name="moneypunctstring_type"></a><a name="string_type"></a>moneypunct::string_type

Tipo che descrive una stringa contenente caratteri di tipo **CharType**.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie delle sequenze di punteggiatura.

## <a name="moneypunctthousands_sep"></a><a name="thousands_sep"></a>moneypunct::thousands_sep

Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.

```cpp
CharType thousands_sep() const;
```

### <a name="return-value"></a>Valore restituito

Sequenza di elementi specifica delle impostazioni locali da usare come separatore delle migliaia.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_thousands_sep](#do_thousands_sep).

### <a name="example"></a>Esempio

```cpp
// moneypunct_thou_sep.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const moneypunct <char, true> &mpunct =
       use_facet <moneypunct <char, true > >(loc);
   cout << loc.name( ) << " international thousands separator: "
        << mpunct.thousands_sep( ) << endl;

   const moneypunct <char, false> &mpunct2 =
      use_facet <moneypunct <char, false> >(loc);
   cout << loc.name( ) << " domestic thousands separator: "
        << mpunct2.thousands_sep( ) << endl << endl;

   locale loc2( "english_canada" );

   const moneypunct <char, true> &mpunct3 =
       use_facet <moneypunct <char, true> >(loc2);
   cout << loc2.name( ) << " international thousands separator: "
        << mpunct3.thousands_sep( ) << endl;

   const moneypunct <char, false> &mpunct4 =
      use_facet <moneypunct <char, false> >(loc2);
   cout << loc2.name( ) << " domestic thousands separator: "
        << mpunct4.thousands_sep( ) << endl;
}
```

```Output
German_Germany.1252 international thousands separator: .
German_Germany.1252 domestic thousands separator: .

English_Canada.1252 international thousands separator: ,
English_Canada.1252 domestic thousands separator: ,
```

## <a name="see-also"></a>Vedere anche

[\<>delle impostazioni locali](../standard-library/locale.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)
