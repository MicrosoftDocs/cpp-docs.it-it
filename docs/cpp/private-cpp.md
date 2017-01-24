---
title: "private (C++) | Microsoft Docs"
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
  - "private_cpp"
  - "private"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "private (parola chiave) [C++]"
ms.assetid: 94e99983-46a5-4e21-800c-28f8a7c6a8ff
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# private (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
private:  
   [member-list]  
private base-class  
```  
  
## Note  
 Quando precede un elenco di membri di classe, la parola chiave `private` indica che tali membri sono accessibili solo da funzioni membro e da elementi friend della classe.  Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.  
  
 Quando precede il nome di una classe base, la parola chiave `private` indica che i membri pubblici e protetti della classe base sono membri privati della classe derivata.  
  
 L'accesso predefinito dei membri in una classe è privato.  L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.  
  
 L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture.  Le unioni non possono avere classi base.  
  
 Per informazioni correlate, vedere [friend](../cpp/friend-cpp.md), [pubblico](../cpp/public-cpp.md), [protetto](../cpp/protected-cpp.md) e la tabella di accesso ai membri in [Controllo dell'accesso ai membri della classe](../misc/controlling-access-to-class-members.md).  
  
## Specifico di \/clr  
 Nei tipi CLR, le parole chiave dell'identificatore di accesso C\+\+ \(**public**, `private` e `protected`\) possono influire sulla visibilità dei tipi e dei metodi relativamente agli assembly.  Per altre informazioni, vedere [Visibilità di tipi e membri](../misc/type-and-member-visibility.md).  
  
> [!NOTE]
>  Tale comportamento non influisce sui file compilati con [\/LN](../build/reference/ln-create-msil-module.md).  In questo caso, tutte le classi gestite \(sia pubbliche che private\) saranno visibili.  
  
## Specifico di END \/clr  
  
## Esempio  
  
```  
// keyword_private.cpp  
class BaseClass {  
public:  
   // privMem accessible from member function  
   int pubFunc() { return privMem; }  
private:  
   void privMem;  
};  
  
class DerivedClass : public BaseClass {  
public:  
   void usePrivate( int i )  
      { privMem = i; }   // C2248: privMem not accessible  
                         // from derived class  
};  
  
class DerivedClass2 : private BaseClass {  
public:  
   // pubFunc() accessible from derived class  
   int usePublic() { return pubFunc(); }  
};  
  
int main() {  
   BaseClass aBase;  
   DerivedClass aDerived;  
   DerivedClass2 aDerived2;  
   aBase.privMem = 1;     // C2248: privMem not accessible  
   aDerived.privMem = 1;  // C2248: privMem not accessible  
                          //    in derived class  
   aDerived2.pubFunc();   // C2247: pubFunc() is private in  
                          //    derived class  
}  
```  
  
## Vedere anche  
 [Controllo dell'accesso ai membri di classi](../misc/controlling-access-to-class-members.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)