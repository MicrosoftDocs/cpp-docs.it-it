---
title: Funzioni SafeInt | Microsoft Docs
ms.custom: ''
ms.date: 09/28/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeInt functions
- SafeAdd
- SafeCast
- SafeDivide
- SafeEquals
- SafeGreaterThan
- SafeGreaterThanEquals
- SafeLessThan
- SafeLessThanEquals
- SafeModulus
- SafeMultiply
- SafeNotEquals
- SafeSubtract
dev_langs:
- C++
helpviewer_keywords:
- functions, SafeInt
- SafeAdd function
- SafeCast function
- SafeDivide function
- SafeEquals function
- SafeGreaterThan function
- SafeGreaterThanEquals function
- SafeLessThan function
- SafeLessThanEquals function
- SafeModulus function
- SafeMultiply function
- SafeNotEquals function
- SafeSubtract function
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 43960e70f1aad29fa4b8fc03517231c7658d155b
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49162581"
---
# <a name="safeint-functions"></a>Funzioni SafeInt

La libreria SafeInt offre diverse funzioni che è possibile usare senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md). Se si desidera proteggere una singola operazione matematica da overflow di numeri interi, è possibile usare queste funzioni. Se si desidera proteggere più operazioni matematiche, è consigliabile creare `SafeInt` oggetti. È più efficiente creare `SafeInt` oggetti rispetto all'utilizzo di queste funzioni più volte.

Queste funzioni consentono di confrontare o eseguire operazioni matematiche su due diversi tipi di parametri senza convertirli nello stesso tipo.

Ognuna di queste funzioni è disponibili due tipi di modello: `T` e `U`. Ognuno di questi tipi può essere un valore booleano, un carattere o un tipo integrale. Tipi integrali possono essere con o senza segno e qualsiasi dimensione, da 8 bit a 64 bit.

## <a name="in-this-section"></a>In questa sezione

Funzione                      | Descrizione
----------------------------- | --------------------------------------------------------------
[SafeAdd](#safeadd)           | Somma due numeri e protegge dall'overflow.
[SafeCast](#safecast)         | Esegue il cast di un tipo di parametro a un altro tipo.
[SafeDivide](#safedivide)     | Divide due numeri e protegge da divisione per zero.
[SafeEquals](#safeequals), [SafeGreaterThan](#safegreaterthan), [SafeGreaterThanEquals](#safegreaterthanequals), [SafeLessThan](#safelessthan), [SafeLessThanEquals](#safelessthanequals), [ SafeNotEquals](#safenotequals) | Confronta due numeri. Queste funzioni consentono di confrontare due tipi diversi di numeri senza modificare i relativi tipi.
[SafeModulus](#safemodulus)   | Esegue l'operazione di modulo in due numeri.
[SafeMultiply](#safemultiply) | Moltiplica due numeri insieme e protegge dall'overflow.
[SafeSubtract](#safesubtract) | Sottrae due numeri e protegge dall'overflow.

## <a name="related-sections"></a>Sezioni correlate

Sezione                                                  | Descrizione
-------------------------------------------------------- | ----------------------------------------------------
[SafeInt](../windows/safeint-class.md)                   | Classe `SafeInt`.
[SafeIntException](../windows/safeintexception-class.md) | La classe di eccezione specifica per la libreria SafeInt.

## <a name="safeadd"></a>SafeAdd

Somma due numeri in modo da evita overflow.

```cpp
template<typename T, typename U>
inline bool SafeAdd (
   T t,
   U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da aggiungere. Deve essere di tipo T.

*u*<br/>
[in] Il secondo numero da aggiungere. Deve essere di tipo U.

*Risultato*<br/>
[out] Il parametro in cui `SafeAdd` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="safecast"></a>SafeCast

Esegue il cast di un tipo di numero in un altro tipo.

```cpp
template<typename T, typename U>
inline bool SafeCast (
   const T From,
   U& To
);
```

### <a name="parameters"></a>Parametri

*From*<br/>
[in] Il numero di origine da convertire. Deve essere di tipo `T`.

*Per*<br/>
[out] Riferimento per il nuovo tipo di numero. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="safedivide"></a>SafeDivide

Divide due numeri in modo da evitare di divisione per zero.

```cpp
template<typename T, typename U>
inline bool SafeDivide (
   T t,
   U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il divisore. Deve essere di tipo T.

*u*<br/>
[in] Dividendo. Deve essere di tipo U.

*Risultato*<br/>
[out] Il parametro in cui `SafeDivide` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="safeequals"></a>SafeEquals

Confronta due numeri per determinare se sono uguali.

```cpp
template<typename T, typename U>
inline bool SafeEquals (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo T.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo U.

### <a name="return-value"></a>Valore restituito

**true** se *t* e *u* sono uguali; in caso contrario **false**.

### <a name="remarks"></a>Note

Il metodo migliora `==` perché `SafeEquals` consente di confrontare due tipi diversi di numeri.

## <a name="safegreaterthan"></a>SafeGreaterThan

Confronta due numeri.

```cpp
template<typename T, typename U>
inline bool SafeGreaterThan (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se *t* è maggiore di quella *u*; in caso contrario **false**.

### <a name="remarks"></a>Note

`SafeGreaterThan` estende l'operatore di confronto regolari grazie alla possibilità di confrontare due tipi diversi di numeri.

## <a name="safegreaterthanequals"></a>SafeGreaterThanEquals

Confronta due numeri.

```cpp
template <typename T, typename U>
inline bool SafeGreaterThanEquals (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se *t* è maggiore o uguale a *u*; in caso contrario **false**.

### <a name="remarks"></a>Note

`SafeGreaterThanEquals` migliora l'operatore di confronto standard perché ti consente di confrontare due tipi diversi di numeri.

## <a name="safelessthan"></a>SafeLessThan

Determina se un numero è minore di un altro.

```cpp
template<typename T, typename U>
inline bool SafeLessThan (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se *t* è minore di *u*; in caso contrario **false**.

### <a name="remarks"></a>Note

Questo metodo consente di migliorare l'operatore di confronto standard poiché `SafeLessThan` consente di confrontare due tipi diversi di numero.

## <a name="safelessthanequals"></a>SafeLessThanEquals

Confronta due numeri.

```cpp
template <typename T, typename U>
inline bool SafeLessThanEquals (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se *t* è minore o uguale a *u*; in caso contrario **false**.

### <a name="remarks"></a>Note

`SafeLessThanEquals` estende l'operatore di confronto regolari grazie alla possibilità di confrontare due tipi diversi di numeri.

## <a name="safemodulus"></a>SafeModulus

Esegue l'operazione di modulo in due numeri.

```cpp
template<typename T, typename U>
inline bool SafeModulus (
   const T t,
   const U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il divisore. Deve essere di tipo `T`.

*u*<br/>
[in] Dividendo. Deve essere di tipo `U`.

*Risultato*<br/>
[out] Il parametro in cui `SafeModulus` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="safemultiply"></a>SafeMultiply

Moltiplica due numeri insieme in modo da evitare overflow.

```cpp
template<typename T, typename U>
inline bool SafeMultiply (
   T t,
   U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da moltiplicare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da moltiplicare. Deve essere di tipo `U`.

*Risultato*<br/>
[out] Il parametro in cui `SafeMultiply` archivia il risultato.

### <a name="return-value"></a>Valore restituito

`true` Se si verifica alcun errore; `false` se si verifica un errore.

## <a name="safenotequals"></a>SafeNotEquals

Determina se due numeri non sono uguali.

```cpp
template<typename T, typename U>
inline bool SafeNotEquals (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**true** se *t* e *u* non sono uguali; in caso contrario **false**.

### <a name="remarks"></a>Note

Il metodo migliora `!=` perché `SafeNotEquals` consente di confrontare due tipi diversi di numeri.

## <a name="safesubtract"></a>SafeSubtract

Sottrae due numeri in modo da evitare overflow.

```cpp
template<typename T, typename U>
inline bool SafeSubtract (
   T t,
   U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero nella sottrazione. Deve essere di tipo `T`.

*u*<br/>
[in] Il numero da cui sottrarre *t*. Deve essere di tipo `U`.

*Risultato*<br/>
[out] Il parametro in cui `SafeSubtract` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.
