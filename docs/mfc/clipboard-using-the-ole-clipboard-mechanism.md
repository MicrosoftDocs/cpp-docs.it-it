---
title: "Appunti: utilizzo del meccanismo degli Appunti OLE | Microsoft Docs"
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
  - "applicazioni [OLE], Appunti"
  - "Appunti [C++], formati OLE"
  - "formati [C++], Appunti per OLE"
  - "Appunti OLE"
  - "Appunti OLE, formati"
ms.assetid: 229cc610-5bb1-435e-bd20-2c8b9964d1af
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Appunti: utilizzo del meccanismo degli Appunti OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

OLE fa uso di formati standard ed alcuni formati OLE specifici per trasferire dati dagli Appunti.  
  
 Quando si taglia o copia un dato da un'applicazione, il dato viene archiviato negli Appunti per essere utilizzato più avanti nelle operazioni Incolla.  Questi dati sono in diversi formati.  Quando un utente sceglie di incollare un dato dagli Appunti, l'applicazione può stabilire quali di questi formati utilizzare.  L'applicazione deve essere scritta per scegliere il formato che fornisce la maggior parte delle informazioni, a meno che l'utente non richieda specificamente un determinato formato, utilizzando Incolla speciale.  Prima di procedere, è possibile leggere gli argomenti di [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md).  Descrivono i concetti fondamentali di funzionamento dei trasferimenti di dati e di come implementarli nelle applicazioni.  
  
 Windows definisce numerosi formati standard che possono essere utilizzati per trasferire i dati dagli Appunti.  Questi includono metafile, testo, bitmap e altri.  OLE definisce anche numerosi formati specifici OLE.  Per le applicazioni che necessitano di maggiori dettagli di quelli forniti da questi formati standard, è consigliabile registrare i rispettivi formati degli Appunti personalizzati.  Utilizzare la funzione [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) dell'API Win32 per questo scopo.  
  
 Ad esempio, Microsoft Excel registra un formato personalizzato per i fogli di calcolo.  Questo formato racchiude molta più informazione rispetto, ad esempio, ad una bitmap.  Quando questi dati vengono inseriti in un'applicazione che supporta il formato foglio di calcolo, tutte le formule e valori del foglio di calcolo vengono mantenuti e possono essere aggiornati se necessario.  Microsoft Excel inserisce anch'esso i dati negli Appunti in più formati in modo da poterli incollare come elemento OLE.  Tutti i contenitori OLE di documento possono incollare queste informazioni come elemento incorporato.  Questo elemento incorporato può essere modificato utilizzando Microsoft Excel.  Gli Appunti contengono inoltre una semplice bitmap dell'immagine dell'intervallo selezionato nel foglio di calcolo.  Ciò può essere incollato nei contenitori OLE di documento o negli editor di immagini bitmap, come Paint.  Nel caso di una bitmap, tuttavia, non è possibile modificare i dati come un foglio di calcolo.  
  
 Per recuperare la massima quantità di informazioni dagli Appunti, le applicazioni devono controllare questi formati personalizzati prima di incollare i dati dagli Appunti.  
  
 Ad esempio, per attivare il comando Taglia, è possibile scrivere un gestore simile al seguente:  
  
 [!code-cpp[NVC_MFCListView#3](../mfc/codesnippet/CPP/clipboard-using-the-ole-clipboard-mechanism_1.cpp)]  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Copia e Incolla di dati](../mfc/clipboard-copying-and-pasting-data.md)  
  
-   [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)  
  
-   [Utilizzare gli Appunti di Windows](../mfc/clipboard-using-the-windows-clipboard.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
-   [Oggetti dati OLE e origine dati OLE e trasferimento dei dati uniforme](../mfc/data-objects-and-data-sources-ole.md)  
  
## Vedere anche  
 [Appunti](../mfc/clipboard.md)