---
title: Impostare le preferenze di codifica in Visual Studio
ms.description: Customize C++ formatting, colors, layout, line numbers, and menus in the Visual Studio IDE.
ms.topic: overview
ms.date: 09/27/2019
ms.openlocfilehash: e3a665ead7a314b343ec3320e95b189f83a38a47
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365385"
---
# <a name="set-your-c-coding-preferences-in-visual-studio"></a>Impostare le preferenze di codifica in Visual Studio

È possibile rendere più conveniente, produttivo e piacevole l'esperienza di codifica in C. È possibile:

- Personalizzare i menu e le barre degli strumenti.
- Disporre il layout della finestra.
- Impostare i temi di colore.
- Specificare le regole di formattazione di C, inclusi diversi stili di ClangFormat.
- Creare scelte rapide da tastiera personalizzate.

Puoi sincronizzare le tue preferenze su più macchine e creare e memorizzare più set di preferenze e condividerle con i compagni di squadra. È possibile installare le estensioni da Visual Studio Marketplace, offrendo opzioni aggiuntive per la personalizzazione del comportamento. Per ulteriori informazioni, vedere [Personalizzare l'IDE](/visualstudio/ide/personalizing-the-visual-studio-ide)di Visual Studio.

## <a name="arrange-window-layout"></a>Disporre il layout della finestra

All'interno della finestra di Visual Studio, lo spazio è diviso nel menu principale, nella barra degli strumenti, nell'editor di codice (o nella finestra del documento) e nelle finestre degli strumenti (ad esempio Esplora soluzioni ed Elenco errori). Alcune finestre si sovrappongono nella stessa posizione. Ad esempio, Esplora soluzioni, Visualizzazione classi, Visualizzazione risorse ed Esplora controllo del codice sorgente condividono tutti la stessa posizione predefinita. È possibile passare da uno all'altro selezionando le schede nella parte inferiore del frame. Per rendere visibili due o più di queste finestre contemporaneamente, è sufficiente trascinarne una dalla barra del titolo in una nuova posizione. È possibile ancorarlo a uno dei bordi della finestra principale di Visual Studio oppure è possibile renderlo mobile.

Nella schermata seguente viene illustrata la finestra **di Team Explorer** trascinata dalla posizione predefinita in una nuova posizione ancorata sul lato sinistro dell'editor di codice. L'area ombreggiata blu indica dove verrà posizionata la finestra quando il pulsante del mouse viene rilasciato.

![Screenshot della finestra di Visual Studio Team Explorer con la modifica del layout evidenziata](media/window-layout-move-team-explorer.png)

Nella finestra del documento, ogni file aperto è contenuto in una cornice a schede. È possibile rendere mobili o bloccare queste schede, proprio come le finestre degli strumenti. Per altre informazioni, vedere [Personalizzazione del layout delle finestre in Visual Studio](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Per nascondere tutte le finestre degli strumenti e ingrandire la finestra dell'editor di codice, premere **ALT** + **MAIUSC** + **INVIO** per attivare o disattivare la *modalità a schermo intero.*

## <a name="set-c-coding-styles-and-formatting"></a>Impostare gli stili di codifica e la formattazione di C

È possibile specificare molte opzioni di formattazione del codice individuali, ad esempio le posizioni di rientro e parentesi graffa. A tale scopo, andare a **Strumenti** > **Opzioni** > **Editor** > di testo**C / C ,** > **Formattazione** (o digitare **Ctrl e Q** e cercare "Formattazione"). In alternativa, è possibile specificare uno degli stili [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) (o il proprio stile ClangFormat personalizzato).

![Schermata delle opzioni di ClangFormat](media/clang-format-ide.png)

Per ulteriori informazioni su tutte le opzioni di formattazione, vedere [Opzioni, Editor di testo, C/C, Formattazione](/visualstudio/ide/reference/options-text-editor-c-cpp-formatting).

## <a name="set-the-color-theme"></a>Impostare il tema colori

Per impostare uno sfondo chiaro o scuro, digitare **Ctrl e** fare clic su "Tema colore". È inoltre possibile trovarli accedendo a **Tools** > **Strumenti** > **Opzioni ambiente**e scegliendo Tema **colore**.

![Screenshot dei temi di colore](media/tools-options-color-theme.png)

Ad esempio, ecco il tema scuro:

![Schermata di Visual Studio con tema di colore scuro](media/tools-options-dark-theme.png)

## <a name="customize-code-colorization"></a>Personalizzare la colorazione del codice

In Visual Studio 2019 è possibile scegliere tra tre *combinazioni*di colori predefinite. Specificano come vengono colorate gli elementi di codice nell'editor. Per scegliere un**View**tema, passare a **Strumenti** > **Opzioni** > Editor > **di testo****C/C** > , Visualizza e scegliere **Combinazione colori**:

![Screenshot delle opzioni di Combinazione colori di C, con l'opzione Avanzata evidenziata](media/color-schemes.png)

Nella combinazione di colori denominata **Visual Studio 2017,** la maggior parte degli elementi di codice sono semplicemente neri. Nella combinazione di colori **avanzata,** le funzioni, le variabili locali, le macro e altri elementi sono colorate. Nello schema **Enhanced (Globals vs. Members),** le funzioni e le variabili globali sono colorate in contrasto con i membri della classe. La modalità predefinita è **Enhanced**, ed è simile alla seguente:

![Screenshot della combinazione di colori avanzata](media/color-scheme-enhanced.png)

Indipendentemente dal tema o dalla combinazione di colori attiva, è possibile personalizzare il tipo di carattere e i colori per i singoli elementi di codice. Per fare questo, andare a **Strumenti** > **Opzioni** > **Ambiente** > **Font e Colori** (o digitare Ctrl e **Q** e cercare "Font"). Scorrere verso il basso l'elenco degli elementi di visualizzazione fino a visualizzare le opzioni di C.

![Screenshot delle opzioni relative ai tipi di carattere e ai colori di C](media/tools-options-cpp-colors.png)

I colori impostati qui sostituiscono i valori definiti per le combinazioni di colori. Se si desidera tornare ai colori predefiniti per la combinazione di colori, impostare un colore su **Predefinito**.

## <a name="customize-the-toolbars"></a>Personalizzare le barre degli strumenti

Le barre degli strumenti forniscono un modo pratico per emettere comandi con un solo clic, anziché utilizzando i menu o le scelte rapide da tastiera. Visual Studio include un set standard di barre degli strumenti. Per lo sviluppo standard di C, le barre degli strumenti più utili sono probabilmente Standard, Editor di testo, Compilazione, Debug, Controllo del codice sorgente e Confronta file. Per lo sviluppo di Windows, l'editor finestre e l'editor di immagini sono utili per il layout delle finestre di dialogo e delle icone di modifica.

Passa il mouse sopra le icone nella barra degli strumenti per vedere quale comando rappresenta:

![Screenshot delle icone della barra degli strumenti, con un esempio di informazioni sui comandi disponibili al passaggio del mouse](media/toolbar-mouse-hover.png)

È possibile aggiungere o rimuovere comandi o creare una barra degli strumenti personalizzata selezionando la freccia in giù. Per spostare la barra degli strumenti in una nuova posizione, trascinarla in base alla barra tratteggiata a sinistra.

![Schermata della barra degli strumenti con la freccia in giù e la barra tratteggiata evidenziata](media/toolbar-move-edit.png).

Per ulteriori informazioni, vedere [Procedura: personalizzare menu e barre degli strumenti in Visual Studio](/visualstudio/ide/how-to-customize-menus-and-toolbars-in-visual-studio).

## <a name="show-or-hide-line-numbers"></a>Mostrare o nascondere i numeri di riga

È possibile specificare se i numeri di riga vengono visualizzati a sinistra delle finestre dell'editor. In **Opzioni**, in **C/C**, selezionare **Generale**. Nella sezione **Impostazioni,** selezionare o deselezionare **Numeri di riga,** a seconda delle preferenze.

![Screenshot delle opzioni generali con l'opzione Numeri di riga evidenziata](media/tools-options-line-numbers.png)

## <a name="create-keyboard-shortcuts"></a>Creare scelte rapide da tastiera

Molti comandi in Visual Studio dispongono di tasti di *scelta rapida,* ovvero combinazioni di tasti con i tasti CTRL, ALT e MAIUSC. È possibile modificare questi tasti di scelta rapida o crearne di nuovi in Visual Studio.You can modify these keyboard shortcuts or create new ones your own in Visual Studio. Vai a **Strumenti** > **Opzioni** > **Ambiente** > **Tastiera** (o digitare Ctrl e **Q** e cercare "scorciatoie"). Per ulteriori informazioni, vedere Identificare e personalizzare i tasti di [scelta rapida in Visual Studio](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).
