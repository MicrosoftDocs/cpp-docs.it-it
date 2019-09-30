---
title: Impostare le C++ preferenze di codifica in Visual Studio
ms.description: Customize C++ formatting, colors, layout, line numbers, menus and more in the Visual Studio IDE.
ms.topic: overview
ms.date: 09/27/2019
ms.openlocfilehash: 90c9f39135b90a2c5015861a78dd8760b9a8aeed
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71686887"
---
# <a name="set-your-c-coding-preferences-in-visual-studio"></a>Impostare le C++ preferenze di codifica in Visual Studio

Puoi rendere la tua C++ esperienza di codifica più pratica, produttiva e piacevole grazie alla personalizzazione di Visual Studio. È possibile personalizzare i menu e le barre degli strumenti, disporre il layout della finestra, impostare i C++ temi dei colori, specificare le regole di formattazione, incluse diverse versioni di ClangFormat e creare tasti di scelta rapida personalizzati. È possibile sincronizzare le preferenze tra più computer e creare e archiviare più set di preferenze e condividerli con i colleghi. È possibile installare le estensioni dal Visual Studio Marketplace che forniscono un comportamento personalizzato aggiuntivo. Molte di queste opzioni sono descritte in [personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

## <a name="arrange-window-layout"></a>Disposizione layout finestra

All'interno della finestra di Visual Studio, lo spazio è diviso nel menu principale, nella barra degli strumenti, nell'editor di codice (o nella finestra del documento) e nelle finestre degli strumenti (**Esplora soluzioni**, **Elenco errori**e così via). Alcune finestre si sovrappongono nella stessa posizione. Ad esempio, **Esplora soluzioni**, **Visualizzazione classi**, **visualizzazione risorse**e **Esplora controllo codice sorgente** condividono tutte la stessa posizione predefinita. Per passare dall'una all'altra, fare clic sulle schede nella parte inferiore del frame. Per rendere visibili due o più di queste finestre nello stesso momento, è sufficiente trascinarne una dalla barra del titolo in una nuova posizione. È possibile ancorarlo a uno dei bordi della finestra principale di Visual Studio oppure è possibile spostarlo. Nella figura seguente viene illustrata la finestra di **Team Explorer** nel processo di trascinamento dalla posizione predefinita a una nuova posizione ancorata sul lato sinistro dell'editor di codice. L'area ombreggiata blu indica il punto in cui verrà inserita la finestra quando viene rilasciato il pulsante del mouse.

![Modifica del layout delle finestre](media/window-layout-move-team-explorer.png)

Nella finestra del documento ogni file aperto è contenuto in un frame a schede. È possibile fluttuare o bloccare queste schede esattamente come le finestre degli strumenti. Per altre informazioni, vedere [Personalizzazione del layout delle finestre in Visual Studio](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Per nascondere tutte le finestre degli strumenti e ingrandire la finestra dell'editor di codice, premere **Alt** + **MAIUSC** + **invio** per attivare o disattivare la *modalità schermo intero*.

## <a name="set-c-coding-styles-and-formatting"></a>Impostare C++ gli stili e la formattazione del codice

È possibile specificare molte opzioni di formattazione del codice singole, ad esempio posizioni di rientro e parentesi graffe, passando a **strumenti** > **Opzioni** > **editor di testo** > **C/C++**  > **formattazione** (o digitare **CTRL + Q** e cercare "formattazione". In alternativa, è possibile specificare uno degli stili [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) (o lo stile ClangFormat personalizzato):

![Opzioni di ClangFormat](media/clang-format-ide.png)

Per ulteriori informazioni su tutte le opzioni di formattazione, vedere [Opzioni, editor di testo,C++C/, formattazione](/visualstudio/ide/reference/options-text-editor-c-cpp-formatting).

## <a name="set-the-color-theme"></a>Impostare il tema colori

Per impostare uno sfondo chiaro o scuro, digitare **CTRL + Q** e cercare "tema colori". È anche possibile usare **strumenti** > **Opzioni** > **ambiente** e scegliere **tema colori**:

![Temi colori](media/tools-options-color-theme.png)

La figura seguente mostra il tema scuro:

![Tema scuro](media/tools-options-dark-theme.png)

## <a name="customize-code-colorization"></a>Personalizzare la colorazione del codice

In Visual Studio 2019 è possibile scegliere tra tre combinazioni di *colori* predefinite che specificano la modalità di colorazione degli elementi di codice nell'editor. Per scegliere un tema, passare a **strumenti** > **Opzioni** > **editor di testo**@no__t-**5 CC++/**  > **View** e scegliere **combinazione colori**:

![C++Combinazioni colori](media/color-schemes.png)

Nella combinazione di colori di **Visual Studio 2017** , la maggior parte degli elementi di codice sono semplicemente neri. Nella combinazione di colori **avanzata** , le funzioni, le variabili locali, le macro e gli altri elementi vengono colorati. Nel **Enhanced (Globals vs. Membri)**  schema, funzioni globali e variabili vengono colorate per contrastare i membri della classe. La modalità predefinita è **migliorata** e ha un aspetto simile al seguente:

![Combinazione colori migliorata](media/color-scheme-enhanced.png)

Indipendentemente dal tema o dallo schema dei colori attivo, è possibile personalizzare il tipo di carattere e i colori per singoli elementi di codice passando a **strumenti** > **Opzioni** > **ambiente** > **tipi di carattere e colori** (oppure digitare  **CTRL + Q** e cercare "Fonts"). Scorrere l'elenco degli elementi visualizzati fino a visualizzare le C++ opzioni seguenti:

![C++opzioni relative al tipo di carattere e al colore](media/tools-options-cpp-colors.png)

I colori impostati qui sostituiscono i valori definiti per le combinazioni di colori. Se è stato modificato, è necessario impostare di nuovo il colore su **predefinito** , ma si desidera utilizzare i colori predefiniti per la combinazione di colori.

## <a name="customize-the-toolbars"></a>Personalizzare le barre degli strumenti

Le barre degli strumenti rappresentano un metodo pratico per eseguire comandi con un solo clic del mouse, anziché utilizzare i menu o i tasti di scelta rapida. Visual Studio include un set standard di barre degli strumenti. Per lo C++ sviluppo standard, le barre degli strumenti più utili sono probabilmente standard, editor di testo, compilazione, debug, controllo del codice sorgente e possibilmente confrontare i file. Per lo sviluppo di Windows, l'editor finestre e l'editor di immagini sono utili per il layout delle finestre di dialogo e delle icone di modifica.

Passare il mouse sulle icone della barra degli strumenti per vedere quale comando rappresenta:

![Barra degli strumenti informazioni rapide](media/toolbar-mouse-hover.png)

È possibile aggiungere o rimuovere comandi o creare una barra degli strumenti personalizzata facendo clic sulla freccia rivolta verso il basso. Per spostare la barra degli strumenti in una nuova posizione, trascinarla con la barra tratteggiata a sinistra:

![Personalizzare o spostare una barra degli strumenti](media/toolbar-move-edit.png).

Per altre informazioni, vedere [Procedura: Personalizzare i menu e le barre degli strumenti in Visual Studio @ no__t-0.

## <a name="show-or-hide-line-numbers"></a>Mostra o Nascondi numeri di riga

Per specificare se i numeri di riga vengono visualizzati a sinistra delle finestre dell'editor, passare a e selezionare o deselezionare i **numeri di riga**:

![Numeri di riga](media/tools-options-line-numbers.png)

## <a name="create-keyboard-shortcuts"></a>Creazione di tasti di scelta rapida

Tutti i comandi in Visual Studio possono essere eseguiti con tasti di scelta rapida usando varie combinazioni di tasti con i tasti CTRL, ALT e MAIUSC. È possibile creare collegamenti personalizzati passando a **strumenti** > **Opzioni** > **ambiente** > **tastiera** (oppure premere **CTRL + Q** e cercare "collegamenti"). Per altre informazioni, vedere [identificare e personalizzare i tasti di scelta rapida in Visual Studio](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).
