---
title: "Definizioni e dichiarazioni (C) | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "esportazione di funzioni"
ms.assetid: d150395a-89d4-4298-9ac4-08f84fe1261c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizioni e dichiarazioni (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'interfaccia DLL fa riferimento a tutti gli elementi \(funzioni e dati\) ritenuti esportati da un programma nel sistema, ossia tutti gli elementi dichiarati come **dllimport** o `dllexport`.  Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare l'attributo **dllimport** o `dllexport`.  Tuttavia, la definizione può specificare solo l'attributo `dllexport`.  Ad esempio, la definizione di funzione seguente genera un errore del compilatore:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllImport int func()    /* Error; dllimport prohibited in */  
                        /* definition. */  
{  
   return 1;  
}  
```  
  
 Anche questo codice genera un errore:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllImport int i = 10;      /* Error; this is a definition. */  
```  
  
 Tuttavia, questa è la sintassi corretta:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllExport int i = 10;      /* Okay: this is an export definition. */  
```  
  
 L'utilizzo di `dllexport` implica una definizione, mentre l'utilizzo di **dllimport** implica una dichiarazione.  È necessario utilizzare la parola chiave `extern` con `dllexport` per forzare una dichiarazione; in caso contrario, una definizione è implicita.  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
extern DllImport int k;   /* These are correct and imply */  
Dllimport int j;          /* a declaration. */      
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Funzioni di importazione ed esportazione DLL](../c-language/dll-import-and-export-functions.md)