---
title: 'Procedura: aprire una risorsa di manifesto (C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- manifest resources [C++]
- resources [C++], opening
ms.assetid: bd6f9c47-2a1e-417d-9d2a-c1ad7d3b9635
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0825e34515a458d49b8353f3053654094d8b9526
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407283"
---
# <a name="how-to-open-a-manifest-resource"></a>Procedura: aprire una risorsa di manifesto

Se si apre una risorsa di manifesto da [Visualizzazione risorse](../windows/resource-view-window.md), la risorsa verrà aperta in formato binario. Per visualizzare il contenuto di una risorsa di manifesto in un formato più leggibile, è necessario aprire la risorsa dal **Esplora soluzioni**.

### <a name="to-open-a-manifest-resource-in-the-text-editor"></a>Per aprire una risorsa di manifesto nell'Editor di testo

1. Con il progetto aperto in **Esplora soluzioni**, espandere il **i file di risorse** cartella.

2. Fare doppio clic sul file .manifest.

   La risorsa di manifesto verrà aperto nel **Editor di testo**.

### <a name="to-open-a-manifest-resource-in-another-editor"></a>Per aprire una risorsa di manifesto in un altro editor

1. Nelle **Esplora soluzioni**, fare doppio clic su file. manifest e scegliere **Apri con...**  dal menu di scelta rapida.

2. Nella finestra di dialogo **Apri con** , specificare l'editor da usare e fare clic su **Apri**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Risorse di manifesto](../windows/manifest-resources.md)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>
[Uso di file di risorse](../windows/working-with-resource-files.md)