---
title: Errore del compilatore C2993 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2993
dev_langs:
- C++
helpviewer_keywords:
- C2993
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a6306b2c3c632d25ee6b37a025516f759cc126a6
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2993"></a>Errore del compilatore C2993
'identifier': tipo non valido per il parametro di modello non di tipo 'parameter'  
  
 È possibile dichiarare un modello con una struttura o unione argomento. Utilizzare i puntatori per passare le strutture e unioni come parametri di modello.  
  
 L'esempio seguente genera l'errore C2993:  
  
```  
// C2993.cpp  
// compile with: /c  
// C2993 expected  
struct MyStruct {  
   int a;char b;  
};  
  
template <class T, struct MyStruct S>   // C2993  
  
// try the following line instead  
// template <class T, struct MyStruct * S>  
class CMyClass {};  
```  
  
 Verrà generato questo errore anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: non sono più consentiti parametri di modello non di tipo a virgola mobile. Lo standard C++ non consente parametri di modello non di tipo a virgola mobile.  
  
 Se è un modello di funzione, utilizzare un argomento di funzione per passare in Mobile puntare il parametro di modello non di tipo (questo codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++). Se è un modello di classe, non è disponibile alcuna soluzione semplice.  
  
```  
// C2993b.cpp  
// compile with: /c  
template<class T, float f> void func(T) {}   // C2993  
  
// OK  
template<class T>   void func2(T, float) {}  
```
