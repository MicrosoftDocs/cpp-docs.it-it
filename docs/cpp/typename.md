---
title: TypeName | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- typename
- typename_cpp
dev_langs:
- C++
helpviewer_keywords:
- typename template specifier
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 95283efc5d3b92a461ba6507e669f6f3e2af2689
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="typename"></a>typename
Nelle definizioni di modello fornisce un suggerimento al compilatore che un identificatore sconosciuto è un tipo. Nell'elenco di parametri di modello, viene utilizzato per specificare un parametro di tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
typename identifier;  
```  
  
## <a name="remarks"></a>Note  
 Questa parola chiave deve essere utilizzata se un nome di una definizione di modello è un nome completo che dipende da un argomento di modello. è facoltativo se il nome completo non è dipendente. Per ulteriori informazioni, vedere [modelli e risoluzione dei nomi](../cpp/templates-and-name-resolution.md).  
  
 **TypeName** può essere utilizzato da qualsiasi tipo in un punto qualsiasi in una definizione o dichiarazione di modello. Non è consentita nell'elenco di classi base, a meno che non sia un argomento di modello in una classe base del modello.  
  
```  
template <class T>  
class C1 : typename T::InnerType // Error - typename not allowed.  
{};  
template <class T>  
class C2 : A<typename T::InnerType>  // typename OK.  
{};  
```  
  
 Il **typename** (parola chiave) consente inoltre al posto di **classe** nel parametro di modello sono elencati. Ad esempio, le istruzioni seguenti sono semanticamente equivalenti:  
  
```  
template<class T1, class T2>...  
template<typename T1, typename T2>...  
```  
  
## <a name="example"></a>Esempio  
  
```  
// typename.cpp  
template<class T> class X  
{  
   typename T::Y m_y;   // treat Y as a type  
};  
  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli](../cpp/templates-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
