---
title: Spazio dei nomi Concurrency::graphics
ms.date: 11/04/2016
f1_keywords:
- AMP_GRAPHICS/Concurrency
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
ms.openlocfilehash: ef61c93e062b375377a0afe62aa7f622f6c0d4ac
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375600"
---
# <a name="concurrencygraphics-namespace"></a>Spazio dei nomi Concurrency::graphics

Lo spazio dei nomi graphics fornisce tipi e funzioni che sono progettate per la programmazione grafica.

## <a name="syntax"></a>Sintassi

```
namespace graphics;
```

## <a name="members"></a>Membri

### <a name="namespaces"></a>Namespaces

|Nome|Descrizione|
|----------|-----------------|
|[Spazio dei nomi Concurrency::graphics::direct3d](concurrency-graphics-direct3d-namespace.md)|Fornisce funzioni per l'interoperabilità di Direct3D.|

### <a name="typedefs"></a>Definizioni typedef

|Nome|Descrizione|
|----------|-----------------|
|`uint`|Il tipo di elemento per [classe uint_2](uint-2-class.md), [classe uint_3](uint-3-class.md), e [classe uint_4](uint-4-class.md). Definito come `typedef unsigned int uint;`.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[Enumerazione address_mode](concurrency-graphics-namespace-enums.md#address_mode).|Specifica le modalità di indirizzamento supportate per il campionamento di trama.|
|[Enumerazione filter_mode](concurrency-graphics-namespace-enums.md#filter_mode)|Specifica le modalità di filtro supportate per il campionamento di trama.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe texture](texture-class.md)|Una texture è un'aggregazione in un accelerator_view nel dominio dell'extent di dati. È una raccolta di variabili, una per ogni elemento in un dominio di extent. Ogni variabile contiene un valore che corrisponde al tipo primitivo C++ (unsigned int, int, float, double), o tipo scalare norm, o unorm (definito in Concurrency:: Graphics) o tipi eligible short vector definiti in Concurrency:: Graphics.|
|[Classe writeonly_texture_view](writeonly-texture-view-class.md)|Una writeonly_texture_view fornisce l'accesso writeonly ad una trama.|
|[Classe double_2](double-2-class.md)|Rappresenta un vettore short di 2 `double` valori.|
|[Classe double_3](double-3-class.md)|Rappresenta un vettore short di 3 `double` valori.|
|[Classe double_4](double-4-class.md)|Rappresenta un vettore short di 4 `double` valori.|
|[Classe float_2](float-2-class.md)|Rappresenta un vettore short di 2 `float` valori.|
|[Classe float_3](float-3-class.md)|Rappresenta un vettore short di 3 `float` valori.|
|[Classe float_4](float-4-class.md)|Rappresenta un vettore short di 4 `float` valori.|
|[Classe int_2](int-2-class.md)|Rappresenta un vettore short di 2 `int` valori.|
|[Classe int_3](int-3-class.md)|Rappresenta un vettore short di 3 `int` valori.|
|[Classe int_4](int-4-class.md)|Rappresenta un vettore short di 4 `int` valori.|
|[Classe norm_2](norm-2-class.md)|Rappresenta un vettore short di 2 `norm` valori.|
|[Classe norm_3](norm-3-class.md)|Rappresenta un vettore short di 3 `norm` valori.|
|[Classe norm_4](norm-4-class.md)|Rappresenta un vettore short di 4 `norm` valori.|
|[Classe uint_2](uint-2-class.md)|Rappresenta un vettore short di 2 `uint` valori.|
|[Classe uint_3](uint-3-class.md)|Rappresenta un vettore short di 3 `uint` valori.|
|[Classe uint_4](uint-4-class.md)|Rappresenta un vettore short di 4 `uint` valori.|
|[Classe unorm_2](unorm-2-class.md)|Rappresenta un vettore short di 2 `unorm` valori.|
|[Classe unorm_3](unorm-3-class.md)|Rappresenta un vettore short di 3 `unorm` valori.|
|[Classe unorm_4](unorm-4-class.md)|Rappresenta un vettore short di 4 `unorm` valori.|
|[Classe sampler](sampler-class.md)|Rappresenta la configurazione del campionatore utilizzato per il campionamento della trama.|
|[Struttura short_vector](short-vector-structure.md)|Fornisce un'implementazione di base di un vettore short di valori.|
|[Struttura short_vector_traits](short-vector-traits-structure.md)|Provvede al recupero della lunghezza e tipo di un vettore short.|
|[Classe texture_view](texture-view-class.md)|Fornisce l'accesso in lettura e accesso in scrittura a una trama.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[copy](concurrency-graphics-namespace-functions.md#copy)|Di overload. Copia il contenuto della texture di origine nel buffer di host di destinazione.|
|[copy_async](concurrency-graphics-namespace-functions.md#copy_async)|Di overload. Copia in modo asincrono il contenuto della texture di origine nel buffer di host di destinazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concorrenza

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
