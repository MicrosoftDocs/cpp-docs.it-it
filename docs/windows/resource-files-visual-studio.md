---
title: File di risorse (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- resources [C++]
- .rc files [C++]
- resource files [C++]
- resource script files [C++]
- resource script files [C++], Win-32 based applications
- resource script files [C++], files updated when editing resources
- resources [C++], types of resource files
- rct files [C++]
- rc files [C++]
- resource files [C++], types of
- .rct files [C++]
- resource script files [C++], unsupported types
- manifest resources [C++]
- resources [C++], manifest
- resources [C++], opening
- file types [C++], for resources
- resources [C++], editing
- files [C++], editable types
- resource editing
ms.assetid: 4d2b6fcc-07cf-4289-be87-83a60f69533c
ms.openlocfilehash: 65500644b70841f372edcc6911edefc6c7b9f432
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152690"
---
# <a name="resource-files-c"></a>File di risorse (C++)

> [!NOTE]
> Questo materiale si riferisce alle applicazioni desktop di Windows. Per informazioni sulle risorse nelle App della piattaforma Windows universale, vedere [definizione delle risorse dell'App](/windows/uwp/app-resources/).
>
> Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).
>
> Dal momento che i progetti gestiti non usano i file di script della risorsa, è necessario aprire le risorse da **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Il termine "file di risorse" può fare riferimento a molti tipi di file, tra cui:

- File script di risorse (con estensione rc) di un programma.

- File modello di risorse (con estensione rct)

- Una singola risorsa esistente come file autonomo, ad esempio un file bitmap, icona o cursore, a cui fa riferimento un file RC.

- Un file di intestazione generato dall'ambiente di sviluppo, ad esempio Resource.h, a cui fa riferimento un file RC.

Le risorse presenti [altri tipi di file](../windows/editable-file-types-for-resources.md) , ad esempio .exe,. dll e res. Per lavorare con risorse e file di risorse all'interno del progetto e quelli che non fanno parte del progetto corrente. È possibile anche utilizzare file di risorse che non sono stati creati nell'ambiente di sviluppo di Visual Studio. Ad esempio, è possibile eseguire queste operazioni:

- Usare file di risorse annidati e inclusi in modo condizionale.

- Aggiornare le risorse esistenti o convertirle in formato Visual C++.

- Importare o esportare risorse grafiche nel o dal file di risorse corrente.

- Includere identificatori (simboli) condivisi o di sola lettura che non è possibile modificare tramite l'ambiente di sviluppo.

- Includere le risorse nel file eseguibile (.exe) che non richiedono modifiche o che non deve essere modificato durante il progetto corrente, ad esempio le risorse condivise tra più progetti.

- Includere tipi di risorse non supportati dall'ambiente di sviluppo.

È possibile aprire i seguenti tipi di file e modificare le risorse che contengono:

|Nome file|Descrizione|
|---------------|-----------------|
|RC|File script di risorsa.|
|RCT|File modello di risorse.|
|RES|File di risorse.|
|.resx|File di risorse gestite.|
|EXE|File eseguibili.|
|DLL|File DLL.|
|BMP, ICO, DIB e CUR|File bitmap, icona, della barra degli strumenti e cursore.|

Ambiente di Visual Studio funziona con e interessa i file illustrati nella tabella seguente durante la sessione di modifica di risorse:

|Nome file|Descrizione|
|---------------|-----------------|
|Resource.h|File di intestazione generato dall'ambiente di sviluppo; contiene le definizioni dei simboli. (Include questo file nel controllo del codice sorgente).|
|Nomefile.aps|Versione binaria del file di script di risorsa corrente; usato per il caricamento rapido.<br /><br /> Editor di risorse non leggono direttamente i file con estensione RC o Resource. h. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md). (In genere, è consigliabile non includono file APS nel controllo del codice sorgente).|
|RC|File di script di risorsa che contiene lo script per le risorse nel progetto corrente. Questo file viene sovrascritto dal file APS ogni volta che si salva. (Include questo file nel controllo del codice sorgente).|

Questa sezione illustra come:

- [Creare le risorse](../windows/how-to-create-a-resource-script-file.md)

- [Gestire le risorse](../windows/how-to-copy-resources.md)

- [Includere le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)

## <a name="manifest-resources"></a>Risorse di manifesto

Nei progetti desktop C++, le risorse di manifesto sono file XML che descrivono le dipendenze che usa un'applicazione. Ad esempio, in Visual Studio il file manifesto generato dalla procedura guidata MFC definisce quali DLL di controlli comuni di Windows devono essere usate dall'applicazione, versione 5.0 o 6.0:

```xml
<description>Your app description here</description>
<dependency>
    <dependentAssembly>
        <assemblyIdentity
            type="win32"
            name="Microsoft.Windows.Common-Controls"
            version="6.0.0.0"
            processorArchitecture="X86"
            publicKeyToken="6595b64144ccf1df"
            language="*"
        />
    </dependentAssembly>
</dependency>
```

Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto non soltanto specifica che l'applicazione usa la versione più recente dei controlli comuni di Windows, versione 6.0, come nell'esempio precedente, ma supporta anche il [controllo Syslink](/windows/desktop/Controls/syslink-overview).

Per visualizzare la versione e digitare le informazioni contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o nell'editor di testo di Visual Studio. Se si apre una risorsa di manifesto da [Visualizzazione risorse](../windows/resource-view-window.md), la risorsa verrà aperta in formato binario. Per visualizzare il contenuto di una risorsa di manifesto in un formato più leggibile, è necessario aprire la risorsa dal **Esplora soluzioni**.

Per aprire una risorsa di manifesto, scegliere i passaggi seguenti:

- Per l'editor di testo, con il progetto aperto in **Esplora soluzioni**, espandere il **i file di risorse** cartella e fare doppio clic sul file. manifest.

- Per un altro editor, nella **Esplora soluzioni**, fare doppio clic su file. manifest e scegliere **Apri con...**  dal menu di scelta rapida. Nel **Apri con** finestra di dialogo, specificare l'editor da usare e quindi selezionare **Open**.

> [!NOTE]
> È possibile avere solo una risorsa di manifesto per modulo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>