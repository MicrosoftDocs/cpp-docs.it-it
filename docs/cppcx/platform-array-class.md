---
title: Classe Platform::Array
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Array Constructors
- VCCORLIB/Namespace not found::Platform::Array::Value
helpviewer_keywords:
- Platform::Array Class
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
ms.openlocfilehash: 597f8e32e2da95370169cdbfe2ccd209296322cc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62161667"
---
# <a name="platformarray-class"></a>Classe Platform::Array

Rappresenta una matrice unidimensionale modificabile che può essere ricevuta e passata tramite l'interfaccia ABI (Application Binary Interface).

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
private ref class Array<TArg, 1> :
    public WriteOnlyArray<TArg, 1>,
    public IBoxArray<TArg>
```

### <a name="members"></a>Membri

Platform:: Array eredita tutti i relativi metodi dallo [classe platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md) e implementa il `Value` proprietà del [interfaccia platform:: iboxarray](../cppcx/platform-iboxarray-interface.md).

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttori Array](#ctor)|Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro del modello di classe, *T*.|

### <a name="methods"></a>Metodi

Visualizzare [classe platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md).

### <a name="properties"></a>Proprietà

|||
|-|-|
|[Array:: value](#value)|Recupera un handle alla matrice corrente.|

### <a name="remarks"></a>Note

La classe Array è sealed e non può essere ereditata.

Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare un IVector < platform:: Array\<T >> come un parametro di metodo o valore restituito. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

Per altre informazioni su quando e come usare platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare un IVector < platform:: Array\<T >> come un parametro di metodo o valore restituito. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

Questa classe è definita nel file di intestazione vccorlib.h, che è incluso automaticamente dal compilatore. È visibile in IntelliSense ma non nel Visualizzatore oggetti perché non è un tipo pubblico definito in Platform. winmd.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

## <a name="ctor"></a>  Costruttori Array

Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro del modello di classe, *T*.

## <a name="syntax"></a>Sintassi

```cpp
Array(unsigned int size);
Array(T* data, unsigned int size);
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Parametro di modello della classe.

*size*<br/>
Numero di elementi nella matrice.

*data*<br/>
Puntatore a una matrice di dati di tipo `T` utilizzato per inizializzare l'oggetto Array.

### <a name="remarks"></a>Note

Per altre informazioni su come creare istanze di platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="get"></a>  Metodo Array:: Get

Recupera un riferimento all'elemento di matrice in corrispondenza della posizione di indice specificata.

## <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int index)  const;
```

#### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che identifica un elemento della matrice. L'indice minimo è 0 e l'indice massimo è il valore specificato per il `size` parametro nel [costruttore Array](#ctor).

### <a name="return-value"></a>Valore restituito

Elemento di matrice specificato dal parametro `index`.

## <a name="value"></a>  Proprietà array:: value

Recupera un handle alla matrice corrente.

## <a name="syntax"></a>Sintassi

```cpp
property Array^ Value;
```

### <a name="return-value"></a>Valore restituito

Handle alla matrice corrente.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)<br/>
[Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)
