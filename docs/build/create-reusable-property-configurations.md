---
title: Condividi o riutilizza le impostazioni di progetto di Visual Studio - C++
ms.date: 03/27/2019
helpviewer_keywords:
- project properties [C++], reusable
ms.openlocfilehash: b49c125e0341a2de68bbcd992dd8f9afaa99233d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62196877"
---
# <a name="share-or-reuse-visual-studio-project-settings"></a>Condividi o riutilizza le impostazioni di progetto di Visual Studio

Per creare un gruppo personalizzato di impostazioni che è possibile condividere con altri utenti o riutilizzare in più progetti, usare **Gestione proprietà** per creare un *finestra delle proprietà* (file con estensione props) per archiviare le impostazioni per ogni tipo di progetto che si vuole poter riutilizzare o condividere con altri utenti. Utilizzando proprietà fogli sono comunque molto meno soggette a errori di altre modalità di creazione di impostazioni "globali". 

> [!IMPORTANT]
> **File con estensione user e per quale motivo sono problematici**
>
> Nelle versioni precedenti di Visual Studio vengono usate finestre delle proprietà globali con un'estensione di file user e sono disponibili nella cartella \<profiloutente>\AppData\Local\Microsoft\MSBuild\v4.0\. Questi file non sono più consigliabili perché impostano le proprietà per le configurazioni di progetto su una base per utente e per computer. Impostazioni globali di questo tipo possono interferire con le compilazioni, specialmente quando si intende utilizzare più piattaforme nel computer di compilazione. Ad esempio, se si dispone sia di un progetto MFC sia di un progetto Windows Phone, le proprietà con estensione user non saranno valide per uno di essi. Le finestre delle proprietà riutilizzabile sono più flessibili e affidabili.
>
> Sebbene i file con estensione user vengano ancora installati da Visual Studio e partecipino all'ereditarietà delle proprietà, sono vuoti per impostazione predefinita. È consigliabile eliminare il riferimento a essi in **Gestione proprietà** per verificare che i progetti funzionino a prescindere dalle impostazioni per utente e per computer. Questo è importante per garantire il corretto funzionamento in un ambiente di controllo del codice sorgente.

Per visualizzare **Gestione proprietà**, sulla barra dei menu scegliere **Visualizza**, **Altre finestre**, **Gestione proprietà**.

Se si ha un set di proprietà comune usato di frequente da applicare a più progetti, è possibile usare **Gestione proprietà** per acquisirle in un file della *finestra delle proprietà* riutilizzabile la cui estensione di file è generalmente props. È possibile applicare il foglio (o i fogli) a nuovi progetti in modo da non dover impostare le relative proprietà da zero. Per accedere a **Gestione proprietà**, sulla barra dei menu scegliere **Visualizza**, **Gestione proprietà**.

![Menu di scelta rapida Gestione proprietà](media/sharingnew.png "SharingNew")

In ogni nodo di configurazione vengono visualizzati i nodi per ogni finestra delle proprietà che si applica a questa configurazione. Il sistema aggiunge finestre delle proprietà che impostano i valori in base alle opzioni selezionate nella procedura guidata app quando si crea il progetto. Fare clic con il pulsante destro del mouse su qualsiasi nodo e scegliere Proprietà per visualizzare le proprietà che si applicano a quel nodo. Tutte le finestre delle proprietà vengono importate automaticamente nella finestra delle proprietà "master" del progetto (ms.cpp.props) e vengono valutate nell'ordine in cui vengono visualizzate in Gestione proprietà. È possibile spostarle per modificare l'ordine di valutazione. Le finestre delle proprietà che vengono valutate in un secondo momento sostituiranno i valori nelle finestre valutate in precedenza. Visualizzare [ereditarietà della proprietà del progetto](project-property-inheritance.md) per altre informazioni sull'ordine di valutazione nel file con estensione vcxproj, i file con estensione props e targets, le variabili di ambiente e la riga di comando.

Se si sceglie **Aggiungi nuova finestra delle proprietà del progetto** e successivamente si seleziona ad esempio la finestra delle proprietà MyProps.props, viene visualizzata una finestra di dialogo della pagina delle proprietà. Questa condizione è valida per la finestra delle proprietà MyProps. Le modifiche apportate vengono scritte nella finestra, non nel file di progetto (con estensione vcxproj).

Le proprietà in una finestra delle proprietà vengono sottoposte a override se la stessa proprietà viene impostata direttamente nel file con estensione vcxproj.

È possibile importare una finestra delle proprietà ogni volta che si rivela necessario. Più progetti in una soluzione possono ereditare le impostazioni dalla stessa finestra delle proprietà e in un progetto possono essere presenti più finestre. La stessa finestra delle proprietà può ereditare le impostazioni da un'altra finestra delle proprietà.

È inoltre possibile creare una finestra delle proprietà per più configurazioni. A tale scopo, creare una finestra delle proprietà per ogni configurazione, aprire il menu di scelta rapida per una di esse, scegliere **Aggiungi finestra delle proprietà esistente** e quindi aggiungere le altre finestre. Se tuttavia si usa una finestra delle proprietà comuni, si tenga presente che quando si imposta una proprietà, essa è valida per tutte le configurazioni a cui la finestra viene applicata. Inoltre, tramite l'IDE non vengono mostrati i progetti o le altre finestre delle proprietà tramite cui si sta ereditando da una finestra delle proprietà specificata.

In soluzioni di grandi dimensioni, in cui vengono usati numerosi progetti, può essere utile creare una finestra delle proprietà a livello di soluzione. Quando si aggiunge un progetto alla soluzione, usare **Gestione proprietà** per aggiungere tale finestra delle proprietà al progetto. Se richiesto a livello di progetto, è possibile aggiungere una nuova finestra delle proprietà per impostare i valori specifici del progetto.

> [!IMPORTANT]
> Un file props per impostazione predefinita non partecipa al controllo del codice sorgente, poiché non viene creato come elemento di progetto. È possibile aggiungere manualmente il file come elemento di soluzione se si desidera includerlo nel controllo del codice sorgente.

#### <a name="to-create-a-property-sheet"></a>Per creare una finestra delle proprietà

1. Sulla barra dei menu scegliere **Visualizza**, **Gestione proprietà**. Verrà aperto **Gestione proprietà**.

2. Per definire l'ambito della finestra delle proprietà, selezionare l'elemento a cui si applica. Può trattarsi di una configurazione specifica o di un'altra finestra delle proprietà. Aprire il menu di scelta rapida per questo elemento e quindi scegliere **Aggiungi nuova finestra delle proprietà del progetto**. Specificare un nome e un percorso.

3. In **Gestione proprietà** aprire la nuova finestra delle proprietà e successivamente impostare le proprietà da includere.
