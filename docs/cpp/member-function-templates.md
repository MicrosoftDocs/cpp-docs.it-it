---
title: Modelli di funzioni membro
ms.date: 11/04/2016
helpviewer_keywords:
- function templates, member functions
ms.assetid: 83d51835-6a27-40ed-997c-7d90dc9182d8
ms.openlocfilehash: 8514c8ffe630f5bc44d8d287d6ccf08c7755e3a0
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008566"
---
# <a name="member-function-templates"></a>Modelli di funzioni membro

Il termine modello di membro si riferisce sia ai modelli di funzioni membro che ai modelli di classe annidati. I modelli di funzioni membro sono funzioni modello membri di una classe o di un modello di classe.

Le funzioni membro possono essere modelli di funzione in vari contesti. Tutte le funzioni dei modelli di classe sono generiche, ma non vengono definite come modelli di membro o modelli di funzioni membro. Se queste funzioni membro accettano i propri argomenti di modello, vengono considerate come modelli di funzioni membro.

## <a name="example-declare-member-function-templates"></a>Esempio: dichiarare i modelli di funzioni membro

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

## <a name="example-member-function-template-of-template-class"></a>Esempio: modello di funzione membro della classe modello

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

## <a name="example-define-member-templates-outside-class"></a>Esempio: definire i modelli di membro all'esterno della classe

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

## <a name="example-templated-user-defined-conversion"></a>Esempio: conversione definita dall'utente basata su modelli

Le classi locali non possono avere modelli di membro.

Le funzioni modello di membro non possono essere funzioni virtuali e non possono eseguire l'override delle funzioni virtuali da una classe base quando vengono dichiarate con lo stesso nome di una funzione virtuale di una classe base.

Nell'esempio seguente viene illustrata una conversione definita dall'utente basata su modelli:

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

[Modelli di funzione](../cpp/function-templates.md)
