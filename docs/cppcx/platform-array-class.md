---
title: Classe Platform::Array
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Array
- VCCORLIB/Platform::Array::Value
helpviewer_keywords:
- Platform::Array Class
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
ms.openlocfilehash: 23548df6718b9397db8521b2bebc6e8389859dcd
ms.sourcegitcommit: 65fead53d56d531d71be42216056aca5f44def11
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/19/2020
ms.locfileid: "88610699"
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

Platform:: Array eredita tutti i relativi metodi dalla [Classe Platform:: WriteOnlyArray](../cppcx/platform-writeonlyarray-class.md) e implementa la `Value` proprietà dell' [interfaccia Platform:: IBoxArray](../cppcx/platform-iboxarray-interface.md).

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttori Array](#ctor)|Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro di modello di classe, *T*.|

### <a name="methods"></a>Metodi

Vedere [Classe Platform:: WriteOnlyArray](../cppcx/platform-writeonlyarray-class.md).

### <a name="properties"></a>Proprietà

|||
|-|-|
|[Array:: value](#value)|Recupera un handle alla matrice corrente.|

### <a name="remarks"></a>Osservazioni

La classe Array è sealed e non può essere ereditata.

Il sistema di tipi Windows Runtime non supporta il concetto di matrici di matrici e pertanto non è possibile passare `IVector<Platform::Array<T>>` come valore restituito o parametro di metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

Per altre informazioni su quando e come usare Platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

Questa classe è definita nel file di intestazione vccorlib.h, che è incluso automaticamente dal compilatore. È visibile in IntelliSense ma non in Visualizzatore oggetti perché non è un tipo pubblico definito in Platform. winmd.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

## <a name="array-constructors"></a><a name="ctor"></a> Costruttori di matrici

Inizializza una matrice modificabile unidimensionale di tipi specificati dal parametro di modello di classe, *T*.

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

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla creazione di istanze di Platform:: Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="arrayget-method"></a><a name="get"></a> Metodo Array:: Get

Recupera un riferimento all'elemento di matrice in corrispondenza della posizione di indice specificata.

## <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int index)  const;
```

#### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che identifica un elemento della matrice. L'indice minimo è 0 e l'indice massimo è il valore specificato dal `size` parametro nel costruttore di [matrice](#ctor).

### <a name="return-value"></a>Valore restituito

Elemento di matrice specificato dal parametro `index`.

## <a name="arrayvalue-property"></a><a name="value"></a> Proprietà Array:: value

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
