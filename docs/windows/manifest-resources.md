---
title: Risorse del manifesto (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- manifest resources [C++]
- resources [C++], manifest
- resources [C++], opening
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
ms.openlocfilehash: 2d135cb2d512313f107eef7e95ec90d7972b68b4
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55850190"
---
# <a name="manifest-resources-c"></a>Risorse del manifesto (C++)

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

Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto non soltanto specifica che l'applicazione usa la versione più recente dei controlli comuni di Windows (versione 6.0, come nell'esempio precedente), ma supporta anche il nuovo [controllo Syslink](/windows/desktop/Controls/syslink-overview).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

Per visualizzare la versione e digitare le informazioni contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o nell'editor di testo di Visual Studio. Se si apre una risorsa di manifesto da [Visualizzazione risorse](../windows/resource-view-window.md), la risorsa verrà aperta in formato binario. Per visualizzare il contenuto di una risorsa di manifesto in un formato più leggibile, è necessario aprire la risorsa dal **Esplora soluzioni**.

## <a name="to-open-a-manifest-resource-in-the-text-editor"></a>Per aprire una risorsa di manifesto nell'Editor di testo

1. Con il progetto aperto in **Esplora soluzioni**, espandere il **i file di risorse** cartella.

1. Fare doppio clic sul file .manifest.

   La risorsa di manifesto verrà aperto nel **Editor di testo**.

## <a name="to-open-a-manifest-resource-in-another-editor"></a>Per aprire una risorsa di manifesto in un altro editor

1. Nelle **Esplora soluzioni**, fare doppio clic su file. manifest e scegliere **Apri con...**  dal menu di scelta rapida.

1. Nel **Apri con** finestra di dialogo, specificare l'editor da usare e quindi selezionare **Open**.

## <a name="limitations"></a>Limitazioni

È possibile avere solo una risorsa di manifesto per modulo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)<br/>
[Uso di file di risorse](../windows/working-with-resource-files.md)