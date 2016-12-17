---
title: "Necessario un riferimento all&#39;assembly &#39;&lt;identit&#224;assembly&gt;&#39; contenente il tipo &#39;&lt;nometipo&gt;&#39;. &#200; tuttavia impossibile trovare un riferimento appropriato a causa di possibili riferimenti circolari: &lt;elencodipendenzeriferimento&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30962"
  - "vbc30962"
helpviewer_keywords: 
  - "BC30962"
ms.assetid: 6f338158-bfb4-4cc0-bbf7-1111c708613c
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Necessario un riferimento all&#39;assembly &#39;&lt;identit&#224;assembly&gt;&#39; contenente il tipo &#39;&lt;nometipo&gt;&#39;. &#200; tuttavia impossibile trovare un riferimento appropriato a causa di possibili riferimenti circolari: &lt;elencodipendenzeriferimento&gt;
In un'espressione viene usato un tipo, ad esempio una classe, una struttura, un'interfaccia, un'enumerazione o un delegato, definito all'esterno del progetto. Tuttavia, il riferimento di progetto a quell'assembly fa parte di un insieme di riferimenti circolari.  
  
 Quando diversi progetti presentano riferimenti tra loro, è possibile che si tratti di riferimenti *circolari*. Due progetti, ad esempio, possono avere riferimenti reciproci. Più in generale, una catena di riferimenti da un progetto al successivo può alla fine ritornare al progetto iniziale. In questi casi, non esiste alcun progetto finale alla fine della catena con cui risolvere il riferimento.  
  
 Per accedere a un tipo definito in un altro assembly, il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] deve avere un riferimento a quell'assembly. Deve trattarsi di un riferimento unico, non ambiguo, che non generi riferimenti circolari tra i progetti.  
  
 **ID errore:** BC30962  
  
### Per correggere l'errore  
  
-   Nelle proprietà di progetto aggiungere un riferimento diretto al progetto che genera l'assembly che definisce il tipo in uso.  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [NIB Procedura: Modificare le proprietà e le impostazioni di configurazione dei progetti](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)