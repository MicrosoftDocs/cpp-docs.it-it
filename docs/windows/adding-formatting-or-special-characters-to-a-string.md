---
title: Aggiunta in una stringa di caratteri speciali o di formattazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- special characters, adding to strings
- ASCII characters, adding to strings
- strings [C++], formatting
- strings [C++], special characters
ms.assetid: c40f394a-8b2c-4896-ab30-6922863ddbb5
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ca91ef9742f2dfb10a0af12c74ca58f80035d131
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-formatting-or-special-characters-to-a-string"></a>Aggiunta di formattazione o di caratteri speciali a una stringa
### <a name="to-add-formatting-or-special-characters-to-a-string"></a>Per aggiungere una stringa di caratteri speciali o di formattazione  
  
1.  Aprire la tabella di stringhe facendo doppio clic sull'icona in [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Selezionare la stringa di cui che si desidera modificare.  
  
3.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), aggiungere una delle sequenze di escape standard elencati di seguito per il testo di **didascalia** , quindi premere **invio**.  
  
    |Per questo tipo|Digitare quanto segue|  
    |-----------------|---------------|  
    |Nuova riga|\n|  
    |Ritorno a capo|\r|  
    |Scheda|\t|  
    |Barra rovesciata (\\)|\\\|  
    |Carattere ASCII|\ddd (notazione ottale)|  
    |Avviso (campana)|\a|  
  
> [!NOTE]
>  L'editor di stringa non supporta il set completo di ASCII di caratteri di escape. È possibile utilizzare solo quelli elencati sopra.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* . Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor stringhe](../windows/string-editor.md)   

