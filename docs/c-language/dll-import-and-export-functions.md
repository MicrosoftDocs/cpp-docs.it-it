---
title: "Funzioni di importazione ed esportazione DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazione di funzioni, dllexport e dllimport"
  - "esportazioni di DLL [C++]"
  - "dllexport (attributo) [C++], attributo di classe di archiviazione"
  - "attributo dllimport [C++], attributo di classe di archiviazione"
  - "DLL [C++], importazione"
  - "attributi di classi di archiviazione estesi"
ms.assetid: 08d164b9-770a-4e14-afeb-c6f21d9e33e4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Funzioni di importazione ed esportazione DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Le informazioni più complete e più aggiornate su questo argomento sono disponibili in [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
 I modificatori della classe di archiviazione **dllimport** e `dllexport` sono estensioni specifiche di Microsoft per il linguaggio C.  Questi modificatori definiscono in modo esplicito l'interfaccia della DLL per il client \(file eseguibile o un'altra DLL\).  La dichiarazione di funzioni come `dllexport` elimina la necessità di un file di definizione di modulo \(con estensioni def\).  È inoltre possibile utilizzare i modificatori `dllexport` e **dllimport** con dati e oggetti.  
  
 I modificatori della classe di archiviazione **dllimport** e `dllexport` devono essere utilizzati con la parola chiave della sintassi degli attributi estesa, `__declspec`, come illustrato nell'esempio seguente:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllExport void func();  
DllExport int i = 10;  
DllExport int j;  
DllExport int n;  
```  
  
 Per informazioni specifiche sulla sintassi per i modificatori della classe di archiviazione estesi, vedere [Attributi estesi della classe di archiviazione](../c-language/c-extended-storage-class-attributes.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)