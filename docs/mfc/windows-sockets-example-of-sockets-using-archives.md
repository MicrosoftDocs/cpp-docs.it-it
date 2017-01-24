---
title: "Windows Sockets: esempio di socket che utilizzano archivi | Microsoft Docs"
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
  - "esempi [MFC], Windows Sockets"
  - "socket [C++], con archivi"
  - "Windows Sockets [C++], con archivi"
ms.assetid: 2e3c9bb2-7e7b-4f28-8dc5-6cb7a484edac
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: esempio di socket che utilizzano archivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene riportato un esempio di utilizzo della classe [CSocket](../mfc/reference/csocket-class.md).  L'esempio utilizza oggetti `CArchive` per serializzare i dati mediante una socket.  Si noti che non si tratta di serializzazione di un documento in un file o da un file.  
  
 Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere i dati tra oggetti `CSocket`.  L'esempio è progettato per fare in modo che due istanze dell'applicazione si scambino dati \(nello stesso computer o su computer diversi in rete\).  Un'istanza invia i dati che l'altra istanza riceve e riconosce.  Qualsiasi applicazione può avviare uno scambio e uno può essere utilizzato come server o come client dall'altra applicazione.  La funzione seguente è definita nella classe di visualizzazione dell'applicazione:  
  
 [!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/CPP/windows-sockets-example-of-sockets-using-archives_1.cpp)]  
  
 La cosa importante su questo esempio è che la sua struttura è parallela alla funzione MFC `Serialize`.  La funzione membro **PacketSerialize** è costituita da un'istruzione **if** con una clausola **else**.  La funzione riceve due riferimenti [CArchive](../mfc/reference/carchive-class.md) come parametri: `arData` e `arAck`.  Se l'oggetto dell'archivio `arData` è impostato per archiviare \(invio\), il branch **if** viene eseguito; in caso contrario, se `arData` è impostato per il caricamento \(ricezione\) la funzione esegue il ramo **else**.  Per ulteriori informazioni sulla serializzazione in MFC, vedere [Serializzazione](../mfc/how-to-make-a-type-safe-collection.md).  
  
> [!NOTE]
>  L'oggetto dell'archivio `arAck` si presume essere l'opposto di `arData`.  Se `arData` è impostato per inviare, `arAck` riceve, e viceversa.  
  
 Per inviare, la funzione di esempio esegue un ciclo per un numero specifico di volte, generando ogni volta dati casuali a scopo dimostrativo.  L'applicazione dovrebbe ottenere dati reali da una sorgente, ad esempio un file.  L'operatore di inserimento dell'archivio `arData` \(**\<\<**\) viene utilizzato per inviare un flusso di tre blocchi consecutivi di dati:  
  
-   Un "Intestazione" che specifica la natura dei dati \(in questo caso, verranno inviati il valore della variabile `bValue` e il numero di copie\).  
  
     Entrambi gli elementi vengono generati casualmente per questo esempio.  
  
-   Il numero specificato di copie dei dati.  
  
     Il ciclo interno **for** invia `bValue` un numero specificato di volte.  
  
-   Una stringa denominata `strText` che il ricevitore visualizzerà all'utente.  
  
 Per la ricezione, la funzione opera in modo analogo, con la differenza che utilizza l'operatore di estrazione dall'archivio \(**\>\>**\) per ottenere i dati dall'archivio.  L'applicazione di ricezione verifica i dati che riceve, visualizza il messaggio "Ricevuto" finale e quindi restituisce un messaggio "Inviato" da far visualizzare all'applicazione che invia.  
  
 In questo modello di comunicazione, la parola "Ricevuto", il messaggio inviato nella variabile `strText`, è utilizzato per la visualizzazione all'altra estremità di comunicazione, pertanto specifica all'utente di ricezione che un determinato numero di pacchetti di dati sono stati ricevuti.  Il ricevitore risponde con una stringa simile che riporta "Inviato", per la visualizzazione sullo schermo originale del mittente.  La ricezione di entrambe le stringhe che indicano l'esito positivo di comunicazione è avvenuta.  
  
> [!CAUTION]
>  Se si scrive un programma MFC client per comunicare con server consolidati \(non MFC\), non inviare oggetti C\+\+ attraverso l'archivio.  A meno che il server sia un'applicazione MFC che individua i tipi di oggetti che si desidera inviare, non sarà possibile ricevere e deserializzare gli oggetti.  Un esempio nell'articolo [Windows Sockets: Ordinamento di byte](../mfc/windows-sockets-byte-ordering.md) illustra una comunicazione di questo tipo.  
  
 Per ulteriori informazioni, vedere la specifica di Windows Sockets: **htonl**, **htons**, **ntohl**, **ntohs**.  Inoltre, per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [CArchive::IsStoring](../Topic/CArchive::IsStoring.md)   
 [CArchive::operator \<\<](../Topic/CArchive::operator%20%3C%3C.md)   
 [CArchive::operator \>\>](../Topic/CArchive::operator%20%3E%3E.md)   
 [CArchive::Flush](../Topic/CArchive::Flush.md)   
 [CObject::Serialize](../Topic/CObject::Serialize.md)