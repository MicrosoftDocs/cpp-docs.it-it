---
description: 'Altre informazioni su: Concurrency:: graphics Namespace'
title: Spazio dei nomi Concurrency::graphics
ms.date: 11/04/2016
f1_keywords:
- AMP_GRAPHICS/Concurrency
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
ms.openlocfilehash: f4ab25a6bc6e7bfd318ea58bb6a7efe403c51a89
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132834"
---
# <a name="concurrencygraphics-namespace"></a>Spazio dei nomi Concurrency::graphics

Lo spazio dei nomi Graphics fornisce tipi e funzioni progettati per la programmazione grafica.

## <a name="syntax"></a>Sintassi

```cpp
namespace graphics;
```

## <a name="members"></a>Members

### <a name="namespaces"></a>Spazi dei nomi

|Nome|Description|
|----------|-----------------|
|[Concurrency:: graphics::d spazio dei nomi irect3d](concurrency-graphics-direct3d-namespace.md)|Fornisce funzioni per l'interoperabilità Direct3D.|

### <a name="typedefs"></a>Typedef

|Nome|Description|
|----------|-----------------|
|`uint`|Il tipo di elemento per [uint_2](uint-2-class.md)classe, [uint_3 classe](uint-3-class.md)e [uint_4 classe](uint-4-class.md). Definito come `typedef unsigned int uint;`.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Description|
|----------|-----------------|
|[enumerazione address_mode](concurrency-graphics-namespace-enums.md#address_mode).|Specifica le modalità di indirizzamento supportate per il campionamento di trama.|
|[Enumerazione filter_mode](concurrency-graphics-namespace-enums.md#filter_mode)|Specifica le modalità di filtro supportate per il campionamento della trama.|

### <a name="classes"></a>Classi

|Nome|Description|
|----------|-----------------|
|[Classe texture](texture-class.md)|Una trama è un'aggregazione di dati in un accelerator_view nel dominio extent. Si tratta di una raccolta di variabili, una per ogni elemento in un dominio extent. Ogni variabile include un valore corrispondente al tipo primitivo C++ (unsigned int, int, float, Double) o a un tipo scalare norm oppure unorm (definito in concurrency:: Graphics) o tipi di vettore short idonei definiti in concurrency:: graphics.|
|[Classe writeonly_texture_view](writeonly-texture-view-class.md)|Un writeonly_texture_view fornisce l'accesso WriteOnly a una trama.|
|[Classe double_2](double-2-class.md)|Rappresenta un vettore short di 2 **`double`** valori.|
|[Classe double_3](double-3-class.md)|Rappresenta un vettore breve di 3 **`double`** valori.|
|[Classe double_4](double-4-class.md)|Rappresenta un vettore breve di 4 **`double`** valori.|
|[Classe float_2](float-2-class.md)|Rappresenta un vettore short di 2 **`float`** valori.|
|[Classe float_3](float-3-class.md)|Rappresenta un vettore breve di 3 **`float`** valori.|
|[Classe float_4](float-4-class.md)|Rappresenta un vettore breve di 4 **`float`** valori.|
|[Classe int_2](int-2-class.md)|Rappresenta un vettore short di 2 **`int`** valori.|
|[Classe int_3](int-3-class.md)|Rappresenta un vettore breve di 3 **`int`** valori.|
|[Classe int_4](int-4-class.md)|Rappresenta un vettore breve di 4 **`int`** valori.|
|[Classe norm_2](norm-2-class.md)|Rappresenta un vettore short di 2 `norm` valori.|
|[Classe norm_3](norm-3-class.md)|Rappresenta un vettore breve di 3 `norm` valori.|
|[Classe norm_4](norm-4-class.md)|Rappresenta un vettore breve di 4 `norm` valori.|
|[Classe uint_2](uint-2-class.md)|Rappresenta un vettore short di 2 `uint` valori.|
|[Classe uint_3](uint-3-class.md)|Rappresenta un vettore breve di 3 `uint` valori.|
|[Classe uint_4](uint-4-class.md)|Rappresenta un vettore breve di 4 `uint` valori.|
|[Classe unorm_2](unorm-2-class.md)|Rappresenta un vettore short di 2 `unorm` valori.|
|[Classe unorm_3](unorm-3-class.md)|Rappresenta un vettore breve di 3 `unorm` valori.|
|[Classe unorm_4](unorm-4-class.md)|Rappresenta un vettore breve di 4 `unorm` valori.|
|[Classe Sampler](sampler-class.md)|Rappresenta la configurazione campionatore utilizzata per il campionamento della trama.|
|[Struttura short_vector](short-vector-structure.md)|Fornisce un'implementazione di base di un vettore breve di valori.|
|[Struttura short_vector_traits](short-vector-traits-structure.md)|Fornisce il recupero della lunghezza e del tipo di un vettore breve.|
|[Classe texture_view](texture-view-class.md)|Fornisce accesso in lettura e accesso in scrittura a una trama.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|----------|-----------------|
|[copy](concurrency-graphics-namespace-functions.md#copy)|Di overload. Copia il contenuto della trama di origine nel buffer dell'host di destinazione.|
|[copy_async](concurrency-graphics-namespace-functions.md#copy_async)|Di overload. Copia in modo asincrono il contenuto della trama di origine nel buffer dell'host di destinazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concorrenza

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
