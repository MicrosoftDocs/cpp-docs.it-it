---
title: '&lt;map&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- <map>
dev_langs:
- C++
helpviewer_keywords:
- map header
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5b595cb8b212455634f9a44275333063914a5048
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltmapgt"></a>&lt;map&gt;

Definisce le classi del modello del contenitore map e multimap e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <map>

```

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Versione map|Versione multimap|Descrizione|
|-----------------|----------------------|-----------------|
|[operator!= (map)](../standard-library/map-operators.md#op_neq)|[operator!= (multimap)](../standard-library/map-operators.md#op_neq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore non è uguale all'oggetto map o multimap a destra.|
|[operator< (map)](../standard-library/map-operators.md#op_eq_eq)|[operator< (multimap)](../standard-library/map-operators.md#op_eq_eq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore dell'oggetto map o multimap a destra.|
|[operator<= (map)](../standard-library/map-operators.md#op_lt)|[operator\<= (multimap)](../standard-library/map-operators.md#op_lt)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore o uguale all'oggetto map o multimap a destra.|
|[operator== (map)](../standard-library/map-operators.md#op_eq_eq)|[operator== (multimap)](../standard-library/map-operators.md#op_eq_eq_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è uguale all'oggetto map o multimap a destra.|
|[operator> (map)](../standard-library/map-operators.md#op_gt)|[operator> (multimap)](../standard-library/map-operators.md#op_gt_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore dell'oggetto map o multimap a destra.|
|[operator>= (map)](../standard-library/map-operators.md#op_gt_eq)|[operator>= (multimap)](../standard-library/map-operators.md#op_gt_eq_multimap)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore o uguale all'oggetto map o multimap a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione map|Versione multimap|Descrizione|
|-----------------|----------------------|-----------------|
|[swap (map)](../standard-library/map-functions.md#swap)|[swap (multimap)](../standard-library/map-functions.md#swap_multimap)|Scambia gli elementi di due oggetti map o multimap.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe value_compare](../standard-library/value-compare-class-map.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.|
|[Classe map](../standard-library/map-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati.|
|[Classe multimap](../standard-library/multimap-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati e le chiavi non necessitano di valori univoci.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
