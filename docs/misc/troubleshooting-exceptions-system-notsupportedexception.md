---
title: "Risoluzione dei problemi relativi alle eccezioni: System.NotSupportedException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "NotSupportedException (classe)"
ms.assetid: a214e851-ee0f-4bbd-9f72-8769046526f3
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.NotSupportedException
Un'eccezione <xref:System.NotSupportedException> viene generata quando un metodo richiamato non è supportato oppure quando viene eseguito un tentativo di leggere, eseguire una ricerca, scrivere in un flusso che non supporta la funzionalità richiamata.  
  
## Suggerimenti associati  
 **Assicurarsi che il metodo sia supportato.**  
 Alcuni metodi non sono supportati nella classe base, ma si prevede che saranno supportati nelle classi derivate. Se una classe derivata implementa solo un sottoinsieme dei metodi della classe base, verrà generata un'eccezione <xref:System.NotSupportedException> per i metodi non supportati.  
  
## Note  
 Quando si utilizza [!INCLUDE[Compact](../misc/includes/compact_md.md)] e si applica P\/Invoke a una funzione nativa, è possibile che venga generata questa eccezione se:  
  
-   La dichiarazione nel codice gestito non è corretta.  
  
-   L'operazione che si sta tentando di eseguire non è supportata in [!INCLUDE[Compact](../misc/includes/compact_md.md)].  
  
-   I nomi di DLL vengono modificati durante l'esportazione.  
  
-   In tal caso, effettuare i seguenti controlli:  
  
-   Verificare eventuali violazioni delle limitazioni di P\/Invoke in [!INCLUDE[Compact](../misc/includes/compact_md.md)].  
  
-   Verificare se sono presenti argomenti che richiedono memoria preallocata. In caso affermativo, passare un riferimento a una variabile esistente.  
  
-   Verificare che i nomi delle funzioni esportate siano corretti. A tale scopo, utilizzare DumpBin.exe.  
  
-   Verificare che non si stia tentando di passare un numero eccessivo di argomenti.  
  
## Vedere anche  
 <xref:System.NotSupportedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)