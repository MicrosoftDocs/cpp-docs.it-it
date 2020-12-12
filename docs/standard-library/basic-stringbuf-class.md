---
description: 'Altre informazioni su: basic_stringbuf Class'
title: Classe basic_stringbuf
ms.date: 11/04/2016
f1_keywords:
- sstream/std::basic_stringbuf
- sstream/std::basic_stringbuf::allocator_type
- sstream/std::basic_stringbuf::char_type
- sstream/std::basic_stringbuf::int_type
- sstream/std::basic_stringbuf::off_type
- sstream/std::basic_stringbuf::pos_type
- sstream/std::basic_stringbuf::traits_type
- sstream/std::basic_stringbuf::overflow
- sstream/std::basic_stringbuf::pbackfail
- sstream/std::basic_stringbuf::seekoff
- sstream/std::basic_stringbuf::seekpos
- sstream/std::basic_stringbuf::str
- sstream/std::basic_stringbuf::underflow
helpviewer_keywords:
- std::basic_stringbuf [C++]
- std::basic_stringbuf [C++], allocator_type
- std::basic_stringbuf [C++], char_type
- std::basic_stringbuf [C++], int_type
- std::basic_stringbuf [C++], off_type
- std::basic_stringbuf [C++], pos_type
- std::basic_stringbuf [C++], traits_type
- std::basic_stringbuf [C++], overflow
- std::basic_stringbuf [C++], pbackfail
- std::basic_stringbuf [C++], seekoff
- std::basic_stringbuf [C++], seekpos
- std::basic_stringbuf [C++], str
- std::basic_stringbuf [C++], underflow
ms.assetid: 40c85f9e-42a5-4a65-af5c-23c8e3bf8113
ms.openlocfilehash: 2b39c1808a896c79d5c9e938a0a9cc03251c11cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325599"
---
# <a name="basic_stringbuf-class"></a>Classe basic_stringbuf

Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un oggetto matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>,
    class Alloc = allocator<Elem>>
class basic_stringbuf : public basic_streambuf<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Alloc*\
Classe Allocator.

*Elem*\
Tipo di elemento di base della stringa.

*TR*\
Tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Commenti

L'oggetto viene allocato, esteso e liberato come necessario per supportare le modifiche nella sequenza.

Un oggetto della classe basic_stringbuf< `Elem`, `Tr`, `Alloc`> archivia una copia dell'argomento `ios_base::`[openmode](../standard-library/ios-base-class.md#openmode) del costruttore come modalità `stringbuf`**mode**:

- Se `mode & ios_base::in` è diverso da zero, il buffer di input è accessibile. Per altre informazioni, vedere [Classe basic_streambuf](../standard-library/basic-streambuf-class.md).

- Se `mode & ios_base::out` è diverso da zero, il buffer di output è accessibile.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_stringbuf](#basic_stringbuf)|Costruisce un oggetto di tipo `basic_stringbuf`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello *Alloc*.|
|[char_type](#char_type)|Associa un nome di tipo al parametro di modello *Elem*.|
|[int_type](#int_type)|Rende questo tipo all'interno dell'ambito `basic_filebuf` di equivalente al tipo con lo stesso nome nell'ambito *TR* .|
|[off_type](#off_type)|Rende questo tipo all'interno dell'ambito `basic_filebuf` di equivalente al tipo con lo stesso nome nell'ambito *TR* .|
|[pos_type](#pos_type)|Rende questo tipo all'interno dell'ambito `basic_filebuf` di equivalente al tipo con lo stesso nome nell'ambito *TR* .|
|[traits_type](#traits_type)|Associa un nome di tipo al parametro di modello *Tr*.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[overflow](#overflow)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|
|[pbackfail](#pbackfail)|La funzione membro virtuale protetta prova a usare un elemento in un buffer di input, quindi renderlo l'elemento corrente (a cui punta il puntatore successivo).|
|[seekoff](#seekoff)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[seekpos](#seekpos)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|
|swap||
|[underflow](#underflow)|La funzione membro virtuale protetta per estrarre l'elemento corrente dal flusso di input.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<sstream>

**Spazio dei nomi:** std

## <a name="basic_stringbufallocator_type"></a><a name="allocator_type"></a> basic_stringbuf:: allocator_type

Il tipo è un sinonimo del parametro di modello *Alloc*.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_stringbufbasic_stringbuf"></a><a name="basic_stringbuf"></a> basic_stringbuf:: basic_stringbuf

Costruisce un oggetto di tipo `basic_stringbuf`.

```cpp
basic_stringbuf(
    ios_base::openmode _Mode = ios_base::in | ios_base::out);

basic_stringbuf(
    const basic_string<Elem, Tr, Alloc>& str,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*Str*\
Un oggetto di tipo [basic_string](../standard-library/basic-string-class.md).

### <a name="remarks"></a>Commenti

Il primo costruttore archivia un puntatore null in tutti i puntatori che controllano il buffer di input e il buffer di output. Per altre informazioni, vedere la sezione Note della [Classe basic_streambuf](../standard-library/basic-streambuf-class.md). Archivia inoltre *_Mode* come modalità stringbuf. Per altre informazioni, vedere la sezione Note della [Classe basic_stringbuf](../standard-library/basic-stringbuf-class.md).

Il secondo costruttore alloca una copia della sequenza controllata dall'oggetto stringa *Str*. Se `_Mode & ios_base::in` è diverso da zero, imposta il buffer di input per iniziare la lettura all'inizio della sequenza. Se `_Mode & ios_base::out` è diverso da zero, imposta il buffer di output per iniziare la scrittura all'inizio della sequenza. Archivia inoltre *_Mode* come modalità stringbuf. Per altre informazioni, vedere la sezione Note della [Classe basic_stringbuf](../standard-library/basic-stringbuf-class.md).

## <a name="basic_stringbufchar_type"></a><a name="char_type"></a> basic_stringbuf:: char_type

Associa un nome di tipo al parametro di modello *Elem*.

```cpp
typedef Elem char_type;
```

## <a name="basic_stringbufint_type"></a><a name="int_type"></a> basic_stringbuf:: int_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell' `Tr` ambito.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="basic_stringbufoff_type"></a><a name="off_type"></a> basic_stringbuf:: off_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell' `Tr` ambito.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="basic_stringbufoverflow"></a><a name="overflow"></a> basic_stringbuf:: overflow

Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.

```cpp
virtual int_type overflow(int_type _Meta = traits_type::eof());
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o `traits_type::eof`.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce `traits_type::eof`. In caso contrario, restituisce **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### <a name="remarks"></a>Commenti

Se *\_ meta* non compare uguale a **traits_type::**[EOF](../standard-library/char-traits-struct.md#eof), la funzione membro virtuale protetta tenta di inserire l'elemento **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(*\_ meta*) nel buffer di output. Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di scrittura, può archiviare l'elemento in tale posizione e incrementare il puntatore successivo per il buffer di output.

- Può rendere disponibile una posizione di scrittura allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di output. Questa estensione del buffer di output estende anche eventuali buffer di input associati.

## <a name="basic_stringbufpbackfail"></a><a name="pbackfail"></a> basic_stringbuf::p non riuscita

La funzione membro virtuale protetta prova a reinserire un elemento nel buffer di input e quindi di renderlo l'elemento corrente a cui punta il puntatore successivo.

```cpp
virtual int_type pbackfail(int_type _Meta = traits_type::eof());
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o `traits_type::eof`.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce `traits_type::eof`. In caso contrario, restituisce **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### <a name="remarks"></a>Commenti

Se *_Meta* viene confrontato con **traits_type::**[EOF](../standard-library/char-traits-struct.md#eof), l'elemento di cui eseguire il push è effettivamente quello già presente nel flusso prima dell'elemento corrente. In caso contrario, l'elemento viene sostituito da **byte**  =  **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(_ *meta*). La funzione può reinserire un elemento in vari modi:

- Se è disponibile una posizione di reinserimento e l'elemento archiviato in tale posizione risulta uguale a byte, può decrementare il puntatore successivo per il buffer di input.

- Se è disponibile una posizione di reinserimento e la modalità stringbuf consente di modificare la sequenza ( **mode & ios_base::out** è diverso da zero), la funzione può archiviare byte nella posizione di reinserimento e decrementare il puntatore successivo per il buffer di input.

## <a name="basic_stringbufpos_type"></a><a name="pos_type"></a> basic_stringbuf::p os_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell' `Tr` ambito.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="basic_stringbufseekoff"></a><a name="seekoff"></a> basic_stringbuf:: seekoff

La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekoff(
    off_type _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Off*\
Posizione da cercare rispetto a *_Way*. Per altre informazioni, vedere [basic_stringbuf::off_type](#off_type).

*_Way*\
Punto iniziale per le operazioni di offset. Per i valori possibili, vedere [ios_base::seekdir](../standard-library/ios-base-class.md#seekdir).

*_Mode*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

### <a name="return-value"></a>Valore restituito

Restituisce la nuova posizione o una posizione di flusso non valida.

### <a name="remarks"></a>Commenti

Per un oggetto della classe `basic_stringbuf<Elem, Tr, Alloc>`, una posizione del flusso è costituita essenzialmente da un offset del flusso. L'offset zero designa il primo elemento della sequenza controllata.

La nuova posizione è determinata nel modo seguente:

- Se `_Way`  ==  `ios_base::beg` , la nuova posizione corrisponde all'inizio del flusso più *_Off*.

- Se `_Way`  ==  `ios_base::cur` , la nuova posizione corrisponde alla posizione del flusso corrente più *_Off*.

- Se `_Way`  ==  `ios_base::end` , la nuova posizione corrisponde alla fine del flusso più *_Off*.

Se `_Mode & ios_base::in` è diverso da zero, la funzione modifica la successiva posizione da leggere nel buffer di input. Se `_Mode & ios_base::out` è diverso da zero, la funzione modifica la successiva posizione da scrivere nel buffer di output. Affinché un flusso ne venga interessato, è necessario che esista il relativo buffer. Affinché un'operazione di posizionamento abbia esito positivo, è necessario che la posizione del flusso risultante si trovi all'interno della sequenza controllata. Se la funzione interessa entrambe le posizioni del flusso, *_Way* deve essere `ios_base::beg` o `ios_base::end` e entrambi i flussi sono posizionati nello stesso elemento. In caso contrario, o se nessuna posizione ne è influenzata, l'operazione di posizionamento ha esito negativo.

Se la funzione modifica una o entrambe le posizioni del flusso, restituisce la posizione del flusso risultante. In caso contrario, ha esito negativo e restituisce una posizione del flusso non valida.

## <a name="basic_stringbufseekpos"></a><a name="seekpos"></a> basic_stringbuf:: seekpos

La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekpos(pos_type _Sp, ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Sp*\
Posizione da cercare.

*_Mode*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Se la funzione modifica una o entrambe le posizioni del flusso, restituisce la posizione del flusso risultante. In caso contrario, ha esito negativo e restituisce una posizione del flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Commenti

Per un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>, una posizione del flusso è costituita essenzialmente da un offset del flusso. L'offset zero designa il primo elemento della sequenza controllata. La nuova posizione è determinata da _ *Sp*.

Se **mode & ios_base::in** è diverso da zero, la funzione modifica la posizione successiva da leggere nel buffer di input. Se **mode & ios_base::out** è diverso da zero, la funzione modifica la posizione successiva da scrivere nel buffer di output. Affinché un flusso ne venga interessato, è necessario che esista il relativo buffer. Affinché un'operazione di posizionamento abbia esito positivo, è necessario che la posizione del flusso risultante si trovi all'interno della sequenza controllata. In caso contrario, o se nessuna posizione ne è influenzata, l'operazione di posizionamento ha esito negativo.

## <a name="basic_stringbufstr"></a><a name="str"></a> basic_stringbuf:: Str

Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.

```cpp
basic_string<Elem, Tr, Alloc> str() const;
void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```

### <a name="parameters"></a>Parametri

*_Newstr*\
La nuova stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md) \< **Elem**, **Tr**, Alloc **> , * * la cui sequenza controllata è una copia della sequenza controllata da **\* questo** oggetto.

### <a name="remarks"></a>Commenti

La prima funzione membro restituisce un oggetto della classe basic_string< **Elem**, **Tr**, `Alloc`> la cui sequenza controllata è una copia della sequenza controllata da **\*this**. La sequenza copiata dipende dalla modalità stringbuf archiviata:

- Se **mode & ios_base::out** è diverso da zero ed esiste un buffer di output, la sequenza corrisponde all'intero buffer di output (elementi [epptr](../standard-library/basic-streambuf-class.md#epptr) - [pbase](../standard-library/basic-streambuf-class.md#pbase) che iniziano con `pbase`).

- Se **mode & ios_base::in** è diverso da zero ed esiste un buffer di input, la sequenza corrisponde all'intero buffer di input (elementi [egptr](../standard-library/basic-streambuf-class.md#egptr) - [eback](../standard-library/basic-streambuf-class.md#eback) che iniziano con `eback`).

- In caso contrario, la sequenza copiata è vuota.

La seconda funzione membro dealloca qualsiasi sequenza attualmente controllata da **\* questo** oggetto. Viene quindi allocata una copia della sequenza controllata da *_Newstr*. Se **mode & ios_base::in** è diverso da zero, imposta il buffer di input per iniziare la lettura all'inizio della sequenza. Se **mode & ios_base::out** è diverso da zero, imposta il buffer di output per iniziare la scrittura all'inizio della sequenza.

### <a name="example"></a>Esempio

```cpp
// basic_stringbuf_str.cpp
// compile with: /EHsc
#include <iostream>
#include <sstream>

using namespace std;

int main( )
{
   basic_string<char> i( "test" );
   stringstream ss;

   ss.rdbuf( )->str( i );
   cout << ss.str( ) << endl;

   ss << "z";
   cout << ss.str( ) << endl;

   ss.rdbuf( )->str( "be" );
   cout << ss.str( ) << endl;
}
```

```Output
test
zest
be
```

## <a name="basic_stringbuftraits_type"></a><a name="traits_type"></a> basic_stringbuf:: traits_type

Associa un nome di tipo al parametro di modello *Tr*.

```cpp
typedef Tr traits_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello *Tr*.

## <a name="basic_stringbufunderflow"></a><a name="underflow"></a> basic_stringbuf:: underflow

Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.

```cpp
virtual int_type underflow();
```

### <a name="return-value"></a>Valore restituito

Se la funzione non può avere esito positivo, restituisce **traits_type::**[EOF](../standard-library/char-traits-struct.md#eof). In caso contrario, restituisce l'elemento corrente nel flusso di input convertito.

### <a name="remarks"></a>Commenti

La funzione membro virtuale protetta tenta di estrarre l'elemento corrente `byte` dal buffer di input, avanzare la posizione del flusso corrente e restituire l'elemento come **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( **byte**). Questa operazione può essere eseguita in un modo: se è disponibile una posizione di lettura, accetta `byte` come elemento archiviato nella posizione di lettura e sposta in avanti il puntatore successivo per il buffer di input.

## <a name="basic_streambufswap"></a><a name="swap"></a> basic_streambuf:: swap

Scambia il contenuto di questo buffer di stringa con un altro buffer di stringa.

```cpp
void basic_stringbuf<T>::swap(basic_stringbuf& other)
```

### <a name="parameters"></a>Parametri

*altri*\
basic_stringbuf il cui contenuto verrà scambiato con quello di questo elemento basic_stringbuf.

### <a name="remarks"></a>Commenti

## <a name="basic_stringbufoperator"></a><a name="op_eq"></a> basic_stringbuf:: operator =

Assegna il contenuto di basic_stringbuf sul lato destro dell'operatore a basic_stringbuf sul lato sinistro.

```cpp
basic_stringbuf& basic_stringbuf:: operator=(const basic_stringbuf& other)
```

### <a name="parameters"></a>Parametri

*altri*\
Elemento basic_stringbuf il cui contenuto, inclusi i tratti delle impostazioni locali, verrà assegnato all'elemento stringbuf sul lato sinistro dell'operatore.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
