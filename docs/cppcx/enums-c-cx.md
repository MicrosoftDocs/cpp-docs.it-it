---
title: "Enumerazioni (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 99fbbe28-c1cd-43af-9ead-60f90eba6e68
caps.latest.revision: 14
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 14
---
# Enumerazioni (C++/CX)
[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supporta la parola chiave `public enum class`, che è analoga a `scoped  enum` in C\+\+ standard. Quando utilizzi un enumeratore dichiarato tramite la parola chiave `public enum class`, è necessario che utilizzi l'identificatore di enumerazione per limitare l'ambito di ogni valore dell'enumeratore.  
  
## Note  
 Un oggetto `public enum class` che non dispone di un identificatore di accesso, ad esempio `public`, viene considerata un'[enumerazione con ambito](../Topic/Enumerations%20\(C++\).md) C\+\+ standard.  
  
 Una dichiarazione di `public enum class` o di `public enum struct` può avere un tipo sottostante di qualsiasi tipo integrale sebbene [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] stesso richieda che il tipo sia int32 o uint32 per una enumerazione di flag. Nella sintassi seguente vengono descritte le parti di `public enum class` o di `public enum struct`. Per altre informazioni, vedere [enum class](../Topic/enum%20class%20%20\(C++%20Component%20Extensions\).md).  
  
 Nell'esempio riportato di seguito viene mostrato come definire una classe enum pubblica:  
  
 [!code-cpp[cx_enums#01](../snippets/cpp/VS_Snippets_Misc/cx_enums/cpp/class1.h#01)]  
  
 In questo esempio viene mostrato come utilizzarla:  
  
 [!code-cpp[cx_enums#02](../snippets/cpp/VS_Snippets_Misc/cx_enums/cpp/class1.h#02)]  
  
## Esempi  
 Negli esempi successivi viene illustrato come dichiarare un'enumerazione.  
  
 [!code-cpp[cx_enums#03](../snippets/cpp/VS_Snippets_Misc/cx_enums/cpp/class1.h#03)]  
  
 Nell'esempio riportato di seguito viene illustrato come eseguire il cast agli equivalenti numerici e come eseguire confronti. Nota che l'utilizzo dell'enumeratore `One` è limitato di ambito dall'identificatore di enumerazione `Enum1` e l'enumeratore `First` è limitato di ambito da `Enum2`.  
  
 [!code-cpp[cx_enums#04](../snippets/cpp/VS_Snippets_Misc/cx_enums/cpp/class1.h#04)]  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)