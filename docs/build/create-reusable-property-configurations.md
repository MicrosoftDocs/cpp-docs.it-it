---
description: 'Altre informazioni su: condividere o riutilizzare le impostazioni di progetto di Visual Studio'
title: Condividere o riutilizzare le impostazioni di progetto di Visual Studio-C++
ms.date: 07/17/2019
helpviewer_keywords:
- project properties [C++], reusable
ms.openlocfilehash: 5108bba6526c6c3140680cc12013b0c6232c9a0e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156840"
---
# <a name="share-or-reuse-visual-studio-project-settings"></a>Condividere o riutilizzare le impostazioni di progetto di Visual Studio

Per creare un gruppo personalizzato di impostazioni che è possibile condividere con altri utenti o riutilizzare in più progetti, utilizzare **Gestione proprietà** per creare una *finestra delle proprietà* (file props) per archiviare le impostazioni per ogni tipo di progetto che si desidera riutilizzare o condividere con altri. L'utilizzo delle finestre delle proprietà è molto meno soggetto a errori rispetto ad altri modi per creare impostazioni "globali".

> [!IMPORTANT]
> **File con estensione user e per quale motivo sono problematici**
>
> Nelle versioni precedenti di Visual Studio sono state usate le finestre delle proprietà globali con un'estensione di file. User e si trovano nella \<userprofile> cartella \AppData\Local\Microsoft\MSBuild\v4.0\ Questi file non sono più consigliabili perché impostano le proprietà per le configurazioni di progetto su una base per utente e per computer. Impostazioni globali di questo tipo possono interferire con le compilazioni, specialmente quando si intende utilizzare più piattaforme nel computer di compilazione. Ad esempio, se si dispone sia di un progetto MFC sia di un progetto Windows Phone, le proprietà con estensione user non saranno valide per uno di essi. Le finestre delle proprietà riutilizzabile sono più flessibili e affidabili.
>
> Sebbene i file con estensione user vengano ancora installati da Visual Studio e partecipino all'ereditarietà delle proprietà, sono vuoti per impostazione predefinita. La procedura consigliata consiste nell'eliminare il riferimento a tali elementi in **Gestione proprietà** per assicurarsi che i progetti funzionino indipendentemente dalle impostazioni per utente e per computer. questo è importante per garantire un comportamento corretto in un ambiente SCC (controllo del codice sorgente).

Per visualizzare **Gestione proprietà**, sulla barra dei menu scegliere **Visualizza**  >  **Gestione proprietà** o **Visualizza**  >  **altre finestre**  >  **Gestione proprietà**, a seconda delle impostazioni.

Se si dispone di un set di proprietà comune usato di frequente che si vuole applicare a più progetti, è possibile usare **Gestione proprietà** per acquisirle in un file della *finestra delle proprietà* riutilizzabile, che per convenzione ha un'estensione del nome file props. È possibile applicare il foglio (o i fogli) a nuovi progetti in modo da non dover impostare le relative proprietà da zero.

![Menu di scelta rapida Gestione proprietà](media/sharingnew.png "SharingNew")

In ogni nodo di configurazione vengono visualizzati i nodi per ogni finestra delle proprietà che si applica a questa configurazione. Il sistema aggiunge finestre delle proprietà che impostano i valori in base alle opzioni selezionate nella procedura guidata app quando si crea il progetto. Fare clic con il pulsante destro del mouse su qualsiasi nodo e scegliere Proprietà per visualizzare le proprietà che si applicano a quel nodo. Tutte le finestre delle proprietà vengono importate automaticamente nella finestra delle proprietà "master" del progetto (ms.cpp.props) e vengono valutate nell'ordine in cui vengono visualizzate in Gestione proprietà. È possibile spostarle per modificare l'ordine di valutazione. Le finestre delle proprietà che vengono valutate in un secondo momento sostituiranno i valori nelle finestre valutate in precedenza. Per ulteriori informazioni sull'ordine di valutazione nel file. vcxproj, i file con estensione props e targets, le variabili di ambiente e la riga di comando, vedere [ereditarietà della proprietà del progetto](project-property-inheritance.md) .

Se si sceglie **Aggiungi nuova finestra delle proprietà del progetto** e quindi si seleziona, ad esempio, la finestra delle proprietà props. props, viene visualizzata una finestra di dialogo della pagina delle proprietà. Questa condizione è valida per la finestra delle proprietà MyProps. Le modifiche apportate vengono scritte nella finestra, non nel file di progetto (con estensione vcxproj).

Le proprietà in una finestra delle proprietà vengono sottoposte a override se la stessa proprietà viene impostata direttamente nel file con estensione vcxproj.

È possibile importare una finestra delle proprietà ogni volta che si rivela necessario. Più progetti in una soluzione possono ereditare le impostazioni dalla stessa finestra delle proprietà e in un progetto possono essere presenti più finestre. La stessa finestra delle proprietà può ereditare le impostazioni da un'altra finestra delle proprietà.

È inoltre possibile creare una finestra delle proprietà per più configurazioni. A tale scopo, creare una finestra delle proprietà per ogni configurazione, aprire il menu di scelta rapida per uno di essi, scegliere **Aggiungi finestra delle proprietà esistente**, quindi aggiungere gli altri fogli. Tuttavia, se si utilizza una finestra delle proprietà comune, tenere presente che quando si imposta una proprietà, viene impostata per tutte le configurazioni a cui si applica il foglio e che l'IDE non Mostra i progetti o altre finestre delle proprietà che ereditano da una finestra delle proprietà specificata.

In soluzioni di grandi dimensioni, in cui vengono usati numerosi progetti, può essere utile creare una finestra delle proprietà a livello di soluzione. Quando si aggiunge un progetto alla soluzione, utilizzare **Gestione proprietà** per aggiungere tale finestra delle proprietà al progetto. Se richiesto a livello di progetto, è possibile aggiungere una nuova finestra delle proprietà per impostare i valori specifici del progetto.

> [!IMPORTANT]
> Un file. props per impostazione predefinita non partecipa al controllo del codice sorgente perché non viene creato come elemento di progetto. È possibile aggiungere manualmente il file come elemento di soluzione se si desidera includerlo nel controllo del codice sorgente.

#### <a name="to-create-a-property-sheet"></a>Per creare una finestra delle proprietà

1. Sulla barra dei menu scegliere **Visualizza**  >  **Gestione proprietà** o **Visualizza**  >  **altre**  >  **Gestione proprietà** di Windows. Verrà visualizzata la **Gestione proprietà** .

2. Per definire l'ambito della finestra delle proprietà, selezionare l'elemento a cui si applica. Può trattarsi di una configurazione specifica o di un'altra finestra delle proprietà. Aprire il menu di scelta rapida per questo elemento, quindi scegliere **Aggiungi nuova finestra delle proprietà del progetto**. Specificare un nome e un percorso.

3. In **Gestione proprietà** aprire la nuova finestra delle proprietà, quindi impostare le proprietà che si desidera includere.
