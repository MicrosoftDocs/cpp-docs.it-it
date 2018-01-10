---
title: Compilatore avviso (livello 1) C4692 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4692
dev_langs: C++
helpviewer_keywords: C4692
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8088c1434ab33899f60b08c0817464f9ddb9c82e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4692"></a>Avviso del compilatore (livello 1) C4692
'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly  
  
 Un tipo che è visibile all'esterno dell'assembly contiene una funzione membro la cui firma contiene un tipo nativo che non è visibile all'esterno dell'assembly. Pertanto, la funzione membro non deve essere chiamata se tipo che lo contiene viene creata un'istanza all'esterno dell'assembly.  
  
 Per ulteriori informazioni, vedere [digitare visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4692.  
  
```  
// C4692.cpp  
// compile with: /W1 /c /clr  
#pragma warning(default:4692)  
class Private_Native_Class {};  
public class Public_Native_Class {};  
public ref class Public_Ref_Class {  
public:  
   void Test(Private_Native_Class *) {}   // C4692  
   void Test2(Public_Native_Class *) {}   // OK  
};  
```