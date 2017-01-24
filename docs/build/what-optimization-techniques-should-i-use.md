---
title: "Quali tecniche di ottimizzazione &#232; necessario utilizzare per migliorare le prestazioni dell&#39;applicazione client durante il caricamento? | Microsoft Docs"
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
helpviewer_keywords: 
  - "DLL [C++], ottimizzazione"
  - "ottimizzazione [C++], DLL"
  - "prestazioni [C++], DLL"
ms.assetid: 2f8bbfb5-08b9-4a35-8302-25a1966881b1
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Quali tecniche di ottimizzazione &#232; necessario utilizzare per migliorare le prestazioni dell&#39;applicazione client durante il caricamento?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La conversione di una DLL regolare collegata a MFC in modo statico in una DLL regolare collegata a MFC in modo dinamico consente di ridurre le dimensioni del file.  
  
 Se la DLL contiene un numero elevato di funzioni esportate, utilizzare un file def per esportare le funzioni, anziché **\_\_declspec\(dllexport\)**, e utilizzare l'[attributo NONAME](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) del file def su ciascuna funzione esportata.  Questo attributo fa sì che solo il valore ordinale, non il nome della funzione, venga memorizzato nella tabella di esportazione della DLL riducendo così le dimensioni del file.  
  
 Le DLL collegate a un'applicazione in modo implicito vengono caricate con l'applicazione.  Per migliorare le prestazioni durante il caricamento, suddividere la DLL in più DLL.  Inserire in un'unica DLL tutte le funzioni richieste dall'applicazione chiamante subito dopo il caricamento e collegare l'applicazione chiamante in modo implicito a tale DLL.  Inserire in un'altra DLL le altre funzioni non richieste immediatamente dall'applicazione chiamante e collegare quest'ultima in modo esplicito alla prima DLL.  Per ulteriori informazioni, vedere [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md).  
  
## Vedere anche  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)