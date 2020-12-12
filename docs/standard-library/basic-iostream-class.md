---
description: 'Altre informazioni su: basic_iostream Class'
title: Classe basic_iostream
ms.date: 11/04/2016
f1_keywords:
- istream/std::basic_iostream
- istream/std::basic_iostream::swap
helpviewer_keywords:
- basic_iostream class
ms.assetid: 294b680b-eb49-4066-8db2-6d52dac9d6e3
ms.openlocfilehash: c9b605c5eb36a0bc725ce21e2c89617357078d40
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321514"
---
# <a name="basic_iostream-class"></a>Classe basic_iostream

Classe di flusso che può eseguire operazioni sia di input sia di output.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_iostream : public basic_istream<Elem, Tr>,
    public basic_ostream<Elem, Tr>
{
public:
    explicit basic_iostream(basic_streambuf<Elem, Tr>* strbuf);

    virtual ~basic_iostream();

};
```

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che controlla gli inserimenti, tramite la relativa classe di base [basic_ostream](../standard-library/basic-ostream-class.md) <  `Elem` , `Tr`> ed estrazioni, tramite la relativa classe base [basic_istream](../standard-library/basic-istream-class.md) <  `Elem` , `Tr`>. I due oggetti condividono una classe base virtuale comune [basic_ios](../standard-library/basic-ios-class.md) <  `Elem` , `Tr`>. I due oggetti gestiscono anche il buffer di un flusso comune, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`. Il costruttore inizializza le proprie classi base attraverso `basic_istream`( **strbuf**) e `basic_ostream`( **strbuf**).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_iostream](#basic_iostream)|Creare un oggetto `basic_iostream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[scambio](#swap)|Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue` che non lascia alcuna copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<istream>

**Spazio dei nomi:** std

## <a name="basic_iostreambasic_iostream"></a><a name="basic_iostream"></a> basic_iostream:: basic_iostream

Creare un oggetto `basic_iostream`.

```cpp
explicit basic_iostream(basic_streambuf<Elem, Tr>* strbuf);

basic_iostream(basic_iostream&& right);

basic_iostream();
```

### <a name="parameters"></a>Parametri

*Strbuf*\
Oggetto `basic_streambuf` esistente.

*Ok*\
Un oggetto `basic_iostream` esistente usato per costruire una nuova classe `basic_iostream`.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza gli oggetti base per mezzo di `basic_istream(strbuf)` e `basic_ostream(strbuf)`.

Il secondo costruttore inizializza gli oggetti di base chiamando `move(right)` .

## <a name="basic_iostreamoperator"></a><a name="op_eq"></a> basic_iostream:: operator =

Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un riferimento rvalue che non lascia alcuna copia.

```cpp
basic_iostream& operator=(basic_iostream&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento `rvalue` a un oggetto `basic_iostream` dal quale effettuare l'assegnazione.

### <a name="remarks"></a>Commenti

L'operatore membro chiama `swap(right)` .

## <a name="basic_iostreamswap"></a><a name="swap"></a> basic_iostream:: swap

Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.

```cpp
void swap(basic_iostream& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto `basic_iostream` da scambiare.

### <a name="remarks"></a>Commenti

La funzione membro chiama `swap(right)` .

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
