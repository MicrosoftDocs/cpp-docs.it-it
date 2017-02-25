---
title: "Macro di nomi file | Microsoft Docs"
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
  - "macro nome file in NMAKE"
  - "macro, NMAKE"
  - "NMAKE (programma), macro nome file"
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Macro di nomi file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro dei nomi file sono già definite come nomi file specificati nella dipendenza, non come specifiche complete di nomi file su disco.  Tali macro non devono essere racchiuse tra parentesi quando vengono richiamate, in quanto è sufficiente specificare il simbolo di dollaro \($\) come illustrato.  
  
|Macro|Significato|  
|-----------|-----------------|  
|**$@**|Il nome completo della destinazione corrente \(percorso, nome di base, estensione\) come specificato.|  
|**$$@**|Il nome completo della destinazione corrente \(percorso, nome di base, estensione\) come specificato.  Valido solo come dipendente in una dipendenza.|  
|**$\***|Il percorso e il nome di base della destinazione corrente senza l'estensione file.|  
|**$\*\***|Tutti i dipendenti della destinazione corrente.|  
|**$?**|Tutti i dipendenti con un timestamp successivo a quello della destinazione corrente.|  
|**$\<**|Il file dipendente con un timestamp successivo a quello della destinazione corrente.  Valido solo nei comandi delle regole di inferenza.|  
  
 Per specificare una parte di una macro già definita di un nome file, aggiungere un modificatore di macro e racchiudere la macro modificata tra parentesi.  
  
|Modificatore|Parte del nome file risultante|  
|------------------|------------------------------------|  
|**G**|Unità più directory|  
|**B**|Nome di base|  
|**F**|Nome di base più estensione|  
|**R**|Unità più directory più nome di base|  
  
## Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)