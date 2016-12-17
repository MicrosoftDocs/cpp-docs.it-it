---
title: "Errori del compilatore durante l&#39;implementazione di una classe derivata da CObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilazione di codice sorgente, classi derivate da CObject"
  - "errori [C++]"
  - "errori [C++], compilatore"
  - "Classe CObject, errori del compilatore per le classi derivate"
ms.assetid: 9f249b52-aeff-41a1-8a74-a52aa08c4fcf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Errori del compilatore durante l&#39;implementazione di una classe derivata da CObject
Quando si implementa una classe derivata da `CObject` e il codice richiede la chiamata del costruttore di copia o dell'operatore di assegnazione per la classe, è possibile il compilatore generi errori simili ai seguenti:  
  
```  
error C2660: 'CSample::CSample' : function does not take 1 parameters error C2582: 'CSample' : 'operator =' function is unavailable  
```  
  
 Per riprodurre il problema, compilare il codice della sezione Codice di esempio riportata di seguito.  
  
> [!NOTE]
>  Il codice di esempio illustrato in questo articolo genera i messaggi di errore seguenti:  
  
```  
error C2558: 'CSample::CSample' : no copy constructor available error C2582: 'CSample' : 'operator =' function is unavailable  
```  
  
 Gli errori del compilatore sono dovuti al fatto che `CObject` dichiara un costruttore di copia e un operatore di assegnazione privati nel file AFX.h. Di conseguenza, non vengono generati un costruttore di copia e un operatore di assegnazione predefiniti per la classe derivata da `CObject`. Gli errori vengono generati perché il compilatore non trova le dichiarazioni di queste funzioni nella classe.  
  
 Per evitare gli errori del compilatore, è necessario implementare un costruttore di copia e un operatore di assegnazione per la classe derivata da `CObject`. Questa operazione è descritta nel codice di esempio che segue. È possibile evitare gli errori rimuovendo il commento dalle righe indicate nel codice di esempio.  
  
## Codice di esempio  
  
```  
// _error_Compiler_Errors_when_Implementing_a_CObject.2d.Derived_Class.cpp /* Compile options needed: /c */ // replace with #define _CONSOLE when compiling for Windows NT #define _DOS #include <afx.h> class CSample : public CObject { private: short m_nValue; public: // uncomment the lines below to avoid the compiler errors //    CSample() {} //    CSample( const CSample &s )  // copy ctor //        { m_nValue = s.m_nValue; } //    CSample& operator=( const CSample &s )  // assignment operator //        { m_nValue = s.m_nValue; return *this; } }; int main() { CSample a; CSample b = a; a = b; }  
  
```  
  
## Vedere anche  
 [Avviso del compilatores C4600 Through C4999](../error-messages/compiler-warnings/compiler-warnings-c4600-through-c4799.md)