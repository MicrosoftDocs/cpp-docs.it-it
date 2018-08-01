---
title: Modelli di classe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], operating on type
- class templates
- templates, class templates
ms.assetid: 633a53c8-24ee-4c23-8c88-e7c3cb0b7ac3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7818836406677aa1613c757a1d688cc93ca33045
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405094"
---
# <a name="class-templates"></a>Modelli di classe
Questo argomento descrive le regole specifiche per i modelli di classe C++.  
  
## <a name="member-functions-of-class-templates"></a>Funzioni membro di modelli di classe  
 Le funzioni membro possono essere definite internamente o esternamente a un modello di classe. Tali funzioni vengono definite in modo analogo ai modelli di funzione se definite all'esterno del modello di classe.  
  
```cpp  
// member_function_templates1.cpp  
template<class T, int i> class MyStack  
{  
    T*  pStack;  
    T StackBuffer[i];  
    static const int cItems = i * sizeof(T);  
public:   
    MyStack( void );  
    void push( const T item );  
    T& pop( void );  
};  
  
template< class T, int i > MyStack< T, i >::MyStack( void )  
{  
};  
  
template< class T, int i > void MyStack< T, i >::push( const T item )  
{  
};  
  
template< class T, int i > T& MyStack< T, i >::pop( void )  
{  
};  
  
int main()  
{  
}  
```  
  
 Si noti che, analogamente a qualsiasi funzione membro della classe modello, la definizione di funzione membro costruttore della classe include due volte l'elenco di argomenti del modello.  
  
 Le funzioni membro possono essere anche modelli di funzione, purché vengano specificati parametri aggiuntivi, come illustrato nell'esempio seguente.  
  
```cpp  
// member_templates.cpp  
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
  
## <a name="nested-class-templates"></a>Modelli di classe annidati  
 I modelli possono essere definiti all'interno di classi o modelli di classe, nel qual caso vengono definiti modelli di membro. I modelli di membro, che sono classi, sono definiti modelli di classe annidati. Modelli di membro sono funzioni sono illustrati nella [modelli di funzioni membro](../cpp/member-function-templates.md).  
  
 I modelli di classe annidati vengono dichiarati come modelli di classe nell'ambito della classe esterna. Possono essere definiti all'interno o all'esterno della classe contenitore.  
  
 Nel codice seguente viene illustrato un modello di classe annidato all'interno di una classe comune.  
  
```cpp  
// nested_class_template1.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
class X  
{  
  
   template <class T>  
   struct Y  
   {  
      T m_t;  
      Y(T t): m_t(t) { }     
   };  
  
   Y<int> yInt;  
   Y<char> yChar;  
  
public:  
   X(int i, char c) : yInt(i), yChar(c) { }  
   void print()  
   {  
      cout << yInt.m_t << " " << yChar.m_t << endl;  
   }  
};  
  
int main()  
{  
   X x(1, 'a');  
   x.print();  
}  
```  
  
```cpp  
// nested_class_template2.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
template <class T>  
class X  
{  
   template <class U> class Y  
   {  
      U* u;  
   public:  
      Y();  
      U& Value();  
      void print();  
      ~Y();  
   };  
  
   Y<int> y;  
public:  
   X(T t) { y.Value() = t; }  
   void print() { y.print(); }  
};  
  
template <class T>   
template <class U>  
X<T>::Y<U>::Y()  
{  
   cout << "X<T>::Y<U>::Y()" << endl;  
   u = new U();  
}  
  
template <class T>   
template <class U>  
U& X<T>::Y<U>::Value()  
{  
   return *u;  
}  
  
template <class T>   
template <class U>  
void X<T>::Y<U>::print()  
{  
   cout << this->Value() << endl;  
}  
  
template <class T>   
template <class U>  
X<T>::Y<U>::~Y()  
{  
   cout << "X<T>::Y<U>::~Y()" << endl;  
   delete u;  
}  
  
int main()  
{  
   X<int>* xi = new X<int>(10);  
   X<char>* xc = new X<char>('c');  
   xi->print();  
   xc->print();  
   delete xi;  
   delete xc;  
}  
  
//Output:   
X<T>::Y<U>::Y()  
X<T>::Y<U>::Y()  
10  
99  
X<T>::Y<U>::~Y()  
X<T>::Y<U>::~Y()
```  
  
 Le classi locali non possono avere modelli di membro.  
  
## <a name="template-friends"></a>Elementi Friend di modelli  
 Modelli di classe possono avere [amici](friend-cpp.md). Una classe o un modello di classe oppure una funzione o un modello di funzione può rappresentare un elemento friend per una classe modello. Gli elementi friend possono anche essere specializzazioni di un modello di classe o di funzione, ma non specializzazioni parziali.  
  
 Nell'esempio seguente una funzione friend viene definita come modello di funzione nel modello di classe. Questo codice produce una versione della funzione friend per ogni creazione di istanza del modello. Questo costrutto risulta utile se la funzione friend dipende dagli stessi parametri di modello da cui dipende la classe.  
  
```cpp  
// template_friend1.cpp  
// compile with: /EHsc  
  
#include <iostream>  
using namespace std;  
  
template <class T> class Array {  
   T* array;  
   int size;  
  
public:  
   Array(int sz): size(sz) {  
      array = new T[size];  
      memset(array, 0, size * sizeof(T));  
   }  
  
   Array(const Array& a) {  
      size = a.size;  
      array = new T[size];  
      memcpy_s(array, a.array, sizeof(T));  
   }  
  
   T& operator[](int i) {  
      return *(array + i);  
   }  
  
   int Length() { return size; }  
  
   void print() {  
      for (int i = 0; i < size; i++)        
         cout << *(array + i) << " ";  
  
      cout << endl;  
   }  
  
   template<class T>  
   friend Array<T>* combine(Array<T>& a1, Array<T>& a2);  
};  
  
template<class T>  
Array<T>* combine(Array<T>& a1, Array<T>& a2) {  
   Array<T>* a = new Array<T>(a1.size + a2.size);  
   for (int i = 0; i < a1.size; i++)  
      (*a)[i] = *(a1.array + i);  
  
   for (int i = 0; i < a2.size; i++)  
      (*a)[i + a1.size] = *(a2.array + i);  
  
   return a;  
}  
  
int main() {  
   Array<char> alpha1(26);  
   for (int i = 0 ; i < alpha1.Length() ; i++)  
      alpha1[i] = 'A' + i;  
  
   alpha1.print();  
  
   Array<char> alpha2(26);  
   for (int i = 0 ; i < alpha2.Length() ; i++)  
      alpha2[i] = 'a' + i;  
  
   alpha2.print();  
   Array<char>*alpha3 = combine(alpha1, alpha2);  
   alpha3->print();  
   delete alpha3;  
}  
//Output:   
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z   
a b c d e f g h i j k l m n o p q r s t u v w x y z   
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z a b c d e f g h i j k l m n o p q r s t u v w x y z   
```  
  
 Nell'esempio seguente viene utilizzato un elemento friend con una specializzazione di modello. Una specializzazione di modello di funzione è automaticamente un elemento friend se il modello di funzione originale è anch'esso un elemento friend.  
  
 È inoltre possibile dichiarare come friend solo la versione specializzata del modello, come indicato dal commento prima della dichiarazione dell'elemento friend nel codice seguente. In questo caso, è necessario inserire la definizione della specializzazione di modello friend all'esterno della classe modello.  
  
```cpp  
// template_friend2.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
template <class T>  
class Array;  
  
template <class T>  
void f(Array<T>& a);  
  
template <class T> class Array  
{  
    T* array;  
    int size;  
  
public:  
    Array(int sz): size(sz)  
    {  
        array = new T[size];  
        memset(array, 0, size * sizeof(T));  
    }  
    Array(const Array& a)  
    {  
        size = a.size;  
        array = new T[size];  
        memcpy_s(array, a.array, sizeof(T));  
    }  
    T& operator[](int i)  
    {  
        return *(array + i);  
    }  
    int Length()  
    {   
        return size;  
    }  
    void print()  
    {  
        for (int i = 0; i < size; i++)  
        {  
            cout << *(array + i) << " ";  
        }  
        cout << endl;  
    }  
    // If you replace the friend declaration with the int-specific  
    // version, only the int specialization will be a friend.  
    // The code in the generic f will fail  
    // with C2248: 'Array<T>::size' :  
    // cannot access private member declared in class 'Array<T>'.  
    //friend void f<int>(Array<int>& a);  
  
    friend void f<>(Array<T>& a);  
};  
  
// f function template, friend of Array<T>  
template <class T>  
void f(Array<T>& a)  
{  
    cout << a.size << " generic" << endl;  
}  
  
// Specialization of f for int arrays  
// will be a friend because the template f is a friend.  
template<> void f(Array<int>& a)  
{  
    cout << a.size << " int" << endl;  
}  
  
int main()  
{  
    Array<char> ac(10);  
    f(ac);  
  
    Array<int> a(10);  
    f(a);  
}  
//Output:  
10 generic  
10 int  
```  
  
 L'esempio seguente mostra un modello di classe friend dichiarato nel modello di classe. Il modello di classe viene quindi utilizzato come argomento del modello per la classe friend. I modelli di classe friend devono essere definiti all'esterno del modello di classe in cui sono dichiarati. Tutte le specializzazioni o le specializzazioni parziali del modello friend sono inoltre elementi friend del modello di classe originale.  
  
```cpp  
// template_friend3.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
template <class T>  
class X  
{  
private:  
   T* data;  
   void InitData(int seed) { data = new T(seed); }  
public:  
   void print() { cout << *data << endl; }  
   template <class U> friend class Factory;  
};  
  
template <class U>  
class Factory  
{  
public:  
   U* GetNewObject(int seed)  
   {  
      U* pu = new U;  
      pu->InitData(seed);  
      return pu;  
   }  
};  
  
int main()  
{  
   Factory< X<int> > XintFactory;  
   X<int>* x1 = XintFactory.GetNewObject(65);  
   X<int>* x2 = XintFactory.GetNewObject(97);  
  
   Factory< X<char> > XcharFactory;  
   X<char>* x3 = XcharFactory.GetNewObject(65);  
   X<char>* x4 = XcharFactory.GetNewObject(97);  
   x1->print();  
   x2->print();  
   x3->print();  
   x4->print();  
}  
//Output:   
65  
97  
A  
a  
```  
  
## <a name="reuse-of-template-parameters"></a>Riutilizzo dei parametri di modello  
 I parametri di modello possono essere riutilizzati nell'elenco dei parametri di modello. Ad esempio, il codice seguente è consentito:  
  
```cpp  
// template_specifications2.cpp  
  
class Y   
{  
};  
template<class T, T* pT> class X1   
{  
};  
template<class T1, class T2 = T1> class X2   
{  
};  
  
Y aY;  
  
X1<Y, &aY> x1;  
X2<int> x2;  
  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli](../cpp/templates-cpp.md)