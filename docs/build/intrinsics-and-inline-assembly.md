---
title: Funzioni intrinseche e Assembly Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c60932b719b25365c7d8f65a4649ef782a4f9888
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline
Uno dei vincoli per il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] compilatore consiste nel non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che Impossibile scrivere in C o C++ sia dovranno essere scritti come subroutine o come funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.  
  
 Le funzioni intrinseche supportate dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)