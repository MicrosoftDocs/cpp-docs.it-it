---
title: Classe CComSafeArrayBound
ms.date: 05/06/2019
f1_keywords:
- CComSafeArrayBound
- ATLSAFE/ATL::CComSafeArrayBound
- ATLSAFE/ATL::GetCount
- ATLSAFE/ATL::GetLowerBound
- ATLSAFE/ATL::GetUpperBound
- ATLSAFE/ATL::SetCount
- ATLSAFE/ATL::SetLowerBound
helpviewer_keywords:
- CComSafeArrayBound class
ms.assetid: dd6299db-5f84-4630-bbf0-f5add5318437
ms.openlocfilehash: 9adee1e8b6a46c239aaf6a3c404277b34efd00e2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834752"
---
# <a name="ccomsafearraybound-class"></a>Classe CComSafeArrayBound

Questa classe è un wrapper per una struttura [SAFEARRAYBOUND](/windows/win32/api/oaidl/ns-oaidl-safearraybound) .

## <a name="syntax"></a>Sintassi

```
class CComSafeArrayBound : public SAFEARRAYBOUND
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Funzione|Descrizione|
|-|-|
|[CComSafeArrayBound](#ccomsafearraybound)|Costruttore.|
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi.|
|[GetLowerBound](#getlowerbound)|Chiamare questo metodo per restituire il limite inferiore.|
|[GetUpperBound](#getupperbound)|Chiamare questo metodo per restituire il limite superiore.|
|[SetCount](#setcount)|Chiamare questo metodo per impostare il numero di elementi.|
|[SetLowerBound](#setlowerbound)|Chiamare questo metodo per impostare il limite inferiore.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#operator_eq)|Imposta `CComSafeArrayBound` su un nuovo valore.|

## <a name="remarks"></a>Osservazioni

Questa classe è un wrapper per la `SAFEARRAYBOUND` struttura utilizzata da [CComSafeArray](../../atl/reference/ccomsafearray-class.md). Fornisce metodi per l'esecuzione di query e l'impostazione dei limiti superiore e inferiore di una singola dimensione di un `CComSafeArray` oggetto e il numero di elementi in esso contenuti. Un oggetto multidimensionale `CComSafeArray` utilizza una matrice di `CComSafeArrayBound` oggetti, uno per ogni dimensione. Pertanto, quando si usano metodi come [GetCount](#getcount), tenere presente che questo metodo non restituisce il numero totale di elementi in una matrice multidimensionale.

**Intestazione:** atlsafe.h

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsafe.h

## <a name="ccomsafearrayboundccomsafearraybound"></a><a name="ccomsafearraybound"></a> CComSafeArrayBound:: CComSafeArrayBound

Costruttore.

```
CComSafeArrayBound(ULONG ulCount = 0, LONG lLowerBound = 0) throw();
```

### <a name="parameters"></a>Parametri

*ulCount*<br/>
Numero di elementi nella matrice.

*lLowerBound*<br/>
Limite inferiore dal quale è numerata la matrice.

### <a name="remarks"></a>Osservazioni

Se è necessario accedere alla matrice da un programma C++, è consigliabile definire come 0 il limite inferiore. Potrebbe essere preferibile usare un valore limite inferiore diverso se la matrice deve essere usata con altri linguaggi, ad esempio Visual Basic.

## <a name="ccomsafearrayboundgetcount"></a><a name="getcount"></a> CComSafeArrayBound:: GetCount

Chiamare questo metodo per restituire il numero di elementi.

```
ULONG GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi.

### <a name="remarks"></a>Osservazioni

Se l' `CComSafeArray` oggetto associato rappresenta una matrice multidimensionale, questo metodo restituirà solo il numero totale di elementi nella dimensione più a destra. Usare [CComSafeArray:: GetCount](../../atl/reference/ccomsafearray-class.md#getcount) per ottenere il numero totale di elementi.

## <a name="ccomsafearrayboundgetlowerbound"></a><a name="getlowerbound"></a> CComSafeArrayBound:: GetLowerBound

Chiamare questo metodo per restituire il limite inferiore.

```
LONG GetLowerBound() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il limite inferiore dell' `CComSafeArrayBound` oggetto.

## <a name="ccomsafearrayboundgetupperbound"></a><a name="getupperbound"></a> CComSafeArrayBound:: GetUpperBound

Chiamare questo metodo per restituire il limite superiore.

```
LONG GetUpperBound() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il limite superiore dell' `CComSafeArrayBound` oggetto.

### <a name="remarks"></a>Osservazioni

Il limite superiore dipende dal numero di elementi e dal valore del limite inferiore. Se, ad esempio, il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà impostato automaticamente su 9.

## <a name="ccomsafearrayboundoperator-"></a><a name="operator_eq"></a> CComSafeArrayBound:: operator =

Imposta `CComSafeArrayBound` su un nuovo valore.

```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```

### <a name="parameters"></a>Parametri

*associato*<br/>
Un oggetto `CComSafeArrayBound`.

*ulCount*<br/>
Numero di elementi.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all' `CComSafeArrayBound` oggetto.

### <a name="remarks"></a>Osservazioni

L' `CComSafeArrayBound` oggetto può essere assegnato utilizzando un esistente `CComSafeArrayBound` o fornendo il numero di elementi, nel qual caso il limite inferiore viene impostato su 0 per impostazione predefinita.

## <a name="ccomsafearrayboundsetcount"></a><a name="setcount"></a> CComSafeArrayBound:: secount

Chiamare questo metodo per impostare il numero di elementi.

```
ULONG SetCount(ULONG ulCount) throw();
```

### <a name="parameters"></a>Parametri

*ulCount*<br/>
Numero di elementi.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nell' `CComSafeArrayBound` oggetto.

## <a name="ccomsafearrayboundsetlowerbound"></a><a name="setlowerbound"></a> CComSafeArrayBound:: SetLowerBound

Chiamare questo metodo per impostare il limite inferiore.

```
LONG SetLowerBound(LONG lLowerBound) throw();
```

### <a name="parameters"></a>Parametri

*lLowerBound*<br/>
Limite inferiore.

### <a name="return-value"></a>Valore restituito

Restituisce il nuovo limite inferiore dell' `CComSafeArrayBound` oggetto.

### <a name="remarks"></a>Osservazioni

Se è necessario accedere alla matrice da un programma di Visual C++, è consigliabile definire come 0 il limite inferiore. Potrebbe essere preferibile usare un valore limite inferiore diverso se la matrice deve essere usata con altri linguaggi, ad esempio Visual Basic.

Il limite superiore dipende dal numero di elementi e dal valore del limite inferiore. Se, ad esempio, il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà impostato automaticamente su 9.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
