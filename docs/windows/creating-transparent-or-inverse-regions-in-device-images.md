---
title: Creazione di aree trasparenti o di inversione nelle immagini (Editor di immagini per le icone) per i dispositivi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c8ebecf984254175a15075e8d8a4125f9fc5ec17
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462534"
---
# <a name="creating-transparent-or-inverse-regions-in-device-images-image-editor-for-icons"></a>Creazione di aree trasparenti o di inversione nelle immagini per i dispositivi (Editor di immagini per le icone)
Nel [editor di immagini](../windows/image-editor-for-icons.md), l'immagine icona o cursore iniziale ha un attributo trasparente. Anche se le immagini di icone e cursori sono rettangolari, molti non vengono visualizzati, poiché le parti dell'immagine sono trasparenti; l'immagine nella schermata sottostante mostra tramite l'icona o cursore. Quando si trascina un'icona, le parti dell'immagine possono essere in un colore invertito. Per creare questo effetto, impostare il colore dello schermo e inverso nel [finestra colori](../windows/colors-window-image-editor-for-icons.md).  
  
 I colori dello schermo e inversa si applicano alle icone e cursori su forma e colore dell'immagine derivata o designare inversione di aree. I colori indicano le parti dell'immagine che presenta gli attributi. È possibile modificare i colori che rappresentano gli attributi di colore e inversione di colore nella modifica. Queste modifiche non influiscono sull'aspetto dell'icona o cursore all'interno dell'applicazione.  
  
> [!NOTE]
>  Le finestre di dialogo e i comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella Guida a seconda delle impostazioni attive o dell'edizione del programma. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### <a name="to-create-transparent-or-inverse-regions"></a>Per creare aree trasparenti o di inversione  
  
1.  Nel **colori** finestra, fare clic sui **colore** selettore o la **inversione di colore** selettore.  
  
2.  Applicare la schermata o colore inverso all'immagine utilizzando uno strumento di disegno. Per altre informazioni sugli strumenti di disegno, vedere [usando uno strumento di disegno](using-a-drawing-tool-image-editor-for-icons.md).  
  
### <a name="to-change-the-screen-or-inverse-color"></a>Per modificare il colore dello schermo o di inversione  
  
1.  Selezionare il **: colore della schermata** selettore o il **inversione di colore** selettore.  
  
2.  Scegliere un colore nel **colori** tavolozza il **colori** finestra.  
  
     Colore complementare viene automaticamente designato per il selettore di altri.  
  
    > [!TIP]
    >  Se si fa doppio clic sul selettore di colore dello schermo o di inversione di colore, il [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md) viene visualizzata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)