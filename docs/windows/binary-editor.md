---
title: Editor binario | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.binary.F1
dev_langs:
- C++
helpviewer_keywords:
- editors, Binary
- resources [Visual Studio], editing
- resource editors, Binary editor
- Binary editor
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6d5deb511069830de5ea7aa542bb010f57be5af9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857857"
---
# <a name="binary-editor"></a>Editor binario
> [!WARNING]
>  L'editor binario non è disponibile nelle edizioni Express.  
  
 L'editor binario consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](/visualstudio/ide/reference/find-command) per cercare le stringhe ASCII o i byte esadecimali. Usare l'editor binario solo quando è necessario visualizzare o apportare modifiche minori alla risorse personalizzate o ai tipi di risorsa non supportati dall'ambiente di Visual Studio.  
  
 Per aprire l'Editor binario, scegliere **File &#124; nuovo &#124; File** dal menu principale, selezionare il file che si desidera modificare, quindi fare clic sulla freccia accanto al **aprire** e scegliere **Aperto con &#124; Editor binario**.  
  
> [!CAUTION]
>  La modifica di risorse come le finestre di dialogo, le immagini o i menu nell'editor binario è rischiosa. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.  
  
> [!TIP]
>  Quando si usa l'editor binario, in molti casi è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida con comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Ad esempio, se si fa clic mentre si punta all'editor binario con i valori esadecimali selezionati, il menu di scelta rapida mostra i comandi **Taglia**, **Copia**e **Incolla** .  
  
 Con l'editor binario è possibile:  
  
-   [Aprire una risorsa per la modifica binaria](../windows/opening-a-resource-for-binary-editing.md)  
  
-   [Modificare i dati binari](../windows/editing-binary-data.md)  
  
-   [Trovare i dati binari](../windows/finding-binary-data.md)  
  
-   [Creare una nuova risorsa personalizzata o di dati](../windows/creating-a-new-custom-or-data-resource.md)  
  
## <a name="managed-resources"></a>Risorse gestite  
 È possibile usare l'editor di immagini e l' [editor binario](../windows/image-editor-for-icons.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 Nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di risorse](../windows/resource-editors.md)

