---
title: lastprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- lastprivate
dev_langs:
- C++
helpviewer_keywords:
- lastprivate OpenMP clause
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7124e51b604a55d049be13d3bbcccc4e5810ca67
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412834"
---
# <a name="lastprivate"></a>lastprivate

Specifica che la versione del contesto di inclusione della variabile è impostata uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).

## <a name="syntax"></a>Sintassi

```
lastprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
La variabile che sarà uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).

## <a name="remarks"></a>Note

`lastprivate` si applica alle direttive seguenti:

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)

Per altre informazioni, vedere [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).

## <a name="example"></a>Esempio

Visualizzare [pianificazione](../../../parallel/openmp/reference/schedule.md) per un esempio d'uso `lastprivate` clausola.

## <a name="see-also"></a>Vedere anche

[Clausole](../../../parallel/openmp/reference/openmp-clauses.md)