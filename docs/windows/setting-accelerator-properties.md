---
title: "Impostazione delle propriet&#224; dei tasti di scelta rapida | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "proprietà dei tasti di scelta rapida"
  - "proprietà [C++], tasti di scelta rapida proprietà"
  - "Type (proprietà)"
  - "Key (proprietà)"
  - "Modifier (proprietà)"
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Impostazione delle propriet&#224; dei tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C++ .NET, è possibile impostare le proprietà di tasti di scelta rapida [finestra proprietà](../Topic/Properties%20Window.md) in qualsiasi momento. È anche possibile usare l'editor tasti di scelta rapida per modificare le relative proprietà nella tabella dei tasti di scelta rapida. Le modifiche apportate tramite la finestra Proprietà o l'editor tasti di scelta rapida producono lo stesso risultato: le modifiche vengono applicate immediatamente nella tabella dei tasti di scelta rapida.  
  
 Sono disponibili tre proprietà per ogni acceleratore [ID](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/3487f185-de96-4b1d-87db-034a52223160/locales/en-US):  
  
-   Il [proprietà Modifier](../windows/accelerator-modifier-property.md) Imposta controllo combinazioni di tasti per il tasto di scelta rapida.  
  
    > [!NOTE]
    >  Nella finestra Proprietà questa proprietà appare come tre diverse proprietà booleane, che è possibile controllare tutte in modo indipendente: Alt, Ctrl e MAIUSC.  
  
-   Il [proprietà chiave](../windows/accelerator-key-property.md) Imposta il tasto effettivo da utilizzare come tasto di scelta rapida.  
  
-   Il [digitare proprietà](../windows/accelerator-type-property.md) determina se la chiave viene interpretata come virtuale (VIRTKEY) o ASCII/ANSI.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)   
 [Editor risorse](../mfc/resource-editors.md)   
 [Editor tasti di scelta rapida](../mfc/accelerator-editor.md)