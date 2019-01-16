---
title: Classe HStringReference
ms.date: 09/25/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::CopyTo
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::Get
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
ms.openlocfilehash: 09bf994a77bb6b7c9c9e97566ae01e02bd5070c0
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336588"
---
# <a name="hstringreference-class"></a>Classe HStringReference

Rappresenta un HSTRING creato da una stringa esistente.

## <a name="syntax"></a>Sintassi

```cpp
class HStringReference;
```

## <a name="remarks"></a>Note

La durata del buffer nel nuovo HSTRING non è gestita dal Runtime di Windows. Il chiamante assegna una stringa di origine nello stack frame per evitare un'allocazione heap e per eliminare il rischio di perdita di memoria. Inoltre, il chiamante deve garantire che la stringa di origine rimanga invariata durante il ciclo di vita di HSTRING associato. Per altre informazioni, vedere [WindowsCreateStringReference funzione](/windows/desktop/api/winstring/nf-winstring-windowscreatestringreference).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | -----------------------------------------------------------
[HStringReference::HStringReference](#hstringreference) | Inizializza una nuova istanza della classe `HStringReference`.

### <a name="public-methods"></a>Metodi pubblici

Member                              | Descrizione
----------------------------------- | ------------------------------------------------------------------
[HStringReference::CopyTo](#copyto) | Copia l'oggetto corrente `HStringReference` oggetto in un oggetto HSTRING.
[HStringReference::Get](#get)       | Recupera il valore di handle sottostante di HSTRING.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------------------------------------
[HStringReference::operator=](#operator-assign)       | Sposta il valore di un'altra `HStringReference` oggetto all'oggetto corrente `HStringReference` oggetto.
[HStringReference::operator==](#operator-equality)    | Indica se i due parametri sono uguali.
[HStringReference::operator!=](#operator-inequality)  | Indica se i due parametri non sono uguali.
[HStringReference::operator&lt;](#operator-less-than) | Indica se il primo parametro è minore di secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HStringReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="copyto"></a>HStringReference::CopyTo

Copia l'oggetto corrente `HStringReference` oggetto in un oggetto HSTRING.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
HSTRING che riceve la copia.

### <a name="remarks"></a>Note

Questo metodo chiama il [WindowsDuplicateString](https://msdn.microsoft.com/library/br224634.aspx) (funzione).

## <a name="get"></a>HStringReference::Get

Recupera il valore di handle sottostante di HSTRING.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle sottostante di HSTRING.

## <a name="hstringreference"></a>HStringReference::HStringReference

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
Un parametro di modello che specifica le dimensioni della destinazione `HStringReference` buffer.

*str*<br/>
Un riferimento a una stringa di caratteri "wide".

*len*<br/>
La lunghezza massima del *str* buffer del parametro da utilizzare in questa operazione. Se il *len* parametro non è specificato, l'intera *str* parametro viene utilizzato. Se *len* è maggiore di quella *sizeDest*, *len* è impostata su *sizeDest*-1.

*other*<br/>
Un altro `HStringReference` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo `HStringReference` oggetto come parametro con le stesse dimensioni *str*.

Il secondo costruttore inizializza un nuovo `HStringReference` dell'oggetto che la dimensione specifeid dal parametro *len*.

Il terzo costruttore inizializza un nuovo `HStringReference` sul valore dell'oggetto di *altri* parametro e quindi distrugge il *altri* parametro.

## <a name="operator-assign"></a>HStringReference::operator=

Sposta il valore di un'altra `HStringReference` oggetto all'oggetto corrente `HStringReference` oggetto.

```cpp
HStringReference& operator=(HStringReference&& other) throw()
```

### <a name="parameters"></a>Parametri

*other*<br/>
Oggetto `HStringReference` esistente.

### <a name="remarks"></a>Note

Il valore dell'oggetto esistente *altri* viene copiato l'oggetto corrente `HStringReference` oggetto e quindi la *altri* oggetto viene eliminato definitivamente.

## <a name="operator-equality"></a>HStringReference::operator==

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
Il primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Il secondo parametro da confrontare.  *rhs* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se il *lhs* e *rhs* parametri sono uguali; in caso contrario, **false**.

## <a name="operator-inequality"></a>HStringReference::operator!=

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
Il primo parametro da confrontare. *LHS* può essere un `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Il secondo parametro da confrontare.  *rhs* può essere un `HStringReference` oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se il *lhs* e *rhs* parametri non sono uguali; in caso contrario, **false**.

## <a name="operator-less-than"></a>HStringReference::operator&lt;

Indica se il primo parametro è minore di secondo parametro.

```cpp
inline bool operator<(
    const HStringReference& lhs,
    const HStringReference& rhs) throw()
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il primo parametro da confrontare. *LHS* può essere un riferimento a un `HStringReference`.

*rhs*<br/>
Il secondo parametro da confrontare.  *rhs* può essere un riferimento a un `HStringReference`.

### <a name="return-value"></a>Valore restituito

**true** se il *lhs* parametro è minore del *rhs* parametro; in caso contrario, **false**.
