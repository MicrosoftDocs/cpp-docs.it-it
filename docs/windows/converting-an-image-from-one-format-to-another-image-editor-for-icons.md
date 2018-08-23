---
title: Conversione di un'immagine da un formato a un altro (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- images [C++], stand-alone editing
- Image editor [C++], converting image formats
- graphics [C++], converting formats
- images [C++], converting formats
ms.assetid: 0409c2bd-3bd8-4d72-9c71-c683b6cf51be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6ef3a2ce99309781ecbfd0c406fe8e0f6f7e0613
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592118"
---
# <a name="converting-an-image-from-one-format-to-another-image-editor-for-icons"></a>Conversione di un'immagine in un diverso formato (Editor di immagini per le icone)

È possibile aprire immagini GIF o JPEG nella **immagine** editor e salvarli come bitmap. Inoltre, è possibile aprire un file bitmap e salvarlo come un file GIF o JPEG. Le immagini utilizzate non devono escludersi a parte di un progetto per la modifica nell'ambiente di sviluppo (vedere [modifica delle immagini autonome](../windows/editing-an-image-outside-of-a-project-image-editor-for-icons.md)).

### <a name="to-convert-an-image-from-one-format-to-another"></a>Per convertire un'immagine da un formato a altro

1. Aprire l'immagine nel **immagine** editor.

2. Dal **File** menu, scegliere **salvare *nomefile* come**.

3. Nel **Salva File con nome** nella finestra di dialogo il **nome File** , digitare il nome del file e l'estensione che indica il formato desiderato.

4. Fare clic su **Salva**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)