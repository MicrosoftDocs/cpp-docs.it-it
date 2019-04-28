---
title: 'Windows Sockets: Esempio di socket che utilizzano archivi'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], with archives
- examples [MFC], Windows Sockets
- Windows Sockets [MFC], with archives
ms.assetid: 2e3c9bb2-7e7b-4f28-8dc5-6cb7a484edac
ms.openlocfilehash: 4ea1e2911b156066360da09993fa7302db79f12b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62305294"
---
# <a name="windows-sockets-example-of-sockets-using-archives"></a>Windows Sockets: Esempio di socket che utilizzano archivi

Questo articolo viene presentato un esempio dell'uso di classi [CSocket](../mfc/reference/csocket-class.md). L'esempio Usa `CArchive` oggetti da serializzare i dati tramite un socket. Si noti che non si tratta di serializzazione di documenti a o da un file.

Nell'esempio seguente viene illustrato come utilizzare l'archivio per inviare e ricevere dati tramite `CSocket` oggetti. L'esempio è progettato in modo che due istanze dell'applicazione (nello stesso computer o in computer diversi nella rete) lo scambio di dati. Un'istanza di Invia dati, che di altra istanza riceve e invia un acknowledgement. Entrambe le applicazioni possono avviare uno scambio e uno può agire come server o client per l'altra applicazione. La funzione seguente viene definita nella classe di visualizzazione dell'applicazione:

[!code-cpp[NVC_MFCSimpleSocket#1](../mfc/codesnippet/cpp/windows-sockets-example-of-sockets-using-archives_1.cpp)]

L'aspetto più importante in questo esempio è che la struttura è paragonabile a quella di un MFC `Serialize` (funzione). Il `PacketSerialize` funzione membro è costituito da un **se** istruzione con un **else** clausola. La funzione riceve due [CArchive](../mfc/reference/carchive-class.md) riferimenti come parametri: *arData* e *arAck*. Se il *arData* oggetto archivio è impostato per l'archiviazione (trasmissione), il **se** ramo viene eseguito; in caso contrario, se *arData* è impostato per il caricamento (ricezione) la funzione accetta il **else** ramo. Per altre informazioni sulla serializzazione in MFC, vedere [serializzazione](../mfc/how-to-make-a-type-safe-collection.md).

> [!NOTE]
>  Il *arAck* oggetto archivio viene considerato l'opposto del *arData*. Se *arData* per l'invio, viene *arAck* riceve, e l'opposto è true.

Per l'invio, la funzione di esempio esegue il ciclo per un numero specificato di volte, ogni volta che la generazione di alcuni dati casuali per scopi dimostrativi. L'applicazione ottenuti da un'origine, ad esempio un file di dati reali. Il *arData* l'operatore di inserimento dell'archivio (**<<**) viene usato per inviare un flusso di tre blocchi consecutivi di dati:

- Un "header" che specifica la natura dei dati (in questo caso, il valore di *bValue* variabile e verrà inviato il numero di copie).

   Entrambi gli elementi vengono generati in modo casuale per questo esempio.

- Il numero specificato di copie dei dati.

   Interna **per** ciclo invii *bValue* il numero di volte specificato.

- Una stringa denominata *strText* che il destinatario visualizza all'utente.

Per la ricezione, la funzione viene eseguita in modo analogo, ad eccezione del fatto che usa l'operatore di estrazione dell'archivio (**>>**) per ottenere dati dall'archivio. L'applicazione ricevente verifica i dati riceve, viene visualizzato il messaggio "Ricevuto" finale e quindi invia un messaggio con la dicitura "Inviato" per l'applicazione mittente da visualizzare.

In questo modello di comunicazione, la parola "Ricevuto", il messaggio inviato *strText* variabile sia per la visualizzazione a altra estremità della comunicazione, pertanto specifica per l'utente ricevente che un determinato numero di pacchetti di dati siano stati ricevuto. Il destinatario risponda con una stringa simile con la dicitura "Sent", per la visualizzazione sullo schermo del mittente originale. Ricezione di entrambe le stringhe indica che si è verificata la corretta comunicazione.

> [!CAUTION]
>  Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server è un'applicazione MFC che individua i tipi di oggetti da inviare, non sarà in grado di ricevere e deserializzare gli oggetti. Un esempio dell'articolo [Windows Sockets: Ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md) Mostra una comunicazione di questo tipo.

Per altre informazioni, vedere la specifica di Windows Sockets: **htonl**, **htons**, **ntohl**, **ntohs**. Per altre informazioni, vedere anche:

- [Windows Sockets: derivazione da classi socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CArchive::IsStoring](../mfc/reference/carchive-class.md#isstoring)<br/>
[CArchive::operator <<](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[CArchive::operator >>](../mfc/reference/carchive-class.md#operator_lt_lt)<br/>
[CArchive::Flush](../mfc/reference/carchive-class.md#flush)<br/>
[CObject::Serialize](../mfc/reference/cobject-class.md#serialize)
