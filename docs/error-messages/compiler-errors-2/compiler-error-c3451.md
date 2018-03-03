---
title: Errore del compilatore C3451 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3451
dev_langs:
- C++
helpviewer_keywords:
- C3451
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cb68c546a9064801c68844039b7de077d5ee7c17
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3451"></a>Errore del compilatore C3451
'attribute': non è possibile applicare l'attributo non gestito a 'type'  
  
 Un attributo di C++ non può essere applicato a un tipo CLR. Vedere [riferimento agli attributi C++](../../windows/cpp-attributes-reference.md) per ulteriori informazioni.  
  
 Per altre informazioni, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
 Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: il [uuid](../../windows/uuid-cpp-attributes.md) attributo non è più consentito su un attributo definito dall'utente utilizza la programmazione CLR. In alternativa, usare <xref:System.Runtime.InteropServices.GuidAttribute>.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3451.  
  
```  
// C3451.cpp  
// compile with: /clr /c  
using namespace System;  
[ attribute(AttributeTargets::All) ]  
public ref struct MyAttr {};  
  
[ MyAttr, helpstring("test") ]   // C3451  
// try the following line instead  
// [ MyAttr ]  
public ref struct ABC {};  
```