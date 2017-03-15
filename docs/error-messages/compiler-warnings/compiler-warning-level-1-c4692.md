---
title: "Avviso del compilatore (livello 1) C4692 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4692"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4692"
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4692
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo\_nativo' dell'assembly  
  
 Un tipo visibile al di fuori dell'assembly presenta una funzione membro la cui firma contiene un tipo nativo non visibile al di fuori dell'assembly.  Pertanto, la funzione membro non deve essere chiamata se l'istanza del tipo che la contiene viene creata al di fuori dell'assembly.  
  
 Per ulteriori informazioni, consultare [Visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4692:  
  
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