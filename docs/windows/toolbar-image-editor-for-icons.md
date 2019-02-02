---
title: Sulla barra degli strumenti (Editor di immagini di C++ per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
- vc.editors.texttool
helpviewer_keywords:
- Graphics toolbar
- Image editor [C++], toolbar
- Image editor [C++], Option selector
- Properties window
- Option selector, Image editor
- toolbars [C++], showing
- toolbars [C++], hiding
- text, adding to an image
- Text Tool dialog box [C++]
- Text Tool Font dialog box [C++]
- fonts, changing on an image
- text, on images
ms.assetid: a0af4209-6273-4106-a7c1-0edecc9b5755
ms.openlocfilehash: dfbd721afd997f3151b1c20a7e0e1fb60e0c83e4
ms.sourcegitcommit: efcc8c97570ddf7631570226c700e8f6ebb6c7be
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2019
ms.locfileid: "55560322"
---
# <a name="toolbar-c-image-editor-for-icons"></a>Sulla barra degli strumenti (Editor di immagini di C++ per le icone)

Il **Editor di immagini** sulla barra degli strumenti contiene gli strumenti di disegno, disegno, immettendo il testo, la cancellazione e la modifica delle visualizzazioni. Contiene inoltre un selettore di opzioni con cui è possibile selezionare le opzioni per l'utilizzo di ogni strumento. Ad esempio, è possibile scegliere da vari larghezze di pennello, fattori di ingrandimento e gli stili di riga.

> [!NOTE]
> Tutti gli strumenti disponibili nel **Editor di immagini** sono anche disponibili dalla barra degli strumenti il **immagine** menu (sotto la **strumenti** comando).

![Barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbar.gif "vcImageEditorToolbar") barra degli strumenti Editor di immagini

Usare la **Editor di immagini** sulla barra degli strumenti e **opzione** selettore, selezionare lo strumento o di opzione che si desidera.

> [!TIP]
> Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

Con il **opzione** selettori è possibile specificare la larghezza di una riga, tratto e altro ancora. L'icona al **opzione** pulsante del selettore varia a seconda di quale strumento è stata selezionata.

![Disegno di&#45;selettore di forma nella barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbaroptionselector.gif "vcImageEditorToolbarOptionSelector") selettore di opzioni nella barra degli strumenti Editor di immagini

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="use-the-text-tool-dialog-box"></a>Utilizzare la finestra di dialogo strumento testo

Usare la **strumento testo** finestra di dialogo per aggiungere testo a una risorsa di cursori, bitmap o icona.

Per accedere a questa finestra di dialogo, aprire il [Editor di immagini](../windows/window-panes-image-editor-for-icons.md). Selezionare **degli strumenti** dalle **immagine** menu e quindi selezionare il **strumento testo** comando.

### <a name="font-button"></a>Pulsante tipo di carattere

Apre la **carattere strumento testo** della finestra di dialogo in cui è possibile modificare il tipo di carattere, stile o dimensione del carattere del cursore. Le modifiche vengono applicate al testo visualizzato nei **testo** area.

Per accedere a questa finestra di dialogo, selezionare la **Font** pulsante il **strumento testo** nella finestra di dialogo. Le proprietà disponibili sono:

|Proprietà|Descrizione|
|---|---|
|**Tipo di carattere**|Elenca i tipi di carattere disponibili.|
|**Stile carattere**|Elenca gli stili disponibili per il tipo di carattere specificato.|
|**Dimensione**|Elenca le dimensioni disponibili per il tipo di carattere specificato.|
|**Esempio**|Visualizzare un esempio del modo in cui testo verrà visualizzato con le impostazioni del carattere specificata.|
|**Script**|Elenca gli script del linguaggio disponibili per il tipo di carattere specificato. Quando si seleziona uno script in lingue diverse, il set di caratteri per quella lingua diventa disponibile per la creazione di documenti multilingue.|

#### <a name="to-change-the-font-of-text-on-an-image"></a>Per modificare il tipo di carattere del testo in un'immagine

La procedura seguente è un esempio di come aggiungere testo a un'icona in un'applicazione Windows e modificare il tipo di carattere del testo.

1. Creare un'applicazione di moduli di Windows C++. Per informazioni dettagliate, vedere [creazione di un progetto di applicazione Windows](/previous-versions/visualstudio/visual-studio-2010/42wc9kk5). Un' *app. ico* file viene aggiunto al progetto per impostazione predefinita.

1. Nelle **Esplora soluzioni**, fare doppio clic sul file *app. ico*. Il [Editor di immagini](../windows/image-editor-for-icons.md) verrà aperto.

1. Dal **immagine** dal menu **Tools** e quindi selezionare **strumento testo**. Il **strumento testo** verrà visualizzata la finestra di dialogo.

1. Nel **dello strumento di testo** finestra di dialogo, digitare *C++* nell'area di testo vuoto. Questo testo verrà visualizzato in una finestra ridimensionabile situata nell'angolo superiore sinistro di *app. ico*, nella **Editor di immagini**.

1. Nel **Editor di immagini**, trascinare la finestra ridimensionabile al centro dell'app. ico, per migliorare la leggibilità del testo.

1. Nel **dello strumento di testo** finestra di dialogo, seleziona il **Font** pulsante. Il **carattere strumento testo** verrà visualizzata la finestra di dialogo.

1. Nel **carattere strumento testo** finestra di dialogo **Times New Roman** dall'elenco dei tipi di carattere disponibili elencate nel **Font** casella di riepilogo.

1. Selezionare **Bold** dall'elenco di stili di carattere disponibili elencate nel **lo stile del carattere** casella di riepilogo.

1. Selezionare **10** dall'elenco di disponibilità punto di dimensioni elencate nel **dimensioni** casella di riepilogo.

1. Selezionare il pulsante **OK** . Il **carattere strumento testo** nella finestra di dialogo verrà chiusa e le nuove impostazioni del tipo di carattere verranno applicate al testo.

1. Selezionare il **Close** pulsante il **strumento testo** nella finestra di dialogo. La finestra ridimensionabile intorno al testo non viene più il **Editor di immagini**.

### <a name="text-area"></a>Area di testo

Visualizza il testo visualizzato come parte della risorsa. Quest'area è inizialmente vuota.

> [!NOTE]
> Se **sfondo trasparente** è impostato, l'immagine verrà inserito solo il testo. Se **sfondo opaco** è impostato, un rettangolo di delimitazione, compilato con la [colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md), verrà inserito dietro il testo. Per altre informazioni, vedere [scelta sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

È possibile fare doppio clic sui **strumento testo** finestra di dialogo per accedere a un menu di scelta rapida predefinito che contiene un elenco di comandi di Windows standard.

## <a name="to-display-or-hide-the-image-editor-toolbar"></a>Per visualizzare o nascondere la barra degli strumenti Editor di immagini

Poiché molti degli strumenti di disegno sono disponibili dal [tastiera](../windows/accelerator-keys-image-editor-for-icons.md), è talvolta utile nascondere il **Editor di immagini** sulla barra degli strumenti.

Nel **View** dal menu **barre degli strumenti** quindi scegliere **Editor di immagini**.

   > [!NOTE]
   > Gli elementi di questa barra degli strumenti verranno visualizzata non disponibili quando un file di immagine dal progetto corrente o non è aperta nella soluzione il **Editor di immagini**. Visualizzare [creazione di un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md), per informazioni sull'aggiunta di file di immagine per i progetti.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Finestra colori](../windows/colors-window-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>