---
title: Compilatore avviso (livello 1) C4364 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4364
dev_langs: C++
helpviewer_keywords: C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9d532ff9cc030c92543bec898f34daf3559531f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364
\#utilizzo per l'assembly 'file' trovato in precedenza in percorso (numero_riga) senza l'attributo as_friend; as_friend non applicato  
  
 Oggetto `#using` direttiva è stata ripetuta per un determinato file di metadati, ma la `as_friend` qualificatore non è stato utilizzato nella prima occorrenza; verrà ignorato il secondo `as_friend`.  
  
 Per ulteriori informazioni, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C4364.cpp  
// compile with: /clr /LD  
ref class A {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4364.  
  
```  
// C4364_b.cpp  
// compile with: /clr /W1 /c  
#using " C4364.dll"  
#using " C4364.dll" as_friend   // C4364  
```