---
title: "public (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "public"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "public (parola chiave) [C++]"
ms.assetid: f3e10a59-39f6-4bcd-827e-3e99f8f89497
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# public (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
public:  
   [member-list]  
public base-class  
```  
  
## Note  
 Quando precede un elenco di membri della classe, la parola chiave **public** indica che tali membri sono accessibili da qualsiasi funzione.  Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.  
  
 Quando precede il nome di una classe base, la parola chiave **public** specifica che i membri pubblici e protetti della classe base sono membri pubblici e protetti delle rispettive classi derivate.  
  
 L'accesso predefinito dei membri in una classe è privato.  L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.  
  
 L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture.  Le unioni non possono avere classi base.  
  
 Per altre informazioni, vedere [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md), [friend](../cpp/friend-cpp.md) e la tabella di accesso ai membri in [Controllo dell'accesso ai membri della classe](../misc/controlling-access-to-class-members.md).  
  
## Specifico di \/clr  
 Nei tipi CLR, le parole chiave dell'identificatore di accesso C\+\+ \(**public**, `private` e `protected`\) possono influire sulla visibilità dei tipi e dei metodi relativamente agli assembly.  Per altre informazioni, vedere [Visibilità di tipi e membri](../misc/type-and-member-visibility.md).  
  
> [!NOTE]
>  Tale comportamento non influisce sui file compilati con [\/LN](../build/reference/ln-create-msil-module.md).  In questo caso, tutte le classi gestite \(sia pubbliche che private\) saranno visibili.  
  
## Specifico di END \/clr  
  
## Esempio  
  
```  
// keyword_public.cpp  
class BaseClass {  
public:  
   int pubFunc() { return 0; }  
};  
  
class DerivedClass : public BaseClass {};  
  
int main() {  
   BaseClass aBase;  
   DerivedClass aDerived;  
   aBase.pubFunc();       // pubFunc() is accessible   
                          //    from any function  
   aDerived.pubFunc();    // pubFunc() is still public in   
                          //    derived class  
}  
```  
  
## Vedere anche  
 [Controllo dell'accesso ai membri di classi](../misc/controlling-access-to-class-members.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)