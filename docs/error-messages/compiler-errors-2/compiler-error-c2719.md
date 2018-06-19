---
title: Errore del compilatore C2719 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2719
dev_langs:
- C++
helpviewer_keywords:
- C2719
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ee8779db363c506d2f4ad884e15f78ba8231caa7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33233334"
---
# <a name="compiler-error-c2719"></a>Errore del compilatore C2719
'parameter': il parametro formale con __declspec(align('#')) non verrà allineato  
  
 Il [allineare](../../cpp/align-cpp.md) `__declspec` modificatore non è consentito nei parametri di funzione. L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata. Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
 L'esempio seguente genera l'errore C2719 e mostra come risolverlo:  
  
```  
// C2719.cpp  
void func(int __declspec(align(32)) i);   // C2719  
// try the following line instead  
// void func(int i);  
```