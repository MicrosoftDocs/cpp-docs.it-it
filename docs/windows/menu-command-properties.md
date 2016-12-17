---
title: "Menu Command Properties | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "menu items, properties"
ms.assetid: 6d308205-3c9e-42f2-ab42-45e656940e45
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Menu Command Properties
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le informazioni qui di seguito sono organizzate in base alle proprietà dei menu visualizzate nella [finestra Proprietà](../Topic/Properties%20Window.md) quando si seleziona un comando di menu. Le proprietà vengono elencate in ordine alfabetico, ma nella finestra Proprietà è possibile visualizzarle anche per categoria.  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|**Break**|Può essere uno dei seguenti valori:<br /><br /> -   **None** \(valore predefinito\): nessuna interruzione.<br />-   **Column**: per menu statici, questo valore posiziona il comando di menu su una nuova riga. Nei menu a comparsa questo valore consente di posizionare il comando di menu in una nuova colonna, senza linee di separazione tra le colonne. L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.<br />-   **Bar**: è uguale a Column, ad eccezione del fatto che nei menu a comparsa la nuova colonna viene separata dalla precedente mediante una linea verticale. L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.|  
|**Caption**|Il testo che costituisce l'etichetta del comando di menu ovvero il nome del menu. Per impostare come tasto di scelta una lettera della didascalia di un comando di menu, anteporre alla lettera desiderata una e commerciale \(&\).|  
|**Checked**|Se il valore impostato è True, il comando di menu inizialmente è selezionato. Tipo: Bool. Impostazione predefinita: False.|  
|**Enabled**|Se il valore impostato è **False**, la voce di menu è disabilitata.|  
|**Grayed**|Se il valore impostato è True, il comando di menu inizialmente appare in grigio ed è inattivo. Tipo: Bool. Impostazione predefinita: False.|  
|**?**|Allinea a destra la voce di menu. In tutte le applicazioni Windows, ad esempio, il comando di menu **?** è sempre posizionato a destra. Impostando questa proprietà su una voce di menu, tale voce verrà visualizzata all'estremità destra del menu. Si applica alle voci di primo livello. Impostazione predefinita: **False**.|  
|**ID**|Un simbolo definito nel file di intestazione. Tipo: simbolo, numero intero o stringa tra virgolette. È possibile usare qualsiasi simbolo normalmente disponibile negli editor. La [finestra Proprietà](../Topic/Properties%20Window.md) non fornisce un elenco a discesa da cui effettuare una selezione.|  
|**Popup**|Se il valore impostato è True, il comando di menu corrisponde a un menu a comparsa. Tipo: Bool. Impostazione predefinita: True per i menu di primo livello su una barra dei menu, False in caso contrario.|  
|**Prompt**|Contiene il testo da visualizzare nella barra di stato quando il comando di menu viene evidenziato. Il testo viene inserito nella tabella di stringhe con lo stesso identificatore usato per il comando di menu. Questa proprietà è disponibile per qualsiasi tipo di progetto, ma la funzionalità in fase di esecuzione è specifica dei progetti MFC.|  
|**Right to Left Justify**|Allinea a destra il comando di menu sulla barra dei menu in fase di esecuzione. Tipo: Bool. Impostazione predefinita: False.|  
|**Right to Left Order**|Consente la visualizzazione dei comandi di menu da destra a sinistra nei casi in cui l'interfaccia è localizzata in una lingua che prevede la lettura da destra a sinistra, quale l'ebraico o l'arabo.|  
|**Separator**|Se il valore impostato è True, il comando di menu è un separatore. Tipo: Bool. Impostazione predefinita: False.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Menu Editor](../mfc/menu-editor.md)