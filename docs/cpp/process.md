---
title: "processo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Process"
  - "process_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], processo"
  - "process __declspec (parola chiave)"
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# processo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che il processo dell'applicazione gestita deve includere una sola copia di una variabile globale specifica, di una variabile membro statica o di una variabile locale statica condivisa tra tutti i domini dell'applicazione presenti nel processo.  Questa parola chiava è principalmente progettata per essere utilizzata durante la compilazione con **\/clr:pure**, perché con **\/clr:pure** le variabili globali e statiche sono in base al dominio dell'applicazione, per impostazione predefinita.  Durante la compilazione con **\/clr**, le variabili globali e statiche sono in base al processo per impostazione predefinita \(non è necessario utilizzare `__declspec(process)`\).  
  
 Solo una variabile globale, una variabile membro statica o una variabile locale statica di tipo nativo può essere contrassegnata con `__declspec(process)`.  
  
 Durante la compilazione con **\/clr:pure**, le variabili contrassegnate come in base al processo devono essere dichiarate come `const`.  In questo modo le variabili in base al processo non vengono modificate in un dominio dell'applicazione e restituiscono risultati imprevisti in un altro dominio della stessa.  Il principale utilizzo previsto di `__declspec(process)` è consentire l'inizializzazione della fase di compilazione di una variabile globale, di una variabile membro statica o di una variabile locale statica in **\/clr:pure**.  
  
 La parola chiave `process`è valida solo durante la compilazione con [\/clr](../build/reference/clr-common-language-runtime-compilation.md) o **\/clr:pure** e non lo è invece nella compilazione con **\/clr:safe**.  
  
 Se si desidera che ogni dominio dell'applicazione disponga di una propria copia di una variabile globale, utilizzare [appdomain](../cpp/appdomain.md).  
  
 Per ulteriori informazioni, vedere [Domini applicazione e Visual C\+\+](../dotnet/application-domains-and-visual-cpp.md).  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)