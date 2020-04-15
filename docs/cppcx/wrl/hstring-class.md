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
ms.openlocfilehash: 625d7b7d6fc001a6fb63144807b5f29d3620485b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371439"
---
# <a name="hstring-class"></a>Classe HString

Classe helper per la gestione della durata di un [HSTRING](/windows/win32/WinRT/hstring) usando il modello RAII.

## <a name="syntax"></a>Sintassi

```cpp
class HString;
```

## <a name="remarks"></a>Osservazioni

Windows Runtime fornisce l'accesso alle stringhe tramite handle [HSTRING.](/windows/win32/WinRT/hstring) La `HString` classe fornisce funzioni e operatori pratici per semplificare l'utilizzo degli handle HSTRING. Questa classe può gestire la durata dell'HSTRING di cui è proprietaria tramite un modello RAII.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Descrizione
----------------------------------- | -----------------------------------------------------
[Stringa HString::HStringHString::HString](#hstring)        | Inizializza una nuova istanza della classe `HString`.
[Stringa HString::](#tilde-hstring) | Elimina l'istanza corrente `HString` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                     | Descrizione
---------------------------------------- | -------------------------------------------------------------------------------------------------------------
[HString::Attach](#attach)               | Associa l'oggetto specificato `HString` `HString` all'oggetto corrente.
[HString::CopyTo](#copyto)               | Copia l'oggetto corrente in `HString` un oggetto HSTRING.
[HString::Detach](#detach)               | Disassocia l'oggetto specificato `HString` dal valore sottostante.
[HString::Get](#get)                     | Recupera il valore dell'handle HSTRING sottostante.
[Stringa HString::GetAddressOf](#getaddressof)   | Recupera un puntatore all'handle HSTRING sottostante.
[HString::GetRawBuffer](#getrawbuffer)   | Recupera un puntatore ai dati della stringa sottostante.
[HString::IsValid](#isvalid)             | Indica se l'oggetto corrente `HString` è valido.
[HString::MakeReference](#makereference) | Crea `HStringReference` un oggetto da un parametro di stringa specificato.
[HString::Release](#release)             | Elimina il valore stringa sottostante e inizializza `HString` l'oggetto corrente a un valore vuoto.
[HString::Set](#set)                     | Imposta il valore `HString` dell'oggetto corrente sulla stringa `HString` o sul parametro di caratteri wide specificato.

### <a name="public-operators"></a>Operatori pubblici

Nome                                         | Descrizione
-------------------------------------------- | ----------------------------------------------------------------------------
[HString::operatore](#operator-assign)       | Sposta il valore `HString` di un `HString` altro oggetto nell'oggetto corrente.
[HString::operatore](#operator-equality)    | Indica se i due parametri sono uguali.
[HString::operator!](#operator-inequality)  | Indica se i due parametri non sono uguali.
[Operatore HString::&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HString`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="hstringhstring"></a><a name="tilde-hstring"></a>Stringa HString::

Elimina l'istanza corrente `HString` della classe.

```cpp
~HString() throw()
```

## <a name="hstringattach"></a><a name="attach"></a>HString::Attach

Associa l'oggetto specificato `HString` `HString` all'oggetto corrente.

```cpp
void Attach(
       HSTRING hstr
       ) throw()
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Oggetto `HString` esistente.

## <a name="hstringcopyto"></a><a name="copyto"></a>HString::CopyTo

Copia l'oggetto corrente in `HString` un oggetto HSTRING.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*Str*<br/>
HSTRING che riceve la copia.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama la funzione [WindowsDuplicateString.](/windows/win32/api/winstring/nf-winstring-windowsduplicatestring)

## <a name="hstringdetach"></a><a name="detach"></a>HString::Detach

Disassocia l'oggetto specificato `HString` dal valore sottostante.

```cpp
HSTRING Detach() throw()
```

### <a name="return-value"></a>Valore restituito

Valore `HString` sottostante prima dell'avvio dell'operazione di disconnessione.

## <a name="hstringget"></a><a name="get"></a>HString::Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Il valore dell'handle HSTRING sottostante

## <a name="hstringgetaddressof"></a><a name="getaddressof"></a>Stringa HString::GetAddressOf

Recupera un puntatore all'handle HSTRING sottostante.

```cpp
HSTRING* GetAddressOf() throw()
```

### <a name="return-value"></a>Valore restituito

Puntatore all'handle HSTRING sottostante.

### <a name="remarks"></a>Osservazioni

Dopo questa operazione, il valore stringa dell'handle HSTRING sottostante viene eliminato.

## <a name="hstringgetrawbuffer"></a><a name="getrawbuffer"></a>HString::GetRawBuffer

Recupera un puntatore ai dati della stringa sottostante.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```

### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una variabile **int** che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

Puntatore **const** ai dati della stringa sottostante.

## <a name="hstringhstring"></a><a name="hstring"></a>Stringa HString::HStringHString::HString

Inizializza una nuova istanza della classe `HString`.

```cpp
HString() throw();
HString(HString&& other) throw();
```

### <a name="parameters"></a>Parametri

*hstr*<br/>
Handle HSTRING.

*Altro*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `HString` inizializza un nuovo oggetto vuoto.

Il secondo costruttore `HString` inizializza un nuovo oggetto sul valore dell'altro parametro esistente e quindi elimina l'altro parametro. *other* *other*

## <a name="hstringisvalid"></a><a name="isvalid"></a>HString::IsValid

Indica se l'oggetto corrente `HString` è vuoto o meno.

```cpp
bool IsValid() const throw()
```

### <a name="parameters"></a>Parametri

**true** se `HString` l'oggetto corrente non è vuoto; in caso contrario, **false**.

## <a name="hstringmakereference"></a><a name="makereference"></a>HString::MakeReference

Crea `HStringReference` un oggetto da un parametro di stringa specificato.

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

*più grande*<br/>
Parametro di modello che specifica `HStringReference` la dimensione del buffer di destinazione.

*Str*<br/>
Riferimento a una stringa di caratteri wide.

*Len*<br/>
Lunghezza massima del buffer del parametro *str* da utilizzare in questa operazione. Se il parametro *len* non è specificato, viene utilizzato l'intero parametro *str.*

### <a name="return-value"></a>Valore restituito

Oggetto `HStringReference` il cui valore è uguale al parametro *str* specificato.

## <a name="hstringoperator-operator"></a><a name="operator-assign"></a>Operatore HString::operator

Sposta il valore `HString` di un `HString` altro oggetto nell'oggetto corrente.

```cpp
HString& operator=(HString&& other) throw()
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `HString` esistente.

### <a name="remarks"></a>Osservazioni

Il valore dell'altro oggetto esistente `HString` viene copiato nell'oggetto corrente e quindi l'altro oggetto viene eliminato. *other* *other*

## <a name="hstringoperator-operator"></a><a name="operator-equality"></a>Operatore HString::operator

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

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può `HString` essere `HStringReference` un o oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *rhs* può `HString` essere `HStringReference` un oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *lhs* e *rhs* sono uguali; in caso contrario, **false**.

## <a name="hstringoperator-operator"></a><a name="operator-inequality"></a>Operatore HString::operator!

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

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può `HString` essere `HStringReference` un o oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare. *rhs* può `HString` essere `HStringReference` un oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *lhs* e *rhs* non sono uguali; in caso contrario, **false**.

## <a name="hstringoperatorlt-operator"></a><a name="operator-less-than"></a>Operatore HString::operator&lt;

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HString& lhs,
    const HString& rhs) throw()
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può essere un `HString`riferimento a un file .

*rhs*<br/>
Secondo parametro da confrontare. *rhs* può essere un `HString`riferimento a un file .

### <a name="return-value"></a>Valore restituito

**true** se il *lhs* parametro è minore di *rhs* parametro; in caso contrario, **false**.

## <a name="hstringrelease"></a><a name="release"></a>HString::Release

Elimina il valore stringa sottostante e inizializza `HString` l'oggetto corrente a un valore vuoto.

```cpp
void Release() throw()
```

## <a name="hstringset"></a><a name="set"></a>HString::Set

Imposta il valore `HString` dell'oggetto corrente sulla stringa `HString` o sul parametro di caratteri wide specificato.

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

*Str*<br/>
Stringa di caratteri wide.

*Len*<br/>
Lunghezza massima del parametro *str* assegnato `HString` all'oggetto corrente.

*hstr*<br/>
Oggetto `HString` esistente.
