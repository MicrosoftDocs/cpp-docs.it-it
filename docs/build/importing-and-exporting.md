---
title: "Importazione ed esportazione | Microsoft Docs"
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
  - "__declspec(dllimport) (parola chiave) [C++]"
  - "DLL [C++], esportazione da"
  - "DLL [C++], importazione"
  - "esportazione di DLL [C++]"
  - "importazione di DLL [C++]"
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Importazione ed esportazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile importare simboli pubblici in un'applicazione o esportare funzioni da una DLL mediante i due metodi elencati di seguito.  
  
-   Utilizzare un file di definizione di modulo \(def\) quando si compila la DLL.  
  
-   Utilizzare le parole chiave **\_\_declspec\(dllimport\)** o **\_\_declspec\(dllexport\)** in una definizione di funzione nell'applicazione principale.  
  
## Utilizzo di un file def  
 Un file di definizione di modulo \(def\) è un file di testo contenente una o più istruzioni di modulo che descrivono alcuni attributi di una DLL.  Se non si utilizzano le parole chiave **\_\_declspec\(dllimport\)** o **\_\_declspec\(dllexport\)** per esportare le funzioni di una DLL, è necessario utilizzare un file def.  
  
 È possibile utilizzare i file def per l'[importazione in un'applicazione](../build/importing-using-def-files.md) o l'[esportazione da una DLL](../build/exporting-from-a-dll-using-def-files.md).  
  
## Utilizzo di \_\_declspec  
 Visual C\+\+ utilizza **\_\_declspec\(dllimport\)** e **\_\_declspec\(dllexport\)** per sostituire la parola chiave **\_\_export** utilizzata in precedenza nelle versioni a 16 bit di Visual C\+\+.  
  
 L'utilizzo di **\_\_declspec\(dllimport\)** non è richiesto per la compilazione corretta del codice, ma consente al compilatore di generare codice più efficiente.  Il compilatore, infatti, può determinare se una funzione è presente o meno in una DLL e può quindi produrre un codice che evita un livello di riferimento indiretto normalmente presente in una chiamata di funzione che attraversa un limite di DLL.  È tuttavia necessario utilizzare **\_\_declspec\(dllimport\)** per importare le variabili utilizzate in una DLL.  
  
 Con la sezione EXPORTS del file def appropriato, la parola chiave **\_\_declspec\(dllexport\)** non è necessaria.  **\_\_declspec\(dllexport\)** è stata aggiunta per semplificare l'esportazione delle funzioni da un file exe o dll senza l'utilizzo di un file def.  
  
 Il formato eseguibile portabile Win32 consente di ridurre al minimo il numero di pagine da modificare per correggere i problemi di importazione.  A questo scopo, tutti gli indirizzi di importazione di un qualsiasi programma vengono inseriti in un'unica posizione, denominata tabella di indirizzi di importazione.  Il caricatore può pertanto modificare solo una o due pagine quando accede a queste importazioni.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Importazione in un'applicazione](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Esportare da una DLL](../build/exporting-from-a-dll.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)