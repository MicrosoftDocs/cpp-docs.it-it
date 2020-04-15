---
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
ms.openlocfilehash: d06ed19b7c041f9ae73f862ba521449a206aa321
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374649"
---
# <a name="platformwriteonlyarray-class"></a>Platform::WriteOnlyArray (classe)

Rappresenta una matrice unidimensionale usata come parametro di input quando il chiamante passa una matrice che verrà riempita dal metodo.

Questa classe di riferimento viene dichiarata come privata in vccorlib.h, di conseguenza non viene generata nei metadati ed è supportata solo da C++. Questa classe è destinata a essere usata solo come parametro di input che riceve una matrice allocata dal chiamante. Non può essere costruita dal codice utente. Consente al metodo C++ di scrivere direttamente in una matrice, un modello noto come *FillArray* . Per ulteriori informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="syntax"></a>Sintassi

```cpp
private ref class WriteOnlyArray<T, 1>
```

### <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Questi metodi presentano accessibilità interna, ovvero sono accessibili solo all'interno dell'app o del componente C++.

|Nome|Descrizione|
|----------|-----------------|
|[WriteOnlyArray::begin](#begin)|Iteratore che punta al primo elemento della matrice|
|[WriteOnlyArray::Data](#data)|Puntatore al buffer di dati.|
|[WriteOnlyArray::end](#end)|Iteratore che punta all'elemento dopo l'ultimo elemento nella matrice.|
|[WriteOnlyArray::FastPassWriteOnlyArray::FastPass](#fastpass)|Indica se la matrice può utilizzare il meccanismo FastPass, ovvero un'ottimizzazione eseguita in modo trasparente dal sistema. Non usarla nel codice|
|[WriteOnlyArray::Lunghezza](#length)|Restituisce il numero di elementi nella matrice.|
|[WriteOnlyArray::set](#set)|Imposta l'elemento specificato sul valore specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WriteOnlyArray`

### <a name="requirements"></a>Requisiti

L'opzione del compilatore: **//W**

**Metadati:** Platform.winmd

**Spazio dei nomi:** Platform

## <a name="writeonlyarraybegin-method"></a><a name="begin"></a>Metodo WriteOnlyArray::begin

Restituisce un puntatore al primo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* begin() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento della matrice.

### <a name="remarks"></a>Osservazioni

Questo iteratore può essere usato con algoritmi STL quali `std::sort` per intervenire sugli elementi della matrice.

## <a name="writeonlyarraydata-property"></a><a name="data"></a>WriteOnlyArray::Data Proprietà

Puntatore al buffer di dati.

### <a name="syntax"></a>Sintassi

```cpp
property T* Data{
   T* get() const;
}
```

### <a name="return-value"></a>Valore restituito

Puntatore ai byte di matrice non elaborati.

## <a name="writeonlyarrayend-method"></a><a name="end"></a>Metodo WriteOnlyArray::end

Restituisce un puntatore oltre l'ultimo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di un puntatore oltre l'ultimo elemento della matrice.

### <a name="remarks"></a>Osservazioni

Questo iteratore può essere usato con algoritmi STL per eseguire operazioni quali `std::sort` sugli elementi della matrice.

## <a name="writeonlyarrayfastpass-property"></a><a name="fastpass"></a>WriteOnlyArray::FastPass Proprietà

Indica se l'ottimizzazione FastPass interna può essere eseguita. Non è destinata all'uso da parte del codice utente.

### <a name="syntax"></a>Sintassi

```cpp
property bool FastPass{
   bool get() const;
}
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se la matrice è FastPass.

## <a name="writeonlyarrayget-method"></a><a name="get"></a>Metodo WriteOnlyArray::get

Restituisce l'elemento in corrispondenza dell'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int indexArg) const;
```

### <a name="parameters"></a>Parametri

*indexArg (Argino)*<br/>
Indice da utilizzare.

### <a name="return-value"></a>Valore restituito

## <a name="writeonlyarraylength-property"></a><a name="length"></a>WriteOnlyArray::Length Proprietà

Restituisce il numero di elementi nella matrice allocata dal chiamante.

### <a name="syntax"></a>Sintassi

```cpp
property unsigned int Length{
   unsigned int get() const;
}
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

## <a name="writeonlyarrayset-function"></a><a name="set"></a>Funzione WriteOnlyArray::setWriteOnlyArray::set Function

Imposta il valore specificato in corrispondenza dell'indice specificato nella matrice.

### <a name="syntax"></a>Sintassi

```cpp
T& set(
   unsigned int indexArg,
   T valueArg);
```

### <a name="parameters"></a>Parametri

*indexArg (Argino)*<br/>
Indice dell'elemento da impostare.

*valueArg (valoreArg)*<br/>
Valore da impostare in corrispondenza di `indexArg`.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento appena impostato.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su come interpretare il valore HRESULT, vedere [Struttura dei codici di errore COM](/windows/win32/com/structure-of-com-error-codes).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi della piattaforma](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
