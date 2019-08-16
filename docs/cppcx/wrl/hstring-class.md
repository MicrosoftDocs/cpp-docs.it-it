---
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
ms.openlocfilehash: 71ebc02dc56b45e8790bfac7b7d4bac80d5f7729
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500491"
---
# <a name="hstring-class"></a>Classe HString

Classe helper per la gestione della durata di un [HString](/windows/win32/WinRT/hstring) usando il modello RAII.

## <a name="syntax"></a>Sintassi

```cpp
class HString;
```

## <a name="remarks"></a>Note

Il Windows Runtime fornisce l'accesso alle stringhe tramite handle [HString](/windows/win32/WinRT/hstring) . La `HString` classe fornisce funzioni e operatori pratici per semplificare l'uso degli handle HSTRING. Questa classe può gestire la durata di HSTRING di cui è proprietario tramite un modello RAII.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Descrizione
----------------------------------- | -----------------------------------------------------
[HString:: HString](#hstring)        | Inizializza una nuova istanza della classe `HString`.
[HString:: ~ HString](#tilde-hstring) | Elimina definitivamente l'istanza corrente della `HString` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                     | Descrizione
---------------------------------------- | -------------------------------------------------------------------------------------------------------------
[HString:: Connetti](#attach)               | Associa l'oggetto `HString` specificato all'oggetto corrente `HString` .
[HString::CopyTo](#copyto)               | Copia l'oggetto `HString` corrente in un oggetto HString.
[HString::D etach](#detach)               | Annulla l'associazione tra l' `HString` oggetto specificato e il valore sottostante.
[HString::Get](#get)                     | Recupera il valore dell'handle HSTRING sottostante.
[HString::GetAddressOf](#getaddressof)   | Recupera un puntatore all'handle HSTRING sottostante.
[HString:: GetRawBuffer](#getrawbuffer)   | Recupera un puntatore ai dati di stringa sottostanti.
[HString::IsValid](#isvalid)             | Indica se l'oggetto `HString` corrente è valido.
[HString:: MakeReference](#makereference) | Crea un `HStringReference` oggetto da un parametro di stringa specificato.
[HString:: Release](#release)             | Elimina il valore stringa sottostante e Inizializza l'oggetto `HString` corrente in un valore vuoto.
[HString::Set](#set)                     | Imposta il valore dell'oggetto corrente `HString` sulla stringa di caratteri wide o `HString` sul parametro specificato.

### <a name="public-operators"></a>Operatori pubblici

Nome                                         | Descrizione
-------------------------------------------- | ----------------------------------------------------------------------------
[HString:: operator =](#operator-assign)       | Sposta il valore di un `HString` altro oggetto nell'oggetto `HString` corrente.
[HString:: operator = =](#operator-equality)    | Indica se i due parametri sono uguali.
[HString:: operator! =](#operator-inequality)  | Indica se i due parametri non sono uguali.
[Operatore HString::&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HString`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="tilde-hstring"></a>HString:: ~ HString

Elimina definitivamente l'istanza corrente della `HString` classe.

```cpp
~HString() throw()
```

## <a name="attach"></a>HString:: Connetti

Associa l'oggetto `HString` specificato all'oggetto corrente `HString` .

```cpp
void Attach(
       HSTRING hstr
       ) throw()
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Oggetto `HString` esistente.

## <a name="copyto"></a>HString:: CopyTo

Copia l'oggetto `HString` corrente in un oggetto HString.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
HSTRING che riceve la copia.

### <a name="remarks"></a>Note

Questo metodo chiama la funzione [WindowsDuplicateString](/windows/win32/api/winstring/nf-winstring-windowsduplicatestring) .

## <a name="detach"></a>HString::Detach

Annulla l'associazione tra l' `HString` oggetto specificato e il valore sottostante.

```cpp
HSTRING Detach() throw()
```

### <a name="return-value"></a>Valore restituito

Valore sottostante `HString` prima dell'avvio dell'operazione di scollegamento.

## <a name="get"></a>HString:: Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle HSTRING sottostante

## <a name="getaddressof"></a>HString:: GetAddressOf

Recupera un puntatore all'handle HSTRING sottostante.

```cpp
HSTRING* GetAddressOf() throw()
```

### <a name="return-value"></a>Valore restituito

Puntatore all'handle HSTRING sottostante.

### <a name="remarks"></a>Note

Dopo questa operazione, il valore stringa dell'handle HSTRING sottostante viene eliminato definitivamente.

## <a name="getrawbuffer"></a>HString:: GetRawBuffer

Recupera un puntatore ai dati di stringa sottostanti.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```
### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una variabile **int** che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

Puntatore **const** ai dati di stringa sottostanti.


## <a name="hstring"></a>HString:: HString

Inizializza una nuova istanza della classe `HString`.

```cpp
HString() throw();
HString(HString&& other) throw();
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Handle HSTRING.

*other*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo `HString` oggetto vuoto.

Il secondo costruttore inizializza un nuovo `HString` oggetto sul valore dell' *altro* parametro esistente, quindi Elimina l' *altro* parametro.

## <a name="isvalid"></a>HString::IsValid

Indica se l'oggetto `HString` corrente è vuoto o meno.

```cpp
bool IsValid() const throw()
```

### <a name="parameters"></a>Parametri

**true** se l'oggetto `HString` corrente non è vuoto; in caso contrario, **false**.

## <a name="makereference"></a>HString::MakeReference

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
Parametro di modello che specifica la dimensione del buffer di `HStringReference` destinazione.

*str*<br/>
Riferimento a una stringa di caratteri wide.

*len*<br/>
Lunghezza massima del buffer del parametro *Str* da usare in questa operazione. Se il parametro *Len* non è specificato, viene usato l'intero parametro *Str* .

### <a name="return-value"></a>Valore restituito

Oggetto il cui valore corrisponde al parametro str specificato. `HStringReference`

## <a name="operator-assign"></a>Operatore HString:: operator =

Sposta il valore di un `HString` altro oggetto nell'oggetto `HString` corrente.

```cpp
HString& operator=(HString&& other) throw()
```

### <a name="parameters"></a>Parametri

*other*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Note

Il valore dell' *altro* oggetto esistente viene copiato nell'oggetto corrente `HString` , quindi l' *altro* oggetto viene eliminato definitivamente.

## <a name="operator-equality"></a>Operatore HString:: operator = =

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

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un `HString` oggetto `HStringReference` o o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un `HString` oggetto `HStringReference` o o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *LHS* e *RHS* sono uguali. in caso contrario, **false**.

## <a name="operator-inequality"></a>Operatore HString:: operator! =

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

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un `HString` oggetto `HStringReference` o o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un `HString` oggetto `HStringReference` o o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *LHS* e *RHS* non sono uguali. in caso contrario, **false**.

## <a name="operator-less-than"></a>Operatore HString::&lt; operator

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HString& lhs,
    const HString& rhs) throw()
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un riferimento a un `HString`oggetto.

*rhs*<br/>
Secondo parametro da confrontare. *RHS* può essere un riferimento a un `HString`oggetto.

### <a name="return-value"></a>Valore restituito

**true** se il parametro *LHS* è minore del parametro *RHS* ; in caso contrario, **false**.

## <a name="release"></a>HString:: Release

Elimina il valore stringa sottostante e Inizializza l'oggetto `HString` corrente in un valore vuoto.

```cpp
void Release() throw()
```

## <a name="set"></a>HString::Set

Imposta il valore dell'oggetto corrente `HString` sulla stringa di caratteri wide o `HString` sul parametro specificato.

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
Lunghezza massima del parametro *Str* assegnato all'oggetto corrente `HString` .

*hstr*<br/>
Oggetto `HString` esistente.
