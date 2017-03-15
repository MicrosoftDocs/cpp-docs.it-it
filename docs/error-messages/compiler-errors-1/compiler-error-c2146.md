---
title: "Errore del compilatore C2146 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2146"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2146"
ms.assetid: 6bfb7de6-6723-4486-9350-c66ef88d7a64
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# Errore del compilatore C2146
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: 'token' mancante prima dell'identificatore 'identificatore'  
  
 È stato rilevato `identifier` mentre era previsto `token`.  Possibili cause:  
  
1.  Errore di ortografia o di utilizzo delle maiuscole\/minuscole.  
  
2.  Identificatore del tipo mancante nella dichiarazione dell'identificatore.  
  
 L'errore può essere causato da un errore di digitazione.  Questo errore è in genere preceduto dall'errore [C2065](../../error-messages/compiler-errors-1/compiler-error-c2065.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2146:  
  
```  
// C2146.cpp  
class CDeclaredClass {};  
  
class CMyClass {  
   CUndeclared m_myClass;   // C2146  
   CDeclaredClass m_myClass2;   // OK  
};  
  
int main() {  
   int x;  
   int t x;   // C2146 : missing semicolon before 'x'  
}  
```  
  
## Esempio  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: parola chiave `typename` mancante.  
  
 L'esempio riportato di seguito viene compilato in Visual Studio .NET, ma non funziona in Visual Studio .NET 2003:  
  
```  
// C2146b.cpp  
// compile with: /c  
template <typename T>  
struct X {  
   struct Y {  
      int i;  
   };  
   Y memFunc();  
};  
  
template <typename T>  
X<T>::Y func() { }   // C2146  
  
// OK  
template <typename T>  
typename X<T>::Y func() { }  
```  
  
## Esempio  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: le specializzazioni esplicite non trovano più i parametri di template dal template primario.  
  
 L'utilizzo di `T` dal modello principale non è consentito nella specializzazione esplicita.  Affinché il codice sia valido nelle versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, sostituire tutte le istanze del parametro di template nella specializzazione con il tipo specializzato esplicitamente.  
  
 Il seguente esempio viene compilato in Visual Studio .NET ma non funziona in Visual Studio .NET 2003:  
  
```  
// C2146_c.cpp  
// compile with: /c  
template <class T>   
struct S;  
  
template <>   
struct S<int> {  
   T m_t;   // C2146  
   int m_t2;   // OK  
};  
```