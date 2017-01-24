---
title: "Costruzione di oggetti in una e due fasi | Microsoft Docs"
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
  - "creazione di oggetti, oggetti grafici"
  - "oggetti [C++], creazione di oggetti grafici"
  - "oggetti [C++], oggetti grafici"
  - "costruzione di oggetti in una e due fasi"
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruzione di oggetti in una e due fasi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile scegliere tra due tecniche per creare oggetti grafici, quali penne e pennelli:  
  
-   *Costruzione a uno stadio*: Creare e inizializzare l'oggetto in una fase, ogni volta con il costruttore.  
  
-   *Costruzione in due fasi*: Creare e inizializzare l'oggetto in due fasi separate.  Il costruttore crea l'oggetto e una funzione di inizializzazione viene inizializzato.  
  
 La costruzione a due livelli è sempre più sicuro.  Nella costruzione a uno stadio, il costruttore potrebbe generare un'eccezione se si specificano argomenti non corretti o l'esito negativo di allocazione della memoria.  Il problema è possibile evitare dalla costruzione a due livelli, sebbene sia necessario verificare la presenza di errore.  In entrambi i casi, eliminare l'oggetto è dello stesso processo.  
  
> [!NOTE]
>  Queste tecniche sono valide per creare tutti gli oggetti, non solo gli oggetti grafici.  
  
## Esempio di entrambe le tecniche di costruzione  
 Il seguente esempio mostra breve entrambi i metodi di creazione dell'oggetto Pen:  
  
 [!code-cpp[NVC_MFCDocViewSDI#6](../mfc/codesnippet/CPP/one-stage-and-two-stage-construction-of-objects_1.cpp)]  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
-   [Selezionare un oggetto grafico in un contesto di dispositivo](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Contesti di periferica](../mfc/device-contexts.md)  
  
-   [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md)  
  
## Vedere anche  
 [Oggetti grafici](../mfc/graphic-objects.md)