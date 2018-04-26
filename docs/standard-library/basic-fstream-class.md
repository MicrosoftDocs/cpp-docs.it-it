---
title: Classe basic_fstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- fstream/std::basic_fstream
- fstream/std::basic_fstream::close
- fstream/std::basic_fstream::is_open
- fstream/std::basic_fstream::open
- fstream/std::basic_fstream::rdbuf
- fstream/std::basic_fstream::swap
dev_langs:
- C++
helpviewer_keywords:
- std::basic_fstream [C++]
- std::basic_fstream [C++], close
- std::basic_fstream [C++], is_open
- std::basic_fstream [C++], open
- std::basic_fstream [C++], rdbuf
- std::basic_fstream [C++], swap
ms.assetid: 8473817e-42a4-430b-82b8-b476c86bcf8a
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9a0f1a9b62f7b64befdbd724da5b6bd5ad3d555c
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="basicfstream-class"></a>Classe basic_fstream

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati tramite un buffer del flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`> con elementi di tipo `Elem` i cui tratti di carattere sono determinati dalla classe `Tr`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_fstream : public basic_iostream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

`Elem` Elemento di base del buffer di file.

`Tr` I tratti dell'elemento di base del buffer di file (in genere `char_traits` <  `Elem`>).

## <a name="remarks"></a>Note

L'oggetto archivia un oggetto di classe `basic_filebuf`< `Elem`, `Tr`>.

> [!NOTE]
> Il puntatore get e il puntatore put di un oggetto fstream **NON** sono indipendenti l'uno dall'altro. Se il puntatore get si sposta, lo fa anche il puntatore put.

## <a name="example"></a>Esempio

L'esempio seguente mostra come creare un oggetto `basic_fstream` che consente la lettura e la scrittura.

```cpp
// basic_fstream_class.cpp
// compile with: /EHsc

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    fstream fs("fstream.txt", ios::in | ios::out | ios::trunc);
    if (!fs.bad())
    {
        // Write to the file.
        fs << "Writing to a basic_fstream object..." << endl;
        fs.close();

        // Dump the contents of the file to cout.
        fs.open("fstream.txt", ios::in);
        cout << fs.rdbuf();
        fs.close();
    }
}
```

```Output
Writing to a basic_fstream object...
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_fstream](#basic_fstream)|Costruisce un oggetto di tipo `basic_fstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[close](#close)|Chiude un file.|
|[is_open](#is_open)|Determina se un file è aperto.|
|[open](#open)|Apre un file.|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer di flusso archiviato di tipo puntatore in [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>.|
|[swap](#swap)|Scambia i contenuti di questo oggetto con quelli di un altro oggetto `basic_fstream`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<fstream>

**Spazio dei nomi:** std

## <a name="basic_fstream"></a>  basic_fstream::basic_fstream

Costruisce un oggetto di tipo `basic_fstream`.

```cpp
basic_fstream();

explicit basic_fstream(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in | ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

explicit basic_fstream(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in | ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

basic_fstream(basic_fstream&& right);
```

### <a name="parameters"></a>Parametri

`_Filename` Il nome del file da aprire.

`_Mode` Una delle enumerazioni negli [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

`_Prot` Il file predefinito aprendo protezione, equivalente ai `shflag` parametro nel [fsopen, wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [basic_iostream](../standard-library/basic-iostream-class.md)( **sb**), dove **sb** è l'oggetto archiviato di classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>. Inizializza anche **sb** chiamando `basic_filebuf`\< **Elem**, **Tr**>.

Il secondo e il terzo costruttore inizializza la classe base chiamando `basic_iostream`( **sb**). Inizializza anche **sb** chiamando `basic_filebuf`\< **Elem**, **Tr**> e quindi **sb.**[open](../standard-library/basic-filebuf-class.md#open)(_ *Filename*, `_Mode`). Se quest'ultima funzione restituisce un puntatore null, il costruttore chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **failbit**).

Il quarto costruttore inizializza l'oggetto con il contenuto di `right`, considerato come riferimento rvalue.

### <a name="example"></a>Esempio

Vedere [streampos](../standard-library/ios-typedefs.md#streampos) per un esempio di utilizzo di `basic_fstream`.

## <a name="close"></a>  basic_fstream::close

Chiude un file.

```cpp
void close();
```

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](#rdbuf)**->** [close](../standard-library/basic-filebuf-class.md#close).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di **close**.

## <a name="is_open"></a>  basic_fstream::is_open

Determina se un file è aperto.

```cpp
bool is_open() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il file è aperto; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf)**->**[is_open](../standard-library/basic-filebuf-class.md#is_open).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::is_open](../standard-library/basic-filebuf-class.md#is_open) per un esempio di utilizzo di `is_open`.

## <a name="open"></a>  basic_fstream::open

Apre un file.

```cpp
void open(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in | ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in | ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### <a name="parameters"></a>Parametri

`_Filename` Il nome del file da aprire.

`_Mode` Una delle enumerazioni negli [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

`_Prot` Il file predefinito aprendo protezione, equivalente ai `shflag` parametro nel [fsopen, wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](#rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#open)(_ *Filename*, `_Mode`). Se tale funzione restituisce un puntatore null, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **failbit**).

### <a name="example"></a>Esempio

Vedere [basic_filebuf::open](../standard-library/basic-filebuf-class.md#open) per un esempio di utilizzo di **open**.

## <a name="op_eq"></a>  basic_fstream::operator=

Assegna a questo oggetto il contenuto di un oggetto flusso specificato. Si tratta di un'assegnazione di spostamento che implica un rvalue che non lascia alcuna una copia.

```cpp
basic_fstream& operator=(basic_fstream&& right);
```

### <a name="parameters"></a>Parametri

`right` Riferimento lvalue a un `basic_fstream` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `*this`.

### <a name="remarks"></a>Note

L'operatore del membro sostituisce i contenuti dell'oggetto usando i contenuti di `right`, gestiti come un riferimento rvalue.

## <a name="rdbuf"></a>  basic_fstream::rdbuf

Restituisce l'indirizzo del buffer di flusso archiviato di tipo puntatore in [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>.

```cpp
basic_filebuf<Elem, Tr> *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del buffer di flusso archiviato.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="swap"></a>  basic_fstream::swap

Scambia il contenuto di due oggetti `basic_fstream`.

```cpp
void swap(basic_fstream& right);
```

### <a name="parameters"></a>Parametri

`right` Un' `lvalue` fanno riferimento a un `basic_fstream` oggetto.

### <a name="remarks"></a>Note

La funzione membro scambia il contenuto di questo oggetto con il contenuto di `right`.

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
