---
title: Enum (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 99fbbe28-c1cd-43af-9ead-60f90eba6e68
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c96fa4e7194e262eec0be4cf5f7467c163530bd2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="enums-ccx"></a>Enumerazioni (C++/CX)
C + + CX supporta il `public enum class` (parola chiave), che è analoga a uno standard C++ `scoped  enum`. Quando utilizzi un enumeratore dichiarato tramite la parola chiave `public enum class` , è necessario che utilizzi l'identificatore di enumerazione per limitare l'ambito di ogni valore dell'enumeratore.  
  
### <a name="remarks"></a>Note  
 Un oggetto `public enum class` che non dispone di un identificatore di accesso, ad esempio `public`, viene considerata un' [enumerazione con ambito](../cpp/enumerations-cpp.md)C++ standard.  
  
 Oggetto `public enum class` o `public enum struct` dichiarazione può disporre di un tipo sottostante di qualsiasi tipo integrale Sebbene Windows Runtime stesso richieda che il tipo sia int32 o uint32 per un'enumerazione di flag. Nella sintassi seguente vengono descritte le parti di `public enum class` o di `public enum struct`.  
  
 Nell'esempio riportato di seguito viene mostrato come definire una classe enum pubblica:  
  
 [!code-cpp[cx_enums#01](../cppcx/codesnippet/CPP/cpp/class1.h#01)]  
  
 In questo esempio viene mostrato come utilizzarla:  
  
 [!code-cpp[cx_enums#02](../cppcx/codesnippet/CPP/cpp/class1.h#02)]  
  
### <a name="examples"></a>Esempi  
 Negli esempi successivi viene illustrato come dichiarare un'enumerazione.  
  
 [!code-cpp[cx_enums#03](../cppcx/codesnippet/CPP/cpp/class1.h#03)]  
  
 Nell'esempio riportato di seguito viene illustrato come eseguire il cast agli equivalenti numerici e come eseguire confronti. Nota che l'utilizzo dell'enumeratore `One` è limitato di ambito dall'identificatore di enumerazione `Enum1` e l'enumeratore `First` è limitato di ambito da `Enum2`.  
  
 [!code-cpp[cx_enums#04](../cppcx/codesnippet/CPP/cpp/class1.h#04)]  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)