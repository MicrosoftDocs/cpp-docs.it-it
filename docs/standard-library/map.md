---
title: '&lt;map&gt;'
ms.date: 11/04/2016
f1_keywords:
- <map>
helpviewer_keywords:
- map header
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
ms.openlocfilehash: 2e861d2250585fbcdf3e1ef63d92f18185fc7f1c
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687771"
---
# <a name="ltmapgt"></a>&lt;map&gt;

Definisce i modelli di classe del contenitore map e multimap e i relativi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<map>

**Spazio dei nomi:** std

> [!NOTE]
> Anche la libreria \<map > USA l'istruzione `#include <initializer_list>`.

## <a name="members"></a>Members

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

|||
|-|-|
|[Classe value_compare](../standard-library/value-compare-class-map.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.|
|[Classe map](../standard-library/map-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati.|
|[Classe multimap](../standard-library/multimap-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati e le chiavi non necessitano di valori univoci.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
