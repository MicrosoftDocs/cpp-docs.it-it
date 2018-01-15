---
title: Ricerca di una stringa | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.string
dev_langs: C++
helpviewer_keywords:
- strings [C++], searching
- strings [C++]
ms.assetid: c2497173-f356-4f77-97d6-f0ac41782510
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a66b5dd34aa21a2a0791ecbc71bfd4abcc90c4fa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="finding-a-string"></a>Ricerca di una stringa
È possibile eseguire la ricerca di una o più stringhe nella tabella di stringhe e utilizzare [espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) con il **Cerca nei file** comando (**modifica** menu) per individuare tutte le istanze di stringhe che corrispondono a un criterio.  
  
### <a name="to-find-a-string-in-the-string-table"></a>Per trovare una stringa nella tabella di stringhe  
  
1.  Aprire la tabella di stringhe facendo doppio clic sull'icona in [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **modifica** menu, fare clic su **Trova e sostituisci**, quindi scegliere **trovare**.  
  
3.  Nel **trova** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare l'identificatore didascalia di testo o della risorsa della stringa di cui si desidera trovare.  
  
4.  Selezionare una qualsiasi del **trovare** opzioni.  
  
5.  Fare clic su **Trova successivo**.  
  
    > [!TIP]
    >  Per utilizzare le espressioni regolari nella ricerca nei file, utilizzare il **Cerca nei file** comando. Digitare un'espressione regolare corrispondente a un modello oppure fare clic sul pulsante a destra del **trova** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **trova** casella. Se si usano espressioni regolari, assicurarsi di **utilizzo: espressioni regolari** casella di controllo è selezionata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* . Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor stringhe](../windows/string-editor.md)   

