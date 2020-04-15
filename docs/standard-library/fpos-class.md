---
title: Classe fpos
ms.date: 03/27/2019
f1_keywords:
- iosfwd/std::fpos
- iosfwd/std::fpos::seekpos
- iosfwd/std::fpos::state
- iosfwd/std::fpos::operator streamoff
helpviewer_keywords:
- std::fpos [C++]
- std::fpos [C++], seekpos
- std::fpos [C++], state
ms.assetid: ffd0827c-fa34-47f4-b10e-5cb707fcde47
ms.openlocfilehash: 7d60a31e69e8a1ad82086f715cac6dde064d1fac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359198"
---
# <a name="fpos-class"></a>Classe fpos

Il modello di classe descrive un oggetto in grado di archiviare tutte le informazioni necessarie per ripristinare un indicatore di posizione di file arbitrario all'interno di qualsiasi flusso. Un oggetto di classe fpos\< **St**> di fatto archivia almeno due oggetti membro:

- Un offset di byte, di tipo [streamoff](../standard-library/ios-typedefs.md#streamoff).

- Uno stato di conversione, per l'utilizzo `St`da `mbstate_t`parte di un oggetto della classe basic_filebuf, di tipo , in genere .

Può anche archiviare una posizione di file arbitraria per l'uso da parte di un oggetto della classe [basic_filebuf](../standard-library/basic-filebuf-class.md), di tipo `fpos_t`. Per un ambiente con dimensioni del file limitate, tuttavia, a volte è possibile usare indifferentemente `streamoff` e `fpos_t`. Per un ambiente senza flussi con codifica dipendente dallo stato, è effettivamente possibile che `mbstate_t` non sia usato. Di conseguenza, il numero di oggetti membro archiviati può variare.

## <a name="syntax"></a>Sintassi

```cpp
template <class Statetype>
class fpos
```

### <a name="parameters"></a>Parametri

*Tipo di stato*\
Informazioni di stato.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[fpos](#fpos)|Creare un oggetto che contiene informazioni su una posizione (offset) in un flusso.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[seekpos](#seekpos)|Usata internamente solo dalla libreria standard C++. Non chiamare questo metodo dal proprio codice.|
|[Stato](#state)|Imposta o restituisce lo stato della conversione.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore!](#op_neq)|Testa gli indicatori di posizione del file per rilevare la disuguaglianza.|
|[operatore .](#op_add)|Incrementa un indicatore di posizione del file.|
|[operatore .](#op_add_eq)|Incrementa un indicatore di posizione del file.|
|[operatore-](#operator-)|Decrementa un indicatore di posizione del file.|
|[operatore-](#operator-_eq)|Decrementa un indicatore di posizione del file.|
|[operatore di comando](#op_eq_eq)|Testa gli indicatori di posizione del file per rilevare l'uguaglianza.|
|[operator streamoff](#op_streamoff)|Esegue il cast del tipo `fpos` in oggetto di tipo `streamoff`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<ios>

**Spazio dei nomi:** std

## <a name="fposfpos"></a><a name="fpos"></a>fpos::fpos

Creare un oggetto che contiene informazioni su una posizione (offset) in un flusso.

```cpp
fpos(streamoff _Off = 0);

fpos(Statetype _State, fpos_t _Filepos);
```

### <a name="parameters"></a>Parametri

*_Off*\
Offset nel flusso.

*_State*\
Stato iniziale dell'oggetto `fpos`.

*_Filepos*\
Offset nel flusso.

### <a name="remarks"></a>Osservazioni

Il primo costruttore archivia l'offset *_Off*, relativo all'inizio del file e nello stato di conversione iniziale (se è importante). Se *_Off* è -1, l'oggetto risultante rappresenta una posizione di flusso non valida.

Il secondo costruttore archivia un offset pari a zero e l'oggetto *_State*.

## <a name="fposoperator"></a><a name="op_neq"></a>fpos::operator!

Testa gli indicatori di posizione del file per rilevare la disuguaglianza.

```cpp
bool operator!=(const fpos<Statetype>& right) const;
```

### <a name="parameters"></a>Parametri

*va bene*\
Indicatore di posizione del file rispetto al quale eseguire il confronto.

### <a name="return-value"></a>Valore restituito

**true** se gli indicatori di posizione del file non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`!(*this == right)`.

### <a name="example"></a>Esempio

```cpp
// fpos_op_neq.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main( )
{
   using namespace std;

   fpos<int> pos1, pos2;
   ifstream file;
   char c;

   // Compare two fpos object
   if ( pos1 != pos2 )
      cout << "File position pos1 and pos2 are not equal" << endl;
   else
      cout << "File position pos1 and pos2 are equal" << endl;

   file.open( "fpos_op_neq.txt" );
   file.seekg( 0 );   // Goes to a zero-based position in the file
   pos1 = file.tellg( );
   file.get( c);
   cout << c << endl;

   // Increment pos1
   pos1 += 1;
   file.get( c );
   cout << c << endl;

   pos1 = file.tellg( ) - fpos<int>( 2);
   file.seekg( pos1 );
   file.get( c );
   cout << c << endl;

   // Increment pos1
   pos1 = pos1 + fpos<int>( 1 );
   file.get(c);
   cout << c << endl;

   pos1 -= fpos<int>( 2 );
   file.seekg( pos1 );
   file.get( c );
   cout << c << endl;

   file.close( );
}
```

## <a name="fposoperator"></a><a name="op_add"></a>fpos::operatore

Incrementa un indicatore di posizione del file.

```cpp
fpos<Statetype> operator+(streamoff _Off) const;
```

### <a name="parameters"></a>Parametri

*_Off*\
Offset in base al quale si vuole incrementare l'indicatore di posizione del file.

### <a name="return-value"></a>Valore restituito

Posizione nel file.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce **fpos(\*this) +=** `_Off`.

### <a name="example"></a>Esempio

Per un esempio di come usare `operator+`, vedere [operator!=](#op_neq).

## <a name="fposoperator"></a><a name="op_add_eq"></a>fpos::operator

Incrementa un indicatore di posizione del file.

```cpp
fpos<Statetype>& operator+=(streamoff _Off);
```

### <a name="parameters"></a>Parametri

*_Off*\
Offset in base al quale si vuole incrementare l'indicatore di posizione del file.

### <a name="return-value"></a>Valore restituito

Posizione nel file.

### <a name="remarks"></a>Osservazioni

La funzione membro aggiunge *_Off* all'oggetto membro offset archiviato e quindi restituisce ** \*this**. Per il posizionamento all'interno di un file, il risultato in genere è valido solo per i flussi binari che non dispongono di una codifica dipendente dallo stato.

### <a name="example"></a>Esempio

Per un esempio di come usare `operator+=`, vedere [operator!=](#op_neq).

## <a name="fposoperator-"></a><a name="operator-"></a>fpos::operatore-

Decrementa un indicatore di posizione del file.

```cpp
streamoff operator-(const fpos<Statetype>& right) const;

fpos<Statetype> operator-(streamoff _Off) const;
```

### <a name="parameters"></a>Parametri

*va bene*\
Posizione del file.

*_Off*\
Offset nel flusso.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce `(streamoff)*this - (streamoff) right`. La seconda funzione membro restituisce `fpos(*this) -= _Off`.

### <a name="example"></a>Esempio

Per un esempio di come usare `operator-`, vedere [operator!=](#op_neq).

## <a name="fposoperator-"></a><a name="operator-_eq"></a>fpos::operatore

Decrementa un indicatore di posizione del file.

```cpp
fpos<Statetype>& operator-=(streamoff _Off);
```

### <a name="parameters"></a>Parametri

*_Off*\
Offset nel flusso.

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce`fpos(*this) -= _Off`.

### <a name="remarks"></a>Osservazioni

Per il posizionamento all'interno di un file, il risultato in genere è valido solo per i flussi binari che non dispongono di una codifica dipendente dallo stato.

### <a name="example"></a>Esempio

Per un esempio di come usare `operator-=`, vedere [operator!=](#op_neq).

## <a name="fposoperator"></a><a name="op_eq_eq"></a>fpos::operator

Testa gli indicatori di posizione del file per rilevare l'uguaglianza.

```cpp
bool operator==(const fpos<Statetype>& right) const;
```

### <a name="parameters"></a>Parametri

*va bene*\
Indicatore di posizione del file rispetto al quale eseguire il confronto.

### <a name="return-value"></a>Valore restituito

**true** se gli indicatori di posizione del file sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`(streamoff)*this == (streamoff)right`.

### <a name="example"></a>Esempio

Per un esempio di come usare `operator+=`, vedere [operator!=](#op_neq).

## <a name="fposoperator-streamoff"></a><a name="op_streamoff"></a>fpos::operator streamoff

Esegue il cast dell'oggetto di tipo `fpos` in oggetto di tipo `streamoff`.

```cpp
operator streamoff() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'oggetto membro offset archiviato e l'eventuale offset aggiuntivo archiviato come parte dell'oggetto membro `fpos_t`.

### <a name="example"></a>Esempio

```cpp
// fpos_op_streampos.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   streamoff s;
   ofstream file( "rdbuf.txt");

   fpos<mbstate_t> f = file.tellp( );
   // Is equivalent to ..
   // streampos f = file.tellp( );
   s = f;
   cout << s << endl;
}
```

```Output
0
```

## <a name="fposseekpos"></a><a name="seekpos"></a>fpos::seekpos

Questo metodo viene usato internamente solo dalla libreria standard C++. Non chiamare questo metodo dal proprio codice.

```cpp
fpos_t seekpos() const;
```

## <a name="fposstate"></a><a name="state"></a>fpos::stato

Imposta o restituisce lo stato della conversione.

```cpp
Statetype state() const;

void state(Statetype _State);
```

### <a name="parameters"></a>Parametri

*_State*\
Nuovo stato di conversione.

### <a name="return-value"></a>Valore restituito

Stato di conversione.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce `St` il valore archiviato nell'oggetto membro. La seconda funzione *_State* membro `St` archivia _State nell'oggetto membro.

### <a name="example"></a>Esempio

```cpp
// fpos_state.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <fstream>

int main() {
   using namespace std;
   streamoff s;
   ifstream file( "fpos_state.txt" );

   fpos<mbstate_t> f = file.tellg( );
   char ch;
   while ( !file.eof( ) )
      file.get( ch );
   s = f;
   cout << f.state( ) << endl;
   f.state( 9 );
   cout << f.state( ) << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
