---
title: Risorse di manifesto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- manifest resources
- resources [Visual Studio], manifest
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e1520cd301fa46fb4d9521fd6d4180ebd3710f67
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218250"
---
# <a name="manifest-resources"></a>Risorse di manifesto

Le risorse di manifesto sono file XML che descrivono le dipendenze usate da un'applicazione. Ad esempio, in Visual Studio il file manifesto generato dalla procedura guidata MFC definisce quali DLL di controlli comuni di Windows devono essere usate dall'applicazione, versione 5.0 o 6.0:

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

Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto non soltanto specifica che l'applicazione usa la versione più recente dei controlli comuni di Windows (versione 6.0, come nell'esempio precedente), ma supporta anche il [controllo Syslink](/windows/desktop/Controls/syslink-overview).

Per visualizzare la versione e digitare le informazioni contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o in Visual Studio [Editor di testo](https://msdn.microsoft.com/508e1f18-99d5-48ad-b5ad-d011b21c6ab1). Per altre informazioni, vedere [Apertura di una risorsa di manifesto nell'Editor di testo di Visual Studio](../windows/how-to-open-a-manifest-resource.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](https://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).

## <a name="limitations"></a>Limitazioni

È possibile avere solo una risorsa di manifesto per modulo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)  
[Uso di file di risorse](../windows/working-with-resource-files.md)