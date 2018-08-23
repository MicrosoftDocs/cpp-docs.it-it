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
ms.openlocfilehash: ff2b99eedcdd81a96dc3091046a4f62ffe002509
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42573143"
---
# <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline
Uno dei vincoli per x64 compilatore è non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che non è possibile scrivere in C o C++ sia dovranno essere scritti come subroutine o funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.  
  
 Gli intrinseci supportati dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)