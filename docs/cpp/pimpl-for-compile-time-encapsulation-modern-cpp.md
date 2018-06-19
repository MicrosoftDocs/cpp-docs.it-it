---
title: Pimpl per incapsulamento in fase di compilazione (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c3e8a90a-b328-4990-82bb-e1b147f76e07
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f611a898018cee5edc031be1db2fd35af8857e16
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32420155"
---
# <a name="pimpl-for-compile-time-encapsulation-modern-c"></a>Pimpl per incapsulamento in fase di compilazione (C++ moderno)
Il *pimpl linguaggio* è una tecnica di C++ moderna per nascondere l'implementazione, per ridurre al minimo accoppiamento e per separare le interfacce. Pimpl è l'abbreviazione di "puntatore all'implementazione." Si potrebbero già avere familiarità con il concetto insaputa da altri nomi come scomparire o Firewall del compilatore di linguaggio.  
  
## <a name="why-use-pimpl"></a>Perché utilizzare pimpl?  
 Ecco come il linguaggio pimpl può migliorare il ciclo di vita di sviluppo di software:  
  
-   Riduzione delle dipendenze di compilazione.  
  
-   Separazione dell'interfaccia e l'implementazione.  
  
-   Portabilità.  
  
## <a name="pimpl-header"></a>Intestazione Pimpl  
  
```cpp  
// my_class.h  
class my_class {  
   //  ... all public and protected stuff goes here ...  
private:  
   class impl; unique_ptr<impl> pimpl; // opaque type here  
};  
  
```  
  
 Il linguaggio pimpl evita la catena di ricompilazione e layout oggetto fragile. È particolarmente utile per i tipi comuni (in modo transitivo).  
  
## <a name="pimpl-implementation"></a>Implementazione di Pimpl  
 Definire la `impl` classe nel file con estensione cpp.  
  
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
  
## <a name="best-practices"></a>Procedure consigliate  
 Considerare la possibilità di aggiungere il supporto per la specializzazione di scambio non generanti.  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)