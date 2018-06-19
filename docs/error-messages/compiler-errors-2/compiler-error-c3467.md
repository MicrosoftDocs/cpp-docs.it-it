---
title: Errore del compilatore C3467 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3467
dev_langs:
- C++
helpviewer_keywords:
- C3467
ms.assetid: e2b844d0-4920-412f-99fd-cd8051c4aa41
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5ea834ff01f228b9b30f8acdafb665dbba743517
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33256222"
---
# <a name="compiler-error-c3467"></a>Errore del compilatore C3467
'type': questo tipo è stato già inoltrato  
  
 Il compilatore ha trovato più dichiarazioni con prototipo per lo stesso tipo. È consentita una sola dichiarazione per tipo.  
  
 Per ulteriori informazioni, vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3467.cpp  
// compile with: /LD /clr  
public ref class R {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3467.  
  
```  
// C3467_b.cpp  
// compile with: /clr /c  
#using "C3467.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
[ assembly:TypeForwardedTo(R::typeid) ];   // C3467  
```