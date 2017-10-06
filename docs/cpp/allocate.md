---
title: allocare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- allocate_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 4f61d3b6e6ab256262ea370516f20cdb76bf890e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="allocate"></a>allocate
**Sezione specifica Microsoft**  
  
 Il **allocare** identificatore di dichiarazione denomina un segmento di dati in cui verrà allocato l'elemento di dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
__declspec(allocate("  
segname  
")) declarator  
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
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
