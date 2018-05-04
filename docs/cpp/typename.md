---
title: TypeName | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- typename_cpp
dev_langs:
- C++
helpviewer_keywords:
- typename template specifier
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b6eebf038fbe3e5e18e3f2a1e8e7a2aa2554bf41
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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