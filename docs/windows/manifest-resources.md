---
title: Risorse di manifesto | Documenti Microsoft
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
ms.openlocfilehash: d8df7bf266bae25bd6b898012a6bad10a3d10f81
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882914"
---
# <a name="manifest-resources"></a>Risorse di manifesto
Le risorse di manifesto sono file XML che descrivono le dipendenze usate da un'applicazione. Ad esempio, in Visual Studio il file manifesto generato dalla procedura guidata MFC definisce quali DLL di controlli comuni di Windows devono essere usate dall'applicazione, versione 5.0 o 6.0:  
  
```  
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
  
 Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto non soltanto specifica che l'applicazione usa la versione più recente dei controlli comuni di Windows (versione 6.0, come nell'esempio precedente), ma supporta anche il nuovo [controllo Syslink](http://msdn.microsoft.com/library/windows/desktop/bb760706).  
  
 Per visualizzare le informazioni sulla versione e sul tipo contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o nell' [Editor di testo](http://msdn.microsoft.com/en-us/508e1f18-99d5-48ad-b5ad-d011b21c6ab1)di Visual Studio. Per altre informazioni, vedere [Apertura di una risorsa di manifesto nell'Editor di testo di Visual Studio](../windows/how-to-open-a-manifest-resource.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere  [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## <a name="limitations"></a>Limitazioni  
 È possibile avere solo una risorsa di manifesto per modulo.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)   
 [Uso di file di risorse](../windows/working-with-resource-files.md)