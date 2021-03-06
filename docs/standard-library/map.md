---
description: 'Altre informazioni su: &lt; mappa&gt;'
title: '&lt;map&gt;'
ms.date: 11/04/2016
f1_keywords:
- <map>
helpviewer_keywords:
- map header
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
ms.openlocfilehash: 78a4afca400239b7f45637ad6320cbd950d72f54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149409"
---
# <a name="ltmapgt"></a>&lt;map&gt;

Definisce i modelli di classe del contenitore map e multimap e i relativi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<map>

**Spazio dei nomi:** std

> [!NOTE]
> La \<map> libreria usa anche l' `#include <initializer_list>` istruzione.

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Versione map|Versione multimap|Description|
|-----------------|----------------------|-----------------|
|[operatore! = (Map)](../standard-library/map-operators.md#op_neq)|[operatore! = (multimap)](../standard-library/map-operators.md#op_neq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore non è uguale all'oggetto map o multimap a destra.|
|[operatore< (Map)](../standard-library/map-operators.md#op_eq_eq)|[operatore< (multimap)](../standard-library/map-operators.md#op_eq_eq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore dell'oggetto map o multimap a destra.|
|[operatore<= (Map)](../standard-library/map-operators.md#op_lt)|[operatore \< = (multimap)](../standard-library/map-operators.md#op_lt)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore o uguale all'oggetto map o multimap a destra.|
|[operatore = = (Map)](../standard-library/map-operators.md#op_eq_eq)|[operatore = = (multimap)](../standard-library/map-operators.md#op_eq_eq_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è uguale all'oggetto map o multimap a destra.|
|[operatore> (Map)](../standard-library/map-operators.md#op_gt)|[operatore> (multimap)](../standard-library/map-operators.md#op_gt_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore dell'oggetto map o multimap a destra.|
|[operator>= (map)](../standard-library/map-operators.md#op_gt_eq)|[operator>= (multimap)](../standard-library/map-operators.md#op_gt_eq_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore o uguale all'oggetto map o multimap a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione map|Versione multimap|Description|
|-----------------|----------------------|-----------------|
|[swap (map)](../standard-library/map-functions.md#swap)|[swap (multimap)](../standard-library/map-functions.md#swap_multimap)|Scambia gli elementi di due oggetti map o multimap.|

### <a name="classes"></a>Classi

|Nome|Description|
|-|-|
|[Classe value_compare](../standard-library/value-compare-class-map.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.|
|[Classe Map](../standard-library/map-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati.|
|[multimap (classe)](../standard-library/multimap-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati e le chiavi non necessitano di valori univoci.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
