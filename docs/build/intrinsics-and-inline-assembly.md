---
title: Funzioni intrinseche e Assembly Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 80eb16eb7fde49c499227bb3d60000e2ac6e5143
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline
Uno dei vincoli per il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] compilatore consiste nel non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che Impossibile scrivere in C o C++ sia dovranno essere scritti come subroutine o come funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.  
  
 Le funzioni intrinseche supportate dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)