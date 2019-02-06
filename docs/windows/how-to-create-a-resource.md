---
title: 'Procedura: Crea una risorsa (C++)'
ms.date: 11/04/2016
f1_keywords:
- vs.resourceview.F1
- vc.editors.insertresource
- vc.editors.newcustomresource
helpviewer_keywords:
- toolbars [C++], resources
- resource toolbars
- resources [C++], creating
- resources [C++], viewing
- Resource View window
- resources [C++], adding
- Add Resource dialog box [C++]
- Custom Resource Type dialog box [C++]
ms.assetid: aad44914-9145-45a3-a7d8-9de89b366716
ms.openlocfilehash: fdf158bab7894497dbcfb147eb2c6e061879be75
ms.sourcegitcommit: 63c072f5e941989636f5a2b13800b68bb7129931
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/06/2019
ms.locfileid: "55764051"
---
# <a name="how-to-create-a-resource-c"></a>Procedura: Crea una risorsa (C++)

Il **visualizzazione risorse** finestra Visualizza i file di risorse inclusi nei progetti. Se si espande la cartella di primo livello (ad esempio Progetto1.rc) vengono visualizzati i tipi di risorse all'interno di quel file RC. Se si espande ogni tipo di risorsa, vengono visualizzate le singole risorse di quel tipo.

> [!NOTE]
> Queste informazioni non si applicano alle risorse nelle App Universal Windows Platform. Per altre informazioni, vedere [delle risorse delle App e il sistema di gestione risorse](/windows/uwp/app-resources/).

> [!NOTE]
> **Visualizzazione risorse** non è supportato nelle edizioni Express.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

Il **visualizzazione di risorse** utilizzati nella finestra di **Aggiungi risorsa** finestra di dialogo per aggiungere risorse a un progetto di applicazione desktop Windows C++. Questa finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Tipo di risorsa**|Specifica il tipo di risorsa che si vuole creare.<br/><br/>È possibile espandere le categorie di risorse della finestra di dialogo e del cursore per visualizzare risorse aggiuntive. Queste risorse si trovano in Visual Studio ...\Microsoft `version`\VC\VCResourceTemplates\\< LCID\>\mfc.rct.. Se si aggiungono file con estensione rct, è necessario inserirli in questa directory oppure è necessario specificare un [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md) per loro. Le risorse contenute in tali file verranno quindi visualizzate in corrispondenza del secondo livello nella categoria appropriata. Non vi è alcun limite predefinito al numero di file con estensione rct che è possibile aggiungere.<br/><br/>Le risorse visualizzate al primo livello del controllo albero sono le risorse predefinite fornite da Visual Studio.|
|**Nuovo**|Crea una risorsa in base al tipo selezionato nel **tipo di risorsa** casella. La risorsa viene visualizzata nell'editor appropriato. Ad esempio, se si crea una risorsa finestra di dialogo, viene aperto nel [editor finestre](../windows/dialog-editor.md).|
|**Import**|Apre la **importare** nella finestra di dialogo in cui è possibile accedere a una risorsa quale si desidera importare nel progetto corrente. È possibile importare una bitmap, un'icona, un cursore, un file sorgente HTML, un file audio (WAV) o un file di risorse personalizzato.|
|**Personalizzato**|Apre la **nuova risorsa personalizzata** nella finestra di dialogo in cui è possibile creare una risorsa personalizzata. Le risorse personalizzate possono essere modificate solo nell'editor binario.|

Il **nuova risorsa personalizzata** nella finestra di dialogo consente di creare una nuova risorsa personalizzata in un progetto C++. Questa finestra di dialogo dispone della proprietà seguente:

|Proprietà|Descrizione|
|---|---|
|**Tipo di risorsa**|Fornisce una casella di testo per l'utente di immettere il nome di un tipo di risorsa personalizzata. Visual C++ in maiuscolo automaticamente il nome quando si esce dal **nuova risorsa personalizzata** nella finestra di dialogo.|

Quando si crea una nuova risorsa, Visual C++ assegna un nome univoco, ad esempio, `IDD_Dialog1`. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato oppure nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

È possibile creare una risorsa come nuova risorsa predefinita (una risorsa che non è basata su un modello) o come una risorsa in base a un [modello](../windows/how-to-use-resource-templates.md).

> [!NOTE]
> Non specificare un nome di risorsa o un ID che è riservato da Visual Studio. I nomi riservati sono DESIGNINFO, HWB e TEXTINCLUDE e l'ID riservato è 255.

## <a name="to-open-the-resource-view-window"></a>Per aprire la finestra Visualizzazione risorse

Selezionare **visualizzazione di risorse** nel **visualizzazione** menu.

   \- oppure -

Premere **Ctrl** + **MAIUSC** + **elettronica**.

> [!TIP]
> È possibile fare doppio clic sui **visualizzazione risorse** finestra per avviare un menu di scelta rapida dei comandi. È anche possibile fare doppio clic sulla barra del titolo per ancorare o disancorare la finestra. Facendo clic con il pulsante destro del mouse sulla barra del titolo vengono resi disponibili comandi aggiuntivi per controllare il comportamento della finestra. Per altre informazioni, vedere [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

## <a name="to-create-a-new-resource-in-resource-view"></a>Per creare una nuova risorsa in Visualizzazione risorse

1. Con lo stato attivo sul file RC in **visualizzazione di risorse**, selezionare il **modificare** dal menu e scegliere **Aggiungi risorsa** (o fare clic sul file RC in **visualizzazione risorse** e scegliere **Aggiungi risorsa** dal menu di scelta rapida).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **Aggiungi risorsa** finestra di dialogo, scegliere il tipo di risorsa da aggiungere al progetto.

## <a name="to-create-a-new-resource-in-solution-explorer"></a>Per creare una nuova risorsa in Esplora soluzioni

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella del progetto e scegliere **Aggiungi**, quindi **Aggiungi risorsa** dal menu di scelta rapida.

   Se si ha già un file RC nel progetto, questo passaggio verrà creato uno. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.

2. Nel **Aggiungi risorsa** finestra di dialogo, scegliere il tipo di risorsa da aggiungere al progetto.

## <a name="to-create-a-new-resource-in-class-view"></a>Per creare una nuova risorsa in Visualizzazione classi

1. Nelle [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic su classe e scegliere **Add**, quindi selezionare **Aggiungi risorsa** dal menu di scelta rapida.

2. Nel **Aggiungi risorsa** finestra di dialogo, scegliere il tipo di risorsa da aggiungere al progetto.

## <a name="to-create-a-new-resource-from-the-project-menu"></a>Per creare una nuova risorsa dal menu Progetto

Scegliere **Aggiungi risorsa** dal menu **Progetto**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
