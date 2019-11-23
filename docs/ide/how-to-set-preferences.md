---
title: Impostare le C++ preferenze di codifica in Visual Studio
ms.description: Customize C++ formatting, colors, layout, line numbers, and menus in the Visual Studio IDE.
ms.topic: overview
ms.date: 09/27/2019
ms.openlocfilehash: f1d222dc38720ea897cfbf2fb9fa0dd2727e7720
ms.sourcegitcommit: 4517932a67bbf2db16cfb122d3bef57a43696242
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2019
ms.locfileid: "71816569"
---
# <a name="set-your-c-coding-preferences-in-visual-studio"></a>Impostare le C++ preferenze di codifica in Visual Studio

Puoi rendere la tua C++ esperienza di codifica più pratica, produttiva e piacevole grazie alla personalizzazione di Visual Studio. È possibile:

- Personalizzare i menu e le barre degli strumenti.
- Disporre il layout della finestra.
- Imposta i temi colori.
- Specificare C++ le regole di formattazione, inclusi diversi stili di ClangFormat.
- Creazione di tasti di scelta rapida personalizzati.

È possibile sincronizzare le preferenze tra più computer e creare e archiviare più set di preferenze e condividerli con i colleghi. È possibile installare le estensioni dalla Visual Studio Marketplace, offrendo opzioni aggiuntive per la personalizzazione del comportamento. Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

## <a name="arrange-window-layout"></a>Disposizione layout finestra

All'interno della finestra di Visual Studio, lo spazio è diviso nel menu principale, nella barra degli strumenti, nell'editor di codice (o nella finestra del documento) e nelle finestre degli strumenti, ad esempio Esplora soluzioni e Elenco errori. Alcune finestre si sovrappongono nella stessa posizione. Ad esempio, Esplora soluzioni, Visualizzazione classi, Visualizzazione risorse e Esplora controllo codice sorgente condividono tutte la stessa posizione predefinita. Per spostarsi tra di essi, selezionare le schede nella parte inferiore del frame. Per rendere visibili due o più di queste finestre nello stesso momento, è sufficiente trascinarne una dalla barra del titolo in una nuova posizione. È possibile ancorarlo a uno dei bordi della finestra principale di Visual Studio oppure è possibile spostarlo.

Lo screenshot seguente mostra la finestra **Team Explorer** trascinata dalla posizione predefinita a una nuova posizione ancorata sul lato sinistro dell'editor di codice. L'area ombreggiata blu indica il punto in cui verrà inserita la finestra quando viene rilasciato il pulsante del mouse.

![Screenshot della finestra di Team Explorer di Visual Studio, con la modifica del layout evidenziata](media/window-layout-move-team-explorer.png)

Nella finestra del documento ogni file aperto è contenuto in un frame a schede. È possibile fluttuare o bloccare queste schede, esattamente come le finestre degli strumenti. Per altre informazioni, vedere [Personalizzazione del layout delle finestre in Visual Studio](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Per nascondere tutte le finestre degli strumenti e ingrandire la finestra dell'editor di codice, premere **Alt** + **MAIUSC** + **invio** per attivare o disattivare la *modalità schermo intero*.

## <a name="set-c-coding-styles-and-formatting"></a>Impostare C++ gli stili e la formattazione del codice

È possibile specificare molte opzioni di formattazione del codice singole, ad esempio le posizioni di rientro e parentesi graffe. A tale scopo, passare a **strumenti** > **Opzioni** > **editor di testo** > **formattazione** **C/C++**  > (oppure premere **CTRL + Q** e cercare "formattazione"). In alternativa, è possibile specificare uno degli stili [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) (o lo stile ClangFormat personalizzato).

![Screenshot delle opzioni di ClangFormat](media/clang-format-ide.png)

Per ulteriori informazioni su tutte le opzioni di formattazione, vedere [Opzioni, editor di testo,C++C/, formattazione](/visualstudio/ide/reference/options-text-editor-c-cpp-formatting).

## <a name="set-the-color-theme"></a>Impostare il tema colori

Per impostare uno sfondo chiaro o scuro, digitare **CTRL + Q** e cercare "tema colori". È anche possibile trovarli scegliendo **strumenti** > **Opzioni** > **ambiente**e scegliendo **tema colori**.

![Screenshot dei temi colori](media/tools-options-color-theme.png)

Ad esempio, ecco il tema scuro:

![Screenshot di Visual Studio con tema colori scuro](media/tools-options-dark-theme.png)

## <a name="customize-code-colorization"></a>Personalizzare la colorazione del codice

In Visual Studio 2019 è possibile scegliere tra tre *combinazioni di colori*predefinite. Che specificano la modalità di colorazione degli elementi di codice nell'editor. Per scegliere un tema, passare a **strumenti** > **Opzioni** > **editor di testo** > **visualizzazione** **CC++ /**  > e scegliere **combinazione colori**:

![Screenshot delle C++ opzioni della combinazione di colori con evidenziato avanzato](media/color-schemes.png)

Nella combinazione di colori denominata **Visual Studio 2017**, la maggior parte degli elementi di codice sono semplicemente neri. Nella combinazione di colori **avanzata** , le funzioni, le variabili locali, le macro e gli altri elementi vengono colorati. Nello schema **Enhanced (Globals vs. Members)** , le funzioni e le variabili globali vengono colorate per contrastare i membri della classe. La modalità predefinita è **migliorata**e ha un aspetto simile al seguente:

![Screenshot della combinazione di colori avanzata](media/color-scheme-enhanced.png)

Indipendentemente dal tema o dallo schema dei colori attivo, è possibile personalizzare il tipo di carattere e i colori dei singoli elementi di codice. A tale scopo, passare a **strumenti** > **opzioni** > **ambiente** > **tipi di carattere e colori** (oppure premere **CTRL + Q** e cercare "caratteri"). Scorrere l'elenco degli elementi visualizzati fino a visualizzare le C++ opzioni.

![Screenshot delle C++ opzioni relative al tipo di carattere e al colore](media/tools-options-cpp-colors.png)

I colori impostati qui sostituiscono i valori definiti per le combinazioni di colori. Se si desidera tornare ai colori predefiniti per la combinazione di colori, impostare un colore di nuovo su **predefinito**.

## <a name="customize-the-toolbars"></a>Personalizzare le barre degli strumenti

Le barre degli strumenti rappresentano un modo pratico per eseguire comandi con un solo clic, anziché tramite i menu o i tasti di scelta rapida. Visual Studio include un set standard di barre degli strumenti. Per lo C++ sviluppo standard, le barre degli strumenti più utili sono probabilmente standard, editor di testo, compilazione, debug, controllo del codice sorgente e file di confronto. Per lo sviluppo di Windows, l'editor finestre e l'editor di immagini sono utili per il layout delle finestre di dialogo e delle icone di modifica.

Passare il mouse sulle icone della barra degli strumenti per vedere quale comando rappresenta:

![Screenshot delle icone della barra degli strumenti, con esempio di informazioni sui comandi disponibili al passaggio del mouse](media/toolbar-mouse-hover.png)

È possibile aggiungere o rimuovere comandi oppure creare una barra degli strumenti personalizzata selezionando la freccia rivolta verso il basso. Per spostare la barra degli strumenti in una nuova posizione, trascinarla con la barra tratteggiata a sinistra.

![Screenshot della barra degli strumenti, con freccia giù e barra tratteggiata evidenziata](media/toolbar-move-edit.png).

Per altre informazioni, vedere [procedura: personalizzare menu e barre degli strumenti in Visual Studio](/visualstudio/ide/how-to-customize-menus-and-toolbars-in-visual-studio).

## <a name="show-or-hide-line-numbers"></a>Mostra o Nascondi numeri di riga

È possibile specificare se i numeri di riga vengono visualizzati a sinistra delle finestre dell'editor. In **Opzioni**, in **C/C++** , selezionare **generale**. Nella sezione **Impostazioni** selezionare o deselezionare i **numeri di riga**, a seconda delle preferenze.

![Screenshot delle opzioni generali, con i numeri di riga evidenziati](media/tools-options-line-numbers.png)

## <a name="create-keyboard-shortcuts"></a>Creazione di tasti di scelta rapida

Molti comandi in Visual Studio hanno *scelte rapide da tastiera*, combinazioni di tasti con i tasti CTRL, ALT e MAIUSC. È possibile modificare questi tasti di scelta rapida o crearne di nuovi in Visual Studio. Passare a **strumenti** > **opzioni** > **ambiente** > **tastiera** (oppure premere **CTRL + Q** e cercare "collegamenti"). Per altre informazioni, vedere [identificare e personalizzare i tasti di scelta rapida in Visual Studio](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).
