---
title: predefinito (OpenMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- default
dev_langs:
- C++
helpviewer_keywords:
- default OpenMP clause
- defaults, OpenMP clause
ms.assetid: 96055106-a8f0-40b3-8319-e412b6e07bf8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ea32f473d96c8f48c6628d8f71212269bd6d345
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392612"
---
# <a name="default-openmp"></a>default (OpenMP)

Specifica il comportamento delle variabili senza ambite in un'area parallela.

## <a name="syntax"></a>Sintassi

```
default(shared | none)
```

## <a name="remarks"></a>Note

`shared`, che è in effetti se il `default` clausola viene omessa, significa che qualsiasi variabile in un'area parallela verrà considerata come se fosse specificato con il [condivisa](../../../parallel/openmp/reference/shared-openmp.md) clausola. `none` significa che qualsiasi variabile utilizzata in un'area parallela che non hanno ambito con la [privati](../../../parallel/openmp/reference/private-openmp.md), [condiviso](../../../parallel/openmp/reference/shared-openmp.md), [riduzione](../../../parallel/openmp/reference/reduction.md), [firstprivate](../../../parallel/openmp/reference/firstprivate.md), oppure [lastprivate](../../../parallel/openmp/reference/lastprivate.md) clausola genererà un errore del compilatore.

`default` si applica alle direttive seguenti:

- [parallel](../../../parallel/openmp/reference/parallel.md)

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)

Per altre informazioni, vedere [2.7.2.5 predefinito](../../../parallel/openmp/2-7-2-5-default.md).

## <a name="example"></a>Esempio

Visualizzare [privati](../../../parallel/openmp/reference/private-openmp.md) per un esempio d'uso `default`.

## <a name="see-also"></a>Vedere anche

[Clausole](../../../parallel/openmp/reference/openmp-clauses.md)