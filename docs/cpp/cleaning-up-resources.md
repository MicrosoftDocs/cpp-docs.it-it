---
title: "Pulizia di risorse | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, gestori di terminazione"
  - "gestione eccezioni, pulizia di risorse"
  - "gestione eccezioni, codice di pulizia"
  - "risorse [C++], pulizia"
  - "gestori di terminazione, pulizia di risorse"
  - "try-catch (parola chiave) [C++], gestori di terminazione"
ms.assetid: 65753efe-6a27-4750-b90c-50635775c1b6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Pulizia di risorse
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante l'esecuzione del gestore terminazioni, potrebbe essere possibile non sapere quali risorse sono effettivamente allocate prima che il gestore terminazioni venga chiamato.  È possibile che il blocco di istruzioni `__try` sia stato arrestato prima che tutte le risorse fossero state allocate, pertanto non tutte le risorse sono aperte.  
  
 Di conseguenza, per essere certi, è necessario verificare quali risorse sono effettivamente aperte prima di procedere con la pulizia gestione\-terminazione.  Una procedura consigliata consiste in:  
  
1.  Inizializzare gli handle su NULL.  
  
2.  Allocare le risorse nel blocco di istruzioni `__try`.  Gli handle vengono impostati su valori positivi mentre la risorsa viene allocata.  
  
3.  Nel blocco di istruzioni `__finally` rilasciare ogni risorsa la cui variabile di handle o di flag corrispondente è diversa da zero oppure non è NULL.  
  
## Esempio  
 Ad esempio, il codice seguente utilizza un gestore terminazioni per chiudere tre file e un blocco di memoria allocati nel blocco di istruzioni `__try`.  Prima di pulire una risorsa, il codice controlla se la risorsa è stata allocata.  
  
```  
// exceptions_Cleaning_up_Resources.cpp  
#include <stdlib.h>  
#include <malloc.h>  
#include <stdio.h>  
#include <windows.h>  
  
void fileOps() {  
   FILE  *fp1 = NULL,  
         *fp2 = NULL,  
         *fp3 = NULL;  
   LPVOID lpvoid = NULL;  
   errno_t err;  
  
   __try {  
      lpvoid = malloc( BUFSIZ );  
  
      err = fopen_s(&fp1, "ADDRESS.DAT", "w+" );  
      err = fopen_s(&fp2, "NAMES.DAT", "w+" );  
      err = fopen_s(&fp3, "CARS.DAT", "w+" );  
   }  
   __finally {  
      if ( fp1 )  
         fclose( fp1 );  
      if ( fp2 )  
         fclose( fp2 );  
      if ( fp3 )  
         fclose( fp3 );  
      if ( lpvoid )  
         free( lpvoid );  
   }  
}  
  
int main() {  
   fileOps();  
}  
```  
  
## Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)