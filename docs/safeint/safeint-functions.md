---
description: 'Altre informazioni su: SafeInt Functions'
title: Funzioni SafeInt
ms.date: 06/23/2020
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
ms.openlocfilehash: 0dc195742b4f848dd6f05bae1537dc0a4fa5ead5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149604"
---
# <a name="safeint-functions"></a>Funzioni SafeInt

La libreria SafeInt fornisce diverse funzioni che è possibile usare senza creare un'istanza della [classe SafeInt](safeint-class.md). Se si vuole proteggere una singola operazione matematica dall'overflow di Integer, è possibile usare queste funzioni. Se si vuole proteggere più operazioni matematiche, è necessario creare oggetti `SafeInt`. È più efficiente creare `SafeInt` oggetti anziché usare queste funzioni più volte.

Queste funzioni consentono di confrontare o eseguire operazioni matematiche su due diversi tipi di parametri senza prima convertirli nello stesso tipo.

Ognuna di queste funzioni ha due tipi di modello: `T` e `U`. Ognuno di questi tipi può essere un tipo di dati integrale, carattere o booleano. I tipi integrali possono essere con o senza segno e avere qualsiasi dimensione tra 8 bit e 64 bit.

> [!NOTE]
> La versione più recente di questa libreria si trova in [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt) .

## <a name="in-this-section"></a>Contenuto della sezione

Funzione                      | Descrizione
----------------------------- | --------------------------------------------------------------
[SafeAdd](#safeadd)           | Somma due numeri e protegge dall'overflow.
[SafeCast](#safecast)         | Esegue il cast di un tipo di parametro in un altro tipo.
[SafeDivide](#safedivide)     | Divide due numeri e protegge dalla divisione per zero.
[SafeEquals](#safeequals), [SafeGreaterThan](#safegreaterthan), [SafeGreaterThanEquals](#safegreaterthanequals), [SafeLessThan](#safelessthan), [SafeLessThanEquals](#safelessthanequals), [SafeNotEquals](#safenotequals) | Confronta due numeri. Queste funzioni consentono di confrontare due tipi diversi di numeri senza modificare i relativi tipi.
[SafeModulus](#safemodulus)   | Esegue l'operazione di modulo su due numeri.
[SafeMultiply](#safemultiply) | Moltiplica due numeri e protegge dall'overflow.
[SafeSubtract](#safesubtract) | Esegue la sottrazione tra due numeri e protegge dall'overflow.

## <a name="related-sections"></a>Sezioni correlate

Sezione                                                  | Descrizione
-------------------------------------------------------- | ----------------------------------------------------
[SafeInt](safeint-class.md)                   | Classe `SafeInt`.
[SafeIntException](safeintexception-class.md) | Classe di eccezione specifica per la libreria SafeInt.

## <a name="safeadd"></a><a name="safeadd"></a> SafeAdd

Somma due numeri in modo da proteggere dall'overflow.

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
[in] Primo numero da sommare. Deve essere di tipo T.

*u*<br/>
[in] Secondo numero da sommare. Deve essere di tipo U.

*result*<br/>
[out] Parametro in cui `SafeAdd` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.

## <a name="safecast"></a><a name="safecast"></a> SafeCast

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
[in] Numero di origine da convertire. Deve essere di tipo `T`.

*To*<br/>
[out] Riferimento al nuovo tipo di numero. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.

## <a name="safedivide"></a><a name="safedivide"></a> SafeDivide

Divide due numeri in modo da proteggere dalla divisione per zero.

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
[in] Dividendo. Deve essere di tipo T.

*u*<br/>
[in] Divisore. Deve essere di tipo U.

*result*<br/>
[out] Parametro in cui `SafeDivide` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.

## <a name="safeequals"></a><a name="safeequals"></a> SafeEquals

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
[in] Primo numero da confrontare. Deve essere di tipo T.

*u*<br/>
[in] Secondo numero da confrontare. Deve essere di tipo U.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* e *u* sono uguali; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il metodo migliora `==` perché `SafeEquals` consente di confrontare due tipi diversi di numeri.

## <a name="safegreaterthan"></a><a name="safegreaterthan"></a> SafeGreaterThan

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
[in] Primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* è maggiore di *u*; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

`SafeGreaterThan` estende l'operatore di confronto normale consentendo di confrontare due tipi diversi di numeri.

## <a name="safegreaterthanequals"></a><a name="safegreaterthanequals"></a> SafeGreaterThanEquals

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
[in] Primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* è maggiore o uguale a *u*; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

`SafeGreaterThanEquals` migliora l'operatore di confronto standard perché consente di confrontare due tipi diversi di numeri.

## <a name="safelessthan"></a><a name="safelessthan"></a> SafeLessThan

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
[in] Primo numero. Deve essere di tipo `T`.

*u*<br/>
in Secondo numero. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* è minore di *u*; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Questo metodo migliora l'operatore di confronto standard perché `SafeLessThan` consente di confrontare due tipi diversi di numeri.

## <a name="safelessthanequals"></a><a name="safelessthanequals"></a> SafeLessThanEquals

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
[in] Primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* è minore o uguale a *u*; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

`SafeLessThanEquals` estende l'operatore di confronto normale consentendo di confrontare due tipi diversi di numeri.

## <a name="safemodulus"></a><a name="safemodulus"></a> SafeModulus

Esegue l'operazione di modulo su due numeri.

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
[in] Divisore. Deve essere di tipo `T`.

*u*<br/>
[in] Dividendo. Deve essere di tipo `U`.

*result*<br/>
[out] Parametro in cui `SafeModulus` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.

## <a name="safemultiply"></a><a name="safemultiply"></a> SafeMultiply

Moltiplica due numeri in modo da proteggere dall'overflow.

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
[in] Primo numero da moltiplicare. Deve essere di tipo `T`.

*u*<br/>
[in] Secondo numero da moltiplicare. Deve essere di tipo `U`.

*result*<br/>
[out] Parametro in cui `SafeMultiply` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.

## <a name="safenotequals"></a><a name="safenotequals"></a> SafeNotEquals

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
[in] Primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Secondo numero da confrontare. Deve essere di tipo `U`.

### <a name="return-value"></a>Valore restituito

**`true`** Se *t* e *u* non sono uguali; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il metodo migliora `!=` perché `SafeNotEquals` consente di confrontare due tipi diversi di numeri.

## <a name="safesubtract"></a><a name="safesubtract"></a> SafeSubtract

Esegue la sottrazione tra due numeri in modo da proteggere dall'overflow.

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
[in] Primo numero nella sottrazione. Deve essere di tipo `T`.

*u*<br/>
[in] Numero da sottrarre da *t*. Deve essere di tipo `U`.

*result*<br/>
[out] Parametro in cui `SafeSubtract` archivia il risultato.

### <a name="return-value"></a>Valore restituito

**`true`** Se non si verificano errori; **`false`** se si verifica un errore.
