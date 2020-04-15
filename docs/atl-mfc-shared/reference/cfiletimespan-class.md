---
title: Classe CFileTimeSpan
description: La classe ATL (Active Template Library) e Microsoft Foundation Classes (MFC) CFileTimeSpan gestisce gli intervalli di tempo in unità FILETIME.
ms.date: 01/10/2020
f1_keywords:
- CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::GetTimeSpan
- ATLTIME/ATL::CFileTimeSpan::SetTimeSpan
helpviewer_keywords:
- shared classes, CFileTimeSpan
- CFileTimeSpan class
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
ms.openlocfilehash: 87737ea1c778660a68510b484bcdfa3a4670e8ab
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317858"
---
# <a name="cfiletimespan-class"></a>Classe CFileTimeSpan

Questa classe fornisce metodi per la gestione di valori di data e ora relativi associati a un file.

## <a name="syntax"></a>Sintassi

```cpp
class CFileTimeSpan
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Chiamare questo metodo per recuperare `CFileTimeSpan` l'intervallo di tempo dall'oggetto.|
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare `CFileTimeSpan` l'intervallo di tempo dell'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::operatore -](#operator_-)|Esegue la sottrazione su un `CFileTimeSpan` oggetto.|
|[CFileTimeSpan::operatore !](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|
|[CFileTimeSpan::operatore](#operator_add)|Esegue l'addizione su un `CFileTimeSpan` oggetto.|
|[CFileTimeSpan::operatore](#operator_add_eq)|Esegue l'addizione su un `CFileTimeSpan` oggetto e assegna il risultato all'oggetto corrente.|
|[CFileTimeSpan::operatore&lt;](#operator_lt)|Confronta due `CFileTimeSpan` oggetti per determinare il minore.|
|[CFileTimeSpan::operatore&lt;=](#operator_lt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.|
|[CFileTimeSpan::operatore](#operator_eq)|Operatore di assegnazione.|
|[CFileTimeSpan::operatore](#operator_-_eq)|Esegue la sottrazione su un `CFileTimeSpan` oggetto e assegna il risultato all'oggetto corrente.|
|[CFileTimeSpan::operatore](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|
|[CFileTimeSpan::operatore&gt;](#operator_gt)|Confronta due `CFileTimeSpan` oggetti per determinare il maggiore.|
|[CFileTimeSpan::operatore&gt;=](#operator_gt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.|

## <a name="remarks"></a>Osservazioni

La `CFileTimeSpan` classe fornisce metodi per gestire periodi di tempo relativi nelle unità utilizzate dal file system. Queste unità vengono spesso utilizzate nelle operazioni sui file, ad esempio quando un file è stato creato, l'ultimo accesso o l'ultima modifica. I metodi di questa classe vengono spesso utilizzati in combinazione con [CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md) classe oggetti.

## <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime.h

## <a name="cfiletimespancfiletimespan"></a><a name="cfiletimespan"></a>CFileTimeSpan::CFileTimeSpan

Costruttore.

```cpp
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` esistente.

*nSpan (Span)*\
Un periodo di tempo in unità FILETIME.

### <a name="remarks"></a>Osservazioni

L'oggetto `CFileTimeSpan` può essere `CFileTimeSpan` creato utilizzando un oggetto esistente o espresso come valore a 64 bit in unità FILETIME da 100 nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md). Il costruttore predefinito imposta l'intervallo di tempo su 0.The default constructor sets the time span to 0.

## <a name="cfiletimespangettimespan"></a><a name="gettimespan"></a>CFileTimeSpan::GetTimeSpan

Chiamare questo metodo per recuperare `CFileTimeSpan` l'intervallo di tempo dall'oggetto.

```cpp
LONGLONG GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'intervallo di tempo in unità FILETIME da 100 nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md).

## <a name="cfiletimespanoperator--"></a><a name="operator_-"></a>CFileTimeSpan::operatore -

Esegue la sottrazione su un `CFileTimeSpan` oggetto.

```cpp
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTimeSpan` un oggetto che rappresenta il risultato della differenza tra due intervalli di tempo.

## <a name="cfiletimespanoperator-"></a><a name="operator_neq"></a>CFileTimeSpan::operatore !

Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.

```cpp
bool operator!=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento confrontato `CFileTimeSpan` non è uguale all'oggetto; in caso contrario, FALSE.

## <a name="cfiletimespanoperator-"></a><a name="operator_add"></a>CFileTimeSpan::operatore

Esegue l'addizione su un `CFileTimeSpan` oggetto.

```cpp
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTimeSpan` un oggetto contenente la somma dei due intervalli di tempo.

## <a name="cfiletimespanoperator-"></a><a name="operator_add_eq"></a>CFileTimeSpan::operatore

Esegue l'addizione su un `CFileTimeSpan` oggetto e assegna il risultato all'oggetto corrente.

```cpp
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTimeSpan` l'oggetto aggiornato contenente la somma dei due intervalli di tempo.

## <a name="cfiletimespanoperator-lt"></a><a name="operator_lt"></a>CFileTimeSpan::operatore&lt;

Confronta due `CFileTimeSpan` oggetti per determinare il minore.

```cpp
bool operator<(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore (ovvero rappresenta un periodo di tempo più breve) rispetto al secondo, in caso contrario FALSE.

## <a name="cfiletimespanoperator-lt"></a><a name="operator_lt_eq"></a>CFileTimeSpan::operatore&lt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.

```cpp
bool operator<=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (ovvero rappresenta un periodo di tempo più breve) o uguale al secondo, in caso contrario FALSO.

## <a name="cfiletimespanoperator-"></a><a name="operator_eq"></a>CFileTimeSpan::operatore

Operatore di assegnazione.

```cpp
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTimeSpan` l'oggetto aggiornato.

## <a name="cfiletimespanoperator--"></a><a name="operator_-_eq"></a>CFileTimeSpan::operatore

Esegue la sottrazione su un `CFileTimeSpan` oggetto e assegna il risultato all'oggetto corrente.

```cpp
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTimeSpan` l'oggetto aggiornato.

## <a name="cfiletimespanoperator-"></a><a name="operator_eq_eq"></a>CFileTimeSpan::operatore

Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.

```cpp
bool operator==(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali, in caso contrario FALSE.

## <a name="cfiletimespanoperator-gt"></a><a name="operator_gt"></a>CFileTimeSpan::operatore&gt;

Confronta due `CFileTimeSpan` oggetti per determinare il maggiore.

```cpp
bool operator>(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero rappresenta un periodo di tempo più lungo) rispetto al secondo, in caso contrario FALSO.

## <a name="cfiletimespanoperator-gt"></a><a name="operator_gt_eq"></a>CFileTimeSpan::operatore&gt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.

```cpp
bool operator>=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*\
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero rappresenta un periodo di tempo più lungo) o uguale al secondo, in caso contrario FALSO.

## <a name="cfiletimespansettimespan"></a><a name="settimespan"></a>CFileTimeSpan::SetTimeSpan

Chiamare questo metodo per impostare `CFileTimeSpan` l'intervallo di tempo dell'oggetto.

```cpp
void SetTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

*nSpan (Span)*\
Nuovo valore per l'intervallo di tempo in unità FILETIME da 100 nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md).

## <a name="see-also"></a>Vedere anche

[Filetime](/windows/win32/api/minwinbase/ns-minwinbase-filetime)\
[Classe CFileTime](cfiletime-class.md)\
[Grafico gerarchico](../../mfc/hierarchy-chart.md)\
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
