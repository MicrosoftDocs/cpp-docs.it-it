---
title: Creazione di un'immagine per dispositivo (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.icon
- vc.editors.newimagetype
- vc.editors.customimage
- vc.editors.opendeviceimage
helpviewer_keywords:
- cursors [C++], creating
- icons [C++], creating
- display devices [C++], creating image
- images [C++], creating for display devices
- icons [C++], inserting
- New <Device> Image Type dialog box [C++]
- Custom Image dialog box [C++]
- Open <Device> Image dialog box [C++]
ms.assetid: 5a536928-32df-4ace-beb1-1521ce3b871f
ms.openlocfilehash: ce1069f6f410d7a60d631461086ca8870ef679c0
ms.sourcegitcommit: efcc8c97570ddf7631570226c700e8f6ebb6c7be
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2019
ms.locfileid: "55560296"
---
# <a name="creating-a-device-image-image-editor-for-icons"></a>Creazione di un'immagine per dispositivo (Editor di immagini per le icone)

Quando si crea una nuova icona o una risorsa di cursore, la **immagine** editor crea innanzitutto un'immagine in uno stile specifico (32 × 32, 32 × 32, bianco e nero per i cursori e 16 colori per le icone). È quindi possibile aggiungere immagini di diverse dimensioni e stili per l'icona iniziale o un cursore e modificare ogni ulteriore immagine, in base alle esigenze, per i dispositivi di visualizzazione diverse. È anche possibile modificare un'immagine utilizzando un'operazione di taglia e Incolla da un tipo di immagine esistente o da una bitmap creata in un programma di grafica.

Quando si apre la risorsa icona o cursore nel [editor di immagini](../windows/image-editor-for-icons.md), l'immagine che corrisponde maggiormente il dispositivo di visualizzazione corrente viene aperto per impostazione predefinita.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="new-ltdevicegt-image-type-dialog-box"></a>Nuove &lt;dispositivo&gt; nella finestra di dialogo tipo di immagine

Il **New &lt;dispositivo&gt; tipo di immagine** nella finestra di dialogo consente di creare una nuova immagine del dispositivo di un tipo specificato. Per aprire la **New \<dispositivo > immagine** nella finestra di dialogo **tipo nuova immagine** sulla **immagine** menu. Sono incluse le proprietà seguenti **tipo di immagine di destinazione** e **Custom**.

### <a name="target-image-type"></a>Tipo di immagine di destinazione

Elenca i tipi di immagini disponibili. Selezionare il tipo di immagine che si desidera aprire:

||||
|-|-|-|
|-16x16, 16 colori|-48 x 48, 16 colori|-96 x 96, 16 colori|
|-16x16, 256 colori|-48 x 48, 256 colori|-96 x 96, 256 colori|
|-16 x 16, monocromatico|-48 x 48, monocromatico|-96 x 96, monocromatico|
|-32 x 32, 16 colori|-64 x 64, 16 colori||
|-32 x 32, 256 colori|-64 x 64, 256 colori||
|-32 x 32, monocromatico|-64 x 64, monocromatico||

> [!NOTE]
> Le immagini esistenti non essere visualizzate in questo elenco.

### <a name="custom"></a>Personalizzato

Apre la **immagine personalizzata** nella finestra di dialogo in cui è possibile creare una nuova immagine con dimensioni personalizzate e numero di colori.

Il **immagine personalizzata** nella finestra di dialogo consente di creare una nuova immagine con dimensioni personalizzate e numero di colori. Sono incluse le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Width**|Fornisce uno spazio per immettere la larghezza dell'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Height**|Fornisce uno spazio per l'utente di immettere l'altezza per l'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Colori**|Fornisce uno spazio che consente di scegliere il numero di colori per l'immagine personalizzata: 2, 16 o 256.|

## <a name="open-ltdevicegt-image-dialog-box"></a>Aprire &lt;dispositivo&gt; dialogo dell'immagine

Usare la **apre &lt;dispositivo&gt; immagine** finestra di dialogo per aprire immagini per i dispositivi nei progetti C++. Elenca immagini per i dispositivi esistenti nella risorsa corrente (immagini che fanno parte della risorsa corrente). È la seguente proprietà inclusione:

|Proprietà|Descrizione|
|---|---|
|**Immagini correnti**|Elenca le immagini incluse nella risorsa. Selezionare il tipo di immagine che si desidera aprire.|

## <a name="to-create-a-new-icon-or-cursor"></a>Per creare una nuova icona o cursore

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se hai già una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile fare doppio clic il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e scegliere **New**. Per le icone, questa azione crea una risorsa icona con un 32 × 32, un'icona a 16 colori. Per i cursori, a 32 × 32, viene creata l'immagine monocromatica (2-colore).

   Se un segno più (**+**) visualizzato accanto al tipo di risorsa immagine nel **Inserisci risorsa** finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Icone e cursori: Risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Icone e cursori: Risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)<br/>
[Menu immagine](../windows/image-menu-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
