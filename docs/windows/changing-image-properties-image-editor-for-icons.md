---
title: "Modifica le proprietà dell'immagine (Editor di immagini per le icone) | Documenti Microsoft"
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
- images [C++], properties
- Image editor [C++], Properties window
- Image editor [C++], image properties
- Properties window, image editor
ms.assetid: f6172bf1-08c4-4dfd-b542-dd8749e83fe6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 96122b2bdc6419b41cd0e00cb544955d8d7c8463
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-image-properties-image-editor-for-icons"></a>Modifica delle proprietà di immagini (Editor di immagini per le icone)
È possibile impostare o modificare le proprietà di un'immagine utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
### <a name="to-change-an-images-properties"></a>Per modificare le proprietà di un'immagine  
  
1.  Aprire l'immagine di **immagine** editor.  
  
2.  Nel **proprietà** finestra, modificare o le proprietà per l'immagine.  
  
    |Proprietà|Descrizione|  
    |--------------|-----------------|  
    |**Colori**|Specifica la combinazione di colori per l'immagine. Seleziona colore a monocromatico, 16, o 256 o True. Se è già stata disegnata l'immagine con una tavolozza a 16 colori, selezionando monocromatica, le sostituzioni di nero e bianco per i colori dell'immagine. Non viene mantenuto sempre contrasto: ad esempio, le aree adiacenti del rosso e verde sono entrambi convertite in nero.|  
    |**Nome file**|Specifica il nome del file di immagine. Per impostazione predefinita, Visual Studio assegna un nome di base creato rimuovendo i primi quattro caratteri ("IDB _") di identificatore di risorsa predefinito (IDB_BITMAP1) e aggiungere l'estensione appropriata. Il nome del file per l'immagine in questo esempio sarebbe BITMAP1. È stato possibile rinominare la cartella MIABITMAP1.|  
    |**Altezza**|Imposta l'altezza dell'immagine (in pixel). Il valore predefinito è 48. L'immagine viene ritagliata o viene aggiunto uno spazio vuoto sotto l'immagine esistente.|  
    |**ID**|Imposta l'identificatore della risorsa. Per un'immagine, Microsoft Visual Studio, per impostazione predefinita, viene assegnato il successivo identificatore disponibile in una serie: IDB_BITMAP1, IDB_BITMAP2 e così via. Per le icone e cursori, vengono utilizzati nomi simili.|  
    |**Tavolozza**|Proprietà dei colori delle modifiche. Fare doppio clic per selezionare un colore e visualizzare il [la finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriato.|  
    |**SaveCompressed**|Indica se l'immagine è in un formato compresso. Questa proprietà è di sola lettura. Visual Studio non consente di salvare le immagini in un formato compresso, in modo per tutte le immagini create in Visual Studio, questa proprietà sarà **False**. Se si apre un'immagine compressa (creata in un altro programma) in Visual Studio, questa proprietà sarà **True**. Se si salva un'immagine compressa utilizzando Visual Studio, sarà non compressa e questa proprietà verrà ripristinata **False**.|  
    |**Larghezza**|Imposta la larghezza dell'immagine (in pixel). Il valore predefinito per le bitmap è 48. L'immagine viene ritagliata o viene aggiunto uno spazio vuoto a destra dell'immagine esistente.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

