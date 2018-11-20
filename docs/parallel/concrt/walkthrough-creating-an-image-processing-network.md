---
title: "Procedura dettagliata: creazione di una rete per l'elaborazione di immagini"
ms.date: 11/19/2018
helpviewer_keywords:
- image-processing networks, creating [Concurrency Runtime]
- creating image-processing networks [Concurrency Runtime]
ms.assetid: 78ccadc9-5ce2-46cc-bd62-ce0f99d356b8
ms.openlocfilehash: 93a20ca9967c8730e1563a653c8f4546d94161fb
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52176172"
---
# <a name="walkthrough-creating-an-image-processing-network"></a>Procedura dettagliata: creazione di una rete per l'elaborazione di immagini

Questo documento illustra come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini.

La rete determina le operazioni da eseguire su un'immagine in base alle relative caratteristiche. Questo esempio Usa la *dataflow* modello per instradare le immagini attraverso la rete. Nel modello del flusso di dati, i componenti indipendenti di un programma di comunicano tra loro mediante l'invio di messaggi. Quando un componente riceve un messaggio, può eseguire alcune azioni e quindi trasmette il risultato di tale azione a un altro componente. Confrontare questo con i *flusso di controllo* modello, in cui un'applicazione utilizza le strutture di controllo, ad esempio, istruzioni condizionali, cicli e così via, per controllare l'ordine delle operazioni in un programma.

Una rete basata su flussi di dati crea un *pipeline* delle attività. Ogni fase della pipeline esegue contemporaneamente una parte dell'attività complessiva. Un'analogia a questo è data da una catena di montaggio per la produzione di automobili. Quando ciascun veicolo passa attraverso la catena di montaggio, una postazione viene assemblato il telaio, un altro viene installato il motore e così via. Abilita più veicoli essere assemblate contemporaneamente, la catena di montaggio fornisce una migliore velocità effettiva rispetto al montaggio completo dei veicoli uno alla volta.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

- [Procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)

Si consiglia inoltre di aver compreso i concetti fondamentali di GDI+ prima di iniziare questa procedura dettagliata.

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Definizione funzionalità di elaborazione immagini](#functionality)

- [Creazione della rete di elaborazione di immagini](#network)

- [Esempio completo](#complete)

##  <a name="functionality"></a> Definizione funzionalità di elaborazione immagini

Questa sezione illustra le funzioni di supporto usato dalla rete di elaborazione di immagini per lavorare con immagini che vengono lette dal disco.

Le funzioni seguenti `GetRGB` e `MakeColor`, estrarre e combinare i singoli componenti del colore specificato, rispettivamente.

[!code-cpp[concrt-image-processing-filter#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_1.cpp)]

La funzione seguente, `ProcessImage`, chiama il dato [std:: Function](../../standard-library/function-class.md) oggetto da trasformare il valore del colore di ogni pixel contenuto in un oggetto GDI+ [Bitmap](/windows/desktop/api/gdiplusheaders/nl-gdiplusheaders-bitmap) oggetto. Il `ProcessImage` funzione Usa le [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo per elaborare ogni riga della bitmap in parallelo.

[!code-cpp[concrt-image-processing-filter#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_2.cpp)]

Le funzioni seguenti `Grayscale`, `Sepiatone`, `ColorMask`, e `Darken`, chiamare il `ProcessImage` funzione per trasformare il valore del colore di ogni pixel contenuto in un `Bitmap` oggetto. Ognuna di queste funzioni utilizza un'espressione lambda per definire la trasformazione del colore di un pixel.

[!code-cpp[concrt-image-processing-filter#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_3.cpp)]

La funzione seguente, `GetColorDominance`, chiama anche il `ProcessImage` (funzione). Tuttavia, anziché modificare il valore di ogni colore, questa funzione viene utilizzata [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) oggetti per calcolare se il componente di colore rosso, verde o blu domina l'immagine.

[!code-cpp[concrt-image-processing-filter#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_4.cpp)]

La funzione seguente, `GetEncoderClsid`, recupera l'identificatore di classe per il tipo MIME specificato di un codificatore. L'applicazione usa questa funzione per recuperare il codificatore per una bitmap.

[!code-cpp[concrt-image-processing-filter#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_5.cpp)]

[[Torna all'inizio](#top)]

##  <a name="network"></a> Creazione della rete di elaborazione di immagini

Questa sezione descrive come creare una rete di blocchi dei messaggi asincroni che eseguono l'elaborazione di immagini in ogni immagine JPEG (con estensione jpg) in una determinata directory. La rete esegue le operazioni di elaborazione delle immagini seguenti:

1. Per le immagini che sono stata creata dal Tom, eseguire la conversione in scala di grigi.

1. Per le immagini che hanno il rosso come colore dominante, rimuovere i componenti di colore verde e blu e quindi rende più scura.

1. Per qualsiasi altra immagine, si applicano seppia.

La rete si applica solo la prima operazione di elaborazione di immagini che corrisponde a una di queste condizioni. Ad esempio, se un'immagine è stata creata dal Tom e presenta il rosso come colore predominante, l'immagine viene convertito solo in scala di grigi.

Dopo che la rete ha eseguito ogni operazione di elaborazione di immagini, Salva l'immagine su disco come file bitmap (bmp).

I passaggi seguenti illustrano come creare una funzione che implementa questa rete di elaborazione di immagini e applica la rete per ogni immagine JPEG in una determinata directory.

#### <a name="to-create-the-image-processing-network"></a>Per creare la rete di elaborazione di immagini

1. Creare una funzione, `ProcessImages`, che accetta il nome di una directory sul disco.

   [!code-cpp[concrt-image-processing-filter#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_6.cpp)]

1. Nel `ProcessImages` funzionamento, creare un `countdown_event` variabile. Il `countdown_event` classe è illustrata più avanti in questa procedura dettagliata.

   [!code-cpp[concrt-image-processing-filter#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_7.cpp)]

1. Creare un [std:: map](../../standard-library/map-class.md) oggetto che associa un `Bitmap` oggetto con il nome file originale.

   [!code-cpp[concrt-image-processing-filter#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_8.cpp)]

1. Aggiungere il codice seguente per definire i membri della rete l'elaborazione di immagini.

   [!code-cpp[concrt-image-processing-filter#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_9.cpp)]

1. Aggiungere il codice seguente per connettere la rete.

   [!code-cpp[concrt-image-processing-filter#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_10.cpp)]

1. Aggiungere il codice seguente per inviare all'inizio della rete il percorso completo di ogni file JPEG nella directory.

   [!code-cpp[concrt-image-processing-filter#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_11.cpp)]

1. Attendere il `countdown_event` variabile per raggiungere lo zero.

   [!code-cpp[concrt-image-processing-filter#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_12.cpp)]

Nella tabella seguente vengono descritti i membri della rete.

|Member|Descrizione|
|------------|-----------------|
|`load_bitmap`|Oggetto [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) cui viene caricato un `Bitmap` dell'oggetto dal disco e aggiunge una voce per il `map` oggetto da associare l'immagine del nome file originale.|
|`loaded_bitmaps`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto che invia le immagini caricate con i filtri di elaborazione di immagini.|
|`grayscale`|Oggetto `transformer` che converte le immagini che vengono create da Tom in gradazioni di grigio. Usa i metadati dell'immagine per determinarne l'autore.|
|`colormask`|Oggetto `transformer` che rimuove i componenti di colore verde e blu da immagini che hanno il rosso come colore dominante.|
|`darken`|Oggetto `transformer` che scurisce le immagini che hanno il rosso come colore dominante.|
|`sepiatone`|Oggetto `transformer` oggetto che si applica seppia alle immagini che non vengono create da Tom e non sono prevalentemente rosso.|
|`save_bitmap`|Oggetto `transformer` oggetto che salva l'elaborato `image` su disco come bitmap. `save_bitmap` Recupera il nome del file originale dal `map` dell'oggetto e diventa l'estensione del nome file con estensione bmp.|
|`delete_bitmap`|Oggetto `transformer` che libera la memoria per le immagini.|
|`decrement`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto che funge da nodo terminale nella rete. Si riduce il `countdown_event` oggetto per segnalare all'applicazione principale che un'immagine è stata elaborata.|

Il `loaded_bitmaps` buffer dei messaggi è importante perché, come un `unbounded_buffer` dell'oggetto, che offre `Bitmap` oggetti da più ricevitori. Quando un blocco di destinazione accetta una `Bitmap` oggetto, il `unbounded_buffer` offre tale oggetto `Bitmap` oggetto ad altre destinazioni. Quindi, l'ordine in cui si collegano oggetti a un `unbounded_buffer` oggetto è importante. Il `grayscale`, `colormask`, e `sepiatone` messaggio blocchi ogni utilizzano un filtro per accettare solo determinate `Bitmap` oggetti. Il `decrement` buffer dei messaggi è una destinazione importante del `loaded_bitmaps` buffer di messaggi poiché accetta tutti `Bitmap` gli oggetti che vengono rifiutati da altri buffer dei messaggi. Un `unbounded_buffer` oggetto serve per propagare i messaggi in ordine. Pertanto, un `unbounded_buffer` oggetto blocca fino a quando un nuovo blocco di destinazione è collegato ad esso e accetta il messaggio se nessun blocco di destinazione corrente non accetta il messaggio.

Se l'applicazione richiede più quel messaggio blocca l'elaborazione del messaggio, anziché solo un blocco di messaggi che innanzitutto accetta il messaggio, è possibile usare un altro tipo di blocco di messaggio, ad esempio `overwrite_buffer`. Il `overwrite_buffer` la classe contiene un solo messaggio alla volta, ma si propaga messaggio per ciascuna delle relative destinazioni.

La figura seguente mostra una rete di elaborazione delle immagini:

![Rete di elaborazione di immagini](../../parallel/concrt/media/concrt_imageproc.png "rete di elaborazione di immagini")

Il `countdown_event` in questo esempio e consente di rete di elaborazione delle immagini informare l'applicazione principale quando sono state elaborate tutte le immagini. Il `countdown_event` classe Usa un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto per segnalare quando un valore del contatore raggiunge lo zero. L'applicazione principale incrementa il contatore ogni volta che si invia un nome di file alla rete. Nodo terminale della rete decrementa il contatore dopo l'elaborazione di ogni immagine. Dopo l'applicazione principale attraversa la directory specificata, attende il `countdown_event` oggetto per segnalare che il contatore raggiunge lo zero.

L'esempio seguente illustra il `countdown_event` classe:

[!code-cpp[concrt-image-processing-filter#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_13.cpp)]

[[Torna all'inizio](#top)]

##  <a name="complete"></a> L'esempio completo

Nel codice seguente viene illustrato l'esempio completo. Il `wmain` funzione gestisce la libreria di GDI+ e chiama il `ProcessImages` funzione per elaborare JPEG file nei `Sample Pictures` directory.

[!code-cpp[concrt-image-processing-filter#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_14.cpp)]

Nella figura seguente mostra l'output di esempio. Ogni immagine di origine è sopra l'immagine modificata corrispondente.

![Esempio di output per l'esempio](../../parallel/concrt/media/concrt_imageout.png "l'esempio produce l'output di esempio")

`Lighthouse` viene creato da Tom Alphin e pertanto viene convertito in gradazioni di grigio. `Chrysanthemum`, `Desert`, `Koala`, e `Tulips` rosso come colore dominante e pertanto con i componenti di colore verde e blu rimossi e sono scurire. `Hydrangeas`, `Jellyfish`, e `Penguins` soddisfano i criteri predefiniti e pertanto sono seppia stato applicato.

[[Torna all'inizio](#top)]

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `image-processing-network.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /DUNICODE /EHsc immagine-elaborazione-Network. cpp /link gdiplus.lib**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)
