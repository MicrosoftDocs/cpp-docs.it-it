---
title: Classe basic_ofstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- fstream/std::basic_ofstream
- fstream/std::basic_ofstream::close
- fstream/std::basic_ofstream::is_open
- fstream/std::basic_ofstream::open
- fstream/std::basic_ofstream::rdbuf
- fstream/std::basic_ofstream::swap
dev_langs:
- C++
helpviewer_keywords:
- std::basic_ofstream [C++]
- std::basic_ofstream [C++], close
- std::basic_ofstream [C++], is_open
- std::basic_ofstream [C++], open
- std::basic_ofstream [C++], rdbuf
- std::basic_ofstream [C++], swap
ms.assetid: 3bcc9c51-6dfc-4844-8fcc-22ef57c9dff1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0d90cbfd5d1f239f05d19803c9ed89ad080667f2
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38964814"
---
# <a name="basicofstream-class"></a>Classe basic_ofstream

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ofstream : public basic_ostream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Elem* l'elemento di base del buffer di file.

*TR* i tratti dell'elemento di base del buffer di file (in genere `char_traits` <  `Elem`>).

## <a name="remarks"></a>Note

Quando la **wchar_t** specializzazione di `basic_ofstream` scrive nel file, se il file viene aperto in modalità testo scriverà una sequenza MBCS. La rappresentazione interna userà un buffer di caratteri `wchar_t`.

L'oggetto archivia un oggetto della classe `basic_filebuf`< `Elem`, `Tr`>.

## <a name="example"></a>Esempio

L'esempio seguente illustra come creare un oggetto `basic_ofstream` e scrivervi del testo.

```cpp
// basic_ofstream_class.cpp
// compile with: /EHsc
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ofstream ofs("ofstream.txt");
    if (!ofs.bad())
    {
        ofs << "Writing to a basic_ofstream object..." << endl;
        ofs.close();
    }
}
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ofstream](#basic_ofstream)|Crea un oggetto di tipo `basic_ofstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[close](#close)|Chiude un file.|
|[is_open](#is_open)|Determina se un file è aperto.|
|[open](#open)|Apre un file.|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer del flusso archiviato.|
|[swap](#swap)|Scambia il contenuto di questo `basic_ofstream` per il contenuto dell'oggetto `basic_ofstream` fornito.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Assegna il contenuto di questo oggetto flusso. Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue reference` che non lascia alcuna copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<fstream>

**Spazio dei nomi:** std

## <a name="basic_ofstream"></a>  basic_ofstream::basic_ofstream

Crea un oggetto di tipo `basic_ofstream`.

```cpp
basic_ofstream();

explicit basic_ofstream(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

explicit basic_ofstream(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

basic_ofstream(
    basic_ofstream&& right);
```

### <a name="parameters"></a>Parametri

*Nome file* il nome del file da aprire.

*Modalità* una delle enumerazioni nello [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

*_Prot* protezione dati, equivalente a di apertura file predefinita di `shflag` nel parametro [fsopen, wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

*a destra* riferimento rvalue al `basic_ofstream` dell'oggetto viene usato per inizializzare questo `basic_ofstream` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [basic_ostream](../standard-library/basic-ostream-class.md)(`sb`), dove `sb` è l'oggetto archiviato della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) <  `Elem`, `Tr`>. Inizializza anche `sb` chiamando `basic_filebuf`< `Elem`, `Tr`>.

Il secondo e il terzo costruttore inizializza la classe base chiamando `basic_ostream`( **sb**). Inizializza anche `sb` chiamando `basic_filebuf` <  `Elem`, `Tr`> e quindi `sb`. [open](../standard-library/basic-filebuf-class.md#open)( `_Filename`, `_Mode` &#124; `ios_base::out`). Se quest'ultima restituisce un puntatore null, il costruttore chiama [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`).

Il quarto costruttore è una funzione di copia. Inizializza l'oggetto con il contenuto della *a destra*, considerato come riferimento rvalue.

### <a name="example"></a>Esempio

L'esempio seguente illustra come creare un oggetto `basic_ofstream` e scrivervi del testo.

```cpp
// basic_ofstream_ctor.cpp
// compile with: /EHsc
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ofstream ofs("C:\\ofstream.txt");
    if (!ofs.bad())
    {
        ofs << "Writing to a basic_ofstream object..." << endl;
        ofs.close();
    }
}
```

## <a name="close"></a>  basic_ofstream::close

Chiude un file.

```cpp
void close();
```

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](../standard-library/basic-ifstream-class.md#rdbuf)**->**[chiudere](../standard-library/basic-filebuf-class.md#close).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `close`.

## <a name="is_open"></a>  basic_ofstream::is_open

Indica se un file è aperto.

```cpp
bool is_open() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il file è aperto; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) **->** [is_open](../standard-library/basic-filebuf-class.md#is_open).

### <a name="example"></a>Esempio

```cpp
// basic_ofstream_is_open.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main( )
{
   using namespace std;
   ifstream file;
   // Open and close with a basic_filebuf
   file.rdbuf( )->open( "basic_ofstream_is_open.txt", ios::in );
   file.close( );
   if (file.is_open())
      cout << "it's open" << endl;
   else
      cout << "it's closed" << endl;
}
```

## <a name="open"></a>  basic_ofstream::open

Apre un file.

```cpp
void open(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### <a name="parameters"></a>Parametri

*Nome file* il nome del file da aprire.

*Modalità* una delle enumerazioni nello [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

*_Prot* protezione dati, equivalente a di apertura file predefinita di `shflag` nel parametro [fsopen, wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](#rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#open)(_ *Filename*, `_Mode` &#124; `ios_base::out`). Se la funzione restituisce un puntatore null, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`).

### <a name="example"></a>Esempio

Visualizzare [basic_filebuf:: Open](../standard-library/basic-filebuf-class.md#open) per un esempio che usa `open`.

## <a name="op_eq"></a>  basic_ofstream::operator=

Assegna il contenuto di questo oggetto flusso. Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue reference` che non lascia alcuna copia.

```cpp
basic_ofstream& operator=(basic_ofstream&& right);
```

### <a name="parameters"></a>Parametri

*a destra* riferimento rvalue a un `basic_ofstream` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `*this`.

### <a name="remarks"></a>Note

L'operatore membro sostituisce il contenuto dell'oggetto usando il contenuto del *a destra*, considerato come riferimento rvalue.

## <a name="rdbuf"></a>  basic_ofstream::rdbuf

Restituisce l'indirizzo del buffer del flusso archiviato.

```cpp
basic_filebuf<Elem, Tr> *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo del buffer del flusso archiviato.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="swap"></a>  basic_ofstream::swap

Scambia il contenuto di due oggetti `basic_ofstream`.

```cpp
void swap(basic_ofstream& right);
```

### <a name="parameters"></a>Parametri

*a destra* un' `lvalue` fanno riferimento a un altro `basic_ofstream` oggetto.

### <a name="remarks"></a>Note

La funzione membro Scambia il contenuto di questo oggetto per il contenuto del *a destra*.

## <a name="see-also"></a>Vedere anche

[Classe basic_ostream](../standard-library/basic-ostream-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
