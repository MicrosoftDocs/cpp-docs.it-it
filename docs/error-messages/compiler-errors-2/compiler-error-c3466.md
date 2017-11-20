---
title: Errore del compilatore C3466 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3466
dev_langs: C++
helpviewer_keywords: C3466
ms.assetid: 69a877d9-a749-474b-bfc3-8d3fd53ba8fd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b4610f7a47784dfa93339e06f09f6a576b02455d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3466"></a>Errore del compilatore C3466
'type': Impossibile inoltrare una specializzazione di una classe generica  
  
 Non è possibile utilizzare in una specializzazione di una classe generica di inoltro dei tipi.  
  
 Per ulteriori informazioni, vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3466.cpp  
// compile with: /clr /LD  
generic<typename T>  
public ref class GR {};  
  
public ref class GR2 {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3466.  
  
```  
// C3466_b.cpp  
// compile with: /clr /c  
#using "C3466.dll"  
[assembly:TypeForwardedTo(GR<int>::typeid)];   // C3466  
[assembly:TypeForwardedTo(GR2::typeid)];   // OK  
```