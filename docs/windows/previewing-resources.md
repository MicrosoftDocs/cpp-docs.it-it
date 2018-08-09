---
title: Anteprima delle risorse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.resvw.resource.previewing
- vs.resvw.resource.previewing
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio], viewing
- resource previews
- code, viewing
ms.assetid: d6abda66-0e2b-4ac3-a59a-a57b8c6fb70b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8393988bf6d831c8b9718d6685785d523303f3fa
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40016405"
---
# <a name="previewing-resources"></a>Anteprima delle risorse
L'anteprima delle risorse consente di visualizzare le risorse grafiche senza aprirle. La visualizzazione in anteprima è utile per gli eseguibili anche dopo aver compilato li perché gli identificatori di risorsa cambia in numeri. Poiché questi identificatori numerici spesso non forniscono informazioni sufficienti, la visualizzazione in anteprima le risorse consente di identificare rapidamente li.  
  
 È possibile visualizzare in anteprima il layout visivo dei seguenti tipi di risorse:  
  
-   Bitmap  
  
-   Finestra di dialogo  
  
-   Icona  
  
-   Menu  
  
-   Cursore  
  
-   ToolBar  
  
 La funzione di anteprima non è applicabile alle risorse tasto di scelta rapida, manifesto, tabella di stringhe e le informazioni sulla versione.  
  
### <a name="to-preview-resources"></a>Per visualizzare in anteprima le risorse  
  
1.  Nelle [visualizzazione di risorse](../windows/resource-view-window.md) o una finestra del documento, selezionare la risorsa, ad esempio **IDD_ABOUTBOX**.  
  
     > [!NOTE]
     > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), fare clic sui **pagine delle proprietà** pulsante.  
  
     \- oppure -  
  
3.  Nel **View** menu, fare clic su **pagine delle proprietà**.  
  
     Il **pagina delle proprietà** per la risorsa viene visualizzata un'anteprima di tale risorsa. È quindi possibile usare la **iscrizione** e **verso il basso** tasti di direzione per esplorare l'albero controllano **visualizzazione risorse** o finestra del documento. Il **pagina delle proprietà** verrà rimangono aperti e visualizzare qualsiasi risorsa che ha lo stato attivo ed è in grado di visualizzare in anteprima.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti 
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aprire un file script di risorsa all'esterno di un progetto (file autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)  
 [Editor di risorse](../windows/resource-editors.md)