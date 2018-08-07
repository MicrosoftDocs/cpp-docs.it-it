---
title: Spostamento di una stringa da un File di risorse a un altro | Microsoft Docs
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
ms.openlocfilehash: 194a37bf631ab3226ad88208acfcf86a7a7a2926
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603264"
---
# <a name="moving-a-string-from-one-resource-file-to-another"></a>Spostamento di una stringa da un file di risorse a un altro
### <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa dal file di script una sola risorsa a un altro  
  
1.  Aprire le tabelle di stringhe in entrambi i file RC. (Per altre informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).)  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare doppio clic la stringa di cui si desidera spostare e scegliere **Taglia** dal menu di scelta rapida.  
  
3.  Posizionare il cursore nel database di destinazione **Editor stringhe** finestra.  
  
4.  Nel file RC a cui si desidera spostare la stringa, pulsante destro del mouse e scegliere **Incolla** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il **ID** o **valore** conflitti stringa spostato con un oggetto esistente **ID** oppure **valore** nel file di destinazione, entrambi i **ID** o il **valore** delle modifiche stringa spostata. Se esiste una stringa con lo stesso **ID**, il **ID** delle modifiche stringa spostata. Se esiste una stringa con lo stesso **valore**, il **valore** delle modifiche stringa spostata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/9a96220d-a19b-4de0-9f48-01e5d82679e5) e[Procedura dettagliata: utilizzo delle risorse per la localizzazione con ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## <a name="requirements"></a>Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor stringhe](../windows/string-editor.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Personalizzazione del layout delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio)   