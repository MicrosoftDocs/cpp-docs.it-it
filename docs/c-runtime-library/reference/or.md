---
title: or | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- std::or
- std.or
- Or
dev_langs:
- C++
helpviewer_keywords:
- or function
ms.assetid: 6523b3ac-0a18-44ec-9e9a-b9bab8525ead
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 2f8be2e11afd9fbc79bf4d091587f909f9aae77a
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="or"></a>o
Alternativa all'operatore &#124;&#124;.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#define or ||  
  
```  
  
## <a name="remarks"></a>Note  
 La macro restituisce l'operatore &#124;&#124;.  
  
## <a name="example"></a>Esempio  
  
```  
// iso646_or.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   bool a = true, b = false, result;  
  
   boolalpha(cout);  
  
   result= a || b;  
   cout << result << endl;  
  
   result= a or b;  
   cout << result << endl;  
}  
```  
  
```Output  
true  
true  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iso646.h>
