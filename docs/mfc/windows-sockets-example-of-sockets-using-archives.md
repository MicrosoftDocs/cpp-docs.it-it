---
title: 'Windows Sockets: Esempio di socket che utilizzano archivi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- sockets [MFC], with archives
- examples [MFC], Windows Sockets
- Windows Sockets [MFC], with archives
ms.assetid: 2e3c9bb2-7e7b-4f28-8dc5-6cb7a484edac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02cd74a20f0ccc54a366c1a62d913ee30e72471a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="windows-sockets-example-of-sockets-using-archives"></a>Windows Sockets: esempio di socket che utilizzano archivi
In questo articolo viene presentato un esempio dell'utilizzo classe [CSocket](../mfc/reference/csocket-class.md). L'esempio utilizza `CArchive` oggetti da serializzare i dati tramite un socket. Si noti che questo non è la serializzazione di documenti a o da un file.  
  
 Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere dati tramite `CSocket` oggetti. L'esempio è progettato in modo che due istanze dell'applicazione (nello stesso computer o in computer diversi sulla rete) scambiano di dati. Un'istanza invia dati, che l'altra istanza riceve e invia un acknowledgement. Entrambe le applicazioni possono avviare uno scambio e una agisce come server o client per l'altra applicazione. La funzione seguente viene definita nella classe di visualizzazione dell'applicazione:  
  
 [!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/cpp/windows-sockets-example-of-sockets-using-archives_1.cpp)]  
  
 L'aspetto più importante di questo esempio è che la struttura è paragonabile a quella di MFC `Serialize` (funzione). Il **PacketSerialize** funzione membro è costituito da un **se** istruzione con un **else** clausola. La funzione riceve due [CArchive](../mfc/reference/carchive-class.md) riferimenti come parametri: `arData` e `arAck`. Se il `arData` oggetto archivio è impostato per l'archiviazione (trasmissione), il **se** ramo esegue; in caso contrario, se `arData` è impostato per il caricamento (ricezione) la funzione accetta il **else** ramo. Per ulteriori informazioni sulla serializzazione in MFC, vedere [serializzazione](../mfc/how-to-make-a-type-safe-collection.md).  
  
> [!NOTE]
>  Il `arAck` oggetto archivio si presuppone che sia l'opposto di `arData`. Se `arData` è per l'invio, `arAck` riceve, ed è vero il contrario.  
  
 Per l'invio, la funzione di esempio esegue il ciclo per un numero specificato di volte, ogni volta che la generazione di alcuni dati casuali per scopi dimostrativi. L'applicazione ottenuti da un'origine, ad esempio un file di dati reali. Il `arData` l'operatore di inserimento dell'archivio (**<<**) viene utilizzato per inviare un flusso di tre consecutivi blocchi di dati:  
  
-   "header" che specifica il tipo di dati (in questo caso, il valore di `bValue` variabile e il numero di copie verrà inviato).  
  
     Entrambi gli elementi vengono generati in modo casuale per questo esempio.  
  
-   Il numero specificato di copie dei dati.  
  
     Interna **per** ciclo Invia `bValue` il numero di volte specificato.  
  
-   Una stringa denominata `strText` che il destinatario visualizza all'utente.  
  
 Per la ricezione, viene applicata la funzione in modo analogo, ad eccezione del fatto che usa l'operatore di estrazione dell'archivio (**>>**) per ottenere i dati dall'archivio. L'applicazione ricevente verifica i dati riceve, viene visualizzato il messaggio "Ricevuto" finale e quindi invia il messaggio "Inviato" per l'applicazione di invio da visualizzare.  
  
 In questo modello di comunicazione, la parola "Ricevuto", il messaggio inviato il `strText` variabile sia per la visualizzazione a altra estremità della comunicazione, in modo all'utente di destinazione specifica che un determinato numero di pacchetti di dati sono stati ricevuti. Il destinatario risponde con una stringa simile che afferma "Invio", per la visualizzazione sullo schermo del mittente originale. Ricezione di entrambe le stringhe indica che si è verificata la corretta comunicazione.  
  
> [!CAUTION]
>  Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server è un'applicazione MFC che individua i tipi di oggetti che si desidera inviare, non sarà in grado di ricevere e deserializzare gli oggetti. Un esempio nell'articolo [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md) Mostra una comunicazione di questo tipo.  
  
 Per ulteriori informazioni, vedere la specifica Windows Sockets: **htonl**, **htons**, **ntohl**, **ntohs**. Per ulteriori informazioni, vedere anche:  
  
-   [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [CArchive::IsStoring](../mfc/reference/carchive-class.md#isstoring)   
 [CArchive::operator <<](../mfc/reference/carchive-class.md#operator_lt_lt)   
 [CArchive::operator >>](../mfc/reference/carchive-class.md#operator_lt_lt)   
 [CArchive::Flush](../mfc/reference/carchive-class.md#flush)   
 [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)

