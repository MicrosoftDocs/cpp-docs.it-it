---
title: Spostamento di una stringa da un File di risorse a un'altra | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], moving between files
- resource script files, moving strings
- string editing, moving strings between resources
- String editor, moving strings between files
ms.assetid: 94f8ee81-9b4c-4788-ba95-68c58db38029
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1481f04b88d6ab63486885d93b971c3023d3e0d2
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="moving-a-string-from-one-resource-file-to-another"></a>Spostamento di una stringa da un file di risorse a un altro
### <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa dal file di script di una risorsa a un altro  
  
1.  Aprire le tabelle di stringhe in entrambi i file RC. (Per ulteriori informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).)  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic sulla stringa di cui si desidera spostare e scegliere **Taglia** dal menu di scelta rapida.  
  
3.  Posizionare il cursore nella destinazione **Editor stringa** finestra.  
  
4.  Nel file RC a cui si desidera spostare la stringa, mouse e scegliere **Incolla** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il **ID** o **valore** conflitti stringa spostata a un'esistente **ID** o **valore** nel file di destinazione, entrambi i **ID** o **valore** della stringa spostata. Se esiste una stringa con lo stesso **ID**, **ID** della stringa spostata. Se esiste una stringa con lo stesso **valore**, **valore** della stringa spostata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* . Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor stringhe](../windows/string-editor.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Personalizzazione del layout delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio)   

