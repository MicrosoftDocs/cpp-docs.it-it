---
title: "Finestra di dialogo Aggiungi risorsa | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.insertresource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "risorse [Visual Studio], aggiunta"
  - "Aggiungi risorsa (finestra di dialogo)"
ms.assetid: e9fb6967-738f-47e8-ab58-728cf35b3af0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Finestra di dialogo Aggiungi risorsa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Usare questa finestra di dialogo per aggiungere risorse a un progetto di applicazione desktop di Windows in C\+\+.  
  
> [!NOTE]
>  Queste informazioni non si applicano alle risorse in app di Windows Store. Per altre informazioni su questo argomento, vedere [Definizione delle risorse dell'app](http://msdn.microsoft.com/it-it/476ea844-632c-4467-9ce3-966be1350dd4).  
  
 **Tipo risorsa**  
 Specifica il tipo di risorsa che si vuole creare.  
  
 È possibile espandere le categorie di risorse della finestra di dialogo e del cursore per visualizzare risorse aggiuntive. Queste risorse si trovano nel percorso ...\\Microsoft Visual Studio `versione`\\VC\\VCResourceTemplates\\\<LCID\>\\mfc.rct. Se si aggiungono file con estensione rct, è necessario che tali file vengano collocati in questa directory oppure è necessario specificare un [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Le risorse contenute in tali file verranno quindi visualizzate in corrispondenza del secondo livello nella categoria appropriata. Non esiste un limite predefinito per il numero di file con estensione rct che è possibile aggiungere.  
  
 Le risorse visualizzate al primo livello del controllo di struttura ad albero sono le risorse predefinite fornite da Visual Studio.  
  
 **Nuovo**  
 Crea una risorsa in base al tipo selezionato nella casella **Tipo di risorsa**. La risorsa viene visualizzata nell'editor appropriato. Se ad esempio si crea una risorsa di tipo finestra di dialogo, quest'ultima viene aperta nell'[editor finestre](../mfc/dialog-editor.md).  
  
 **Import**  
 Apre la finestra di dialogo **Importa**, in cui è possibile individuare una risorsa che si desidera importare nel progetto corrente. È possibile importare una bitmap, un'icona, un cursore, un file sorgente HTML, un file audio \(WAV\) o un file di risorse personalizzato.  
  
 **Personalizzato**  
 Apre la [finestra di dialogo Nuova risorsa personalizzata](../windows/new-custom-resource-dialog-box.md), in cui è possibile creare una risorsa personalizzata. Le risorse personalizzate possono essere modificate solo nell'editor binario.  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)