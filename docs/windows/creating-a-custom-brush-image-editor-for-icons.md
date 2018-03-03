---
title: Creazione di un pennello personalizzato (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- colors [C++], brush
- brushes, colors
- brushes, creating custom
- images [C++], creating custom brushes
- graphics [C++], custom brushes
- custom brushes
ms.assetid: 750881aa-6f47-4de9-8ca6-a7a12afc6383
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 38f376053635708372c09a37aa0810e4305db60a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-a-custom-brush-image-editor-for-icons"></a>Creazione di un pennello personalizzato (Editor di immagini per le icone)
Un pennello personalizzato è un'area rettangolare di un'immagine che vengono prelevati e utilizzati come uno dei pennelli pronti all'uso dell'editor di immagini. Tutte le operazioni eseguite su una selezione, è possibile eseguire su nonché un pennello personalizzato.  
  
### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine  
  
1.  [Selezionare la parte dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) che si desidera utilizzare come pennello.  
  
2.  Che contiene il **MAIUSC** chiave verso il basso, fare clic su nella selezione e trascinarla sull'immagine.  
  
     \- oppure -  
  
3.  Dal **immagine** menu, scegliere **Usa selezione come pennello**.  
  
     La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Copia della selezione viene lasciati lungo il percorso di trascinamento. Più lenta si trascina, vengono eseguite le altre copie.  
  
     **Nota** facendo clic su di **Usa selezione come pennello** senza prima selezionato una parte dell'immagine verrà utilizzata l'intera immagine come un pennello. Il risultato dell'utilizzo di un pennello personalizzato dipenderà anche se è selezionato un [sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 In un pennello personalizzato i pixel corrispondenti al colore di sfondo corrente sono in genere trasparenti: non coprire l'immagine esistente. È possibile modificare questo comportamento in modo che il pixel di colore di sfondo disegnata l'immagine esistente.  
  
 È possibile utilizzare il pennello personalizzato come un indicatore o uno stencil per creare una vasta gamma di effetti speciali.  
  
#### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per disegnare forme di pennelli personalizzati nel colore di sfondo  
  
1.  [Selezionare uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
2.  [Impostare il colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) il colore in cui si desidera creare.  
  
3.  Posizionare il pennello personalizzato in cui si desidera creare.  
  
4.  Scegliere il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate nel colore di sfondo.  
  
#### <a name="to-double-or-halve-the-custom-brush-size"></a>Per raddoppiare o dimezzare le dimensioni del pennello personalizzato  
  
1.  Premere il **segno** (**+**) chiave raddoppiare le dimensioni del pennello, o **segno** (**-**) chiave a dimezzare il .  
  
#### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato  
  
1.  Premere **ESC** o scegliere un altro strumento di disegno.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

