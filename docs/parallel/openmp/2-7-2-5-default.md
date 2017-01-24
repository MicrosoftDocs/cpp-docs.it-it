---
title: "2.7.2.5 default | Microsoft Docs"
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
ms.assetid: c856df07-705c-4ad3-9105-a268dd33e939
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.5 default
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**impostazione predefinita** la clausola consente di interesse gli attributi di condivisione di dati delle variabili.  La sintassi di **impostazione predefinita** la clausola è la seguente:  
  
```  
default(shared | none)  
```  
  
 specificare **il valore predefinito \(condiviso\)** è equivalente in modo esplicito a elencare ogni variabile attualmente visibile in  **condiviso** clausola, a meno che non venga  **threadprivate** o  **e**`t`\- qualificato.  In assenza di un oggetto esplicito **impostazione predefinita** la clausola, il comportamento predefinito è la stessa come se  **il valore predefinito \(condiviso\)** sono stati specificati.  
  
 specificare **il valore predefinito \(nessuno\)** è necessario che almeno una delle seguenti devono essere true per ogni riferimento a una variabile nell'ambito lessicale del costrutto parallelo:  
  
-   La variabile in modo esplicito è elencata in una clausola dell'attributo di condivisione di dati di un costrutto che contiene il riferimento.  
  
-   La variabile viene dichiarata nel costrutto parallelo.  
  
-   la variabile è **threadprivate**.  
  
-   La variabile è assegnato a **const**\- tipo completo.  
  
-   The variable is the loop control variable for a **for** loop that immediately follows a **for** or **parallel for** directive, and the variable reference appears inside the loop.  
  
 Specificare una variabile in un oggetto **firstprivate**,  **lastprivate**, o  **riduzione** la clausola di una direttiva inclusa causa un riferimento implicito alla variabile nel contesto di inclusione.  Tali riferimenti implicita sono soggetti ai requisiti sopra elencati.  
  
 Solo un singolo **impostazione predefinita** la clausola può essere specificata in un oggetto  **parallelo** direttiva.  
  
 L'attributo predefinito della condivisione di dati di una variabile può essere modificato tramite **privato**,  **firstprivate**,  **lastprivate**,  **riduzione**e  **condiviso** clausole, come illustrato nel seguente esempio:  
  
```  
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\  
   private(x)  private(r)  lastprivate(i)  
```