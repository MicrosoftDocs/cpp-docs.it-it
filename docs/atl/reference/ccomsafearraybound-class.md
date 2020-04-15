---
title: CComSafeArrayBound (classe)
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
ms.openlocfilehash: 2c2f8b787e5366ec893538a88049f6f53dc35caf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327387"
---
# <a name="ccomsafearraybound-class"></a>CComSafeArrayBound (classe)

Questa classe è un wrapper per una struttura [SAFEARRAYBOUND.](/windows/win32/api/oaidl/ns-oaidl-safearraybound)

## <a name="syntax"></a>Sintassi

```
class CComSafeArrayBound : public SAFEARRAYBOUND
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CComSafeArrayBound](#ccomsafearraybound)|Costruttore.|
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi.|
|[GetLowerBound](#getlowerbound)|Chiamare questo metodo per restituire il limite inferiore.|
|[Getupperbound](#getupperbound)|Chiamare questo metodo per restituire il limite superiore.|
|[Conteggio set](#setcount)|Chiamare questo metodo per impostare il numero di elementi.|
|[SetLowerBound (Impostacono)](#setlowerbound)|Chiamare questo metodo per impostare il limite inferiore.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore .](#operator_eq)|Imposta `CComSafeArrayBound` l'oggetto su un nuovo valore.|

## <a name="remarks"></a>Osservazioni

Questa classe è un `SAFEARRAYBOUND` wrapper per la struttura utilizzata da [CComSafeArray](../../atl/reference/ccomsafearray-class.md). Fornisce metodi per l'esecuzione di query e l'impostazione `CComSafeArray` dei limiti superiore e inferiore di una singola dimensione di un oggetto e il numero di elementi in esso contenuti. Un `CComSafeArray` oggetto multidimensionale `CComSafeArrayBound` utilizza una matrice di oggetti, uno per ogni dimensione. Pertanto, quando si utilizzano metodi quali [GetCount](#getcount), tenere presente che questo metodo non restituirà il numero totale di elementi in una matrice multidimensionale.

**Intestazione:** atlsafe.h

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsafe.h

## <a name="ccomsafearrayboundccomsafearraybound"></a><a name="ccomsafearraybound"></a>CComSafeArrayBound::CComSafeArrayBound (Informazioni in operante)

Costruttore.

```
CComSafeArrayBound(ULONG ulCount = 0, LONG lLowerBound = 0) throw();
```

### <a name="parameters"></a>Parametri

*ulCount (conteggio)*<br/>
Numero di elementi nella matrice.

*lLowerBound (Limite di lavoro)*<br/>
Limite inferiore da cui è numerata la matrice.

### <a name="remarks"></a>Osservazioni

Se l'accesso alla matrice deve essere eseguito da un programma in C, si consiglia di definire il limite inferiore come 0. Può essere preferibile utilizzare un valore limite inferiore diverso se la matrice deve essere utilizzata con altri linguaggi, ad esempio Visual Basic.

## <a name="ccomsafearrayboundgetcount"></a><a name="getcount"></a>CComSafeArrayBound::GetCount

Chiamare questo metodo per restituire il numero di elementi.

```
ULONG GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi.

### <a name="remarks"></a>Osservazioni

Se l'oggetto associato `CComSafeArray` rappresenta una matrice multidimensionale, questo metodo restituirà solo il numero totale di elementi nella dimensione più a destra. Utilizzare [CComSafeArray::GetCount](../../atl/reference/ccomsafearray-class.md#getcount) per ottenere il numero totale di elementi.

## <a name="ccomsafearrayboundgetlowerbound"></a><a name="getlowerbound"></a>CComSafeArrayBound::GetLowerBound

Chiamare questo metodo per restituire il limite inferiore.

```
LONG GetLowerBound() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il limite `CComSafeArrayBound` inferiore dell'oggetto.

## <a name="ccomsafearrayboundgetupperbound"></a><a name="getupperbound"></a>CComSafeArrayBound::GetUpperBound

Chiamare questo metodo per restituire il limite superiore.

```
LONG GetUpperBound() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il limite `CComSafeArrayBound` superiore dell'oggetto.

### <a name="remarks"></a>Osservazioni

Il limite superiore dipende dal numero di elementi e dal valore del limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà impostato automaticamente su 9.

## <a name="ccomsafearrayboundoperator-"></a><a name="operator_eq"></a>CComSafeArrayBound::operator

Imposta `CComSafeArrayBound` l'oggetto su un nuovo valore.

```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```

### <a name="parameters"></a>Parametri

*Associato*<br/>
Oggetto `CComSafeArrayBound` .

*ulCount (conteggio)*<br/>
Numero di elementi.

### <a name="return-value"></a>Valore restituito

Restituisce un `CComSafeArrayBound` puntatore all'oggetto.

### <a name="remarks"></a>Osservazioni

L'oggetto `CComSafeArrayBound` può essere `CComSafeArrayBound`assegnato utilizzando un oggetto , esistente o fornendo il numero di elementi, nel qual caso il limite inferiore è impostato su 0 per impostazione predefinita.

## <a name="ccomsafearrayboundsetcount"></a><a name="setcount"></a>CComSafeArrayBound::SetCount

Chiamare questo metodo per impostare il numero di elementi.

```
ULONG SetCount(ULONG ulCount) throw();
```

### <a name="parameters"></a>Parametri

*ulCount (conteggio)*<br/>
Numero di elementi.

### <a name="return-value"></a>Valore restituito

Restituisce il numero `CComSafeArrayBound` di elementi nell'oggetto.

## <a name="ccomsafearrayboundsetlowerbound"></a><a name="setlowerbound"></a>CComSafeArrayBound::SetLowerBound

Chiamare questo metodo per impostare il limite inferiore.

```
LONG SetLowerBound(LONG lLowerBound) throw();
```

### <a name="parameters"></a>Parametri

*lLowerBound (Limite di lavoro)*<br/>
Limite inferiore.

### <a name="return-value"></a>Valore restituito

Restituisce il nuovo `CComSafeArrayBound` limite inferiore dell'oggetto.

### <a name="remarks"></a>Osservazioni

Se l'accesso alla matrice deve essere eseguito da un programma di Visual C, si consiglia di definire il limite inferiore come 0. Può essere preferibile utilizzare un valore limite inferiore diverso se la matrice deve essere utilizzata con altri linguaggi, ad esempio Visual Basic.

Il limite superiore dipende dal numero di elementi e dal valore del limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà impostato automaticamente su 9.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
