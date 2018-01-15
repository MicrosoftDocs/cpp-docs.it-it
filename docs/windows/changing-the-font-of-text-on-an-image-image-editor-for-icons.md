---
title: Modifica del carattere del testo in un'immagine (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: fonts, changing on an image
ms.assetid: b8849d40-d401-4e06-808f-e615cb2bee3b
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 07dc7d7fd74ad9d4b0229ffef7cf4e96a4ea44b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-the-font-of-text-on-an-image-image-editor-for-icons"></a>Modifica del tipo di carattere del testo in un'immagine (Editor di immagini per le icone)
La procedura seguente è riportato un esempio di come:  
  
-   Aggiungere testo a un'icona in un'applicazione Windows  
  
-   Modificare il tipo di carattere del testo  
  
### <a name="to-change-the-font-of-text-on-an-image"></a>Per modificare il tipo di carattere del testo in un'immagine  
  
1.  Creare un'applicazione Windows Forms c#. Per informazioni dettagliate, vedere [creazione di un progetto di applicazione Windows](http://msdn.microsoft.com/en-us/b2f93fed-c635-4705-8d0e-cf079a264efa). Il [modello applicazione Windows Forms](http://msdn.microsoft.com/en-us/1babdebf-ab3f-4a64-a608-98499a5b9cea) aggiunge un file denominato app. ico al progetto per impostazione predefinita.  
  
2.  In Esplora soluzioni fare doppio clic il file app. ico. Il [Editor di immagini](../windows/image-editor-for-icons.md) verrà aperto.  
  
3.  Dal **immagine** dal menu **strumenti** e quindi selezionare **strumento testo**. Il [finestra di dialogo strumento testo](../windows/text-tool-dialog-box-image-editor-for-icons.md) verranno visualizzati.  
  
4.  Nella finestra di dialogo strumento testo digitare `C++` nell'area di testo vuota. Questo testo verrà visualizzato in una finestra ridimensionabile situata nell'angolo superiore sinistro dell'app. ico, nell'Editor di immagini.  
  
5.  Nell'Editor di immagini, trascinare la casella ridimensionabile al centro dell'app. ico, per migliorare la leggibilità del testo.  
  
6.  La finestra di dialogo strumento testo, selezionare il **carattere** pulsante. Il [finestra di dialogo Carattere strumento testo](../windows/text-tool-font-dialog-box-image-editor-for-icons.md) verranno visualizzati.  
  
7.  Nella finestra di dialogo Carattere strumento testo, selezionare **Times New Roman** dall'elenco dei tipi di carattere disponibili sono elencati nel **carattere** casella di riepilogo.  
  
8.  Selezionare **grassetto** dall'elenco di stili di carattere disponibili nel **stile** casella di riepilogo.  
  
9. Selezionare **10** dall'elenco di disponibili elencate dimensioni del punto di **dimensioni** casella di riepilogo.  
  
10. Fare clic su di **OK** pulsante. Verrà chiusa la finestra di dialogo Carattere strumento testo e le nuove impostazioni verranno applicate al testo.  
  
11. Fare clic su di **Chiudi** pulsante nella finestra di dialogo strumento testo. La finestra ridimensionabile intorno al testo scompare dall'Editor di immagini.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Barra degli strumenti](../windows/toolbar-image-editor-for-icons.md)

