---
title: Funzioni intrinseche e assembly inline
ms.date: 11/04/2016
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
ms.openlocfilehash: 033225259c0a33414fe45eba313bb1f1c94eb379
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50515102"
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline

Uno dei vincoli per x64 compilatore è non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che non è possibile scrivere in C o C++ sia dovranno essere scritti come subroutine o funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.

Gli intrinseci supportati dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)