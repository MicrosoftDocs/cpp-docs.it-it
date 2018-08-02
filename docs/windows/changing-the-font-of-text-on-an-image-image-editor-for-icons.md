---
title: Modifica il tipo di carattere del testo in un'immagine (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- fonts, changing on an image
ms.assetid: b8849d40-d401-4e06-808f-e615cb2bee3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 16d01d634b44b4e6da425c40e011106021638305
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461738"
---
# <a name="changing-the-font-of-text-on-an-image-image-editor-for-icons"></a>Modifica del tipo di carattere del testo in un'immagine (Editor di immagini per le icone)
La procedura seguente è riportato un esempio di come:  
  
-   Aggiungere testo a un'icona in un'applicazione Windows  
  
-   Modificare il tipo di carattere del testo  
  
### <a name="to-change-the-font-of-text-on-an-image"></a>Per modificare il tipo di carattere del testo in un'immagine  
  
1.  Creare un'applicazione di moduli di Windows C++. Per informazioni dettagliate, vedere [creazione di un progetto di applicazione Windows](http://msdn.microsoft.com/b2f93fed-c635-4705-8d0e-cf079a264efa). Il [modello di applicazione Windows Forms](http://msdn.microsoft.com/1babdebf-ab3f-4a64-a608-98499a5b9cea) aggiunge un file denominato app. ico al progetto per impostazione predefinita.  
  
2.  In Esplora soluzioni fare doppio clic il file app. ico. Il [Editor di immagini](../windows/image-editor-for-icons.md) verrà aperto.  
  
3.  Dal **immagine** dal menu **Tools** e quindi selezionare **strumento testo**. Il [finestra di dialogo strumento testo](../windows/text-tool-dialog-box-image-editor-for-icons.md) verranno visualizzati.  
  
4.  Nel **dello strumento di testo** della finestra di dialogo tipo `C++` nell'area di testo vuoto. Questo testo verrà visualizzato in una finestra ridimensionabile situata nell'angolo superiore sinistro dell'app. ico, nelle **Editor di immagini**.  
  
5.  Nel **Editor di immagini**, trascinare la finestra ridimensionabile al centro dell'app. ico, per migliorare la leggibilità del testo.  
  
6.  Nel **dello strumento di testo** della finestra di dialogo fare clic sul **Font** pulsante. Il [finestra di dialogo Carattere strumento testo](../windows/text-tool-font-dialog-box-image-editor-for-icons.md) verranno visualizzati.  
  
7.  Nel **carattere strumento testo** finestra di dialogo **Times New Roman** dall'elenco dei tipi di carattere disponibili elencate nel **Font** casella di riepilogo.  
  
8.  Selezionare **Bold** dall'elenco di stili di carattere disponibili elencate nel **lo stile del carattere** casella di riepilogo.  
  
9. Selezionare **10** dall'elenco di disponibilità punto di dimensioni elencate nel **dimensioni** casella di riepilogo.  
  
10. Scegliere il **OK** pulsante. Il **carattere strumento testo** nella finestra di dialogo verrà chiusa e le nuove impostazioni del tipo di carattere verranno applicate al testo.  
  
11. Fare clic sul **Close** pulsante il **strumento testo** nella finestra di dialogo. La finestra ridimensionabile intorno al testo scompare dall'Editor di immagini.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Toolbar](../windows/toolbar-image-editor-for-icons.md)