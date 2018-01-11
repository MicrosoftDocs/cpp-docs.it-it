---
title: 'Procedura: aprire un File di Script di risorsa in formato testo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.resource
dev_langs: C++
helpviewer_keywords:
- resource script files, opening in text format
- .rc files, opening in text format
- rc files, opening in text format
ms.assetid: 0bc57527-f53b-40c9-99a9-4dcbc5c9af57
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 347d33a746adec1208b81fefa54c10472e68b7d6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-open-a-resource-script-file-in-text-format"></a>Procedura: aprire un file di script di risorsa in formato testo
Talvolta può essere utile visualizzare il contenuto del file di script di risorsa (RC) del progetto senza aprire una risorsa, quale una finestra di dialogo, all'interno dell'editor di risorse specifico. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra.  
  
> [!NOTE]
>  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
 È possibile aprire facilmente il file di risorse in formato testo per visualizzare tutte le risorse contenute ed eseguire le operazioni globali supportate per il [editor di testo](http://msdn.microsoft.com/en-us/508e1f18-99d5-48ad-b5ad-d011b21c6ab1).  
  
> [!NOTE]
>  Gli editor di risorse non leggono direttamente i file RC o resource.h. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
### <a name="to-open-a-resource-script-file-as-text"></a>Per aprire un file script di risorsa in formato testo  
  
1.  Dal **File** dal menu **aprire**, quindi fare clic su **File.**  
  
2.  Nel **Apri** finestra di dialogo casella, passare al file di script di risorsa che si desidera visualizzare in formato testo.  
  
3.  Selezionare il file, quindi fare clic sulla freccia a discesa di **aprire** pulsante (che si trova a destra del pulsante).  
  
4.  Scegliere **Apri con** dal menu a discesa.  
  
5.  Nel **Apri con** la finestra di dialogo, fare clic su **Editor di codice sorgente (testo)**.  
  
6.  Dal **Apri come** elenco a discesa, seleziona **testo**.  
  
     La risorsa verrà aperta nell'editor del codice sorgente.  
  
 \- oppure -  
  
1.  In **Esplora**, fare doppio clic sul file RC.  
  
2.  Nel menu di scelta rapida, scegliere **Apri con...** , quindi selezionare **Editor di codice sorgente (testo)**.  
  

  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)