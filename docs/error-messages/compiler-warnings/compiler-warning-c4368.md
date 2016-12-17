---
title: "Avviso del compilatore C4368 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4368"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4368"
ms.assetid: cb85bcee-fd3d-4aa5-b626-2324f07a4f1b
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4368
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile definire 'membro' come membro di 'tipo' gestito: tipi misti non supportati  
  
 Non è possibile incorporare un membro dati nativi in un tipo CLR.  
  
 È tuttavia possibile dichiarare un puntatore a un tipo nativo e controllarne la durata nel costruttore, nel distruttore e nel finalizzatore della classe gestita.  Per ulteriori informazioni vedere [Distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 Questo avviso viene sempre generato come un errore.  Per disabilitare l'avviso C4368, utilizzare il pragma [warning](../../preprocessor/warning.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4368:  
  
```  
// C4368.cpp  
// compile with: /clr /c  
struct N {};  
ref struct O {};  
ref struct R {  
    R() : m_p( new N ) {}  
    ~R() { delete m_p; }  
  
   property N prop;   // C4368  
   int i[10];   // C4368  
  
   property O ^ prop2;   // OK  
   N * m_p;   // OK  
};  
```