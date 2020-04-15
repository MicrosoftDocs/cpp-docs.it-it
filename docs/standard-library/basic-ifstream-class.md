---
title: Classe basic_ifstream
ms.date: 11/04/2016
f1_keywords:
- fstream/std::basic_ifstream
- fstream/std::basic_ifstream::close
- fstream/std::basic_ifstream::is_open
- fstream/std::basic_ifstream::open
- fstream/std::basic_ifstream::rdbuf
- fstream/std::basic_ifstream::swap
helpviewer_keywords:
- std::basic_ifstream [C++]
- std::basic_ifstream [C++], close
- std::basic_ifstream [C++], is_open
- std::basic_ifstream [C++], open
- std::basic_ifstream [C++], rdbuf
- std::basic_ifstream [C++], swap
ms.assetid: 366cd9a7-efc4-4b7f-ba10-c8271e47ffcf
ms.openlocfilehash: 85a315ee393a002da4d0999569d4af6c34a37ee3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376839"
---
# <a name="basic_ifstream-class"></a>Classe basic_ifstream

Descrive un oggetto che controlla l'estrazione di elementi e `Tr` oggetti codificati da `Elem`un buffer di flusso della `Tr`classe [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`,>, con elementi di tipo , i cui tratti di carattere sono determinati dalla classe .

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ifstream : public basic_istream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Elem*\
L'elemento di base del buffer di file.

*Tr*\
I tratti dell'elemento di base del buffer di file (in genere `char_traits`< `Elem`>).

## <a name="remarks"></a>Osservazioni

L'oggetto archivia un oggetto di classe `basic_filebuf`< `Elem`, `Tr`>.

## <a name="example"></a>Esempio

L'esempio seguente illustra come leggere testo da un file.

```cpp
// basic_ifstream_class.cpp
// compile with: /EHsc

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs("basic_ifstream_class.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }
}
```

## <a name="input-basic_ifstream_classtxt"></a>Input: basic_ifstream_class.txt

```cpp
This is the contents of basic_ifstream_class.txt.
```

## <a name="output"></a>Output

```cpp
This is the contents of basic_ifstream_class.txt.
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ifstream](#basic_ifstream)|Consente di inizializzare una nuova istanza di un oggetto `basic_ifstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Vicino](#close)|Chiude un file.|
|[is_open](#is_open)|Determina se un file è aperto.|
|[open](#open)|Apre un file.|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer del flusso archiviato.|
|[Swap](#swap)|Scambia il contenuto di questo `basic_ifstream` con il contenuto del parametro `basic_ifstream` fornito.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore di comando](#op_eq)|Assegna il contenuto di questo oggetto flusso. Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue` che non lascia alcuna copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<fstream>

**Spazio dei nomi:** std

## <a name="basic_ifstreambasic_ifstream"></a><a name="basic_ifstream"></a>basic_ifstream::basic_ifstream

Costruisce un oggetto di tipo `basic_ifstream`.

```cpp
basic_ifstream();

explicit basic_ifstream(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

explicit basic_ifstream(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

basic_ifstream(basic_ifstream&& right);
```

### <a name="parameters"></a>Parametri

*_Filename*\
Nome del file da aprire.

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*\
La protezione di apertura file predefinita che equivale al parametro `shflag` in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la [basic_istream](../standard-library/basic-istream-class.md)classe `sb`base `sb` chiamando basic_istream ( ), `Tr` dove è l'oggetto archiviato della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`>. Inizializza anche `sb` chiamando `basic_filebuf`< `Elem`, `Tr`>.

Il secondo e il terzo costruttore inizializza la classe base chiamando `basic_istream`( `sb`). Viene inoltre `sb` inizializzato chiamando `Tr` [basic_filebuf](../standard-library/basic-filebuf-class.md#basic_filebuf)< `Elem` `sb`,> , quindi . [aperto](../standard-library/basic-filebuf-class.md#open) `_Filename`( `_Mode` `ios_base::in`, &#124; ). Se quest'ultima funzione restituisce un puntatore `failbit`null, il costruttore chiama **setstate**( ).

Il quarto costruttore inizializza l'oggetto con il contenuto di `right`, considerato come riferimento rvalue.

### <a name="example"></a>Esempio

L'esempio seguente illustra come leggere testo da un file. Per creare il file, vedere l'esempio per [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream).

```cpp
// basic_ifstream_ctor.cpp
// compile with: /EHsc

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs("basic_ifstream_ctor.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }
}
```

## <a name="basic_ifstreamclose"></a><a name="close"></a>basic_ifstream::chiudi

Chiude un file.

```cpp
void close();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [rdbuf](#rdbuf) **->** [close](../standard-library/basic-filebuf-class.md#close).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `close`.

## <a name="basic_ifstreamis_open"></a><a name="is_open"></a>basic_ifstream::is_open

Determina se un file è aperto.

```cpp
bool is_open() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il file è aperto; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [rdbuf](#rdbuf) **->** [is_open](../standard-library/basic-filebuf-class.md#is_open).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::is_open](../standard-library/basic-filebuf-class.md#is_open) per un esempio di utilizzo di `is_open`.

## <a name="basic_ifstreamopen"></a><a name="open"></a>basic_ifstream::aprire

Apre un file.

```cpp
void open(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### <a name="parameters"></a>Parametri

*_Filename*\
Nome del file da aprire.

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*\
La protezione di apertura file predefinita che equivale al parametro `shflag` in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [rdbuf](#rdbuf) **->** `_Mode` [open](../standard-library/basic-filebuf-class.md#open)(_ *Nomefile*, &#124; **ios_base::in**). Se open ha esito negativo, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`), che può generare un'eccezione ios_base::failure.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::open](../standard-library/basic-filebuf-class.md#open) per un `open`esempio che utilizza .

## <a name="basic_ifstreamoperator"></a><a name="op_eq"></a>basic_ifstream::operatore

Assegna il contenuto di questo oggetto flusso. Si tratta di un'assegnazione di spostamento che implica un riferimento rvalue che non lascia alcuna copia.

```cpp
basic_ifstream& operator=(basic_ifstream&& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Riferimento rvalue a un oggetto `basic_ifstream`.

### <a name="return-value"></a>Valore restituito

Restituisce `*this`.

### <a name="remarks"></a>Osservazioni

L'operatore membro sostituisce il contenuto dell'oggetto utilizzando il contenuto di *right*, considerato come un riferimento rvalue. Per altre informazioni, vedere [Elementi lvalue e rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md).

## <a name="basic_ifstreamrdbuf"></a><a name="rdbuf"></a>basic_ifstream::rdbuf

Restituisce l'indirizzo del buffer del flusso archiviato.

```cpp
basic_filebuf<Elem, Tr> *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un oggetto [basic_filebuf](../standard-library/basic-filebuf-class.md) che rappresenta il buffer di flusso archiviato.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="basic_ifstreamswap"></a><a name="swap"></a>basic_ifstream::swap

Scambia il contenuto di due oggetti `basic_ifstream`.

```cpp
void swap(basic_ifstream& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Riferimento a un altro buffer del flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia il contenuto di questo oggetto per il contenuto di *right*.

## <a name="see-also"></a>Vedere anche

[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
