---
title: 'Windows Sockets: esempio di socket che utilizzano archivi'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], with archives
- examples [MFC], Windows Sockets
- Windows Sockets [MFC], with archives
ms.assetid: 2e3c9bb2-7e7b-4f28-8dc5-6cb7a484edac
ms.openlocfilehash: 275a6c274648225fedcec9d42c280f77af68158e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226776"
---
# <a name="windows-sockets-example-of-sockets-using-archives"></a>Windows Sockets: esempio di socket che utilizzano archivi

Questo articolo presenta un esempio dell'uso della classe [CSocket](../mfc/reference/csocket-class.md). L'esempio usa `CArchive` oggetti per serializzare i dati tramite un socket. Si noti che non si tratta della serializzazione dei documenti da o verso un file.

Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere dati tramite `CSocket` oggetti. L'esempio è progettato in modo che due istanze dell'applicazione, nello stesso computer o in computer diversi sulla rete, scambino dati. Un'istanza invia i dati che l'altra istanza riceve e riconosce. Entrambe le applicazioni possono avviare uno scambio e possono fungere da server o come client per l'altra applicazione. La funzione seguente è definita nella classe di visualizzazione dell'applicazione:

[!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/cpp/windows-sockets-example-of-sockets-using-archives_1.cpp)]

L'aspetto più importante di questo esempio è che la struttura è parallela a quella di una `Serialize` funzione MFC. La `PacketSerialize` funzione membro è costituita da un' **`if`** istruzione con una **`else`** clausola. La funzione riceve due riferimenti [CArchive](../mfc/reference/carchive-class.md) come parametri: *arData* e *arAck*. Se l'oggetto archivio *arData* è impostato per l'archiviazione (invio), il **`if`** ramo viene eseguito; in caso contrario, se *arData* è impostato per il caricamento (ricezione) la funzione accetta il **`else`** ramo. Per ulteriori informazioni sulla serializzazione in MFC, vedere [serializzazione](../mfc/how-to-make-a-type-safe-collection.md).

> [!NOTE]
> Si presuppone che l'oggetto archivio *arAck* sia l'opposto di *arData*. Se *arData* è per l'invio, *arAck* riceve e l'oggetto Converse è true.

Per l'invio, la funzione di esempio esegue il ciclo per un numero specificato di volte, ogni volta che si generano dati casuali a scopo dimostrativo. L'applicazione otterrebbe dati reali da un'origine, ad esempio un file. L'operatore di inserimento dell'archivio *arData* ( **<<** ) viene usato per inviare un flusso di tre blocchi consecutivi di dati:

- "Header" che specifica la natura dei dati (in questo caso, il valore della variabile *bValue* e il numero di copie che verranno inviate).

   Entrambi gli elementi vengono generati in modo casuale per questo esempio.

- Numero di copie dei dati specificato.

   Il **`for`** ciclo interno invia *bValue* per il numero di volte specificato.

- Stringa denominata *strText* che il ricevitore Visualizza all'utente.

Per la ricezione, la funzione funziona in modo analogo, ad eccezione del fatto che usa l'operatore di estrazione dell'archivio ( **>>** ) per ottenere i dati dall'archivio. L'applicazione ricevente verifica i dati ricevuti, Visualizza il messaggio "Received" finale e quindi Invia un messaggio che indica "sent" per visualizzare l'applicazione mittente.

In questo modello di comunicazione, la parola "Received", il messaggio inviato nella variabile *strText* , viene visualizzata nell'altra estremità della comunicazione, quindi specifica all'utente ricevente che è stato ricevuto un certo numero di pacchetti di dati. Il ricevitore risponde con una stringa simile che indica "sent", per la visualizzazione nella schermata del mittente originale. La ricezione di entrambe le stringhe indica che si è verificata una comunicazione riuscita.

> [!CAUTION]
> Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server non sia un'applicazione MFC che comprende i tipi di oggetti che si desidera inviare, non sarà in grado di ricevere e deserializzare gli oggetti. Un esempio nell'articolo [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md) Mostra una comunicazione di questo tipo.

Per ulteriori informazioni, vedere la specifica di Windows Sockets: **htonl**, **htons**, **ntohl**, **ntohs**. Per ulteriori informazioni, vedere anche:

- [Windows Sockets: derivazione da classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CArchive:: l'archiviazione](../mfc/reference/carchive-class.md#isstoring)<br/>
[ <<CArchive:: operator](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[ >>CArchive:: operator](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[CArchive:: Flush](../mfc/reference/carchive-class.md#flush)<br/>
[CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)
