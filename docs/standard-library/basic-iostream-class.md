---
title: Classe basic_iostream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- istream/std::basic_iostream
- istream/std::basic_iostream::swap
dev_langs:
- C++
helpviewer_keywords:
- basic_iostream class
ms.assetid: 294b680b-eb49-4066-8db2-6d52dac9d6e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 662c4915753cc49534fa9f489eb61504907744c4
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954708"
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

|Costruttore|Descrizione|
|-|-|
|[basic_iostream](#basic_iostream)|Creare un oggetto `basic_iostream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[swap](#swap)|Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
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

*strbuf* esistente `basic_streambuf` oggetto.

*a destra* sprovvisti `basic_iostream` oggetto utilizzato per costruire un nuovo `basic_iostream`.

### <a name="remarks"></a>Note

Il primo costruttore inizializza gli oggetti base per mezzo di `basic_istream(strbuf)` e `basic_ostream(strbuf)`.

Il secondo costruttore inizializza gli oggetti base chiamando `move(right)`.

## <a name="op_eq"></a>  basic_iostream::operator=

Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un riferimento rvalue che non lascia alcuna copia.

```cpp
basic_iostream& operator=(basic_iostream&& right);
```

### <a name="parameters"></a>Parametri

*a destra* un' `rvalue` fanno riferimento a un `basic_iostream` oggetto da assegnare.

### <a name="remarks"></a>Note

L'operatore membro chiama `swap(right)`.

## <a name="swap"></a>  basic_iostream::swap

Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.

```cpp
void swap(basic_iostream& right);
```

### <a name="parameters"></a>Parametri

*a destra* il `basic_iostream` oggetto da scambiare.

### <a name="remarks"></a>Note

La funzione membro chiama `swap(right)`.

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
