---
title: Creazione di aree trasparenti o di inversione nelle immagini per i dispositivi (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- cursors [C++], screen regions
- inverse colors, device images
- transparent regions, device images
- transparency, device images
- Image editor [C++], device images
- inverse regions, device images
- cursors [C++], transparent regions
- screen colors
- regions, transparent
- icons [C++], transparent regions
- display devices, transparent and screen regions
- transparent regions in devices
- regions, inverse
- colors [C++], Image editor
- device projects, transparent images
- icons [C++], screen regions
ms.assetid: a994954b-b039-4391-a535-58d1fa10fc3b
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a1e59f05c011f1a65937c63f43bd8dfd6f506fe9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="creating-transparent-or-inverse-regions-in-device-images-image-editor-for-icons"></a>Creazione di aree trasparenti o di inversione nelle immagini per i dispositivi (Editor di immagini per le icone)
Nel [editor di immagini](../windows/image-editor-for-icons.md), l'immagine icona o cursore iniziale è un attributo trasparente. Anche se le immagini icona e cursore sono rettangolari, molti non vengono visualizzati, poiché le parti dell'immagine sono trasparenti; la figura sottostante nella schermata mostra tramite l'icona o cursore. Quando si trascina un'icona, parti dell'immagine vengano visualizzati in un colore inverso. Per creare questo effetto, impostare il colore dello schermo e inversa nel [finestra colori](../windows/colors-window-image-editor-for-icons.md).  
  
 I colori dello schermo e l'inversione di cui si applicano alle icone e cursori forma e colore dell'immagine derivata oppure definiscono aree di inversione. I colori indicano le parti dell'immagine dotate di tali attributi. È possibile modificare i colori che rappresentano gli attributi di colore dello schermo e inversione di colore in modalità di modifica. Queste modifiche non influiscono sull'aspetto dell'icona o cursore nell'applicazione.  
  
> [!NOTE]
>  Le finestre di dialogo e i comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella Guida a seconda delle impostazioni attive o dell'edizione del programma. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### <a name="to-create-transparent-or-inverse-regions"></a>Per creare aree trasparenti o di inversione  
  
1.  Nel **colori** finestra, fare clic su di **colore** selettore o **inversione di colore** selettore.  
  
2.  Applicare la schermata o il colore di inversione all'immagine utilizzando uno strumento di disegno. Per ulteriori informazioni sugli strumenti di disegno, vedere [utilizzando uno strumento di disegno](using-a-drawing-tool-image-editor-for-icons.md).  
  
### <a name="to-change-the-screen-or-inverse-color"></a>Per modificare il colore dello schermo o di inversione  
  
1.  Selezionare il **colore** selettore o **inversione di colore** selettore.  
  
2.  Scegliere un colore nel **colori** tavolozza di **colori** finestra.  
  
     Colore complementare viene automaticamente designato per il selettore di altri.  
  
    > [!TIP]
    >  Se si fa doppio clic sul selettore di colore dello schermo o di inversione di colore, la [la finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md) viene visualizzato.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](https://msdn.microsoft.com/library/f45fce5x.aspx) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](https://msdn.microsoft.com/library/xbx3z216.aspx). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requisiti  
  
 Nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)

