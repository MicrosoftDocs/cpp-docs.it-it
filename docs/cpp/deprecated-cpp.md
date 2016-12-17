---
title: "deprecated (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "deprecated"
  - "deprecated_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], deprecated"
  - "deprecated __declspec (parola chiave)"
ms.assetid: beef1129-9434-4cb3-8392-f1eb29e04805
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# deprecated (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

\(Specifico di Microsoft\) Con le eccezioni riportate di seguito, la dichiarazione **deprecated** fornisce la stessa funzionalità del pragma [deprecated](../preprocessor/deprecated-c-cpp.md):  
  
-   La dichiarazione **deprecated** consente di specificare formati specifici degli overload di funzione come deprecati, mentre il formato del pragma viene applicato a tutti gli overload di un nome funzione.  
  
-   La dichiarazione **deprecated** consente di specificare un messaggio che verrà visualizzato in fase di compilazione.  Il testo del messaggio può provenire da una macro.  
  
-   Le macro possono essere contrassegnate solo come deprecate con il pragma **deprecated**.  
  
 Se il compilatore rileva l'utilizzo di un identificatore deprecato, viene generato un avviso [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).  
  
## Esempio  
 Nel seguente codice di esempio viene illustrato come contrassegnare funzioni come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la funzione deprecata.  
  
```  
// deprecated.cpp  
// compile with: /W3  
#define MY_TEXT "function is deprecated"  
void func1(void) {}  
__declspec(deprecated) void func1(int) {}  
__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}  
__declspec(deprecated(MY_TEXT)) void func3(int) {}  
  
int main() {  
   func1();  
   func1(1);   // C4996  
   func2(1);   // C4996  
   func3(1);   // C4996  
}  
```  
  
## Esempio  
 Nel seguente codice di esempio viene illustrato come contrassegnare classi come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la classe deprecata.  
  
```  
// deprecate_class.cpp  
// compile with: /W3  
struct __declspec(deprecated) X {  
   void f(){}  
};  
  
struct __declspec(deprecated("** X2 is deprecated **")) X2 {  
   void f(){}  
};  
  
int main() {  
   X x;   // C4996  
   X2 x2;   // C4996  
}  
```  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)