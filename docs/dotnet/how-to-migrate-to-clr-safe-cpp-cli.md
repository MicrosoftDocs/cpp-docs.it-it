---
title: 'Procedura: eseguire la migrazione a clr-: provvisoria (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- migration [C++], verifiable assemblies
- upgrading Visual C++ applications, verifiable assemblies
- verifiable assemblies [C++], migrating to
- /clr compiler option [C++], migrating to /clr:safe
ms.assetid: 75f9aae9-1dcc-448a-aa11-2d96f972f9d2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4c9d28d64b450d14ba1579597f0276cfe3a0cf39
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-migrate-to-clrsafe-ccli"></a>Procedura: migrare a /clr:safe (C++/CLI)
In Visual C++ può generare componenti verificabili con **/CLR: safe**, che indica al compilatore di generare errori per ogni costrutto di codice non verificabile.  
  
## <a name="remarks"></a>Note  
 I problemi seguenti generano errori di verificabilità:  
  
-   Tipi nativi. Anche se non è utilizzato, la dichiarazione di matrici, strutture, puntatori o classi native impedirà la compilazione.  
  
-   Variabili globali  
  
-   Chiamate di funzione in qualsiasi libreria non gestita, incluse chiamate di funzione di common language runtime  
  
-   Una funzione verificabile non può contenere un [operatore static_cast](../cpp/static-cast-operator.md) per il downcast. Il [operatore static_cast](../cpp/static-cast-operator.md) può essere utilizzato per eseguire il cast tra tipi primitivi, ma per il downcast, [safe_cast](../windows/safe-cast-cpp-component-extensions.md) o un cast di tipo C (che viene implementato come un [safe_cast](../windows/safe-cast-cpp-component-extensions.md)) deve essere utilizzato.  
  
-   Una funzione verificabile non può contenere un [reinterpret_cast Operator](../cpp/reinterpret-cast-operator.md) (o un equivalente di cast di tipo C).  
  
-   Una funzione verificabile non può eseguire operazioni aritmetiche su un [interior_ptr (C + + CLI)](../windows/interior-ptr-cpp-cli.md). Può solo assegnare a esso e il riferimento ad essa.  
  
-   Una funzione verificabile può solo generare o intercettare i puntatori ai tipi di riferimento, in modo da tipi di valore devono essere sottoposto a boxing prima che venga generata.  
  
-   Una funzione verificabile può chiamare solo funzioni verificabili (in modo che le chiamate a common language runtime non sono consentite, includere `AtEntry` / `AtExit`, quindi sono consentiti costruttori globali).  
  
-   Non è possibile utilizzare una classe verificabile <xref:System.Runtime.InteropServices.LayoutKind>.  
  
-   Se la creazione di un file EXE, una funzione main possibile dichiarare alcun parametro, pertanto <xref:System.Environment.GetCommandLineArgs%2A> deve essere utilizzato per recuperare gli argomenti della riga di comando.  
  
-   Effettua una chiamata non virtuali a una funzione virtuale. Ad esempio:  
  
    ```  
    // not_verifiable.cpp  
    // compile with: /clr  
    ref struct A {  
       virtual void Test() {}  
    };  
  
    ref struct B : A {};  
  
    int main() {  
       B^ b1 = gcnew B;  
       b1->A::Test();   // Non-virtual call to virtual function  
    }  
    ```  
  
 Inoltre, è Impossibile utilizzare le parole chiave seguenti in codice verificabile:  
  
-   [non gestito](../preprocessor/managed-unmanaged.md) e [pack](../preprocessor/pack.md) pragma  
  
-   [naked](../cpp/naked-cpp.md) e [allineare](../cpp/align-cpp.md) [declspec](../cpp/declspec.md) modificatori  
  
-   [__asm](../assembler/inline/asm.md)  
  
-   [__based](../cpp/based-grammar.md)  
  
-   [try](../cpp/try-except-statement.md) e`__except`  
  
## <a name="see-also"></a>Vedere anche  
 [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)