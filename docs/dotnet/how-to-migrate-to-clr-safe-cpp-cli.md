---
title: "Procedura: migrare a /clr:safe (C++/CLI) | Microsoft Docs"
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
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], migrazione a /clr:safe"
  - "migrazione [C++], assembly verificabili"
  - "Visual C++ (aggiornamento di applicazioni), assembly verificabili"
  - "assembly verificabili [C++], migrazione"
ms.assetid: 75f9aae9-1dcc-448a-aa11-2d96f972f9d2
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: migrare a /clr:safe (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ è possibile generare componenti verificabili mediante l'opzione **\/clr:safe**, che indica al compilatore di generare errori per ciascun costrutto di codice non verificabile.  
  
## Note  
 Di seguito sono elencati alcuni problemi che possono generare errori di verificabilità:  
  
-   Tipi nativi.  Anche se non viene utilizzata, la dichiarazione di classi native, strutture, puntatori o matrici impedirà la compilazione.  
  
-   Variabili globali.  
  
-   Chiamate di funzione in una qualsiasi libreria non gestita, incluse le chiamate di funzione di Common Language Runtime.  
  
-   Una funzione verificabile non può contenere un [Operatore static\_cast](../cpp/static-cast-operator.md) per il downcast.  L'[Operatore static\_cast](../cpp/static-cast-operator.md) può essere utilizzato per il cast tra tipi primitivi. Per il downcast, invece, deve essere utilizzato [safe\_cast](../windows/safe-cast-cpp-component-extensions.md) o un cast di tipo C \(implementato come [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)\).  
  
-   Una funzione verificabile non può contenere un [Operatore reinterpret\_cast](../cpp/reinterpret-cast-operator.md) \(o un cast equivalente di tipo C\).  
  
-   Una funzione verificabile non può eseguire operazioni aritmetiche su un [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md).  Può solo eseguire assegnazioni e dereferenziare.  
  
-   Dato che una funzione verificabile può solo generare o intercettare puntatori a tipi di riferimento, è necessario eseguire il boxing dei tipi di valore prima della generazione.  
  
-   Una funzione verificabile può chiamare soltanto funzioni verificabili \(non sono consentite chiamate al Common Language Runtime, incluse `AtEntry`\/`AtExit`, e non sono consentiti costruttori globali\).  
  
-   Una classe verificabile non può utilizzare <xref:System.Runtime.InteropServices.LayoutKind>.  
  
-   Se si sta compilando un file exe, non è possibile dichiarare eventuali parametri in una funzione main. Di conseguenza, è necessario utilizzare il metodo <xref:System.Environment.GetCommandLineArgs%2A> per recuperare gli argomenti della riga di comando.  
  
-   Chiamata non virtuale a una funzione virtuale.  Di seguito è riportato un esempio.  
  
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
  
 Inoltre, le parole chiave elencate di seguito non possono essere utilizzate nel codice verificabile.  
  
-   pragma [unmanaged](../preprocessor/managed-unmanaged.md) e [pack](../preprocessor/pack.md)  
  
-   Modificatori [naked](../cpp/naked-cpp.md) e [align](../cpp/align-cpp.md) [\_\_declspec](../cpp/declspec.md)  
  
-   [\_\_asm](../assembler/inline/asm.md)  
  
-   [\_\_based](../cpp/based-grammar.md)  
  
-   [\_\_try](../cpp/try-except-statement.md) e `__except`  
  
## Vedere anche  
 [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md)