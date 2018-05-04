---
title: Funzioni intrinseche e Assembly Inline | Documenti Microsoft
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
ms.openlocfilehash: 5b8651bea0b1ee9f54ec0af704d92feef0722368
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline
Uno dei vincoli per il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] compilatore consiste nel non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che Impossibile scrivere in C o C++ sia dovranno essere scritti come subroutine o come funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.  
  
 Le funzioni intrinseche supportate dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)