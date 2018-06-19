---
title: Compilatore avviso (livello 1) C4364 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4364
dev_langs:
- C++
helpviewer_keywords:
- C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fb3bfb8075d618a6d2ea9b733b01d8b456fdc0e7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283761"
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364
\#utilizzo per l'assembly 'file' visualizzato in precedenza al percorso (numero_riga) senza l'attributo as_friend; as_friend non applicato  
  
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