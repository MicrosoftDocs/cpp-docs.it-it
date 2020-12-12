---
description: 'Altre informazioni su: steady_clock struct'
title: Struct steady_clock
ms.date: 05/22/2018
f1_keywords:
- chrono/std::chrono::steady_clock
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
ms.openlocfilehash: 066a98f4eba6670e640e9fcc9b79eb017859a3d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169073"
---
# <a name="steady_clock-struct"></a>Struct steady_clock

Rappresenta un orologio *fisso* .

## <a name="syntax"></a>Sintassi

```cpp
struct steady_clock;
```

## <a name="remarks"></a>Osservazioni

In Windows `steady_clock` esegue il wrapping della `QueryPerformanceCounter` funzione.

Un clock è *monotonico* se il valore restituito da una prima chiamata a `now` è sempre minore o uguale al valore restituito da una chiamata successiva a `now`. Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.

`high_resolution_clock` è un typedef per `steady_clock` .

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`steady_clock::duration`|Sinonimo di `nanoseconds` , definito in \<chrono> .|
|`steady_clock::period`|Sinonimo di `nano` , definito in \<ratio> .|
|`steady_clock::rep`|Sinonimo di **`long long`** , il tipo utilizzato per rappresentare il numero di cicli di clock nella creazione di un'istanza contenuta di `duration` .|
|`steady_clock::time_point`|Sinonimo di `chrono::time_point<steady_clock>`.|

## <a name="public-functions"></a>Funzioni pubbliche

|Funzione|Descrizione|
|--------------|-----------------|
|`now`|Restituisce l'ora corrente come `time_point` valore.|

## <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|`steady_clock::is_steady`|Include **`true`** . Un oggetto `steady_clock` è *costante*.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<chrono>

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedi anche

- [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
- [\<chrono>](../standard-library/chrono.md)
- [Struttura system_clock](../standard-library/system-clock-structure.md)
