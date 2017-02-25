---
title: "Overload di modelli sicuri | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES"
  - "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES"
  - "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES"
  - "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES"
  - "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT"
  - "overload di modelli sicuri"
ms.assetid: 562741d0-39c0-485e-8529-73d740f29f8f
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Overload di modelli sicuri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Numerose funzioni CRT sono state deprecate in favore di quelle più recenti, ovvero quelle migliorate dal punto di vista della sicurezza \(ad esempio `strcpy_s` è il rimpiazzamento più sicuro per `strcpy`\).  CRT fornisce gli overload del modello per semplificare la transizione alle varianti più sicure.  
  
 Ad esempio, questo codice genera un avviso in quanto `strcpy` è deprecato:  
  
 `char szBuf[10];`  
  
 `strcpy(szBuf, "test"); // warning: deprecated`  
  
 È possibile ignorare l'avviso.  Definire il simbolo `_CRT_SECURE_NO_WARNINGS` per eliminare l'avviso, o aggiornare il codice per utilizzare `strcpy_s`:  
  
 `char szBuf[10];`  
  
 `strcpy_s(szBuf, 10, "test"); // security-enhanced _s function`  
  
 Gli overload del modello forniscono scelte aggiuntive.  Definendo `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` a 1 si consente l'overload del modello delle funzioni CRT standard che chiamano la variante più sicura automaticamente.  Se `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` è 1, non sono necessarie modifiche al codice.  Dietro le quinte, la chiamata a `strcpy` verrà modificata in una chiamata a `strcpy_s` con l'argomento dimensione assegnato automaticamente.  
  
 `#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1`  
  
 `...`  
  
 `char szBuf[10];`  
  
 `strcpy(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")`  
  
 `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` non influisce sulle funzioni che accettano un conteggio, come `strncpy`.  Per abilitare gli overload del modello per le funzioni di conteggio, definire `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` su 1.  Prima di eseguire questa operazione, tuttavia, assicurarsi che il codice passi il numero dei caratteri, non la dimensione del buffer \(un errore comune\).  Inoltre, il codice che esplicitamente scrive un terminatore null alla fine del buffer dopo la chiamata di funzione non è necessario se viene chiamata la variante sicura.  Se è necessario il troncamento, vedere [\_TRUNCATE](../c-runtime-library/truncate.md).  
  
> [!NOTE]
>  La macro `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` necessita che anche `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` venga definito come 1.  Se `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` viene definito come 1 e `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` sono definiti come 0, l'applicazione non eseguirà alcun overload del modello.  
  
 Definendo `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` a 1 si abilitano gli overload del modello delle varianti sicure \(nomi che terminano in "\_s"\).  In questo caso, se `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` è 1, allora bisogna eseguire una piccola modifica sul codice originale:  
  
 `#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1`  
  
 `...`  
  
 `char szBuf[10];`  
  
 `strcpy_s(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")`  
  
 Solo il nome della funzione deve essere modificato \(aggiungendo "\_s"\); l'overload del modello si occuperà di fornire la dimensione dell'argomento.  
  
 Per impostazione predefinita, `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` e `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` sono definiti come 0 \(disabilitato\) e `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` è definito come 1 \(attivato\).  
  
 Si noti che questi overload del modello funzionano solo per le matrici statiche.  I buffer allocati dinamicamente richiedono modifiche aggiuntive al codice sorgente.  Rivedere gli esempi illustrati in precedenza:  
  
 `#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1`  
  
 `...`  
  
 `char *szBuf = (char*)malloc(10);`  
  
 `strcpy(szBuf, "test"); // still deprecated; have to change to`  
  
 `// strcpy_s(szBuf, 10, "test");`  
  
 E questo:  
  
 `#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1`  
  
 `...`  
  
 `char *szBuf = (char*)malloc(10);`  
  
 `strcpy_s(szBuf, "test"); // doesn't compile; have to change to`  
  
 `// strcpy_s(szBuf, 10, "test");`  
  
## Vedere anche  
 [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md)   
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)