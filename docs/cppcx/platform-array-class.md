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
ms.openlocfilehash: d625d80df67a3c8207467ad629afd4c2bf88db18
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318665"
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

Platform::Array eredita tutti i relativi metodi dalla [classe Platform::WriteOnlyArray](../cppcx/platform-writeonlyarray-class.md) e implementa la `Value` proprietà dell'interfaccia [Platform::IBoxArray](../cppcx/platform-iboxarray-interface.md).

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttori Array](#ctor)|Inizializza una matrice unidimensionale modificabile modificabile di tipi specificati dal parametro di modello della classe, *T*.|

### <a name="methods"></a>Metodi

Vedere [Classe Platform::WriteOnlyArray](../cppcx/platform-writeonlyarray-class.md).

### <a name="properties"></a>Proprietà

|||
|-|-|
|[Matrice::Valore](#value)|Recupera un handle alla matrice corrente.|

### <a name="remarks"></a>Osservazioni

La classe Array è sealed e non può essere ereditata.

Il sistema di tipi di Windows Runtime non supporta il concetto di matrici frastagliate e pertanto non è possibile passare un>> IVector<Platform::Array\<T come valore restituito o parametro del metodo. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

Per ulteriori informazioni su quando e come utilizzare Platform::Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

Questa classe è definita nel file di intestazione vccorlib.h, che è incluso automaticamente dal compilatore. È visibile in IntelliSense ma non nel Visualizzatore oggetti perché non è un tipo pubblico definito in platform.winmd.

### <a name="requirements"></a>Requisiti

L'opzione del compilatore: **//W**

## <a name="array-constructors"></a><a name="ctor"></a>Costruttori di matriceArray Constructors

Inizializza una matrice unidimensionale modificabile modificabile di tipi specificati dal parametro di modello della classe, *T*.

## <a name="syntax"></a>Sintassi

```cpp
Array(unsigned int size);
Array(T* data, unsigned int size);
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Parametro di modello della classe.

*Dimensione*<br/>
Numero di elementi nella matrice.

*data*<br/>
Puntatore a una matrice di dati di tipo `T` utilizzato per inizializzare l'oggetto Array.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su come creare istanze di Platform::Array, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="arrayget-method"></a><a name="get"></a>Metodo Array::get

Recupera un riferimento all'elemento di matrice in corrispondenza della posizione di indice specificata.

## <a name="syntax"></a>Sintassi

```cpp
T& get(unsigned int index)  const;
```

#### <a name="parameters"></a>Parametri

*Indice*<br/>
Indice in base zero che identifica un elemento della matrice. L'indice minimo è 0 e l'indice `size` massimo è il valore specificato dal parametro nel [costruttore Array](#ctor).

### <a name="return-value"></a>Valore restituito

Elemento di matrice specificato dal parametro `index`.

## <a name="arrayvalue-property"></a><a name="value"></a>Array::Value Proprietà

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
