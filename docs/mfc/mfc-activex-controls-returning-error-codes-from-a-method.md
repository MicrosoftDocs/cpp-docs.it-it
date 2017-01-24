---
title: "Controlli ActiveX MFC: restituzione di codici di errore da un metodo | Microsoft Docs"
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
  - "errori [C++], codici di errore dei controlli ActiveX"
  - "FireError (metodo)"
  - "GetNotSupported (metodo)"
  - "MFC (controlli ActiveX), codici di errore"
  - "SCODE, MCF (controlli ActiveX)"
  - "SetNotSupported (metodo), utilizzo"
  - "ThrowError (metodo)"
ms.assetid: 771fb9c9-2413-4dcc-b386-7bc4c4adeafd
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: restituzione di codici di errore da un metodo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come restituire i codici di errore da un metodo del controllo ActiveX.  
  
 Per indicare un errore che si è verificata in un metodo, utilizzare la funzione membro di [COleControl::ThrowError](../Topic/COleControl::ThrowError.md), che accetta `SCODE` \(codice di stato\) come parametro.  È possibile utilizzare `SCODE` predefinito o definire uno dei propri.  
  
> [!NOTE]
>  `ThrowError` deve essere utilizzato solo da mezzo di restituire un errore interno di una proprietà recupera o imposta la funzione o un metodo di automazione.  Questi sono gli unici il momento che il gestore eccezioni appropriato sarà presente nello stack.  
  
 Le funzioni di supporto disponibili per la maggior parte di `SCODE`predefinito comuni s, come [COleControl::SetNotSupported](../Topic/COleControl::SetNotSupported.md), [COleControl::GetNotSupported](../Topic/COleControl::GetNotSupported.md) e [COleControl::SetNotPermitted](../Topic/COleControl::SetNotPermitted.md).  
  
 Per un elenco di `SCODE`predefinito s e istruzioni sulla definizione di `SCODE`personalizzato s, vedere la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: Argomenti avanzati.  
  
 Per ulteriori informazioni sulle eccezioni di creazione rapporti in altre aree del codice, vedere [COleControl::FireError](../Topic/COleControl::FireError.md) e la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: Argomenti avanzati.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)