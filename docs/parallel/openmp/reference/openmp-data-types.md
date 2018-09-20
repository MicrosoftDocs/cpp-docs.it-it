---
title: I tipi di dati OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: cf1e1045-4d12-4d03-80b7-d5843b80ef85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b41eaf7012c1d119071281f98177e4a4d841890b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410072"
---
# <a name="openmp-data-types"></a>Tipi di dati OpenMP

Vengono forniti collegamenti ai tipi di dati usati nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include i seguenti tipi di dati.

|Tipo di dati|Descrizione|
|---------------|-----------------|
|[omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md)|Un tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.|
|[omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md)|Un tipo che contiene una delle seguenti parti di informazioni su un blocco: se il blocco è disponibile, e l'identità del thread che possiede il blocco e un conteggio di annidamento.|

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)