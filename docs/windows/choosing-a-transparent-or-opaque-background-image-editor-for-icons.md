---
title: Selezione di uno sfondo opaco o trasparente (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- opaque backgrounds [C++]
- colors [C++], image
- Image editor [C++], transparent or opague backgrounds
- images [C++], transparency
- images [C++], opaque background
ms.assetid: 61b743d9-c86b-405d-9a81-0806431b4363
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5c0c4c306191af519103c65b39e3bb89afdb47f9
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313481"
---
# <a name="choosing-a-transparent-or-opaque-background-image-editor-for-icons"></a>Selezione di uno sfondo opaco o trasparente (Editor di immagini per le icone)

Quando si sposta o si copia una selezione da un'immagine, sono tutti i pixel nella selezione che corrispondono al colore di sfondo corrente, per impostazione predefinita, trasparente; essi non nasconda pixel nel percorso di destinazione.

È possibile passare da uno sfondo trasparente (predefinito) a uno sfondo opaco e viceversa. Quando si usa uno strumento di selezione, il **sfondo trasparente** e **sfondo opaco** vengono visualizzate le opzioni nel **opzione** selettore sul **Editordiimmagini** sulla barra degli strumenti (come illustrato di seguito).

![Opzioni sfondo &#45; opaco o trasparente](../windows/media/vcimageeditoropaqtranspback.gif "vcImageEditorOpaqTranspBack")  
**Opzioni trasparenti e opache** nella **barra degli strumenti Editor di immagini**

### <a name="to-switch-between-a-transparent-and-opaque-background"></a>Per passare da uno sfondo trasparente e opaco

1. Nel **Editor di immagini** sulla barra degli strumenti, fare clic sui **opzione** selettore e quindi fare clic sull'icona appropriata:

   - `Opaque Background (O)`: Immagine esistente è coperta da tutte le parti della selezione.

   - `Transparent Background (T)`: Nelle parti della selezione che corrispondono al colore di sfondo corrente viene visualizzata l'immagine esistente.

\- oppure -

- Nel **immagine** menu, seleziona o deselezionare **opaco**.

Durante l'esecuzione di una selezione attiva per modificare le parti dell'immagine sono trasparenti, è possibile modificare il colore di sfondo.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)