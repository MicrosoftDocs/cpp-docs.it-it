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
ms.openlocfilehash: fd064f97081fad1a9df9de0865bb7c46ad5b4484
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371415"
---
# <a name="hstringreference-class"></a>Classe HStringReference

Rappresenta un HSTRING creato da una stringa esistente.

## <a name="syntax"></a>Sintassi

```cpp
class HStringReference;
```

## <a name="remarks"></a>Osservazioni

La durata del buffer di backup nel nuovo HSTRING non è gestita da Windows Runtime. Il chiamante alloca una stringa di origine nello stack frame per evitare un'allocazione heap ed eliminare il rischio di una perdita di memoria. Inoltre, il chiamante deve assicurarsi che la stringa di origine rimanga invariata durante la durata dell'HSTRING associato. Per ulteriori informazioni, vedere [Funzione WindowsCreateStringReference](/windows/win32/api/winstring/nf-winstring-windowscreatestringreference).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | -----------------------------------------------------------
[HStringReference::HStringReference](#hstringreference) | Inizializza una nuova istanza della classe `HStringReference`.

### <a name="public-methods"></a>Metodi pubblici

Membro                              | Descrizione
----------------------------------- | ------------------------------------------------------------------
[HStringReference::CopyTo](#copyto) | Copia l'oggetto corrente in `HStringReference` un oggetto HSTRING.
[HStringReference::GetHStringReference::Get](#get)       | Recupera il valore dell'handle HSTRING sottostante.
[HStringReference::GetRawBuffer](#getrawbuffer) | Recupera un puntatore ai dati della stringa sottostante.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------------------------------------
[HStringReference::operatore](#operator-assign)       | Sposta il valore `HStringReference` di un `HStringReference` altro oggetto nell'oggetto corrente.
[HStringReference::operator](#operator-equality)    | Indica se i due parametri sono uguali.
[HStringReference::operator!](#operator-inequality)  | Indica se i due parametri non sono uguali.
[HStringReference::operatore&lt;](#operator-less-than) | Indica se il primo parametro è minore del secondo parametro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HStringReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="hstringreferencecopyto"></a><a name="copyto"></a>HStringReference::CopyTo

Copia l'oggetto corrente in `HStringReference` un oggetto HSTRING.

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

## <a name="hstringreferenceget"></a><a name="get"></a>HStringReference::GetHStringReference::Get

Recupera il valore dell'handle HSTRING sottostante.

```cpp
HSTRING Get() const throw()
```

### <a name="return-value"></a>Valore restituito

Valore dell'handle HSTRING sottostante.

## <a name="hstringreferencegetrawbuffer"></a><a name="getrawbuffer"></a>HStringReference::GetRawBuffer

Recupera un puntatore ai dati della stringa sottostante.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```

### <a name="parameters"></a>Parametri

*lunghezza* Puntatore a una variabile **int** che riceve la lunghezza dei dati.

### <a name="return-value"></a>Valore restituito

Puntatore **const** ai dati della stringa sottostante.

## <a name="hstringreferencehstringreference"></a><a name="hstringreference"></a>HStringReference::HStringReference

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

*più grande*<br/>
Parametro di modello che specifica `HStringReference` la dimensione del buffer di destinazione.

*Str*<br/>
Riferimento a una stringa di caratteri wide.

*Len*<br/>
Lunghezza massima del buffer del parametro *str* da utilizzare in questa operazione. Se il parametro *len* non è specificato, viene utilizzato l'intero parametro *str.* Se *len* è maggiore di *sizeDest*, *len* è impostato su *sizeDest*-1.

*Altro*<br/>
Un `HStringReference` altro oggetto.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `HStringReference` inizializza un nuovo oggetto delle stesse dimensioni del parametro *str*.

Il secondo costruttore `HStringReference` inizializza un nuovo oggetto che la dimensione specifeid per parametro *len*.

Il terzo costruttore `HStringReference` inizializza un nuovo oggetto sul valore dell'altro parametro e quindi elimina l'altro parametro. *other* *other*

## <a name="hstringreferenceoperator"></a><a name="operator-assign"></a>HStringReference::operatore

Sposta il valore `HStringReference` di un `HStringReference` altro oggetto nell'oggetto corrente.

```cpp
HStringReference& operator=(HStringReference&& other) throw()
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `HStringReference` esistente.

### <a name="remarks"></a>Osservazioni

Il valore dell'altro oggetto esistente `HStringReference` viene copiato nell'oggetto corrente e quindi l'altro oggetto viene eliminato. *other* *other*

## <a name="hstringreferenceoperator"></a><a name="operator-equality"></a>HStringReference::operator

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

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può `HStringReference` essere un oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *rhs* può `HStringReference` essere un oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *lhs* e *rhs* sono uguali; in caso contrario, **false**.

## <a name="hstringreferenceoperator"></a><a name="operator-inequality"></a>HStringReference::operator!

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

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può `HStringReference` essere un oggetto o un handle HSTRING.

*rhs*<br/>
Secondo parametro da confrontare.  *rhs* può `HStringReference` essere un oggetto o un handle HSTRING.

### <a name="return-value"></a>Valore restituito

**true** se i parametri *lhs* e *rhs* non sono uguali; in caso contrario, **false**.

## <a name="hstringreferenceoperatorlt"></a><a name="operator-less-than"></a>HStringReference::operatore&lt;

Indica se il primo parametro è minore del secondo parametro.

```cpp
inline bool operator<(
    const HStringReference& lhs,
    const HStringReference& rhs) throw()
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo parametro da confrontare. *lhs* può essere un `HStringReference`riferimento a un file .

*rhs*<br/>
Secondo parametro da confrontare.  *rhs* può essere un `HStringReference`riferimento a un file .

### <a name="return-value"></a>Valore restituito

**true** se il *lhs* parametro è minore di *rhs* parametro; in caso contrario, **false**.
