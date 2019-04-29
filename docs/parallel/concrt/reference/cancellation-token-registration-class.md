---
title: Classe cancellation_token_registration
ms.date: 11/04/2016
f1_keywords:
- cancellation_token_registration
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration::cancellation_token_registration
helpviewer_keywords:
- cancellation_token_registration class
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
ms.openlocfilehash: c6ca8061181ec057110282fa297666235e898ff6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62414191"
---
# <a name="cancellationtokenregistration-class"></a>Classe cancellation_token_registration

La classe `cancellation_token_registration` rappresenta una notifica di callback da `cancellation_token`. Quando il metodo `register` in `cancellation_token` viene utilizzato per ricevere la notifica dell'annullamento, un oggetto `cancellation_token_registration` viene restituito al callback come handle, in modo che da parte del chiamante possa essere richiesto di non eseguire più un callback specifico tramite l'utilizzo del metodo `deregister`.

## <a name="syntax"></a>Sintassi

```
class cancellation_token_registration;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[cancellation_token_registration](#ctor)||
|[~ cancellation_token_registration distruttore](#dtor)||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)||
|[operator=](#operator_eq)||
|[operator==](#operator_eq_eq)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`cancellation_token_registration`

## <a name="requirements"></a>Requisiti

**Intestazione:** . h

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~cancellation_token_registration

```
~cancellation_token_registration();
```

##  <a name="ctor"></a> cancellation_token_registration

```
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Il `cancellation_token_registration` per copiare o spostare.

##  <a name="operator_neq"></a> operator!=

```
bool operator!= (const cancellation_token_registration& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `cancellation_token_registration` da confrontare.

### <a name="return-value"></a>Valore restituito

##  <a name="operator_eq"></a> operator=

```
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Il `cancellation_token_registration` da assegnare.

### <a name="return-value"></a>Valore restituito

##  <a name="operator_eq_eq"></a> operator==

```
bool operator== (const cancellation_token_registration& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `cancellation_token_registration` da confrontare.

### <a name="return-value"></a>Valore restituito

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
