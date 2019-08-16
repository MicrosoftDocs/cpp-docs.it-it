---
title: "Procedura dettagliata: Creazione di una rete per l'elaborazione di immagini"
ms.date: 04/25/2019
helpviewer_keywords:
- image-processing networks, creating [Concurrency Runtime]
- creating image-processing networks [Concurrency Runtime]
ms.assetid: 78ccadc9-5ce2-46cc-bd62-ce0f99d356b8
ms.openlocfilehash: 680037e0e14c3ebd9171cacf477520e025eecebe
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69512170"
---
# <a name="walkthrough-creating-an-image-processing-network"></a>Procedura dettagliata: Creazione di una rete per l'elaborazione di immagini

In questo documento viene illustrato come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini.

La rete determina le operazioni da eseguire su un'immagine in base alle caratteristiche. In questo esempio viene utilizzato il modello di *flusso di flussi* per indirizzare le immagini attraverso la rete. Nel modello del flusso di dati, i componenti indipendenti di un programma di comunicano tra loro mediante l'invio di messaggi. Quando un componente riceve un messaggio, può eseguire un'azione e quindi passare il risultato di tale azione a un altro componente. Confrontare con il modello di *flusso di controllo* , in cui un'applicazione utilizza strutture di controllo, ad esempio istruzioni condizionali, cicli e così via, per controllare l'ordine delle operazioni in un programma.

Una rete basata su Dataflow crea una *pipeline* di attività. Ogni fase della pipeline esegue contemporaneamente parte dell'attività complessiva. Un'analogia a questo è data da una catena di montaggio per la produzione di automobili. Quando ogni veicolo passa attraverso la linea di assemblaggio, una stazione assembla il frame, un altro installa il motore e così via. Consentendo l'assemblaggio simultaneo di più veicoli, la linea di assemblaggio fornisce una velocità effettiva migliore rispetto all'assemblaggio di veicoli completi uno alla volta.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

- [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)

È inoltre consigliabile comprendere le nozioni di base di GDI+ prima di iniziare questa procedura dettagliata.

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Definizione della funzionalità di elaborazione delle immagini](#functionality)

- [Creazione della rete di elaborazione delle immagini](#network)

- [Esempio completo](#complete)

##  <a name="functionality"></a>Definizione della funzionalità di elaborazione delle immagini

Questa sezione illustra le funzioni di supporto che la rete di elaborazione delle immagini USA per lavorare con le immagini che vengono lette dal disco.

Le funzioni seguenti, `GetRGB` e `MakeColor`, estraggono e combinano i singoli componenti del colore specificato, rispettivamente.

[!code-cpp[concrt-image-processing-filter#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_1.cpp)]

La funzione seguente, `ProcessImage`, chiama l'oggetto [std:: Function](../../standard-library/function-class.md) specificato per trasformare il valore del colore di ogni pixel in un oggetto [bitmap](/windows/win32/api/gdiplusheaders/nl-gdiplusheaders-bitmap) GDI+. La `ProcessImage` funzione usa l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per elaborare ogni riga della bitmap in parallelo.

[!code-cpp[concrt-image-processing-filter#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_2.cpp)]

Le funzioni seguenti, `Grayscale` `Sepiatone` `Darken` `ProcessImage` ,, e, chiamano la funzione per trasformare il valore del colore di ogni pixel in un `Bitmap` oggetto. `ColorMask` Ognuna di queste funzioni usa un'espressione lambda per definire la trasformazione del colore di un pixel.

[!code-cpp[concrt-image-processing-filter#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_3.cpp)]

La funzione seguente, `GetColorDominance`, chiama anche la `ProcessImage` funzione. Tuttavia, invece di modificare il valore di ogni colore, questa funzione utilizza gli oggetti [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) per calcolare se il componente colore rosso, verde o blu domina l'immagine.

[!code-cpp[concrt-image-processing-filter#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_4.cpp)]

La funzione seguente, `GetEncoderClsid`, recupera l'identificatore di classe per il tipo MIME specificato di un codificatore. L'applicazione usa questa funzione per recuperare il codificatore per una bitmap.

[!code-cpp[concrt-image-processing-filter#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_5.cpp)]

[[Torna all'inizio](#top)]

##  <a name="network"></a>Creazione della rete di elaborazione delle immagini

In questa sezione viene descritto come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini in ogni immagine JPEG (jpg) in una determinata directory. La rete esegue le operazioni di elaborazione di immagini seguenti:

1. Per qualsiasi immagine creata da Tom, convertire in scala di grigi.

1. Per qualsiasi immagine con rosso come colore dominante, rimuovere i componenti verde e blu, quindi scurirli.

1. Per qualsiasi altra immagine, applicare la viraggio seppia.

La rete applica solo la prima operazione di elaborazione delle immagini che corrisponde a una di queste condizioni. Se, ad esempio, un'immagine viene creata da Tom e ha rosso come colore dominante, l'immagine viene convertita in scala di grigi.

Dopo che la rete esegue ogni operazione di elaborazione dell'immagine, l'immagine viene salvata su disco come file bitmap (BMP).

I passaggi seguenti illustrano come creare una funzione che implementa questa rete di elaborazione delle immagini e applica tale rete a ogni immagine JPEG in una determinata directory.

#### <a name="to-create-the-image-processing-network"></a>Per creare la rete di elaborazione delle immagini

1. Creare una funzione, `ProcessImages`, che accetta il nome di una directory su disco.

   [!code-cpp[concrt-image-processing-filter#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_6.cpp)]

1. Nella funzione creare una `countdown_event` variabile. `ProcessImages` La `countdown_event` classe viene illustrata più avanti in questa procedura dettagliata.

   [!code-cpp[concrt-image-processing-filter#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_7.cpp)]

1. Creare un oggetto [std:: Map](../../standard-library/map-class.md) che associa un `Bitmap` oggetto con il nome file originale.

   [!code-cpp[concrt-image-processing-filter#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_8.cpp)]

1. Aggiungere il codice seguente per definire i membri della rete di elaborazione delle immagini.

   [!code-cpp[concrt-image-processing-filter#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_9.cpp)]

1. Aggiungere il codice seguente per connettere la rete.

   [!code-cpp[concrt-image-processing-filter#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_10.cpp)]

1. Aggiungere il codice seguente per inviare all'intestazione della rete il percorso completo di ogni file JPEG nella directory.

   [!code-cpp[concrt-image-processing-filter#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_11.cpp)]

1. Attendere che la `countdown_event` variabile raggiunga lo zero.

   [!code-cpp[concrt-image-processing-filter#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_12.cpp)]

Nella tabella seguente vengono descritti i membri della rete.

|Member|Descrizione|
|------------|-----------------|
|`load_bitmap`|Oggetto [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) che carica un `Bitmap` oggetto dal disco e aggiunge `map` una voce all'oggetto per associare l'immagine al nome file originale.|
|`loaded_bitmaps`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) che invia le immagini caricate ai filtri di elaborazione delle immagini.|
|`grayscale`|`transformer` Oggetto che converte le immagini create da Tom in scala di grigi. USA i metadati dell'immagine per determinarne l'autore.|
|`colormask`|`transformer` Oggetto che rimuove i componenti di colore verde e blu dalle immagini con rosso come colore dominante.|
|`darken`|`transformer` Oggetto che oscura le immagini con rosso come colore dominante.|
|`sepiatone`|`transformer` Oggetto che applica la viratura seppia alle immagini che non sono state create da Tom e che non sono prevalentemente rosse.|
|`save_bitmap`|Oggetto che salva l'oggetto elaborato `image` su disco come bitmap. `transformer` `save_bitmap`Recupera il nome file originale dall' `map` oggetto e modifica l'estensione del nome file in. bmp.|
|`delete_bitmap`|`transformer` Oggetto che libera la memoria per le immagini.|
|`decrement`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) che funge da nodo terminale nella rete. Decrementa l' `countdown_event` oggetto per segnalare all'applicazione principale che un'immagine è stata elaborata.|

Il `loaded_bitmaps` buffer dei messaggi è importante perché, `unbounded_buffer` come oggetto, offre `Bitmap` oggetti a più ricevitori. Quando un blocco di destinazione accetta `Bitmap` un oggetto, `unbounded_buffer` l'oggetto non fornisce tale `Bitmap` oggetto ad altre destinazioni. Pertanto, l'ordine in cui si collegano gli oggetti `unbounded_buffer` a un oggetto è importante. I `grayscale`blocchi `colormask`di messaggi `sepiatone` , e utilizzano ognuno un filtro per accettare solo determinati `Bitmap` oggetti. Il `decrement` `Bitmap` buffer`loaded_bitmaps` dei messaggi è una destinazione importante del buffer dei messaggi perché accetta tutti gli oggetti rifiutati dagli altri buffer dei messaggi. Per `unbounded_buffer` propagare i messaggi nell'ordine, è necessario un oggetto. Pertanto, un `unbounded_buffer` oggetto si blocca fino a quando non viene collegato un nuovo blocco di destinazione e accetta il messaggio se nessun blocco di destinazione corrente accetta tale messaggio.

Se per l'applicazione è necessario che più blocchi di messaggi elaborino il messaggio, anziché solo un blocco di messaggi che prima accetta il messaggio, è possibile utilizzare un altro tipo di `overwrite_buffer`blocco di messaggi, ad esempio. La `overwrite_buffer` classe include un messaggio alla volta, ma propaga il messaggio a ognuna delle relative destinazioni.

Nella figura seguente viene illustrata la rete di elaborazione delle immagini:

![Rete di elaborazione delle immagini](../../parallel/concrt/media/concrt_imageproc.png "Rete di elaborazione delle immagini")

L' `countdown_event` oggetto in questo esempio consente alla rete di elaborazione delle immagini di informare l'applicazione principale quando sono state elaborate tutte le immagini. La `countdown_event` classe utilizza un oggetto [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) per segnalare quando un valore del contatore raggiunge lo zero. L'applicazione principale incrementa il contatore ogni volta che invia un nome file alla rete. Il nodo terminale della rete decrementa il contatore dopo l'elaborazione di ogni immagine. Dopo che l'applicazione principale attraversa la directory specificata, attende che l' `countdown_event` oggetto segnali che il contatore ha raggiunto lo zero.

Nell'esempio seguente viene illustrata la `countdown_event` classe:

[!code-cpp[concrt-image-processing-filter#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_13.cpp)]

[[Torna all'inizio](#top)]

##  <a name="complete"></a>Esempio completo

Nel codice seguente viene illustrato l'esempio completo. La `wmain` funzione gestisce la libreria GDI+ e chiama la `ProcessImages` funzione per elaborare `Sample Pictures` i file JPEG nella directory.

[!code-cpp[concrt-image-processing-filter#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_14.cpp)]

Nella figura seguente viene illustrato l'output di esempio. Ogni immagine di origine è sopra l'immagine modificata corrispondente.

Esempio ![di output per l'esempio] Esempio (../../parallel/concrt/media/concrt_imageout.png "di output per l'esempio")

`Lighthouse`viene creato da Tom Alphin e pertanto viene convertito in scala di grigi. `Chrysanthemum`,, `Desert` e`Tulips` hanno rosso come colore dominante, quindi i componenti di colore blu e verde sono stati rimossi e sono scuriti. `Koala` `Hydrangeas`, `Jellyfish` e`Penguins` corrispondono ai criteri predefiniti e pertanto sono toni seppia.

[[Torna all'inizio](#top)]

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `image-processing-network.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**CL. exe/DUNICODE/EHsc image-processing-network. cpp/link Gdiplus. lib**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)
