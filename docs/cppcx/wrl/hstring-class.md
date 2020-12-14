---
description: 'Altre informazioni su: classe HString'
title: Classe HString
ms.date: 07/15/2019
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString
- corewrappers/Microsoft::WRL::Wrappers::HString::Attach
- corewrappers/Microsoft::WRL::Wrappers::HString::CopyTo
- corewrappers/Microsoft::WRL::Wrappers::HString::Detach
- corewrappers/Microsoft::WRL::Wrappers::HString::Get
- corewrappers/Microsoft::WRL::Wrappers::HString::GetRawBuffer
- corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf
- corewrappers/Microsoft::WRL::Wrappers::HString::HString
- corewrappers/Microsoft::WRL::Wrappers::HString::IsValid
- corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference
- corewrappers/Microsoft::WRL::Wrappers::HString::operator=
- corewrappers/Microsoft::WRL::Wrappers::HString::operator==
- corewrappers/Microsoft::WRL::Wrappers::HString::operator!=
- corewrappers/Microsoft::WRL::Wrappers::HString::operator<
- corewrappers/Microsoft::WRL::Wrappers::HString::Release
- corewrappers/Microsoft::WRL::Wrappers::HString::Set
- corewrappers/Microsoft::WRL::Wrappers::HString::~HString
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HString class
- Microsoft::WRL::Wrappers::HString::Attach method
- Microsoft::WRL::Wrappers::HString::CopyTo method
- Microsoft::WRL::Wrappers::HString::Detach method
- Microsoft::WRL::Wrappers::HString::Get method
- Microsoft::WRL::Wrappers::HString::GetAddressOf method
- Microsoft::WRL::Wrappers::HString::HString, constructor
- Microsoft::WRL::Wrappers::HString::IsValid method
- Microsoft::WRL::Wrappers::HString::MakeReference method
- Microsoft::WRL::Wrappers::HString::operator= operator
- Microsoft::WRL::Wrappers::HString::operator== operator
- Microsoft::WRL::Wrappers::HString::operator!= operator
- Microsoft::WRL::Wrappers::HString::operator< operator
- Microsoft::WRL::Wrappers::HString::Release method
- Microsoft::WRL::Wrappers::HString::Set method
- Microsoft::WRL::Wrappers::HString::~HString, destructor
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
ms.openlocfilehash: 3a7de2595fbc55cec21f74193cc53f29438530cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229158"
---
# <a name="hstring-class"></a>Classe HString

Classe helper per la gestione della durata di un [HString](/windows/win32/WinRT/hstring) usando il modello RAII.

## <a name="syntax"></a>Sintassi

```cpp
class HString;
```

## <a name="remarks"></a>Osservazioni

Il Windows Runtime fornisce l'accesso alle stringhe tramite handle [HString](/windows/win32/WinRT/hstring) . La `HString` classe fornisce funzioni e operatori pratici per semplificare l'uso degli handle HSTRING. Questa classe può gestire la durata di HSTRING di cui è proprietario tramite un modello RAII.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Description
----------------------------------- | -----------------------------------------------------
[HString:: HString](#hstring)        | Inizializza una nuova istanza della classe `HString`.
[HString:: ~ HString](#tilde-hstring) | Elimina definitivamente l'istanza corrente della `HString` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                     | Description
---------------------------------------- | -------------------------------------------------------------------------------------------------------------
[HString:: Connetti](#attach)               | Associa l'oggetto specificato all' `HString` oggetto corrente `HString` .
[HString::CopyTo](#copyto)               | Copia l' `HString` oggetto corrente in un oggetto HString.
[HString::D etach](#detach)               | Annulla l'associazione tra l'oggetto specificato e il `HString` valore sottostante.
[HString:: Get](#get)                     | Recupera il valore dell'handle HSTRING sottostante.
[HString:: GetAddressOf](#getaddressof)   | Recupera un puntatore all'handle HSTRING sottostante.
[HString:: GetRawBuffer](#getrawbuffer)   | Recupera un puntatore ai dati di stringa sottostanti.
[HString:: IsValid](#isvalid)             | Indica se l' `HString` oggetto corrente è valido.
[HString:: MakeReference](#makereference) | Crea un `HStringReference` oggetto da un parametro di stringa specificato.
[HString:: Release](#release)             | Elimina il valore stringa sottostante e Inizializza l' `HString` oggetto corrente in un valore vuoto.
[HString:: set](#set)                     | Imposta il valore dell'oggetto corrente sulla `HString` stringa di caratteri wide o sul parametro specificato `HString` .

### <a name="public-operators"></a>Operatori pubblici

Nome                                         | Description
-------------------------------------------- | ----------------------------------------------------------------------------
[HString:: operator =](#operator-assign)       | Sposta il valore di un altro `HString` oggetto nell' `HString` oggetto corrente.
[HString:: operator = =](#operator-equality)    | Indica se i due parametri sono uguali.
[HString:: operator! =](#operator-inequality)  | Indica se i due parametri non sono uguali.
[Operatore HString::&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HString`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="hstringhstring"></a><a name="tilde-hstring"></a> HString:: ~ HString

Elimina definitivamente l'istanza corrente della `HString` classe.

```cpp
~HString() throw()
```

## <a name="hstringattach"></a><a name="attach"></a> HString:: Connetti

Associa l'oggetto specificato all' `HString` oggetto corrente `HString` .

```cpp
void Attach(
       HSTRING hstr
       ) throw()
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Oggetto `HString` esistente.

## <a name="hstringcopyto"></a><a name="copyto"></a> HString:: CopyTo

Copia l' `HString` oggetto corrente in un oggetto HString.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
HSTRING che riceve la copia.

### <a name="remarks"></a>Commenti

Questo metodo chiama la funzione [WindowsDuplicateString](/windows/win32/api/winstring/nf-winstring-windowsduplicatestring) .

## <a name="hstringdetach"></a><a name="detach"></a> HString::D etach

Annulla l'associazione tra l'oggetto specificato e il `HString` valore sottostante.

```cpp
HSTRING Detach() throw()
```

### <a name="return-value"></a>Valore restituito

Valore sottostante `HString` prima dell'avvio dell'operazione di scollegamento.

## <a name="hstringget"></a><a name="get"></a> HString:: Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle HSTRING sottostante

## <a name="hstringgetaddressof"></a><a name="getaddressof"></a> HString:: GetAddressOf

Recupera un puntatore all'handle HSTRING sottostante.

```cpp
HSTRING* GetAddressOf() throw()
```

### <a name="return-value"></a>Valore restituito

Puntatore all'handle HSTRING sottostante.

### <a name="remarks"></a>Commenti

Dopo questa operazione, il valore stringa dell'handle HSTRING sottostante viene eliminato definitivamente.

## <a name="hstringgetrawbuffer"></a><a name="getrawbuffer"></a> HString:: GetRawBuffer

Recupera un puntatore ai dati di stringa sottostanti.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```

### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una **`int`** variabile che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

**`const`** Puntatore ai dati di stringa sottostanti.

## <a name="hstringhstring"></a><a name="hstring"></a> HString:: HString

Inizializza una nuova istanza della classe `HString`.

```cpp
HString() throw();
HString(HString&& other) throw();
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Handle HSTRING.

*altri*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza un nuovo `HString` oggetto vuoto.

Il secondo costruttore inizializza un nuovo `HString` oggetto sul valore dell' *altro* parametro esistente, quindi Elimina l' *altro* parametro.

## <a name="hstringisvalid"></a><a name="isvalid"></a> HString:: IsValid

Indica se l' `HString` oggetto corrente è vuoto o meno.

```cpp
bool IsValid() const throw()
```

### <a name="parameters"></a>Parametri

**`true`** Se l' `HString` oggetto corrente non è vuoto; in caso contrario, **`false`** .

## <a name="hstringmakereference"></a><a name="makereference"></a> HString:: MakeReference

Crea un `HStringReference` oggetto da un parametro di stringa specificato.

```cpp
template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[ sizeDest]);

    template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[sizeDest],
              unsigned int len);
```

### <a name="parameters"></a>Parametri

*sizeDest*<br/>
Parametro di modello che specifica la dimensione del buffer di destinazione `HStringReference` .

*str*<br/>
Riferimento a una stringa di caratteri wide.

*len*<br/>
Lunghezza massima del buffer del parametro *Str* da usare in questa operazione. Se il parametro *Len* non è specificato, viene usato l'intero parametro *Str* .

### <a name="return-value"></a>Valore restituito

`HStringReference`Oggetto il cui valore corrisponde al parametro *Str* specificato.

## <a name="hstringoperator-operator"></a><a name="operator-assign"></a> Operatore HString:: operator =

Sposta il valore di un altro `HString` oggetto nell' `HString` oggetto corrente.

```cpp
HString& operator=(HString&& other) throw()
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Commenti

Il valore dell' *altro* oggetto esistente viene copiato nell' `HString` oggetto corrente, quindi l' *altro* oggetto viene eliminato definitivamente.

## <a name="hstringoperator-operator"></a><a name="operator-equality"></a> Operatore HString:: operator = =

Indica se i due parametri sono uguali.

```cpp
inline bool operator==(
               const HString& lhs,
               const HString& rhs) throw()

inline bool operator==(
                const HString& lhs,
                const HStringReference& rhs) throw()

inline bool operator==(
                const HStringReference& lhs,
                const HString& rhs) throw()

inline bool operator==(
                 const HSTRING& lhs,
                 const HString& rhs) throw()

inline bool operator==(
                 const HString& lhs,
                 const HSTRING& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un `HString` oggetto o o `HStringReference` un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un `HString` oggetto o o `HStringReference` un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**`true`** Se i parametri *LHS* e *RHS* sono uguali; in caso contrario, **`false`** .

## <a name="hstringoperator-operator"></a><a name="operator-inequality"></a> Operatore HString:: operator! =

Indica se i due parametri non sono uguali.

```cpp
inline bool operator!=( const HString& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HStringReference& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,
                        const HStringReference& rhs) throw()

inline bool operator!=( const HSTRING& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,
                        const HSTRING& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un `HString` oggetto o o `HStringReference` un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un `HString` oggetto o o `HStringReference` un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**`true`** Se i parametri *LHS* e *RHS* non sono uguali. in caso contrario, **`false`** .

## <a name="hstringoperatorlt-operator"></a><a name="operator-less-than"></a>Operatore HString:: operator &lt;

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HString& lhs,
    const HString& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un riferimento a un oggetto `HString` .

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un riferimento a un oggetto `HString` .

### <a name="return-value"></a>Valore restituito

**`true`** Se il parametro *LHS* è inferiore al parametro *RHS* ; in caso contrario, **`false`** .

## <a name="hstringrelease"></a><a name="release"></a> HString:: Release

Elimina il valore stringa sottostante e Inizializza l' `HString` oggetto corrente in un valore vuoto.

```cpp
void Release() throw()
```

## <a name="hstringset"></a><a name="set"></a> HString:: set

Imposta il valore dell'oggetto corrente sulla `HString` stringa di caratteri wide o sul parametro specificato `HString` .

```cpp
HRESULT Set(
          const wchar_t* str) throw();
HRESULT Set(
          const wchar_t* str,
          unsigned int len
           ) throw();
HRESULT Set(
          const HSTRING& hstr
           ) throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa di caratteri wide.

*len*<br/>
Lunghezza massima del parametro *Str* assegnato all' `HString` oggetto corrente.

*hstr*<br/>
Oggetto `HString` esistente.
