---
title: allocate | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: allocate_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2494b9ec9ad78e3ea6910669c4d896448f60b06f
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="allocate"></a>allocate
**Sezione specifica Microsoft**  
  
 Il **allocare** identificatore di dichiarazione denomina un segmento di dati in cui verrà allocato l'elemento di dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  

   __declspec(allocate("segname")) declarator  

```  
  
## <a name="remarks"></a>Note  
 Il nome *segname* deve essere dichiarato utilizzando uno dei seguenti pragma:  
  
-   [code_seg](../preprocessor/code-seg.md)  
  
-   [const_seg](../preprocessor/const-seg.md)  
  
-   [data_seg](../preprocessor/data-seg.md)  
  
-   [init_seg](../preprocessor/init-seg.md)  
  
-   [section](../preprocessor/section.md)  
  
## <a name="example"></a>Esempio  
  
```  
// allocate.cpp  
#pragma section("mycode", read)  
__declspec(allocate("mycode"))  int i = 0;  
  
int main() {  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)