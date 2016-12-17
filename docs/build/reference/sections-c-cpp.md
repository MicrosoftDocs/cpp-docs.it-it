---
title: "SECTIONS (C/C++) | Microsoft Docs"
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
  - "SECTIONS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SECTIONS (istruzione) file .def"
ms.assetid: 7b974366-9ef5-4e57-bbcc-73a1df6f8857
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# SECTIONS (C/C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Introduce una sezione di una o più `definitions` che rappresentano identificatori di accesso per sezioni del file di output del progetto.  
  
```  
SECTIONS  
definitions  
```  
  
## Note  
 Ciascuna definizione deve essere riportata su una riga separata.  La parola chiave `SECTIONS` può trovarsi sulla stessa riga della prima definizione o su una riga precedente.  Il file DEF può contenere una o più istruzioni `SECTIONS`.  
  
 Mediante l'istruzione `SECTIONS` è possibile impostare attributi per una o più sezioni del file di immagine, nonché eseguire l'override degli attributi predefiniti per ciascun tipo di sezione.  
  
 Il formato delle `definitions`il seguente:  
  
 `.section_name specifier`  
  
 dove `.section_name` è il nome di una sezione dell'immagine del programma e `specifier` è rappresentato da uno o più dei seguenti modificatori di accesso:  
  
|Modificatore|Descrizione|  
|------------------|-----------------|  
|`EXECUTE`|La sezione è eseguibile|  
|`READ`|Consente operazioni di lettura sui dati|  
|`SHARED`|Condivide la sezione tra tutti i processi che caricano l'immagine|  
|`WRITE`|Consente operazioni di scrittura sui dati|  
  
 Separare i nomi degli identificatori con uno spazio.  Di seguito è riportato un esempio.  
  
```  
SECTIONS  
.rdata READ WRITE  
```  
  
 `SECTIONS` contrassegna l'inizio di un elenco di `definitions` di sezione.  Ogni `definition` deve trovarsi su una riga separata.  La parola chiave `SECTIONS` può trovarsi sulla stessa riga della prima `definition` o su una riga precedente.  Il file DEF può contenere una o più istruzioni `SECTIONS`.  La parola chiave `SEGMENTS` è supportata come sinonimo di `SECTIONS`.  
  
 Versioni precedenti di Visual C\+\+ supportate:  
  
```  
section [CLASS 'classname'] specifier  
```  
  
 La parola chiave `CLASS` è supportata per garantire la compatibilità con le versioni precedenti, ma è ignorata.  
  
 Un metodo equivalente per specificare attributi di sezione consiste nell'uso dell'opzione [\/SECTION](../../build/reference/section-specify-section-attributes.md).  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)