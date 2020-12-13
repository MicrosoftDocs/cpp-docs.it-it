---
description: 'Altre informazioni su: classe numpunct'
title: Classe numpunct
ms.date: 11/04/2016
f1_keywords:
- xlocnum/std::numpunct
- xlocnum/std::numpunct::char_type
- xlocnum/std::numpunct::string_type
- xlocnum/std::numpunct::decimal_point
- xlocnum/std::numpunct::do_decimal_point
- xlocnum/std::numpunct::do_falsename
- xlocnum/std::numpunct::do_grouping
- xlocnum/std::numpunct::do_thousands_sep
- xlocnum/std::numpunct::do_truename
- xlocnum/std::numpunct::falsename
- xlocnum/std::numpunct::grouping
- xlocnum/std::numpunct::thousands_sep
- xlocnum/std::numpunct::truename
helpviewer_keywords:
- std::numpunct [C++]
- std::numpunct [C++], char_type
- std::numpunct [C++], string_type
- std::numpunct [C++], decimal_point
- std::numpunct [C++], do_decimal_point
- std::numpunct [C++], do_falsename
- std::numpunct [C++], do_grouping
- std::numpunct [C++], do_thousands_sep
- std::numpunct [C++], do_truename
- std::numpunct [C++], falsename
- std::numpunct [C++], grouping
- std::numpunct [C++], thousands_sep
- std::numpunct [C++], truename
ms.assetid: 73fb93cc-ac11-4c98-987c-bfa6267df596
ms.openlocfilehash: 20ec48624734a533f81a1c3c7239eb0c05183de0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338023"
---
# <a name="numpunct-class"></a>Classe numpunct

Modello di classe che descrive un oggetto che può fungere da facet locale per descrivere le sequenze di tipo `CharType` utilizzate per rappresentare le informazioni sulla formattazione e la punteggiatura delle espressioni numeriche e booleane.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class numpunct : public locale::facet;
```

### <a name="parameters"></a>Parametri

*CharType*\
Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

## <a name="remarks"></a>Commenti

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[numpunct](#numpunct)|Costruttore per oggetti di tipo `numpunct`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[decimal_point](#decimal_point)|Restituisce un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.|
|[do_decimal_point](#do_decimal_point)|Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.|
|[do_falsename](#do_falsename)|Funzione membro virtuale protetta chiamata per restituire una stringa da utilizzare come rappresentazione testuale del valore **`false`** .|
|[do_grouping](#do_grouping)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di una virgola decimale.|
|[do_thousands_sep](#do_thousands_sep)|Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.|
|[do_truename](#do_truename)|Funzione membro virtuale protetta chiamata per restituire una stringa da utilizzare come rappresentazione testuale del valore **`true`** .|
|[falsename](#falsename)|Restituisce una stringa da utilizzare come rappresentazione testuale del valore **`false`** .|
|[raggruppamento](#grouping)|Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.|
|[thousands_sep](#thousands_sep)|Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.|
|[truename](#truename)|Restituisce una stringa da utilizzare come rappresentazione testuale del valore **`true`** .|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="numpunctchar_type"></a><a name="char_type"></a> numpunct:: char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello **CharType.**

## <a name="numpunctdecimal_point"></a><a name="decimal_point"></a> numpunct: ecimal_point:d

Restituisce un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.

```cpp
CharType decimal_point() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specifico delle impostazioni locali da usare come virgola decimale.

### <a name="remarks"></a>Commenti

La funzione membro restituisce [do_decimal_point](#do_decimal_point).

### <a name="example"></a>Esempio

```cpp
// numpunct_decimal_point.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const numpunct <char> &npunct =
   use_facet <numpunct <char> >( loc);
   cout << loc.name( ) << " decimal point "<<
   npunct.decimal_point( ) << endl;
   cout << loc.name( ) << " thousands separator "
   << npunct.thousands_sep( ) << endl;
};
```

```Output
German_Germany.1252 decimal point ,
German_Germany.1252 thousands separator .
```

## <a name="numpunctdo_decimal_point"></a><a name="do_decimal_point"></a> numpunct: o_decimal_point:d

Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.

```cpp
virtual CharType do_decimal_point() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specifico delle impostazioni locali da usare come virgola decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [decimal_point](#decimal_point), in cui la funzione membro virtuale viene chiamata da `decimal_point`.

## <a name="numpunctdo_falsename"></a><a name="do_falsename"></a> numpunct: o_falsename:d

La funzione membro virtuale protetta restituisce una sequenza da usare come rappresentazione testuale del valore **`false`** .

```cpp
virtual string_type do_falsename() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente una sequenza da usare come rappresentazione testuale del valore **`false`** .

### <a name="remarks"></a>Commenti

La funzione membro restituisce la stringa "false" per rappresentare il valore **`false`** in tutte le impostazioni locali.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [falsename](#falsename), in cui la funzione membro virtuale viene chiamata da `falsename`.

## <a name="numpunctdo_grouping"></a><a name="do_grouping"></a> numpunct: o_grouping:d

Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di una virgola decimale.

```cpp
virtual string do_grouping() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale. La codifica è uguale a quella per **lconv::grouping**.

### <a name="example"></a>Esempio

Vedere l'esempio per il [raggruppamento](#grouping), in cui la funzione membro virtuale viene chiamata da `grouping` .

## <a name="numpunctdo_thousands_sep"></a><a name="do_thousands_sep"></a> numpunct: o_thousands_sep:d

Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.

```cpp
virtual CharType do_thousands_sep() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta restituisce un elemento specifico delle impostazioni locali di tipo `CharType` da utilizzare come separatore di gruppo a sinistra di un separatore decimale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [thousands_sep](#thousands_sep), in cui la funzione membro virtuale viene chiamata da `thousands_sep`.

## <a name="numpunctdo_truename"></a><a name="do_truename"></a> numpunct: o_truename:d

Funzione membro virtuale protetta chiamata per restituire una stringa da utilizzare come rappresentazione testuale del valore **`true`** .

```cpp
virtual string_type do_truename() const;
```

### <a name="remarks"></a>Commenti

Stringa da utilizzare come rappresentazione testuale del valore **`true`** .

Tutte le impostazioni locali restituiscono una stringa "true" per rappresentare il valore **`true`** .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [truename](#truename), in cui la funzione membro virtuale viene chiamata da `truename`.

## <a name="numpunctfalsename"></a><a name="falsename"></a> numpunct:: falsename

Restituisce una stringa da utilizzare come rappresentazione testuale del valore **`false`** .

```cpp
string_type falsename() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente una sequenza di oggetti `CharType` da utilizzare come rappresentazione testuale del valore **`false`** .

### <a name="remarks"></a>Commenti

La funzione membro restituisce la stringa "false" per rappresentare il valore **`false`** in tutte le impostazioni locali.

La funzione membro restituisce [do_falsename](#do_falsename).

### <a name="example"></a>Esempio

```cpp
// numpunct_falsename.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "English" );

   const numpunct <char> &npunct = use_facet <numpunct <char> >( loc );
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;

   locale loc2( "French" );
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >(loc2);
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;
}
```

```Output
English_United States.1252 truename true
English_United States.1252 falsename false
French_France.1252 truename true
French_France.1252 falsename false
```

## <a name="numpunctgrouping"></a><a name="grouping"></a> numpunct:: Grouping

Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

```cpp
string grouping() const;
```

### <a name="return-value"></a>Valore restituito

Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

### <a name="remarks"></a>Commenti

La funzione membro restituisce [do_grouping](#do_grouping).

### <a name="example"></a>Esempio

```cpp
// numpunct_grouping.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany");

   const numpunct <char> &npunct =
       use_facet < numpunct <char> >( loc );
   for (unsigned int i = 0; i < npunct.grouping( ).length( ); i++)
   {
      cout << loc.name( ) << " international grouping:\n the "
           << i <<"th group to the left of the radix character "
           << "is of size " << (int)(npunct.grouping ( )[i])
           << endl;
   }
}
```

```Output
German_Germany.1252 international grouping:
the 0th group to the left of the radix character is of size 3
```

## <a name="numpunctnumpunct"></a><a name="numpunct"></a> numpunct:: numpunct

Costruttore per oggetti di tipo `numpunct`.

```cpp
explicit numpunct(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Commenti

I valori possibili per il parametro *_Refs* e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non sono definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs` ).

## <a name="numpunctstring_type"></a><a name="string_type"></a> numpunct:: string_type

Tipo che descrive una stringa contenente caratteri di tipo **CharType**.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### <a name="remarks"></a>Commenti

Il tipo descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie delle sequenze di punteggiatura.

## <a name="numpunctthousands_sep"></a><a name="thousands_sep"></a> numpunct:: thousands_sep

Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.

```cpp
CharType thousands_sep() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specifico delle impostazioni locali da usare come separatore delle migliaia.

### <a name="remarks"></a>Commenti

La funzione membro restituisce [do_thousands_sep](#do_thousands_sep).

### <a name="example"></a>Esempio

```cpp
// numpunct_thou_sep.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   const numpunct <char> &npunct =
   use_facet < numpunct < char > >( loc );
   cout << loc.name( ) << " decimal point "<<
   npunct.decimal_point( ) << endl;
   cout << loc.name( ) << " thousands separator "
   << npunct.thousands_sep( ) << endl;
};
```

```Output
German_Germany.1252 decimal point ,
German_Germany.1252 thousands separator .
```

## <a name="numpuncttruename"></a><a name="truename"></a> numpunct:: truename

Restituisce una stringa da utilizzare come rappresentazione testuale del valore **`true`** .

```cpp
string_type falsename() const;
```

### <a name="return-value"></a>Valore restituito

Stringa da utilizzare come rappresentazione testuale del valore **`true`** .

### <a name="remarks"></a>Commenti

La funzione membro restituisce [do_truename](#do_truename).

Tutte le impostazioni locali restituiscono una stringa "true" per rappresentare il valore **`true`** .

### <a name="example"></a>Esempio

```cpp
// numpunct_truename.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "English" );

   const numpunct < char> &npunct = use_facet <numpunct <char> >( loc );
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;

   locale loc2("French");
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >( loc2 );
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;
}
```

```Output
English_United States.1252 truename true
English_United States.1252 falsename false
French_France.1252 truename true
French_France.1252 falsename false
```

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)\
[Classe facet](../standard-library/locale-class.md#facet_class)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
