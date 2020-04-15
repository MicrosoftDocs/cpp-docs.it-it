---
title: 'Windows Sockets: esempio di socket che utilizzano archivi'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], with archives
- examples [MFC], Windows Sockets
- Windows Sockets [MFC], with archives
ms.assetid: 2e3c9bb2-7e7b-4f28-8dc5-6cb7a484edac
ms.openlocfilehash: 253a65430ae230fbc4deeb9bd5288f28237310d2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371083"
---
# <a name="windows-sockets-example-of-sockets-using-archives"></a>Windows Sockets: esempio di socket che utilizzano archivi

In questo articolo viene illustrato un esempio di utilizzo della classe [CSocket](../mfc/reference/csocket-class.md). Nell'esempio `CArchive` vengono impiegati oggetti per serializzare i dati tramite un socket. Si noti che non si tratta di serializzazione di documenti da o verso un file.

Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere dati tramite `CSocket` oggetti. L'esempio è progettato in modo che due istanze dell'applicazione (nello stesso computer o su computer diversi in rete) si scambino dati. Un'istanza invia i dati, che l'altra istanza riceve e riconosce. Entrambe le applicazioni possono avviare uno scambio e possono fungere da server o come client per l'altra applicazione. La funzione seguente è definita nella classe di visualizzazione dell'applicazione:The following function is defined in the application's view class:

[!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/cpp/windows-sockets-example-of-sockets-using-archives_1.cpp)]

La cosa più importante di questo esempio è che `Serialize` la sua struttura è parallela a quella di una funzione MFC. La `PacketSerialize` funzione membro è costituita da **un'istruzione if** con una clausola **else.** La funzione riceve due riferimenti [CArchive](../mfc/reference/carchive-class.md) come parametri: *arData* e *arAck*. Se l'oggetto archivio *arData* è impostato per l'archiviazione (invio), viene eseguito il ramo **if;** in caso contrario, se *arData* è impostato per il caricamento (ricezione) la funzione accetta il ramo **else.** Per ulteriori informazioni sulla serializzazione in MFC, vedere [Serializzazione](../mfc/how-to-make-a-type-safe-collection.md).

> [!NOTE]
> Si presuppone che l'oggetto archivio *arAck* sia l'opposto di *arData*. Se *arData* è per l'invio, *arAck* riceve e il contrario è true.

Per l'invio, la funzione di esempio esegue cicli per un numero specificato di volte, generando ogni volta alcuni dati casuali a scopo dimostrativo. L'applicazione otterrebbe dati reali da un'origine, ad esempio un file. L'operatore di inserimento**<<** dell'archivio *arData* ( ) viene utilizzato per inviare un flusso di tre blocchi consecutivi di dati:

- Una "intestazione" che specifica la natura dei dati (in questo caso, il valore della variabile *bValue* e il numero di copie che verranno inviate).

   Entrambi gli elementi vengono generati in modo casuale per questo esempio.

- Numero specificato di copie dei dati.

   Il ciclo **for** interno invia *bValue* il numero di volte specificato.

- Una stringa denominata *strText* che il ricevitore visualizza all'utente.

Per la ricezione, la funzione funziona in modo simile, ad**>>** eccezione del fatto che utilizza l'operatore di estrazione dell'archivio ( ) per ottenere i dati dall'archivio. L'applicazione ricevente verifica i dati ricevuti, visualizza il messaggio finale "Ricevuto" e quindi restituisce un messaggio che dice "Inviato" per l'applicazione mittente da visualizzare.

In questo modello di comunicazione, la parola "Received", il messaggio inviato nella variabile *strText,* è per la visualizzazione all'altra estremità della comunicazione, pertanto specifica all'utente ricevente che è stato ricevuto un certo numero di pacchetti di dati. Il destinatario risponde con una stringa simile che dice "Inviato", per la visualizzazione sullo schermo del mittente originale. La ricezione di entrambe le stringhe indica che la comunicazione è stata eseguita correttamente.

> [!CAUTION]
> Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server non sia un'applicazione MFC che riconosce i tipi di oggetti che si desidera inviare, non sarà in grado di ricevere e deserializzare gli oggetti. Un esempio nell'articolo [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md) mostra una comunicazione di questo tipo.

Per ulteriori informazioni, vedere Windows Sockets Specification: **htonl**, **htons**, **ntohl**, **ntohs**. Inoltre, per ulteriori informazioni, vedere:

- [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CArchive::IsStoring](../mfc/reference/carchive-class.md#isstoring)<br/>
[CArchive::operator <<](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[CArchive::operator >>](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[CArchive::Flush](../mfc/reference/carchive-class.md#flush)<br/>
[Oggetto CObject::Serialize](../mfc/reference/cobject-class.md#serialize)
