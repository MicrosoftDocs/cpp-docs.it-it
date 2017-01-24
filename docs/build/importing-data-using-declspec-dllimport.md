---
title: "Importazione di dati tramite __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "dllimport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec(dllimport) (parola chiave) [C++]"
  - "attributo dllimport [C++], importazioni di dati"
  - "importazione di dati [C++]"
  - "importazione di DLL [C++], __declspec(dllimport)"
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Importazione di dati tramite __declspec(dllimport)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel caso dei dati, l'utilizzo di **\_\_declspec\(dllimport\)** consente di rimuovere un livello di riferimento indiretto.  Quando si importano i dati da una DLL, occorre comunque consultare la tabella IAT.  Prima dell'introduzione di **\_\_declspec\(dllimport\)**, per accedere ai dati esportati dalla DLL era necessario utilizzare un livello aggiuntivo di riferimento indiretto:  
  
```  
// project.h  
#ifdef _DLL   // If accessing the data from inside the DLL  
   ULONG ulDataInDll;  
  
#else         // If accessing the data from outside the DLL  
   ULONG *ulDataInDll;  
#endif  
```  
  
 I dati venivano quindi esportati nel file DEF:  
  
```  
// project.def  
LIBRARY project  
EXPORTS  
   ulDataInDll   CONSTANT  
```  
  
 e l'accesso avveniva al di fuori della DLL:  
  
```  
if (*ulDataInDll == 0L)   
{  
   // Do stuff here  
}  
```  
  
 Quando si contrassegnano i dati come **\_\_declspec\(dllimport\)**, il compilatore genera automaticamente il codice di riferimento indiretto  evitando di dover effettuare i passaggi sopra descritti.  Come segnalato in precedenza, non utilizzare la dichiarazione **\_\_declspec\(dllimport\)** sui dati durante la compilazione della DLL.  Poiché le funzioni nella DLL non utilizzano la tabella IAT per accedere agli oggetti di dati, il livello aggiuntivo di riferimento indiretto non sarà presente.  
  
 Per esportare i dati automaticamente dalla DLL, utilizzare questa dichiarazione:  
  
```  
__declspec(dllexport) ULONG ulDataInDLL;  
```  
  
## Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)