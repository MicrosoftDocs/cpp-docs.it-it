---
title: "How to: Open a Resource Script File in Text Format | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.resource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resource script files, opening in text format"
  - ".rc files, opening in text format"
  - "rc files, opening in text format"
ms.assetid: 0bc57527-f53b-40c9-99a9-4dcbc5c9af57
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# How to: Open a Resource Script File in Text Format
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Talvolta può essere utile visualizzare il contenuto del file di script di risorsa \(RC\) del progetto senza aprire una risorsa, quale una finestra di dialogo, all'interno dell'editor di risorse specifico.  È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra.  
  
> [!NOTE]
>  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
 È possibile aprire facilmente il file di risorse in formato testo in modo da visualizzare tutte le risorse contenute ed eseguire le operazioni globali supportate dall'[editor di testo](http://msdn.microsoft.com/it-it/508e1f18-99d5-48ad-b5ad-d011b21c6ab1).  
  
> [!NOTE]
>  Gli editor di risorse non leggono direttamente i file RC o resource.h.  Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse.  Questo file è presente in una fase di compilazione e archivia solo dati simbolici.  Come con un normale processo di compilazione, le informazioni che non sono simboliche \(ad esempio, i commenti\) vengono eliminate durante il processo di compilazione.  Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato \(ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h\).  Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto.  Per altre informazioni su come mantenere i commenti, vedere la pagina relativa alla modalità di [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
### Per aprire un file script di risorsa in formato testo  
  
1.  Scegliere **Apri** dal menu **File** e quindi fare clic su **File**.  
  
2.  Nella finestra di dialogo **Apri file** passare al file script di risorsa che si vuole visualizzare in formato testo.  
  
3.  Evidenziare il file, quindi fare clic sulla freccia a discesa sul pulsante **Apri** \(posta a destra del pulsante\).  
  
4.  Scegliere **Apri con** dal menu a discesa.  
  
5.  Nella finestra di dialogo **Apri con** fare clic su **Editor di codice sorgente \(testo\)**.  
  
6.  Selezionare **Testo** dalla elenco a discesa **Apri come**.  
  
     La risorsa verrà aperta nell'editor del codice sorgente.  
  
 \-oppure\-  
  
1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul file RC.  
  
2.  Scegliere **Apri con** dal menu di scelta rapida e quindi **Editor di codice sorgente \(testo\)**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)