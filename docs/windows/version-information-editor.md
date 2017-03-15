---
title: "Version Information Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.version.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Version Information editor, about Version Information editor"
  - "editors, Version Information"
  - "resource editors, Version Information editor"
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Version Information Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le informazioni sulla versione sono costituite dall'identificazione del prodotto e della società, da un numero di versione del prodotto e dalla notifica relativa al copyright e al marchio. L'editor di informazioni sulla versione consente di creare e gestire questi dati, che sono archiviati nella risorsa di informazioni sulla versione. La risorsa di informazioni sulla versione non è necessaria per un'applicazione, ma è uno strumento utile per raccogliere le informazioni che identificano l'applicazione. Le informazioni sulla versione vengono usate anche dalle API di installazione.  
  
 Una risorsa di informazioni sulla versione include un blocco superiore e uno o più blocchi inferiori: un unico blocco di informazioni fisse nella parte superiore e uno o più blocchi di informazioni sulla versione nella parte inferiore, per altre lingue e\/o altri set di caratteri. Il blocco superiore presenta caselle numeriche modificabili ed elenchi a discesa in cui è possibile effettuare una selezione. I blocchi inferiori hanno solo caselle di testo modificabili.  
  
> [!NOTE]
>  Lo standard Windows prevede la presenza di una sola risorsa di versione, denominata VS\_VERSION\_INFO.  
  
 L'editor di informazioni sulla versione consente di:  
  
-   [Modificare una stringa in una risorsa di informazioni sulla versione](../mfc/editing-a-string-in-a-version-information-resource.md)  
  
-   [Aggiungere informazioni sulla versione per un'altra lingua \(nuovo blocco di informazioni sulla versione\)](../mfc/adding-version-information-for-another-language.md)  
  
-   [Eliminare un blocco di informazioni sulla versione](../mfc/deleting-a-version-information-block.md)  
  
-   [Accedere alle informazioni sulla versione dal programma](../mfc/accessing-version-information-from-within-your-program.md)  
  
    > [!NOTE]
    >  Quando si usa l'editor di informazioni sulla versione, in molti casi è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida con comandi specifici della risorsa. Se ad esempio si fa clic mentre il puntatore è posizionato sulla voce di intestazione di un blocco, nel menu di scelta rapida vengono visualizzati i comandi per la creazione e l'eliminazione di un blocco di informazioni sulla versione.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)   
 [Menu e altre risorse](http://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)