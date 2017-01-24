---
title: "Pimpl per incapsulamento in fase di compilazione (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c3e8a90a-b328-4990-82bb-e1b147f76e07
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pimpl per incapsulamento in fase di compilazione (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

*Il linguaggio di pimpl* è una tecnica moderna C\+\+ per nascondere l'implementazione, per ridurre il motore e per separare le interfacce.  Pimpl è breve "per il puntatore all'implementazione." È già avere familiarità con il concetto ma conoscerlo da altri nomi quali Gatto di Cheshire o il linguaggio del firewall del compilatore.  
  
## Poiché pimpl di utilizzo?  
 Di seguito viene illustrato come il linguaggio di pimpl può migliorare il ciclo di vita dello sviluppo del software:  
  
-   Minimizzazione delle dipendenze di compilazione.  
  
-   Separazione di interfaccia e di implementazione.  
  
-   Portabilità.  
  
## Intestazione di Pimpl  
  
```cpp  
  
// my_class.h  
class my_class {  
   //  ... all public and protected stuff goes here ...  
private:  
   class impl; unique_ptr<impl> pimpl; // opaque type here  
};  
  
```  
  
 Il linguaggio di pimpl ignora le sovrapposizioni di ricompilazione e layout fragili dell'oggetto.  È ideale per \(transitivo\) tipi comuni.  
  
## Implementazione di Pimpl  
 Definire la classe di `impl` nel file CPP.  
  
```cpp  
  
// my_class.cpp  
class my_class::impl {  // defined privately here  
  // ... all private data and functions: all of these  
  //     can now change without recompiling callers ...  
};  
my_class::my_class(): pimpl( new impl )  
{  
  // ... set impl values ...   
}  
```  
  
## Procedure consigliate  
 Considerare se aggiungere il supporto per la specializzazione non generatori di scambio.  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)