---
title: "Binary Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.binary.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "editors, Binary"
  - "resources [Visual Studio], editing"
  - "resource editors, Binary editor"
  - "Binary editor"
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Binary Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!WARNING]
>  L'editor binario non è disponibile nelle edizioni Express.  
  
 L'editor binario consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](../Topic/Find%20Command.md) per cercare le stringhe ASCII o i byte esadecimali. Usare l'editor binario solo quando è necessario visualizzare o apportare modifiche minori alla risorse personalizzate o ai tipi di risorsa non supportati dall'ambiente di Visual Studio.  
  
 Per aprire l'editor binario, scegliere **File &#124; Nuovo &#124; File** nel menu principale, selezionare il file da modificare, quindi fare clic sulla freccia accanto al pulsante **Apri** e scegliere **Apri con &#124; Editor binario**.  
  
> [!CAUTION]
>  La modifica di risorse come le finestre di dialogo, le immagini o i menu nell'editor binario è rischiosa. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.  
  
> [!TIP]
>  Quando si usa l'editor binario, in molti casi è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida con comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Ad esempio, se si fa clic mentre si punta all'editor binario con i valori esadecimali selezionati, il menu di scelta rapida mostra i comandi **Taglia**, **Copia** e **Incolla**.  
  
 Con l'editor binario è possibile:  
  
-   [Aprire una risorsa per la modifica binaria](../mfc/opening-a-resource-for-binary-editing.md)  
  
-   [Modificare i dati binari](../mfc/editing-binary-data.md)  
  
-   [Trovare i dati binari](../mfc/finding-binary-data.md)  
  
-   [Creare una nuova risorsa personalizzata o di dati](../mfc/creating-a-new-custom-or-data-resource.md)  
  
## Risorse gestite  
 È possibile usare l'editor di immagini e l'[editor binario](../mfc/image-editor-for-icons.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Nessuno  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)