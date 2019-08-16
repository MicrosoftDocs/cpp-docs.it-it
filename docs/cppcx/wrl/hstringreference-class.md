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
ms.openlocfilehash: 591af0d66c9c209ba56310a0bd5cf5cd74e34929
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498340"
---
# <a name="hstringreference-class"></a>Classe HStringReference

Rappresenta un HSTRING creato da una stringa esistente.

## <a name="syntax"></a>Sintassi

```cpp
class HStringReference;
```

## <a name="remarks"></a>Note

La durata del buffer di supporto nel nuovo HSTRING non è gestita dal Windows Runtime. Il chiamante alloca una stringa di origine nel stack frame per evitare un'allocazione dell'heap ed eliminare il rischio di una perdita di memoria. Il chiamante deve inoltre assicurarsi che la stringa di origine rimanga invariata nel corso della durata del HSTRING associato. Per altre informazioni, vedere [funzione WindowsCreateStringReference](/windows/win32/api/winstring/nf-winstring-windowscreatestringreference).

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | DESCRIZIONE
------------------------------------------------------- | -----------------------------------------------------------
[HStringReference:: HStringReference](#hstringreference) | Inizializza una nuova istanza della classe `HStringReference`.

### <a name="public-methods"></a>Metodi pubblici

Member                              | DESCRIZIONE
----------------------------------- | ------------------------------------------------------------------
[HStringReference::CopyTo](#copyto) | Copia l'oggetto `HStringReference` corrente in un oggetto HString.
[HStringReference::Get](#get)       | Recupera il valore dell'handle HSTRING sottostante.
[HStringReference::GetRawBuffer](#getrawbuffer) | Recupera un puntatore ai dati di stringa sottostanti.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                  | DESCRIZIONE
----------------------------------------------------- | ----------------------------------------------------------------------------------------------
[HStringReference:: operator =](#operator-assign)       | Sposta il valore di un `HStringReference` altro oggetto nell'oggetto `HStringReference` corrente.
[HStringReference:: operator = =](#operator-equality)    | Indica se i due parametri sono uguali.
[HStringReference::operator!=](#operator-inequality)  | Indica se i due parametri non sono uguali.
[Operatore HStringReference::&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HStringReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="copyto"></a>HStringReference::CopyTo

Copia l'oggetto `HStringReference` corrente in un oggetto HString.

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

## <a name="get"></a>HStringReference::Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle HSTRING sottostante.

## <a name="getrawbuffer"></a>HStringReference::GetRawBuffer

Recupera un puntatore ai dati di stringa sottostanti.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```
### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una variabile **int** che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

Puntatore **const** ai dati di stringa sottostanti.

## <a name="hstringreference"></a>HStringReference:: HStringReference

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
Parametro di modello che specifica la dimensione del buffer di `HStringReference` destinazione.

*str*<br/>
Riferimento a una stringa di caratteri wide.

*len*<br/>
Lunghezza massima del buffer del parametro *Str* da usare in questa operazione. Se il parametro *Len* non è specificato, viene usato l'intero parametro *Str* . Se *Len* è maggiore di *sized*, *Len* viene impostato su *sized*-1.

*other*<br/>
Un `HStringReference` altro oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo `HStringReference` oggetto con le stesse dimensioni del parametro *Str*.

Il secondo costruttore inizializza un nuovo `HStringReference` oggetto la cui dimensione è specifeid dal parametro *Len*.

Il terzo costruttore inizializza un nuovo `HStringReference` oggetto sul valore dell' *altro* parametro, quindi Elimina l' *altro* parametro.

## <a name="operator-assign"></a>HStringReference:: operator =

Sposta il valore di un `HStringReference` altro oggetto nell'oggetto `HStringReference` corrente.

```cpp
HStringReference& operator=(HStringReference&& other) throw()
```

### <a name="parameters"></a>Parametri

*other*<br/>
Oggetto `HStringReference` esistente.

### <a name="remarks"></a>Note

Il valore dell' *altro* oggetto esistente viene copiato nell'oggetto corrente `HStringReference` , quindi l' *altro* oggetto viene eliminato definitivamente.

## <a name="operator-equality"></a>HStringReference:: operator = =

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

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *LHS* e *RHS* sono uguali. in caso contrario, **false**.

## <a name="operator-inequality"></a>HStringReference:: operator! =

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

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *LHS* e *RHS* non sono uguali. in caso contrario, **false**.

## <a name="operator-less-than"></a>HStringReference::operator&lt;

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HStringReference& lhs,
    const HStringReference& rhs) throw()
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Primo parametro da confrontare. *LHS* può essere un riferimento a un `HStringReference`oggetto.

*rhs*<br/>
Secondo parametro da confrontare.  *RHS* può essere un riferimento a un `HStringReference`oggetto.

### <a name="return-value"></a>Valore restituito

**true** se il parametro *LHS* è minore del parametro *RHS* ; in caso contrario, **false**.
