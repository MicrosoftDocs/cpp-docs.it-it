---
title: Definizioni e dichiarazioni (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- export functions
ms.assetid: d150395a-89d4-4298-9ac4-08f84fe1261c
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: e6523addc4ad4403c3dd74b5101081178b3ed2ec
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="definitions-and-declarations-c"></a>Definizioni e dichiarazioni (C)
**Sezione specifica Microsoft**  
  
 L'interfaccia DLL fa riferimento a tutti gli elementi (funzioni e dati) di cui si sa che sono esportati da un programma nel sistema, ossia tutti gli elementi dichiarati come **dllimport** o `dllexport`. Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare l'attributo **dllimport** o `dllexport`. Tuttavia, la definizione può specificare solo l'attributo `dllexport`. Ad esempio, la definizione di funzione seguente genera un errore del compilatore:  
  
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
  
 L'uso di `dllexport` implica una definizione, mentre l'uso di **dllimport** implica una dichiarazione. È necessario utilizzare la parola chiave `extern` con `dllexport` per forzare una dichiarazione; in caso contrario, una definizione è implicita.  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
extern DllImport int k;   /* These are correct and imply */  
Dllimport int j;          /* a declaration. */      
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni di importazione ed esportazione di DLL](../c-language/dll-import-and-export-functions.md)
