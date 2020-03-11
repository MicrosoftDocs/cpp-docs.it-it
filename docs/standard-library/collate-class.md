---
title: Classe collate
ms.date: 11/04/2016
f1_keywords:
- locale/std::collate
- locale/std::collate::char_type
- locale/std::collate::string_type
- locale/std::collate::compare
- locale/std::collate::do_compare
- locale/std::collate::do_hash
- locale/std::collate::do_transform
- locale/std::collate::hash
- locale/std::collate::transform
helpviewer_keywords:
- std::collate [C++]
- std::collate [C++], char_type
- std::collate [C++], string_type
- std::collate [C++], compare
- std::collate [C++], do_compare
- std::collate [C++], do_hash
- std::collate [C++], do_transform
- std::collate [C++], hash
- std::collate [C++], transform
ms.assetid: 92168798-9628-4a2e-be6e-fa62dcd4d6a6
ms.openlocfilehash: 88b04ad4f14faf4d152c0ce2b9c3477928263c52
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78866155"
---
# <a name="collate-class"></a>Classe collate

Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare l'ordinamento e il raggruppamento dei caratteri all'interno di una stringa, i confronti tra di essi e l'hashing di stringhe.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class collate : public locale::facet;
```

### <a name="parameters"></a>Parametri

\ *CharType*
Tipo utilizzato all'interno di un programma per codificare i caratteri.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere al valore archiviato consente di archiviare un valore positivo univoco in `id`. In alcuni linguaggi i caratteri vengono raggruppati e considerati come singoli caratteri, mentre in altri linguaggi i singoli caratteri vengono considerati come se fossero due caratteri. I servizi di ordinamento forniti dalla classe di ordinamento forniscono una modalità di ordinamento per questi casi.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[collate](#collate)|Costruttore per gli oggetti della classe `collate` utilizzato come facet delle impostazioni locali per gestire le convenzioni di ordinamento delle stringhe.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo che descrive un carattere di tipo `CharType`.|
|[string_type](#string_type)|Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[compare](#compare)|Confronta due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.|
|[do_compare](#do_compare)|Funzione virtuale chiamata per confrontare due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.|
|[do_hash](#do_hash)|Funzione virtuale chiamata per determinare il valore hash delle sequenze in base alle regole specifiche del relativo facet.|
|[do_transform](#do_transform)|Funzione virtuale chiamata per convertire una sequenza di caratteri in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.|
|[hash](#hash)|Determina il valore hash della sequenza in base alle regole specifiche del relativo facet.|
|[transform](#transform)|Converte una sequenza di caratteri dalle impostazioni locali in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<impostazioni locali >

**Spazio dei nomi:** std

## <a name="char_type"></a> collate::char_type

Tipo che descrive un carattere di tipo `CharType`.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="collate"></a> collate::collate

Costruttore per gli oggetti della classe collate usato come facet delle impostazioni locali per gestire le convenzioni di ordinamento delle stringhe.

```cpp
public:
    explicit collate(
    size_t _Refs = 0);

protected:
    collate(
const char* _Locname,
    size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

*_Locname*\
Nome delle impostazioni locali.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *_Refs* e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non sono definiti.

Il costruttore inizializza l'oggetto di base con **locale::** [facet](../standard-library/locale-class.md#facet_class)(`_Refs`).

## <a name="compare"></a> collate::compare

Confronta due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.

```cpp
int compare(const CharType* first1,
    const CharType* last1,
    const CharType* first2,
    const CharType* last2) const;
```

### <a name="parameters"></a>Parametri

\ *First1*
Puntatore al primo elemento nella prima sequenza da confrontare.

\ *Last1*
Puntatore all'ultimo elemento nella prima sequenza da confrontare.

\ *first2*
Puntatore al primo elemento nella seconda sequenza da confrontare.

\ *last2*
Puntatore all'ultimo elemento nella seconda sequenza da confrontare.

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce:

- \- 1 se la prima sequenza ottiene un risultato inferiore nel confronto con la seconda sequenza.

- \+ 1 se la seconda sequenza ottiene un risultato inferiore nel confronto con la prima sequenza.

- 0 se le sequenze sono equivalenti.

### <a name="remarks"></a>Osservazioni

La prima sequenza ottiene un risultato inferiore se contiene l'elemento più piccolo della prima coppia non equivalente rilevata nel confronto delle sequenze, oppure se non ci sono coppie non equivalenti, ma la prima sequenza è più breve.

La funzione membro restituisce [do_compare](#do_compare)( `first1`, `last1`, `first2`, `last2`).

### <a name="example"></a>Esempio

```cpp
// collate_compare.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main() {
   locale loc ( "German_germany" );
   _TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s, it comes before z in the German alphabet
   _TCHAR * s2 = _T("Das ist weizzz.");
   int result1 = use_facet<collate<_TCHAR> > ( loc ).
      compare ( s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << result1 << endl;

   locale loc2 ( "C" );
   int result2 = use_facet<collate<_TCHAR> > ( loc2 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << result2 << endl;
}
```

## <a name="do_compare"></a> collate::do_compare

Funzione virtuale chiamata per confrontare due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.

```cpp
virtual int do_compare(const CharType* first1,
    const CharType* last1,
    const CharType* first2,
    const CharType* last2) const;
```

### <a name="parameters"></a>Parametri

\ *First1*
Puntatore al primo elemento nella prima sequenza da confrontare.

\ *Last1*
Puntatore all'ultimo elemento nella prima sequenza da confrontare.

\ *first2*
Puntatore al primo elemento nella seconda sequenza da confrontare.

\ *last2*
Puntatore all'ultimo elemento nella seconda sequenza da confrontare.

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce:

- \- 1 se la prima sequenza ottiene un risultato inferiore nel confronto con la seconda sequenza.

- \+ 1 se la seconda sequenza ottiene un risultato inferiore nel confronto con la prima sequenza.

- 0 se le sequenze sono equivalenti.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta confronta la sequenza in [* first1, last1) * con la sequenza in *[first2, last2*). Confronta i valori applicando `operator<` tra coppie di elementi corrispondenti di tipo `CharType`. La prima sequenza ottiene un risultato inferiore se contiene l'elemento più piccolo della prima coppia non equivalente rilevata nel confronto delle sequenze, oppure se non ci sono coppie non equivalenti, ma la prima sequenza è più breve.

### <a name="example"></a>Esempio

Vedere l'esempio di [collate::compare](#compare), che chiama `do_compare`.

## <a name="do_hash"></a> collate::do_hash

Funzione virtuale chiamata per determinare il valore hash delle sequenze in base alle regole specifiche del relativo facet.

```cpp
virtual long do_hash(const CharType* first, const CharType* last) const;
```

### <a name="parameters"></a>Parametri

*primo*\
Un puntatore al primo carattere nella sequenza il cui valore deve essere determinato.

*ultimo*\
Un puntatore all'ultimo carattere nella sequenza il cui valore deve essere determinato.

### <a name="return-value"></a>Valore restituito

Valore hash di tipo **long** per la sequenza.

### <a name="remarks"></a>Osservazioni

Un valore hash può essere utile, ad esempio, per distribuire le sequenze in modo pseudo-casuale all'interno di una matrice di elenchi.

### <a name="example"></a>Esempio

Vedere l'esempio di [hash](#hash), che chiama `do_hash`.

## <a name="do_transform"></a> collate::do_transform

Funzione virtuale chiamata per convertire una sequenza di caratteri in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.

```cpp
virtual string_type do_transform(const CharType* first, const CharType* last) const;
```

### <a name="parameters"></a>Parametri

*primo*\
Puntatore al primo carattere nella sequenza da convertire.

*ultimo*\
Puntatore all'ultimo carattere nella sequenza da convertire.

### <a name="return-value"></a>Valore restituito

Stringa corrispondente alla sequenza di caratteri trasformata.

### <a name="remarks"></a>Osservazioni

La funzione del membro virtuale protetto restituisce un oggetto della classe [string_type](#string_type) la cui sequenza controllata è una copia della sequenza [ `first`, `last`). Se una classe derivata da COLLATE\< **CharType**> esegue l'override [do_compare](#do_compare), deve anche eseguire l'override di `do_transform` per trovare una corrispondenza. Quando vengono passate a `collate::compare`, due stringhe trasformate devono produrre lo stesso risultato che si otterrebbe dal passaggio delle stringhe non trasformate per il confronto nella classe derivata.

### <a name="example"></a>Esempio

Vedere l'esempio di [transform](#transform) che chiama `do_transform`.

## <a name="hash"></a> collate::hash

Determina il valore hash della sequenza in base alle regole specifiche del relativo facet.

```cpp
long hash(const CharType* first, const CharType* last) const;
```

### <a name="parameters"></a>Parametri

*primo*\
Un puntatore al primo carattere nella sequenza il cui valore deve essere determinato.

*ultimo*\
Un puntatore all'ultimo carattere nella sequenza il cui valore deve essere determinato.

### <a name="return-value"></a>Valore restituito

Valore hash di tipo **long** per la sequenza.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_hash](#do_hash)( `first`, `last`).

Un valore hash può essere utile, ad esempio, per distribuire le sequenze in modo pseudo-casuale all'interno di una matrice di elenchi.

### <a name="example"></a>Esempio

```cpp
// collate_hash.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main( )
{
   locale loc ( "German_germany" );
   _TCHAR * s1 = _T("\x00dfzz abc."); // \x00df is the German sharp-s (looks like beta), it comes before z in the alphabet
   _TCHAR * s2 = _T("zzz abc."); // \x00df is the German sharp-s (looks like beta), it comes before z in the alphabet

   long r1 = use_facet< collate<_TCHAR> > ( loc ).
      hash (s1, &s1[_tcslen( s1 )-1 ]);
   long r2 =  use_facet< collate<_TCHAR> > ( loc ).
      hash (s2, &s2[_tcslen( s2 )-1 ] );
   cout << r1 << " " << r2 << endl;
}
```

```Output
541187293 551279837
```

## <a name="string_type"></a> collate::string_type

Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.

```cpp
typedef basic_string<CharType> string_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie della sequenza di origine.

### <a name="example"></a>Esempio

Per un esempio di dichiarazione e uso di `string_type`, vedere [transform](#transform).

## <a name="transform"></a> collate::transform

Converte una sequenza di caratteri dalle impostazioni locali in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.

```cpp
string_type transform(const CharType* first, const CharType* last) const;
```

### <a name="parameters"></a>Parametri

*primo*\
Puntatore al primo carattere nella sequenza da convertire.

*ultimo*\
Puntatore all'ultimo carattere nella sequenza da convertire.

### <a name="return-value"></a>Valore restituito

Stringa contenente la sequenza di caratteri trasformata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_transform](#do_transform)(`first`, `last`).

### <a name="example"></a>Esempio

```cpp
// collate_transform.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   _TCHAR* s1 = _T("\x00dfzz abc.");
   // \x00df is the German sharp-s (looks like beta),
   // it comes before z in the alphabet
   _TCHAR* s2 = _T("zzz abc.");

   collate<_TCHAR>::string_type r1;   // OK for typedef
   r1 = use_facet< collate<_TCHAR> > ( loc ).
      transform (s1, &s1[_tcslen( s1 )-1 ]);

   cout << r1 << endl;

   basic_string<_TCHAR> r2 = use_facet< collate<_TCHAR> > ( loc ).
      transform (s2, &s2[_tcslen( s2 )-1 ]);

   cout << r2 << endl;

   int result1 = use_facet<collate<_TCHAR> > ( loc ).compare
      (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );

   cout << _tcscmp(r1.c_str( ),r2.c_str( )) << result1
      << _tcscmp(s1,s2) <<endl;
}
```

```Output

-1-11
```

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Sicurezza dei thread nella libreria standard C++)
