---
title: barriera | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- barrier
dev_langs:
- C++
helpviewer_keywords:
- barrier OpenMP directive
ms.assetid: 5c73ad4f-c768-443a-8f9e-4fd8bc2253c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c220106d62bf65505c9c5b48085a9ee3e67fe0cb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415031"
---
# <a name="barrier"></a>barrier

Sincronizza tutti i thread in un team. tutti i thread Sospendi alla barriera, fino a quando tutti i thread di eseguano la barriera.

## <a name="syntax"></a>Sintassi

```
#pragma omp barrier
```

## <a name="remarks"></a>Note

Il `barrier` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.6.3 direttiva barrier](../../../parallel/openmp/2-6-3-barrier-directive.md).

## <a name="example"></a>Esempio

Per un esempio d'uso `barrier`, vedere [master](../../../parallel/openmp/reference/master.md).

## <a name="see-also"></a>Vedere anche

[Direttive](../../../parallel/openmp/reference/openmp-directives.md)