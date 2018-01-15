---
title: 'Procedura dettagliata: Creazione di una rete di elaborazione delle immagini | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- image-processing networks, creating [Concurrency Runtime]
- creating image-processing networks [Concurrency Runtime]
ms.assetid: 78ccadc9-5ce2-46cc-bd62-ce0f99d356b8
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7b709179cb5bc0fefa3f342374c792656fa1e934
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-creating-an-image-processing-network"></a>Procedura dettagliata: creazione di una rete per l'elaborazione di immagini
Questo documento viene illustrato come creare una rete di blocchi dei messaggi asincroni che eseguono l'elaborazione di immagini.  
  
 La rete determina le operazioni da eseguire su un'immagine in base alle relative caratteristiche. Questo esempio viene utilizzato il *flussi di dati* modello per instradare le immagini attraverso la rete. Nel modello del flusso di dati, i componenti indipendenti di un programma di comunicano tra loro mediante l'invio di messaggi. Quando un componente riceve un messaggio, può eseguire un'azione e quindi passerà il risultato dell'azione a un altro componente. Confrontare con il *flusso di controllo* modello, in cui un'applicazione utilizza le strutture di controllo, ad esempio, istruzioni condizionali, cicli e così via, per controllare l'ordine delle operazioni in un programma.  
  
 Crea una rete che è basata sul flusso di dati un *pipeline* delle attività. Ogni fase della pipeline esegue contemporaneamente una parte dell'attività complessiva. Un'analogia a questo è data da una catena di montaggio per la produzione di automobili. Quando ciascun veicolo passa attraverso la catena di montaggio, una postazione viene assemblato il telaio, un altro installa il motore e così via. Abilitando veicoli più possibile eseguire contemporaneamente, la catena di montaggio fornisce una migliore velocità effettiva rispetto al montaggio completo dei veicoli uno alla volta.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)  
  
-   [Procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)  
  
 Si consiglia inoltre di aver compreso i concetti di base [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] prima di iniziare questa procedura dettagliata.  
  
##  <a name="top"></a> Sezioni  
 Questa procedura dettagliata contiene le sezioni seguenti:  
  
-   [Definizione funzionalità di elaborazione delle immagini](#functionality)  
  
-   [Creazione della rete di elaborazione di immagini](#network)  
  
-   [Esempio completo](#complete)  
  
##  <a name="functionality"></a>Definizione funzionalità di elaborazione delle immagini  
 Questa sezione illustra le funzioni di supporto che la rete di elaborazione di immagini utilizzato per l'utilizzo di immagini che vengono lette dal disco.  
  
 Le funzioni seguenti, `GetRGB` e `MakeColor`, estrarre e combinare i singoli componenti del colore specifico, rispettivamente.  
  
 [!code-cpp[concrt-image-processing-filter#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_1.cpp)]  
  

 La funzione seguente, `ProcessImage`, chiama il determinato [std:: Function](../../standard-library/function-class.md) oggetto per trasformare il valore di colore di ogni pixel un [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] [Bitmap](https://msdn.microsoft.com/library/ms534420.aspx) oggetto. Il `ProcessImage` funzione Usa il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo per elaborare ogni riga della bitmap in parallelo.  

  
 [!code-cpp[concrt-image-processing-filter#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_2.cpp)]  
  
 Le funzioni seguenti, `Grayscale`, `Sepiatone`, `ColorMask`, e `Darken`, chiamare il `ProcessImage` funzione per trasformare il valore di colore di ogni pixel in un `Bitmap` oggetto. Ognuna di queste funzioni utilizza un'espressione lambda per definire la trasformazione del colore di un pixel.  
  
 [!code-cpp[concrt-image-processing-filter#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_3.cpp)]  
  
 La funzione seguente, `GetColorDominance`, chiama anche il `ProcessImage` (funzione). Anziché modificare il valore di ogni colore, tuttavia, questa funzione utilizza [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) oggetti per calcolare se il componente di colore rosso, verde o blu domina l'immagine.  
  
 [!code-cpp[concrt-image-processing-filter#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_4.cpp)]  
  
 La funzione seguente, `GetEncoderClsid`, recupera l'identificatore di classe per il tipo MIME specificato di un codificatore. L'applicazione utilizza questa funzione per recuperare il codificatore per una bitmap.  
  
 [!code-cpp[concrt-image-processing-filter#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_5.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="network"></a>Creazione della rete di elaborazione di immagini  
 In questa sezione viene descritto come creare una rete di blocchi dei messaggi asincroni che eseguono l'elaborazione di immagini in ogni [!INCLUDE[TLA#tla_jpeg](../../parallel/concrt/includes/tlasharptla_jpeg_md.md)] immagine (con estensione jpg) in una directory specificata. La rete esegue le operazioni di elaborazione delle immagini seguenti:  
  
1.  Per le immagini che sono stata creata da Tom, convertire in gradazioni di grigio.  
  
2.  Per le immagini che sono il rosso come colore dominante, rimuovere i componenti di colore verde e blu e viene quindi resa più scura.  
  
3.  Per le altre immagini, applicare seppia.  
  
 La rete si applica solo la prima operazione di elaborazione delle immagini che corrisponde a una di queste condizioni. Ad esempio, se un'immagine è creata da Tom e ha il rosso come colore dominante, solo l'immagine viene convertito in gradazioni di grigio.  
  
 Dopo che la rete eseguito ogni operazione di elaborazione delle immagini, Salva l'immagine su disco come file bitmap (bmp).  
  
 I passaggi seguenti mostrano come creare una funzione che implementa questa rete di elaborazione di immagini e applica la rete a ogni [!INCLUDE[TLA#tla_jpeg](../../parallel/concrt/includes/tlasharptla_jpeg_md.md)] immagine in una directory specificata.  
  
#### <a name="to-create-the-image-processing-network"></a>Per creare la rete di elaborazione di immagini  
  
1.  Creare una funzione, `ProcessImages`, che accetta il nome di una directory sul disco.  
  
     [!code-cpp[concrt-image-processing-filter#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_6.cpp)]  
  
2.  Nel `ProcessImages` funzionamento, creare un `countdown_event` variabile. La `countdown_event` classe è illustrata più avanti in questa procedura dettagliata.  
  
     [!code-cpp[concrt-image-processing-filter#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_7.cpp)]  
  
3.  Creare un [std:: map](../../standard-library/map-class.md) oggetto che associa un `Bitmap` oggetto con il nome file originale.  
  
     [!code-cpp[concrt-image-processing-filter#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_8.cpp)]  
  
4.  Aggiungere il codice seguente per definire i membri della rete l'elaborazione di immagini.  
  
     [!code-cpp[concrt-image-processing-filter#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_9.cpp)]  
  
5.  Aggiungere il codice seguente per connettere la rete.  
  
     [!code-cpp[concrt-image-processing-filter#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_10.cpp)]  
  
6.  Aggiungere il codice seguente per inviare all'intestazione della rete il percorso completo di ogni [!INCLUDE[TLA#tla_jpeg](../../parallel/concrt/includes/tlasharptla_jpeg_md.md)] file nella directory.  
  
     [!code-cpp[concrt-image-processing-filter#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_11.cpp)]  
  
7.  Attendere il `countdown_event` variabile per raggiungere lo zero.  
  
     [!code-cpp[concrt-image-processing-filter#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_12.cpp)]  
  
 Nella tabella seguente vengono descritti i membri della rete.  
  
|Member|Descrizione|  
|------------|-----------------|  
|`load_bitmap`|Oggetto [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) che carica un `Bitmap` oggetto dal disco e viene aggiunta una voce per il `map` oggetto per associare l'immagine con il nome file originale.|  
|`loaded_bitmaps`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto che invia le immagini caricate per i filtri di elaborazione di immagini.|  
|`grayscale`|Oggetto `transformer` che converte le immagini create da Tom in gradazioni di grigio. Usa i metadati dell'immagine per determinarne l'autore.|  
|`colormask`|Oggetto `transformer` che rimuove i componenti di colore verde e blu dalle immagini che hanno il rosso come colore dominante.|  
|`darken`|Oggetto `transformer` che diventa più scura immagini che hanno il rosso come colore dominante.|  
|`sepiatone`|Oggetto `transformer` che applica seppia alle immagini non vengono create da Tom e non sono prevalentemente rosso.|  
|`save_bitmap`|Oggetto `transformer` oggetto che salva l'elaborato `image` su disco come bitmap. `save_bitmap`Recupera il nome del file originale dal `map` dell'oggetto e le modifiche di estensione di file al file con estensione bmp.|  
|`delete_bitmap`|Oggetto `transformer` che libera la memoria per le immagini.|  
|`decrement`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto che funge da nodo terminale nella rete. Si decrementa la `countdown_event` oggetto per segnalare all'applicazione principale che è stata elaborata un'immagine.|  
  
 Il `loaded_bitmaps` buffer dei messaggi è importante perché, come un `unbounded_buffer` oggetto offre `Bitmap` oggetti a più ricevitori. Quando un blocco di destinazione accetta un `Bitmap` oggetto, il `unbounded_buffer` oggetto non offre che `Bitmap` oggetto ad altre destinazioni. Pertanto, l'ordine in cui si collegano oggetti a un `unbounded_buffer` oggetto è importante. Il `grayscale`, `colormask`, e `sepiatone` messaggio blocchi ogni utilizzano un filtro per accettare solo determinati `Bitmap` oggetti. Il `decrement` buffer dei messaggi è una destinazione importante del `loaded_bitmaps` buffer dei messaggi poiché accetta tutti `Bitmap` gli oggetti che vengono rifiutati da altri buffer dei messaggi. Un `unbounded_buffer` oggetto è necessario per propagare i messaggi in ordine. Pertanto, un `unbounded_buffer` oggetto blocca fino a quando un nuovo blocco di destinazione è collegato e accetta il messaggio se nessun blocco di destinazione corrente non accetta il messaggio.  
  
 Se l'applicazione richiede che il messaggio più blocchi di elaborazione del messaggio, anziché solo un blocco di messaggi che innanzitutto accetta il messaggio, è possibile utilizzare un altro tipo di blocco di messaggio, ad esempio `overwrite_buffer`. La `overwrite_buffer` classe contiene un messaggio alla volta, ma si propaga messaggio per ciascuna delle relative destinazioni.  
  
 Nella figura seguente viene illustrata la rete di elaborazione di immagine:  
  
 ![Rete di elaborazione di immagini](../../parallel/concrt/media/concrt_imageproc.png "concrt_imageproc")  
  
 Il `countdown_event` in questo esempio consente di rete di elaborazione immagini informare l'applicazione principale quando sono state elaborate tutte le immagini. Il `countdown_event` classe Usa un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto per segnalare quando un valore del contatore raggiunge lo zero. L'applicazione principale incrementa il contatore ogni volta che si invia un nome di file alla rete. Nodo terminale della rete decrementa il contatore dopo l'elaborazione di ogni immagine. Dopo l'applicazione principale attraversa la directory specificata, attende che il `countdown_event` oggetto per segnalare che il contatore raggiunge lo zero.  
  
 Nell'esempio seguente la `countdown_event` classe:  
  
 [!code-cpp[concrt-image-processing-filter#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_13.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="complete"></a>L'esempio completo  
 Nel codice seguente viene illustrato l'esempio completo. Il `wmain` funzione gestisce il [!INCLUDE[ndptecgdiplus](../../parallel/concrt/includes/ndptecgdiplus_md.md)] libreria e chiama il `ProcessImages` funzione al processo di [!INCLUDE[TLA#tla_jpeg](../../parallel/concrt/includes/tlasharptla_jpeg_md.md)] file il `Sample Pictures` directory.  
  
 [!code-cpp[concrt-image-processing-filter#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-image-processing-network_14.cpp)]  
  
 Nella figura seguente mostra l'output di esempio. Ogni immagine di origine è sopra l'immagine modificata corrispondente.  
  
 ![Esempio di output per l'esempio](../../parallel/concrt/media/concrt_imageout.png "concrt_imageout")  
  
 `Lighthouse`viene creato da Tom Alphin e pertanto viene convertito in gradazioni di grigio. `Chrysanthemum`, `Desert`, `Koala`, e `Tulips` hanno il rosso come colore dominante e pertanto i componenti di colore verde e blu rimossi e vengono resi più scuri. `Hydrangeas`, `Jellyfish`, e `Penguins` soddisfano i criteri predefiniti e pertanto sono seppia stato applicato.  
  
 [[Torna all'inizio](#top)]  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `image-processing-network.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /DUNICODE /EHsc immagine-elaborazione-Network. cpp /link gdiplus.lib**  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)
