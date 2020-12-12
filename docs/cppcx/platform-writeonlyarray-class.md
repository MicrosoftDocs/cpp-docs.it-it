---
description: 'Altre informazioni su: classe Platform:: WriteOnlyArray'
title: Platform::WriteOnlyArray (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::WriteOnlyArray::begin
- VCCORLIB/Platform::WriteOnlyArray::Data
- VCCORLIB/Platform::WriteOnlyArray::end
- VCCORLIB/Platform::WriteOnlyArray::FastPass
- VCCORLIB/Platform::WriteOnlyArray::Length
- VCCORLIB/Platform::WriteOnlyArray::set
helpviewer_keywords:
- Platform::WriteOnlyArray Class
ms.assetid: 92d7dd56-ec58-4b8c-88ba-9c903668b687
ms.openlocfilehash: cddbe0d3823ba7b9751bd60844d9ce699546b804
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307769"
---
# <a name="platformwriteonlyarray-class"></a>Platform::WriteOnlyArray (classe)

Rappresenta una matrice unidimensionale usata come parametro di input quando il chiamante passa una matrice che verrà riempita dal metodo.

Questa classe di riferimento viene dichiarata come privata in vccorlib.h, di conseguenza non viene generata nei metadati ed è supportata solo da C++. Questa classe è destinata a essere usata solo come parametro di input che riceve una matrice allocata dal chiamante. Non può essere costruita dal codice utente. Consente al metodo C++ di scrivere direttamente in una matrice, un modello noto come *FillArray* . Per ulteriori informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="syntax"></a>Sintassi

```cpp
private ref class WriteOnlyArray<T, 1>
```

### <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

Questi metodi presentano accessibilità interna, ovvero sono accessibili solo all'interno dell'app o del componente C++.

|Nome|Description|
|----------|-----------------|
|[WriteOnlyArray:: Begin](#begin)|Iteratore che punta al primo elemento della matrice|
|[WriteOnlyArray::D ATA](#data)|Puntatore al buffer di dati.|
|[WriteOnlyArray:: end](#end)|Iteratore che punta all'elemento dopo l'ultimo elemento nella matrice.|
|[WriteOnlyArray:: FastPass](#fastpass)|Indica se la matrice può utilizzare il meccanismo FastPass, ovvero un'ottimizzazione eseguita in modo trasparente dal sistema. Non usarla nel codice|
|[WriteOnlyArray:: length](#length)|Restituisce il numero di elementi nella matrice.|
|[WriteOnlyArray:: set](#set)|Imposta l'elemento specificato sul valore specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WriteOnlyArray`

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

**Metadati:** Platform.winmd

**Spazio dei nomi:** Platform

## <a name="writeonlyarraybegin-method"></a><a name="begin"></a> Metodo WriteOnlyArray:: Begin

Restituisce un puntatore al primo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* begin() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento della matrice.

### <a name="remarks"></a>Commenti

Questo iteratore può essere usato con algoritmi STL quali `std::sort` per intervenire sugli elementi della matrice.

## <a name="writeonlyarraydata-property"></a><a name="data"></a> WriteOnlyArray: proprietà:D ATA

Puntatore al buffer di dati.

### <a name="syntax"></a>Sintassi

```cpp
property T* Data{
   T* get() const;
}
```

### <a name="return-value"></a>Valore restituito

Puntatore ai byte di matrice non elaborati.

## <a name="writeonlyarrayend-method"></a><a name="end"></a> Metodo WriteOnlyArray:: end

Restituisce un puntatore oltre l'ultimo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di un puntatore oltre l'ultimo elemento della matrice.

### <a name="remarks"></a>Commenti

Questo iteratore può essere usato con algoritmi STL per eseguire operazioni quali `std::sort` sugli elementi della matrice.

## <a name="writeonlyarrayfastpass-property"></a><a name="fastpass"></a> Proprietà WriteOnlyArray:: FastPass

Indica se l'ottimizzazione FastPass interna può essere eseguita. Non è destinata all'uso da parte del codice utente.

### <a name="syntax"></a>Sintassi

```cpp
property bool FastPass{
   bool get() const;
}
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se la matrice è FastPass.

## <a name="writeonlyarrayget-method"></a><a name="get"></a> Metodo WriteOnlyArray:: Get

Restituisce l'elemento in corrispondenza dell'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int indexArg) const;
```

### <a name="parameters"></a>Parametri

*indexArg*<br/>
Indice da utilizzare.

### <a name="return-value"></a>Valore restituito

## <a name="writeonlyarraylength-property"></a><a name="length"></a> Proprietà WriteOnlyArray:: length

Restituisce il numero di elementi nella matrice allocata dal chiamante.

### <a name="syntax"></a>Sintassi

```cpp
property unsigned int Length{
   unsigned int get() const;
}
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

## <a name="writeonlyarrayset-function"></a><a name="set"></a> Funzione WriteOnlyArray:: set

Imposta il valore specificato in corrispondenza dell'indice specificato nella matrice.

### <a name="syntax"></a>Sintassi

```cpp
T& set(
   unsigned int indexArg,
   T valueArg);
```

### <a name="parameters"></a>Parametri

*indexArg*<br/>
Indice dell'elemento da impostare.

*valueArg*<br/>
Valore da impostare in corrispondenza di `indexArg`.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento appena impostato.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni su come interpretare il valore HRESULT, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes).

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
