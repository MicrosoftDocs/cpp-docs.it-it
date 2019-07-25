---
title: Classe basic_iostream
ms.date: 11/04/2016
f1_keywords:
- istream/std::basic_iostream
- istream/std::basic_iostream::swap
helpviewer_keywords:
- basic_iostream class
ms.assetid: 294b680b-eb49-4066-8db2-6d52dac9d6e3
ms.openlocfilehash: 052271e2e2cc929875489e27abde2147bc5c070a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68460092"
---
# <a name="basiciostream-class"></a>Classe basic_iostream

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

## <a name="remarks"></a>Note

La classe di modello descrive un oggetto che controlla gli inserimenti, attraverso la propria classe base [basic_ostream](../standard-library/basic-ostream-class.md)< `Elem`, `Tr`> e le estrazioni attraverso la propria classe base [basic_istream](../standard-library/basic-istream-class.md)< `Elem`, `Tr`>. I due oggetti condividono la classe base virtuale comune [basic_ios](../standard-library/basic-ios-class.md)< `Elem`, `Tr`>. I due oggetti gestiscono anche il buffer di un flusso comune, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`. Il costruttore inizializza le proprie classi base attraverso `basic_istream`( **strbuf**) e `basic_ostream`( **strbuf**).

### <a name="constructors"></a>Costruttori

|Costruttore|DESCRIZIONE|
|-|-|
|[basic_iostream](#basic_iostream)|Creare un oggetto `basic_iostream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|DESCRIZIONE|
|-|-|
|[swap](#swap)|Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.|

### <a name="operators"></a>Operatori

|Operator|DESCRIZIONE|
|-|-|
|[operator=](#op_eq)|Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue` che non lascia alcuna copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<istream>

**Spazio dei nomi:** std

## <a name="basic_iostream"></a>  basic_iostream::basic_iostream

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

### <a name="remarks"></a>Note

Il primo costruttore inizializza gli oggetti base per mezzo di `basic_istream(strbuf)` e `basic_ostream(strbuf)`.

Il secondo costruttore inizializza gli oggetti di base chiamando `move(right)`.

## <a name="op_eq"></a>  basic_iostream::operator=

Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un riferimento rvalue che non lascia alcuna copia.

```cpp
basic_iostream& operator=(basic_iostream&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento `rvalue` a un oggetto `basic_iostream` dal quale effettuare l'assegnazione.

### <a name="remarks"></a>Note

L'operatore membro chiama `swap(right)`.

## <a name="swap"></a>  basic_iostream::swap

Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.

```cpp
void swap(basic_iostream& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto `basic_iostream` da scambiare.

### <a name="remarks"></a>Note

La funzione membro chiama `swap(right)`.

## <a name="see-also"></a>Vedere anche

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
