---
title: "Controllo degli errori di runtime | Microsoft Docs"
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
  - "c.runtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "controllo degli errori di runtime"
  - "errori di runtime, controllo"
ms.assetid: c965dd01-57ad-4a3c-b1d6-5aa04f920501
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Controllo degli errori di runtime
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di runtime C contiene le funzioni che supportano i controlli di errore a runtime \(RTC\).  Il controllo degli errori di runtime consente di compilare il programma in modo che alcuni tipi di errori di runtime vengano segnalati.  Specificare come gli errori sono segnalati e quali tipi di errori vengono segnalati.  Per ulteriori informazioni, vedere [Controlli di runtime](../Topic/How%20to:%20Use%20Native%20Run-Time%20Checks.md).  
  
 Utilizzare le seguenti funzioni per personalizzare il modo in cui il programma esegue il controllo degli errori di runtime.  
  
### Funzioni di controllo degli errori di runtime  
  
|Funzione|Utilizzo|Equivalente .NET Framework|  
|--------------|--------------|--------------------------------|  
|[\_RTC\_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md)|Restituisce una breve descrizione di un tipo di controllo di errore di run\-time \(RTC\).||  
|[\_RTC\_NumErrors](../c-runtime-library/reference/rtc-numerrors.md)|Restituisce il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime.||  
|[\_RTC\_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md)|Definisce una funzione come gestore per la notifica di controllo di errori di runtime.||  
|[\_RTC\_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md)|Associa un errore che viene rilevato dai controlli di errori di runtime con un tipo.||  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [\/RTC \(Controlli di runtime\)](../build/reference/rtc-run-time-error-checks.md)   
 [runtime\_checks](../preprocessor/runtime-checks.md)   
 [RTC sample](http://msdn.microsoft.com/it-it/b3415b09-f6fd-43dc-8c02-9a910bc2574e)   
 [Routine di debug](../c-runtime-library/debug-routines.md)