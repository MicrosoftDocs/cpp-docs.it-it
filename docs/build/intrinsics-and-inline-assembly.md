---
title: Funzioni intrinseche e Assembly Inline | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6a87e577af339099eda56a3b9d91929a05253a43
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716248"
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline

Uno dei vincoli per x64 compilatore è non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che non è possibile scrivere in C o C++ sia dovranno essere scritti come subroutine o funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.

Gli intrinseci supportati dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)