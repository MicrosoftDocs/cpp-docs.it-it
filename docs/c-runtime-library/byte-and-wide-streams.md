---
title: "Flussi di byte e &quot;wide&quot; | Microsoft Docs"
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
  - "Byte and Wide Streams"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "flussi di byte"
  - "flussi wide"
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Flussi di byte e &quot;wide&quot;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un flusso di byte considera un file come sequenza di byte.  Nel programma, il flusso è identico ad una sequenza di byte.  
  
 Al contrario, un ampio flusso gestisce un file come una sequenza di caratteri multibyte generalizzata, che possono includere una vasta gamma di regole di codifica. \(I file di testo e i file binari verranno letti e scritti come descritto in precedenza.\) Nel programma, il flusso corrisponde alla sequenza di caratteri wide.  Le conversioni tra le due rappresentazioni si verificano all'interno della libreria Standard C.  Le regole di conversione possono, teoricamente, essere alterate da una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) che altera la categoria `LC_CTYPE`.  Ogni flusso determina le regole di conversione quando diventa orientato ai caratteri wide e mantiene queste regole anche se la categoria `LC_CTYPE` si modifica successivamente.  
  
 Il posizionamento all'interno del flusso wide subisce le stesse limitazioni relative ai flussi di testo.  Inoltre, l'indicatore di posizione del file potrebbe gestire una codifica dipendente dagli stati.  In genere, include sia un offset di byte nel flusso che un oggetto di tipo `mbstate_t`.  Pertanto, l'unico modo più affidabile per ottenere la posizione di un file all'interno del flusso è chiamando [fgetpos](../c-runtime-library/reference/fgetpos.md) e l'unico modo affidabile per ripristinare una posizione ottenuta con questa modalità è chiamando [fsetpos](../c-runtime-library/reference/fsetpos.md).  
  
## Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)