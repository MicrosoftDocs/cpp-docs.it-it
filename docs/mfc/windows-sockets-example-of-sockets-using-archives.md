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
ms.openlocfilehash: 942c3e8aa2aeccefc9c92cd9fd32d453dc5353cf
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956424"
---
# <a name="windows-sockets-example-of-sockets-using-archives"></a>Windows Sockets: esempio di socket che utilizzano archivi
In questo articolo viene presentato un esempio dell'utilizzo di classe [CSocket](../mfc/reference/csocket-class.md). L'esempio impiega `CArchive` oggetti da serializzare i dati tramite un socket. Si noti che non si tratta la serializzazione di documenti a o da un file.  
  
 Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere dati tramite `CSocket` oggetti. L'esempio è progettato in modo che due istanze dell'applicazione (nello stesso computer o in computer diversi sulla rete) lo scambio di dati. Un'istanza invia dati, che l'altra istanza riceve e invia un acknowledgement. Delle due applicazioni può avviare uno scambio e uno può fungere da server oppure da client a altra applicazione. La funzione seguente viene definita nella classe di visualizzazione dell'applicazione:  
  
 [!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/cpp/windows-sockets-example-of-sockets-using-archives_1.cpp)]  
  
 L'aspetto più importante di questo esempio è che la struttura è paragonabile a quella di MFC `Serialize` (funzione). Il `PacketSerialize` funzione membro è costituito da un **se** istruzione con un **else** clausola. La funzione riceve due [CArchive](../mfc/reference/carchive-class.md) riferimenti come parametri: *arData* e *arAck*. Se il *arData* oggetto archivio è impostato per l'archiviazione (trasmissione), la **se** ramo esegue; in caso contrario, se *arData* è impostato per il caricamento (ricezione) la funzione accetta il **else** ramo. Per ulteriori informazioni sulla serializzazione in MFC, vedere [serializzazione](../mfc/how-to-make-a-type-safe-collection.md).  
  
> [!NOTE]
>  Il *arAck* oggetto archivio si presuppone che sia l'opposto del *arData*. Se *arData* è per l'invio, *arAck* riceve, senza che sia vero il contrario true.  
  
 Per l'invio, la funzione di esempio esegue il ciclo per un numero specificato di volte, ogni volta che la generazione di alcuni dati casuali a scopo dimostrativo. L'applicazione verrebbe ottenere dati reali da un'origine, ad esempio un file. Il *arData* operatore di inserimento dell'archivio (**<<**) viene usato per inviare un flusso di tre blocchi consecutivi di dati:  
  
-   Un "header" che specifica la natura dei dati (in questo caso, il valore della *bValue* variabile e il numero di copie verrà inviato).  
  
     Entrambi gli elementi vengono generati in modo casuale per questo esempio.  
  
-   Il numero specificato di copie dei dati.  
  
     Interna **per** ciclo Invia *bValue* il numero di volte specificato.  
  
-   Una stringa denominata *strText* che il destinatario viene visualizzato all'utente.  
  
 Per la ricezione, viene applicata la funzione in modo analogo, ad eccezione del fatto che viene utilizzato l'operatore di estrazione dell'archivio (**>>**) per ottenere dati dall'archivio. L'applicazione ricevente verifica che i dati riceve, viene visualizzato il messaggio "Ricevuto" finale e invia un messaggio che segnala "Inviato" per l'applicazione di invio visualizzare.  
  
 In questo modello di comunicazione, la parola "Ricevuto", il messaggio inviato nella *strText* variabile sia per la visualizzazione a altra estremità della comunicazione, pertanto specifica per l'utente ricevente che un determinato numero di pacchetti di dati siano stati ricevuto. Il destinatario risponde con una stringa simile che afferma "Invio", per la visualizzazione sullo schermo del mittente originale. Ricezione di entrambe le stringhe indica che si è verificata la corretta comunicazione.  
  
> [!CAUTION]
>  Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server è un'applicazione MFC che individua i tipi di oggetti da inviare, non sarà in grado di ricevere e deserializzare gli oggetti. Un esempio nell'articolo [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md) Mostra una comunicazione di questo tipo.  
  
 Per altre informazioni, vedere la specifica Windows Sockets: **htonl**, **htons**, **ntohl**, **ntohs**. Per altre informazioni, vedere anche:  
  
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

