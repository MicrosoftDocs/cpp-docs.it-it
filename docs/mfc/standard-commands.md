---
title: "Comandi standard | Microsoft Docs"
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
  - "ID di comando, comandi standard"
  - "comandi [C++], standard"
  - "comandi standard del menu Modifica"
  - "File (menu)"
  - "Guida, menu"
  - "identificatori [C++], ID di comando"
  - "comandi OLE"
  - "ID definiti dal programmatore [C++]"
  - "ID comandi standard"
  - "comandi standard"
  - "comandi del menu Visualizza"
  - "comandi del menu Finestra"
ms.assetid: 88cf3ab4-79b3-4ac6-9365-8ac561036fbf
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Comandi standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il framework definisce molti messaggi di comando standard.  Gli ID per i controlli in genere hanno il formato:  
  
 **ID\_** *Source\_Item*  
  
 quando l'origine è in genere un nome del menu e *un elemento* è una voce di menu.  Ad esempio, l'id di comando per il comando nuovo dal menu File è `ID_FILE_NEW`.  Gli ID di comando standard vengono visualizzati in grassetto nella documentazione.  Gli ID definiti dal programmatore vengono visualizzati con un carattere diverso dal testo circostante.  
  
 Di seguito viene fornito un elenco di alcuni controlli più importanti di supporto:  
  
 *Comandi del menu File*  
 Nuovo, apri, Close, salva, salva con nome, imposta pagina, print setup, stampa, anteprima di stampa, uscire e file utilizzati di recente.  
  
 *Comandi del menu Modifica*  
 Deselezionare, cancella tutto, copiare, tagliare, find, incolla, ripetizione, di sostituzione, selezionare tutti, annulla e si ripete.  
  
 *Comandi del menu Visualizza*  
 Barra degli strumenti e barra di stato.  
  
 *Comandi del menu Finestra*  
 Nuovo, ovvero, sovrapporre, affiancare in orizzontale, in verticale della sezione e la divisione.  
  
 *Comandi del menu ?*  
 Indicizzi, utilizzando guida e about.  
  
 *Controlli OLE \(menu Modifica\)*  
 Nuovo oggetto inserisci, collegamenti di modifiche, collegamento incolla, paste special e l'oggetto *typename* \(controlli del verbo\).  
  
 Il framework fornirà i livelli di supporto variant per questi controlli.  Alcuni controlli sono supportati solo come ID di comandi definiti, mentre altri sono supportati con implementazioni approfondite.  Ad esempio, il framework implementa il comando apri dal menu File creando un oggetto del nuovo documento, verrà visualizzata una finestra di dialogo apri e l'apertura e la lettura del file.  Al contrario, è necessario implementare i comandi del menu Modifica manualmente, poiché i controlli come **ID\_EDIT\_COPY** dipendono dalla natura dei dati di origine.  
  
 Per ulteriori informazioni sui controlli supportati e il livello di implementazione fornito, vedere [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md).  I controlli standard sono definiti nel file. AFXRES.H.  
  
## Vedere anche  
 [Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)