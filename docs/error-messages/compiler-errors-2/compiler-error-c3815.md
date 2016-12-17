---
title: "Errore del compilatore C3815 | Microsoft Docs"
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
  - "C3815"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3815"
ms.assetid: c5a3b404-6341-4fd3-92af-152b404c4dde
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3815
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il tipo restituito del metodo 'funzione\_accesso\_get' deve corrispondere al tipo dell'ultimo parametro di una proprietà o di un metodo Set  
  
 Nella dichiarazione di [proprietà](../../misc/property.md), il valore restituito del metodo `get_accessor` deve corrispondere all'ultimo parametro della dichiarazione del metodo della funzione di accesso set.  
  
 L'errore C3815 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C3815:  
  
```  
// C3815.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__gc class X  
{  
public:  
   __property char get_N()  
   // try the following line instead  
   // __property int get_N()  
   {  
      return m_val;  
   }  
  
   __property void set_N( int val)  
   {  
      m_val = val;  
   }  
  
private:  
   int m_val;  
};   // C3815  
```  
  
 Nell'esempio di codice riportato di seguito viene illustrato come eseguire l'overload delle proprietà in modo che il tipo restituito del metodo Get non corrisponda all'ultimo parametro del metodo Set.  
  
```  
// C3815b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
public __gc class MyClass {  
public:  
// 1st property:  
   __property System::Int32 get_p1();  
   __property void set_p1(System::Int32 i);  
  
// 2nd property (only setter):  
   __property void set_p1(System::Int32* i);  
  
};  
```