---
title: "Classi di archiviazione C | Microsoft Docs"
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
  - "durata, variabili"
  - "identificatori, classe di archiviazione"
  - "variabili statiche, durata"
  - "identificatori di classi di archiviazione, classi di archiviazione C"
  - "classi di archiviazione"
  - "durata di archiviazione"
ms.assetid: 893fb929-f7a9-43dc-a0b3-29cb1ef845c1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classi di archiviazione C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La "classe di archiviazione" della variabile determina se l'elemento dispone di una durata "globale" o "locale".  C chiama queste due durate "statica" e "automatica". Un elemento con una durata globale esiste già e mantiene lo stesso valore nel corso dell'esecuzione del programma.  Tutte le funzioni hanno durate globali.  
  
 Alle variabili automatiche o alle variabili con durate locali viene allocato un nuovo spazio di archiviazione ogni volta in cui il controllo dell'esecuzione passa nel blocco nel quale vengono definite.  Al termine dell'esecuzione, le variabili non hanno più valori significativi.  
  
 C fornisce i seguenti identificatori della classe di archiviazione:  
  
## Sintassi  
 *storage\-class\-specifier*:  
 **auto**  
  
 **register**  
  
 **static**  
  
 **extern**  
  
 **typedef**  
  
 **\_\_declspec** \( *extended\-decl\-modifier\-seq* \) \/\* Specifico di Microsoft \*\/  
  
 Ad eccezione di `__declspec`, in una dichiarazione è possibile utilizzare un solo*storage\-class\-specifier* in *declaration\-specifier*.  Se non viene creata alcuna specifica della classe di archiviazione, le dichiarazioni all'interno di un blocco creano oggetti automatici.  
  
 Gli elementi dichiarati con l'identificatore **auto** o **register** hanno durate locali.  Gli elementi dichiarati con l'identificatore **static** o `extern` hanno durate globali.  
  
 Poiché `typedef` e `__declspec` sono semanticamente diversi dagli altri quattro terminali *storage\-class\-specifier*, vengono descritti separatamente.  Per informazioni specifiche su `typedef`, vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).  Per informazioni specifiche su `__declspec`, vedere [Attributi estesi della classe di archiviazione](../c-language/c-extended-storage-class-attributes.md).  
  
 La posizione delle dichiarazioni di funzione e di variabile nei file di origine influisce anche sulla classe di archiviazione e sulla visibilità.  Le dichiarazioni all'esterno di tutte le definizioni di funzione vengono visualizzate a livello "esterno". Le dichiarazioni all'interno delle definizioni di funzione vengono visualizzate a "livello interno".  
  
 Il significato esatto di ogni identificatore della classe di archiviazione dipende da due fattori:  
  
-   Se la dichiarazione viene visualizzata a livello interno o esterno  
  
-   Se l'elemento dichiarato è una variabile o una funzione  
  
 Gli [identificatori della classe di archiviazione per le dichiarazioni a livello esterno](../c-language/storage-class-specifiers-for-external-level-declarations.md) e gli [identificatori della classe di archiviazione per le dichiarazioni a livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md) descrivono i terminali *storage\-class\-specifier* in ogni tipo di dichiarazione e illustrano il comportamento predefinito quando *storage\-class\-specifier* viene omesso da una variabile.  In [Identificatori della classe di archiviazione con dichiarazioni di funzione](../c-language/storage-class-specifiers-with-function-declarations.md) vengono descritti gli identificatori della classe di archiviazione utilizzati con le funzioni.  
  
## Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)