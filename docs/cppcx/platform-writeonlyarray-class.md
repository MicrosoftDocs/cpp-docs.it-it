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
ms.openlocfilehash: ff339bc2b144e22d7177638424dd8e617eecfb3b
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51330616"
---
# <a name="platformwriteonlyarray-class"></a>Platform::WriteOnlyArray (classe)

Rappresenta una matrice unidimensionale usata come parametro di input quando il chiamante passa una matrice che verrà riempita dal metodo.

Questa classe di riferimento viene dichiarata come privata in vccorlib.h, di conseguenza non viene generata nei metadati ed è supportata solo da C++. Questa classe è destinata a essere usata solo come parametro di input che riceve una matrice allocata dal chiamante. Non può essere costruita dal codice utente. Consente al metodo C++ di scrivere direttamente in una matrice, un modello noto come *FillArray* . Per altre informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="syntax"></a>Sintassi

```cpp
private ref class WriteOnlyArray<T, 1>
```

### <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Questi metodi presentano accessibilità interna, ovvero sono accessibili solo all'interno dell'app o del componente C++.

|nome|Descrizione|
|----------|-----------------|
|[Writeonlyarray](#begin)|Iteratore che punta al primo elemento della matrice|
|[Writeonlyarray:: data](#data)|Puntatore al buffer di dati.|
|[Writeonlyarray](#end)|Iteratore che punta all'elemento dopo l'ultimo elemento nella matrice.|
|[Writeonlyarray:: Fastpass](#fastpass)|Indica se la matrice può utilizzare il meccanismo FastPass, ovvero un'ottimizzazione eseguita in modo trasparente dal sistema. Non usarla nel codice|
|[Writeonlyarray:: Length](#length)|Restituisce il numero di elementi nella matrice.|
|[Writeonlyarray](#set)|Imposta l'elemento specificato sul valore specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WriteOnlyArray`

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

**Metadati:** Platform.winmd

**Spazio dei nomi:** Platform

## <a name="begin"></a>  WriteOnlyArray::begin (metodo)

Restituisce un puntatore al primo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* begin() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento della matrice.

### <a name="remarks"></a>Note

Questo iteratore può essere usato con algoritmi STL quali `std::sort` per intervenire sugli elementi della matrice.

## <a name="data"></a>  Proprietà WriteOnlyArray::Data

Puntatore al buffer di dati.

### <a name="syntax"></a>Sintassi

```cpp
property T* Data{
   T* get() const;
}
```

### <a name="return-value"></a>Valore restituito

Puntatore ai byte di matrice non elaborati.

## <a name="end"></a>  WriteOnlyArray::end (metodo)

Restituisce un puntatore oltre l'ultimo elemento della matrice.

### <a name="syntax"></a>Sintassi

```cpp
T* end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di un puntatore oltre l'ultimo elemento della matrice.

### <a name="remarks"></a>Note

Questo iteratore può essere usato con algoritmi STL per eseguire operazioni quali `std::sort` sugli elementi della matrice.

## <a name="fastpass"></a>  Proprietà WriteOnlyArray::FastPass

Indica se l'ottimizzazione FastPass interna può essere eseguita. Non è destinata all'uso da parte del codice utente.

### <a name="syntax"></a>Sintassi

```cpp
property bool FastPass{
   bool get() const;
}
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se la matrice è FastPass.

## <a name="get"></a>  Metodo writeonlyarray:: Get

Restituisce l'elemento in corrispondenza dell'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int indexArg) const;
```

### <a name="parameters"></a>Parametri

*indexArg*<br/>
L'indice da utilizzare.

### <a name="return-value"></a>Valore restituito

## <a name="length"></a>  Proprietà WriteOnlyArray::Length

Restituisce il numero di elementi nella matrice allocata dal chiamante.

### <a name="syntax"></a>Sintassi

```cpp
property unsigned int Length{
   unsigned int get() const;
}
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

## <a name="set"></a>  WriteOnlyArray::set (funzione)

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

### <a name="remarks"></a>Note

Per altre informazioni su come interpretare il valore HRESULT, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes).

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)