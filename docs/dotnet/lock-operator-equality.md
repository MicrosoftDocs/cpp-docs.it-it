---
title: lock::operator = = | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- lock::operator==
- msclr.lock.operator==
- msclr::lock::operator==
- lock.operator==
dev_langs:
- C++
helpviewer_keywords:
- lock::operator==
ms.assetid: 3dcf1e5a-53fc-495d-9df5-d7849a41c36c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 276ad5b44dd2112abad2c7c2e293fc65b173fffc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33133259"
---
# <a name="lockoperator"></a>lock::operator==
Operatore di uguaglianza.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class T> bool operator==(  
   T t  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `t`  
 Oggetto da confrontare per verificarne l'uguaglianza.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce `true` se `t` è uguale all'oggetto del blocco, `false` in caso contrario.  
  
## <a name="example"></a>Esempio  
  
```  
// msl_lock_op_eq.cpp  
// compile with: /clr  
#include <msclr/lock.h>  
  
using namespace System;  
using namespace System::Threading;  
using namespace msclr;  
  
int main () {  
   Object^ o1 = gcnew Object;  
   lock l1(o1);  
   if (l1 == o1) {  
      Console::WriteLine("Equal!");  
   }  
}  
```  
  
```Output  
Equal!  
```  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\lock.h >  
  
 **Namespace** msclr  
  
## <a name="see-also"></a>Vedere anche  
 [Membri lock](../dotnet/lock-members.md)   
 [lock::operator!=](../dotnet/lock-operator-inequality.md)