---
title: Editor tasti di scelta rapida | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.accelerator.F1
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], editing
- tables [Visual Studio], accelerator key
- accelerator keys
- resource editors, Accelerator editor
- keyboard shortcuts [C++], Accelerator editor
- Accelerator editor
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0e5ce1fcd71f6f49532d083c7cb2dcfce9ed644c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="accelerator-editor"></a>Editor tasti di scelta rapida
Una tabella di tasti di scelta rapida è una risorsa di Windows che contiene un elenco di tasti di scelta rapida e gli identificatori di comando associati. Un programma può avere più tabelle di tasti di scelta rapida.  
  
 In genere i tasti di scelta rapida vengono usati per i comandi di programma disponibili anche in un menu o in una barra degli strumenti. Tuttavia, è possibile usare la tabella di tasti di scelta rapida per definire le combinazioni di tasti per i comandi che non hanno un oggetto dell'interfaccia utente associato.  
  
 È possibile usare [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925) per associare i comandi dei tasti di scelta rapida al codice.  
  
 Con l'editor tasti di scelta rapida è possibile:  
  
-   [Impostare le proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)  
  
-   [Associare un tasto di scelta rapida a una voce di menu](../windows/associating-an-accelerator-key-with-a-menu-item.md)  
  
-   [Modificare le tabelle di tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
  
-   [Usare i tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)  
  
    > [!TIP]
    >  Quando si usa l'editor tasti di scelta rapida, è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.  
  
    > [!NOTE]
    >  Windows non consente di creare tabelle di tasti di scelta rapida vuote. Se si crea una tabella di tasti di scelta rapida priva di voci, questa verrà eliminata automaticamente al salvataggio della tabella.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di risorse](../windows/resource-editors.md)

