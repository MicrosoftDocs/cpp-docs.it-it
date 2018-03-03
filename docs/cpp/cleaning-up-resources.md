---
title: Pulizia delle risorse | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- termination handlers [C++], cleaning up resources
- exception handling [C++], cleaning up resources
- C++ exception handling, termination handlers
- resources [C++], cleaning up
- exception handling [C++], cleanup code
- try-catch keyword [C++], termination handlers
ms.assetid: 65753efe-6a27-4750-b90c-50635775c1b6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fd84fdd041a3b3715c4fbfa9b4c1d78fdf2ba464
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cleaning-up-resources"></a>Pulizia di risorse
Durante l'esecuzione del gestore terminazioni, potrebbe essere possibile non sapere quali risorse sono effettivamente allocate prima che il gestore terminazioni venga chiamato. È possibile che il blocco di istruzioni `__try` sia stato arrestato prima che tutte le risorse fossero state allocate, pertanto non tutte le risorse sono aperte.  
  
 Di conseguenza, per essere certi, è necessario verificare quali risorse sono effettivamente aperte prima di procedere con la pulizia gestione-terminazione. Una procedura consigliata consiste in:  
  
1.  Inizializzare gli handle su NULL.  
  
2.  Allocare le risorse nel blocco di istruzioni `__try`. Gli handle vengono impostati su valori positivi mentre la risorsa viene allocata.  
  
3.  Nel blocco di istruzioni `__finally` rilasciare ogni risorsa la cui variabile di handle o di flag corrispondente è diversa da zero oppure non è NULL.  
  
## <a name="example"></a>Esempio  
 Ad esempio, il codice seguente utilizza un gestore terminazioni per chiudere tre file e un blocco di memoria allocati nel blocco di istruzioni `__try`. Prima di pulire una risorsa, il codice controlla se la risorsa è stata allocata.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)