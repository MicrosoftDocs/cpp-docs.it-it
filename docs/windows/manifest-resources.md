---
title: Risorse del manifesto (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- manifest resources [C++]
- resources [C++], manifest
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
ms.openlocfilehash: 081fd12a86c31973c7856ca7b9f3fcb129e2eb81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50578282"
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

Per visualizzare la versione e digitare le informazioni contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o nell'editor di testo di Visual Studio. Per altre informazioni, vedere [Apertura di una risorsa di manifesto nell'Editor di testo di Visual Studio](../windows/how-to-open-a-manifest-resource.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="limitations"></a>Limitazioni

È possibile avere solo una risorsa di manifesto per modulo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)<br/>
[Uso di file di risorse](../windows/working-with-resource-files.md)