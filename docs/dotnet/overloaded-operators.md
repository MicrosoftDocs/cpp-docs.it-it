---
title: "Operatori di overload | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overload di operatori, in una classe CLR"
  - "operatori [C++], overload"
ms.assetid: 30391426-afe7-4497-bf22-e4816c1e48c8
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di overload
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'overload dell'operatore è stato modificato in modo significativo in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nella dichiarazione di un tipo di riferimento, ad esempio, anziché utilizzare la sintassi `operator+` nativa è necessario scrivere in modo esplicito il nome interno sottostante dell'operatore, in questo caso `op_Addition`.  Inoltre, la chiamata di un operatore deve essere eseguita in modo esplicito tramite tale nome, escludendo così due principali vantaggi dell'overload dell'operatore, ovvero la sintassi intuitiva e la possibilità di combinare nuovi tipi con tipi esistenti.  Di seguito è riportato un esempio.  
  
```  
public __gc __sealed class Vector {  
public:  
   Vector( double x, double y, double z );  
  
   static bool    op_Equality( const Vector*, const Vector* );  
   static Vector* op_Division( const Vector*, double );  
   static Vector* op_Addition( const Vector*, const Vector* );  
   static Vector* op_Subtraction( const Vector*, const Vector* );  
};  
  
int main()  
{  
   Vector *pa = new Vector( 0.231, 2.4745, 0.023 );  
   Vector *pb = new Vector( 1.475, 4.8916, -1.23 );   
  
   Vector *pc1 = Vector::op_Addition( pa, pb );  
   Vector *pc2 = Vector::op_Subtraction( pa, pc1 );  
   Vector *pc3 = Vector::op_Division( pc1, pc2->x );  
  
   if ( Vector::op_Equality( pc1, pc2 ))  
      ;  
}  
```  
  
 Nella nuova sintassi vengono soddisfatte le consuete aspettative di un programmatore in C\+\+ nativo, sia nella dichiarazione che nell'utilizzo degli operatori statici.  Di seguito è riportata la classe `Vector` convertita nella nuova sintassi:  
  
```  
public ref class Vector sealed {  
public:  
   Vector( double x, double y, double z );  
  
   static bool    operator ==( const Vector^, const Vector^ );  
   static Vector^ operator /( const Vector^, double );  
   static Vector^ operator +( const Vector^, const Vector^ );  
   static Vector^ operator -( const Vector^, const Vector^ );  
};  
  
int main()  
{  
   Vector^ pa = gcnew Vector( 0.231, 2.4745, 0.023 );  
   Vector^ pb = gcnew Vector( 1.475,4.8916,-1.23 );  
  
   Vector^ pc1 = pa + pb;  
   Vector^ pc2 = pa - pc1;  
   Vector^ pc3 = pc1 / pc2->x;  
  
   if ( pc1 == pc2 )  
      ;  
}  
```  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)