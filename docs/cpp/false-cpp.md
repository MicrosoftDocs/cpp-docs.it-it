---
title: false (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- false_cpp
dev_langs:
- C++
helpviewer_keywords:
- false keyword [C++]
ms.assetid: cc13aec5-1f02-4d38-8dbf-5473ea2b354f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a743398b60bc51118045b00e8caf4effde2c68da
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943260"
---
# <a name="false-c"></a>false (C++)
La parola chiave è uno dei due valori per una variabile di tipo [bool](../cpp/bool-cpp.md) o un'espressione condizionale (un'espressione condizionale è ora una **true** espressione booleana). Ad esempio, se `i` è una variabile di tipo **bool**, il `i = false;` istruzione assegna **false** a `i`.  
  
## <a name="example"></a>Esempio  
  
```cpp 
// bool_false.cpp  
#include <stdio.h>  
  
int main()  
{  
    bool bb = true;  
    printf_s("%d\n", bb);  
    bb = false;  
    printf_s("%d\n", bb);  
}  
```  
  
```Output  
1  
0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)