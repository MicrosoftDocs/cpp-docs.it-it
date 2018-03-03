---
title: "Il collegamento statico di Const Int non è più Literal | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- literal attribute [C++]
- constants, declaring
- integral constant expressions
ms.assetid: d2a5e3d2-ffb0-4b61-8114-bec5993a1195
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8f34682fa780ef430d27104d3df9658f9e32ad39
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="static-const-int-linkage-is-no-longer-literal"></a>L'attributo di collegamento dei membri integrali di Static Const non è più Literal
La dichiarazione di un membro costante di una classe è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 Sebbene `static const` membri integrali sono ancora supportati, il relativo attributo di collegamento è stato modificato. Il relativo attributo di collegamento precedente viene ora eseguito in un valore letterale integrale di membri. Ad esempio, si consideri la seguente classe di estensioni gestite:  
  
```  
public __gc class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 Questo genera i seguenti attributi CIL sottostanti per il campo (si noti l'attributo letterale):  
  
```  
.field public static literal int32   
modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 Mentre questo viene compilato con la nuova sintassi:  
  
```  
public ref class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 non genera l'attributo letterale e pertanto non viene visualizzato come una costante dal runtime CLR:  
  
```  
.field public static int32 modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 Per avere lo stesso attributo literal nei diversi linguaggio, la dichiarazione deve essere modificata per appena supportati `literal` membro dati, come indicato di seguito,  
  
```  
public ref class Constants {  
public:  
   literal int LOG_DEBUG = 4;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membro all'interno di una classe o interfaccia (C + c++ /CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [valore letterale](../windows/literal-cpp-component-extensions.md)