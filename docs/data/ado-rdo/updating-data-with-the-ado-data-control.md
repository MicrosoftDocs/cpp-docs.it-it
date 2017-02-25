---
title: "Aggiornamento dei dati con il controllo dati ADO | Microsoft Docs"
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
  - "ADO [C++], associazione dati"
  - "ADO [C++], controlli dati"
ms.assetid: 8bec34b9-93dd-4872-b023-55ac011ccff5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Aggiornamento dei dati con il controllo dati ADO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I dati dei controlli dati ADO possono essere sia in sola lettura che modificabili.  
  
### Per creare un'applicazione con modifica dei dati mediante il controllo dati ADO  
  
1.  Impostare la proprietà **CursorLocation** del controllo dati ADO.  Le opzioni sono le seguenti:  
  
    -   Lato server  
  
    -   Lato client  
  
2.  Impostare la proprietà **LockType** del controllo dati ADO.  È consigliabile selezionare la concorrenza ottimistica.  
  
3.  Impostare la proprietà **CursorType** del controllo dati ADO.  Le opzioni sono le seguenti:  
  
    -   Keyset Cursor  
  
    -   Dynamic Cursor  
  
    -   Static Cursor  
  
     Assicurarsi che il provider OLE DB supporti l'opzione scelta.  
  
4.  Impostare le proprietà del controllo associato a dati, come necessario, per consentire gli aggiornamenti.  Tenere presente che alcuni controlli non consentono gli aggiornamenti.  
  
 Per ulteriori informazioni su queste proprietà, vedere la documentazione ADO.  
  
## Vedere anche  
 [Associazione dati ADO](../../data/ado-rdo/ado-databinding.md)   
 [Utilizzo dell'associazione dati ADO in Visual C\+\+](../../data/ado-rdo/using-ado-databinding-in-visual-cpp.md)