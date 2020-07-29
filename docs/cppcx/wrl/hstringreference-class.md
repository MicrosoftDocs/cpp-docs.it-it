---
title: Classe HStringReference
ms.date: 07/15/2019
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::CopyTo
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::Get
- corewrappers/Microsoft::WRL::Wrappers::GetRawBuffer
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator=
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator==
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator!=
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator<
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HStringReference class
- Microsoft::WRL::Wrappers::HStringReference::CopyTo method
- Microsoft::WRL::Wrappers::HStringReference::Get method
- Microsoft::WRL::Wrappers::HStringReference::HStringReference, constructor
- Microsoft::WRL::Wrappers::HStringReference::operator= operator
- Microsoft::WRL::Wrappers::HStringReference::operator== operator
- Microsoft::WRL::Wrappers::HStringReference::operator!= operator
- Microsoft::WRL::Wrappers::HStringReference::operator< operator
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
ms.openlocfilehash: 871696f4a970b1ef9d1f5d36d2e17184b93c9e8b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212982"
---
# <a name="hstringreference-class"></a>Classe HStringReference

Rappresenta un HSTRING creato da una stringa esistente.

## <a name="syntax"></a>Sintassi

```cpp
class HStringReference;
```

## <a name="remarks"></a>Osservazioni

La durata del buffer di supporto nel nuovo HSTRING non è gestita dal Windows Runtime. Il chiamante alloca una stringa di origine nel stack frame per evitare un'allocazione dell'heap ed eliminare il rischio di una perdita di memoria. Il chiamante deve inoltre assicurarsi che la stringa di origine rimanga invariata nel corso della durata del HSTRING associato. Per altre informazioni, vedere [funzione WindowsCreateStringReference](/windows/win32/api/winstring/nf-winstring-windowscreatestringreference).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | -----------------------------------------------------------
[HStringReference:: HStringReference](#hstringreference) | Inizializza una nuova istanza della classe `HStringReference`.

### <a name="public-methods"></a>Metodi pubblici

Membro                              | Descrizione
----------------------------------- | ------------------------------------------------------------------
[HStringReference::CopyTo](#copyto) | Copia l' `HStringReference` oggetto corrente in un oggetto HString.
[HStringReference:: Get](#get)       | Recupera il valore dell'handle HSTRING sottostante.
[HStringReference:: GetRawBuffer](#getrawbuffer) | Recupera un puntatore ai dati di stringa sottostanti.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------------------------------------
[HStringReference:: operator =](#operator-assign)       | Sposta il valore di un altro `HStringReference` oggetto nell' `HStringReference` oggetto corrente.
[HStringReference:: operator = =](#operator-equality)    | Indica se i due parametri sono uguali.
[HStringReference:: operator! =](#operator-inequality)  | Indica se i due parametri non sono uguali.
[Operatore HStringReference::&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HStringReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="hstringreferencecopyto"></a><a name="copyto"></a>HStringReference:: CopyTo

Copia l' `HStringReference` oggetto corrente in un oggetto HString.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
HSTRING che riceve la copia.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama la funzione [WindowsDuplicateString](/windows/win32/api/winstring/nf-winstring-windowsduplicatestring) .

## <a name="hstringreferenceget"></a><a name="get"></a>HStringReference:: Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle HSTRING sottostante.

## <a name="hstringreferencegetrawbuffer"></a><a name="getrawbuffer"></a>HStringReference:: GetRawBuffer

Recupera un puntatore ai dati di stringa sottostanti.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```

### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una **`int`** variabile che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

**`const`** Puntatore ai dati di stringa sottostanti.

## <a name="hstringreferencehstringreference"></a><a name="hstringreference"></a>HStringReference:: HStringReference

Inizializza una nuova istanza della classe `HStringReference`.

```cpp
template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest]) throw();

template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest],
                 unsigned int len) throw();

HStringReference(HStringReference&& other) throw();
```

### <a name="parameters"></a>Parametri

*sizeDest*<br/>
Parametro di modello che specifica la dimensione del buffer di destinazione `HStringReference` .

*str*<br/>
Riferimento a una stringa di caratteri wide.

*Len*<br/>
Lunghezza massima del buffer del parametro *Str* da usare in questa operazione. Se il parametro *Len* non è specificato, viene usato l'intero parametro *Str* . Se *Len* è maggiore di *sized*, *Len* viene impostato su *sized*-1.

*altri*<br/>
Un altro `HStringReference` oggetto.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza un nuovo `HStringReference` oggetto con le stesse dimensioni del parametro *Str*.

Il secondo costruttore inizializza un nuovo `HStringReference` oggetto la cui dimensione è specifeid dal parametro *Len*.

Il terzo costruttore inizializza un nuovo `HStringReference` oggetto sul valore dell' *altro* parametro, quindi Elimina l' *altro* parametro.

## <a name="hstringreferenceoperator"></a><a name="operator-assign"></a>HStringReference:: operator =

Sposta il valore di un altro `HStringReference` oggetto nell' `HStringReference` oggetto corrente.

```cpp
HStringReference& operator=(HStringReference&& other) throw()
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Oggetto `HStringReference` esistente.

### <a name="remarks"></a>Osservazioni

Il valore dell' *altro* oggetto esistente viene copiato nell' `HStringReference` oggetto corrente, quindi l' *altro* oggetto viene eliminato definitivamente.

## <a name="hstringreferenceoperator"></a><a name="operator-equality"></a>HStringReference:: operator = =

Indica se i due parametri sono uguali.

```cpp
inline bool operator==(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**`true`** Se i parametri *LHS* e *RHS* sono uguali; in caso contrario, **`false`** .

## <a name="hstringreferenceoperator"></a><a name="operator-inequality"></a>HStringReference:: operator! =

Indica se i due parametri non sono uguali.

```cpp
inline bool operator!=(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator!=(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator!=(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**`true`** Se i parametri *LHS* e *RHS* non sono uguali. in caso contrario, **`false`** .

## <a name="hstringreferenceoperatorlt"></a><a name="operator-less-than"></a>Operatore HStringReference::&lt;

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HStringReference& lhs,
    const HStringReference& rhs) throw()
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo parametro da confrontare. *LHS* può essere un riferimento a un oggetto `HStringReference` .

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un riferimento a un oggetto `HStringReference` .

### <a name="return-value"></a>Valore restituito

**`true`** Se il parametro *LHS* è inferiore al parametro *RHS* ; in caso contrario, **`false`** .
