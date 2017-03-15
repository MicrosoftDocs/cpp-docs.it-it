---
title: "Tabelle codici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.international"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ANSI [C++], tabelle codici"
  - "set di caratteri [C++], tabelle codici"
  - "tabelle codici [C++], tipi"
  - "tabelle codici di impostazioni locali [C++]"
  - "localizzazione [C++], tabelle codici"
  - "tabelle codici multibyte [C++]"
  - "tabella codici predefinita di sistema"
ms.assetid: 4a26fc42-185a-4add-98bf-a7b314ae6186
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Tabelle codici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`code page` è un set di caratteri che può includere numeri, segni di punteggiatura e altri glifi.  A lingue diverse ed impostazioni locali possono corrispondere tabelle codici differenti.  La tabella codici ANSI 1252, ad esempio, viene utilizzata per l'inglese e per la maggior parte delle lingue europee; mentre la tabella codici OEM 932 viene utilizzata per il Kanji giapponese.  
  
 Una tabella codici può essere rappresentata in una tabella come mapping dei caratteri in valori ad un byte oppure valori multibyte.  Molte tabelle codici condividono il set di caratteri ASCII per i caratteri nell'intervallo tra 0x00 e 0x7F.  
  
 La libreria di runtime di Microsoft utilizza i seguenti tipi di tabelle codici:  
  
-   Tabella codici ANSI di sistema predefinita.  Per impostazione predefinita, all'avvio il sistema runtime imposta automaticamente la tabella dei codici multibyte alla tabella codici ANSI di sistema predefinita, ottenuta dal sistema operativo.  La chiamata:  
  
    ```  
    setlocale ( LC_ALL, "" );  
    ```  
  
     imposta inoltre le impostazioni locali alla tabella codici ANSI di sistema predefinita.  
  
-   Tabelle codici di impostazioni locali.  Il comportamento di una serie di routine in fase di esecuzione dipende da un'impostazione locale corrente, inclusi la tabella codici delle impostazioni locali. \(Per ulteriori informazioni, vedere [Routine dipendenti dalle impostazioni locali](../c-runtime-library/locale.md)\). Per impostazione predefinita, tutte le routine dipendenti dalle impostazioni locali della libreria di runtime di Microsoft utilizzano la tabella codici che corrisponde alle impostazioni locali "C".  In fase di esecuzione è possibile modificare o eseguire una query nella tabella codici delle impostazioni locali in uso con una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
-   Tabella codici multibyte.  Il comportamento delle routine di caratteri multibyte nella libreria di runtime dipende dalla tabella di codici multibyte corrente.  Per impostazione predefinita, queste routine utilizzano la tabella codici ANSI di sistema predefinita.  In fase di esecuzione è possibile eseguire una query e modificare la tabella codici multibyte con [\_getmbcp](../c-runtime-library/reference/getmbcp.md) e [\_setmbcp](../c-runtime-library/reference/setmbcp.md), rispettivamente.  
  
-   Le impostazioni locali "C" sono definite da ANSI per corrispondere alle impostazioni locali in cui i programmi C sono stati eseguiti in precedenza.  La tabella codici delle impostazioni locali "C" \(tabella codici "C"\) corrisponde al set di caratteri ASCII.  Ad esempio, nelle impostazioni locali "C", `islower` restituisce true solo per i valori 0x61 \- 0x7A.  In altre impostazioni locali, `islower` può restituire true per questi nonché per altri valori definiti da tali impostazioni.  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)