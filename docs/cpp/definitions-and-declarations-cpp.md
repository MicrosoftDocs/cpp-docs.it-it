---
title: "Definizioni e dichiarazioni (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 56b809c0-e602-4f18-9ca5-cd7a8fbaaf30
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizioni e dichiarazioni (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 L'interfaccia DLL fa riferimento a tutti gli elementi \(funzioni e dati\) ritenuti esportati da un programma nel sistema, ossia tutti gli elementi dichiarati come **dllimport** o `dllexport`.  Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare l'attributo **dllimport** o `dllexport`.  Tuttavia, la definizione deve specificare solo l'attributo `dllexport`.  Ad esempio, la definizione di funzione seguente genera un errore del compilatore:  
  
```  
__declspec( dllimport ) int func() {   // Error; dllimport  
                                    // prohibited on definition.  
   return 1;  
}  
```  
  
 Anche questo codice genera un errore:  
  
```  
#define DllImport   __declspec( dllimport )  
  
__declspec( dllimport ) int i = 10;  // Error; this is a  
                                     // definition.  
```  
  
 Tuttavia, questa è la sintassi corretta:  
  
```  
__declspec( dllexport ) int i = 10;     // Okay--export definition  
```  
  
 L'utilizzo di `dllexport` implica una definizione, mentre l'utilizzo di **dllimport** implica una dichiarazione.  È necessario utilizzare la parola chiave `extern` con `dllexport` per forzare una dichiarazione; in caso contrario, una definizione è implicita.  Pertanto, i seguenti esempi sono corretti:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
extern DllImport int k; // These are both correct and imply a  
DllImport int j;        // declaration.  
```  
  
 I seguenti esempi chiariscono l'esempio precedente:  
  
```  
static __declspec( dllimport ) int l; // Error; not declared extern.  
  
void func() {  
    static __declspec( dllimport ) int s;  // Error; not declared  
                                           // extern.  
    __declspec( dllimport ) int m;         // Okay; this is a   
                                           // declaration.  
    __declspec( dllexport ) int n;         // Error; implies external  
                                           // definition in local scope.  
    extern __declspec( dllimport ) int i;  // Okay; this is a  
                                           // declaration.  
    extern __declspec( dllexport ) int k;  // Okay; extern implies  
                                           // declaration.  
    __declspec( dllexport ) int x = 5;     // Error; implies external  
                                           // definition in local scope.  
}  
```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)