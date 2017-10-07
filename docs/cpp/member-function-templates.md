---
title: Modelli di funzioni membro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function templates, member functions
ms.assetid: 83d51835-6a27-40ed-997c-7d90dc9182d8
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: f460497071445cff87308fa9bf6e0d43c6f13a3e
ms.openlocfilehash: bba7b35c08fbc171ddbb4c572285c0aed2f58a3b
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="member-function-templates"></a>Modelli di funzioni membro

Il termine modello di membro si riferisce sia ai modelli di funzioni membro che ai modelli di classe annidati. I modelli di funzioni membro sono funzioni modello membri di una classe o di un modello di classe.  
  
 Le funzioni membro possono essere modelli di funzione in vari contesti. Tutte le funzioni dei modelli di classe sono generiche, ma non vengono definite come modelli di membro o modelli di funzioni membro. Se queste funzioni membro accettano i propri argomenti di modello, vengono considerate come modelli di funzioni membro.  
  
## <a name="example"></a>Esempio

 I modelli di funzioni membro delle classi di modelli e non di modelli vengono dichiarati come modelli di funzione con i relativi parametri di modello.  
  
```cpp
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
  
## <a name="example"></a>Esempio

 Nell'esempio seguente viene illustrato un modello di funzione membro di una classe di modello.  
  
```cpp
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
  
## <a name="example"></a>Esempio

 Inoltre, in Visual Studio .NET 2003 e versioni successive, è anche possibile definire modelli di membro all'esterno di una classe.  
  
```cpp
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
  
## <a name="example"></a>Esempio

 Le classi locali non possono avere modelli di membro.  
  
 Le funzioni modello di membro non possono essere funzioni virtuali e non possono eseguire l'override delle funzioni virtuali da una classe base quando vengono dichiarate con lo stesso nome di una funzione virtuale di una classe base.  
  
 Visual C++ .NET 2003 è stato introdotto il supporto per le conversioni definite dall'utente basati su modelli. L'esempio seguente funziona in Visual C++ .NET 2003 come specificato nello standard.  
  
```cpp
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
  
## <a name="see-also"></a>Vedere anche

 [Modelli di funzioni](../cpp/function-templates.md)

