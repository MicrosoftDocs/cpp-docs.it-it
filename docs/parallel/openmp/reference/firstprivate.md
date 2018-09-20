---
title: firstprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- firstprivate
dev_langs:
- C++
helpviewer_keywords:
- firstprivate OpenMP clause
ms.assetid: db479766-6d3b-4bbd-b28e-b192d826788c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d070b8de3cf0382447c3b8e756140892dcd85edc
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387120"
---
# <a name="firstprivate"></a>firstprivate

Specifica che ogni thread deve avere una propria istanza di una variabile, e che è necessario inizializzare la variabile con il valore della variabile, perché è presente prima del costrutto parallelo.

## <a name="syntax"></a>Sintassi

```
firstprivate(var)
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`var`|La variabile ad avere istanze in ogni thread e che verrà inizializzata con il valore della variabile, perché è presente prima del costrutto parallelo. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.|

## <a name="remarks"></a>Note

## <a name="remarks"></a>Note

`firstprivate` si applica alle direttive seguenti:

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [parallel](../../../parallel/openmp/reference/parallel.md)

- [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)

- [single](../../../parallel/openmp/reference/single.md)

Per altre informazioni, vedere [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).

## <a name="example"></a>Esempio

Per un esempio d'uso `firstprivate`, vedere l'esempio nella [private](../../../parallel/openmp/reference/private-openmp.md).

## <a name="see-also"></a>Vedere anche

[Clausole](../../../parallel/openmp/reference/openmp-clauses.md)