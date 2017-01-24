---
title: "Gerarchie di classi basi virtuali | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], classi base virtuali"
  - "gerarchie di classi, classi base virtuali"
  - "classi derivate, considerazioni sulla gerarchia di classi"
  - "funzioni virtuali, in gerarchie di classi base virtuali"
  - "classi base virtuali"
  - "classi base virtuali, le gerarchie"
  - "gerarchie di classe base virtuale,"
ms.assetid: d24fda17-f829-48d6-84ec-8100f26bc5cf
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Gerarchie di classi basi virtuali
Alcune gerarchie di classi sono ampie ma hanno molte cose in comune. Il codice comune viene implementato in una classe base, mentre il codice specifico è presente nelle classi derivate.  
  
 Per le classi base è importante stabilire un protocollo con cui le classi derivate possono ottenere la massima funzionalità. Questi protocolli vengono implementati comunemente utilizzando funzioni virtuali. La classe base fornisce, talvolta, un'implementazione predefinita per tali funzioni. In una gerarchia di classi quali la gerarchia `Document` nella figura Esempio di grafico aciclico diretto \(vedere [Ereditarietà singola](../cpp/single-inheritance.md)\), due funzioni utili sono `Identify` e `WhereIs`.  
  
 Una volta chiamata, la funzione `Identify` restituisce un'identificazione corretta, appropriate al tipo di documento: per `Book`, una chiamata di funzione come `doc->Identify()` deve restituire il numero ISBN; tuttavia, per `HelpFile`, un nome del prodotto e un numero di revisione sono probabilmente più appropriati. Analogamente, `WhereIs` deve restituire una riga e uno scaffale per `Book`, ma per `HelpFile` deve restituire un percorso su disco \- forse una directory e un nome file.  
  
 È importante che tutte le implementazioni delle funzioni `Identify` e `WhereIs` restituiscano lo stesso tipo di informazioni. In questo caso, una stringa di caratteri è appropriata.  
  
 Queste funzioni vengono implementate come funzioni virtuali e quindi vengono richiamate utilizzando un puntatore a una classe base. L'associazione al codice effettivo si verifica in fase di esecuzione, selezionando la funzione `Identify` o `WhereIs` corretta.  
  
## Vedere anche  
 [Cenni preliminari sulle classi derivate](../misc/overview-of-derived-classes.md)