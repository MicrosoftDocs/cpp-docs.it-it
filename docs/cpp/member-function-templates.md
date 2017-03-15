---
title: "Modelli di funzioni membro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli di funzioni, funzioni membro"
ms.assetid: 83d51835-6a27-40ed-997c-7d90dc9182d8
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Modelli di funzioni membro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il termine modello di membro si riferisce sia ai modelli di funzioni membro che ai modelli di classe annidati.  I modelli di funzioni membro sono funzioni modello membri di una classe o di un modello di classe.  Per ulteriori informazioni, vedere [Modelli di classe annidati](../Topic/Nested%20Class%20Templates.md).  
  
 Le funzioni membro possono essere modelli di funzione in vari contesti.  Tutte le funzioni dei modelli di classe sono generiche, ma non vengono definite come modelli di membro o modelli di funzioni membro.  Se queste funzioni membro accettano i propri argomenti di modello, vengono considerate come modelli di funzioni membro.  Per informazioni dettagliate, vedere [Funzioni membro delle classi di modelli](../Topic/Member%20Functions%20of%20Template%20Classes.md).  
  
## Esempio  
 I modelli di funzioni membro delle classi di modelli e non di modelli vengono dichiarati come modelli di funzione con i relativi parametri di modello.  
  
```  
// member_function_templates.cpp  
struct X  
{  
   template <class T> void mf(T* t) {}  
};  
  
int main()  
{  
   int i;  
   X* x = new X();  
   x->mf(&i);  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene illustrato un modello di funzione membro di una classe di modello.  
  
```  
// member_function_templates2.cpp  
template<typename T>  
class X  
{  
public:  
   template<typename U>  
   void mf(const U &u)  
   {  
   }  
};  
  
int main()  
{  
}  
```  
  
## Esempio  
 Inoltre, in Visual Studio .NET 2003 e versioni successive, i modelli di membro possono essere definiti all'esterno di una classe.  
  
```  
// defining_member_templates_outside_class.cpp  
template<typename T>  
class X  
{  
public:  
   template<typename U>  
   void mf(const U &u);  
};  
  
template<typename T> template <typename U>  
void X<T>::mf(const U &u)  
{  
}  
  
int main()  
{  
}  
```  
  
## Esempio  
 Le classi locali non possono avere modelli di membro.  
  
 Le funzioni modello di membro non possono essere funzioni virtuali e non possono eseguire l'override delle funzioni virtuali da una classe base quando vengono dichiarate con lo stesso nome di una funzione virtuale di una classe base.  
  
 In Visual C\+\+ .NET 2003 è stato introdotto il supporto per le conversioni basate su modelli definite dall'utente.  L'esempio seguente funziona in Visual C\+\+ .NET 2003 come specificato nello standard.  
  
```  
// templated_user_defined_conversions.cpp  
template <class T>  
struct S  
{  
   template <class U> operator S<U>()  
   {  
      return S<U>();  
   }  
};  
  
int main()  
{  
   S<int> s1;  
   S<long> s2 = s1;  // Convert s1 using UDC and copy constructs S<long>.  
}  
```  
  
## Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)