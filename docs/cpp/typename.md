---
title: "typename | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "typename"
  - "typename_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "identificatori di modelli typename"
ms.assetid: 52e1d901-220d-4f0d-ab43-dae7e05fb491
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# typename
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore che un identificatore sconosciuto è un tipo.  
  
## Sintassi  
  
```  
  
typename identifier;  
```  
  
## Note  
 È possibile utilizzare questa parola chiave solo nelle definizioni di modello.  
  
 Questa parola chiave deve essere utilizzata se il nome è dipendente dal nome completo di un argomento di modello; è facoltativa se il nome completo non è dipendente.  Per ulteriori informazioni, vedere [Modelli e risoluzione dei nomi](../cpp/templates-and-name-resolution.md).  
  
 La parola chiave **typename** può essere utilizzata da qualsiasi tipo e in qualsiasi posizione in una dichiarazione o definizione di modello.  Non è consentita nell'elenco di classi base, a meno che non sia un argomento di modello in una classe base del modello.  
  
```  
template <class T>  
class C1 : typename T::InnerType // Error - typename not allowed.  
{};  
template <class T>  
class C2 : A<typename T::InnerType>  // typename OK.  
{};  
```  
  
 La parola chiave **typename** può essere utilizzata al posto di **class** negli elenchi di parametri di modello.  Ad esempio, le seguenti istruzioni sono identiche:  
  
```  
template<class T1, class T2>...  
template<typename T1, typename T2>...  
```  
  
## Esempio  
  
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
  
## Vedere anche  
 [Modelli](../cpp/templates-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)